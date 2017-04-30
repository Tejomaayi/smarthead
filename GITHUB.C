#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void choice();
void strings1();
void strings2();
void num_check1();
void num_check2();
void arrays1();
void arrays2();
void sort1();
void sort2();
void num_choice();
void array_choice();
void string_choice();
void sort_choice();

void choice() {
    printf("\n1.CHECK TYPE OF NUMBERS \n 2.ARRAYS \n 3.STRINGS \n 4.SORT\n");
    printf("ENTER YOUR CHOICE :");
}

void num_choice() {
   int ch;
   int c;
   printf("\n 1.PRIME NUMBER \n 2.BUZZ NUMBER \n 3.EXIT \n");
   printf("ENTER YOUR CHOICE :");
   scanf("%d",&ch);

   if (ch != 1 && ch != 2 && ch != 3) {
      printf("RE-ENTER YOUR CHOICE.\n");
      num_choice();
   }
 switch (ch) {
    case 1 : num_check1();
     printf("\n PRESS 1 TO CONTINUE AND ANY OTHER NUM KEY TO EXIT\n");
     scanf("%d",&c);
     if (c == 1)
      num_choice();
     else
       exit(0);
      break;
    case 2 : num_check2();
     printf("\n PRESS 1 TO CONTINUE AND ANY OTHER NUM KEY TO EXIT\n");
     scanf("%d",&c);
     if (c == 1)
      num_choice();
     else
     exit(0);
     break;
    }
}
void array_choice() {
   int ch;
   int c;
   printf("\n 1.ASCENDING ORDER IN AN ARRAY \n 2.PRINT ALTERNATE ELEMENTS \n 3.EXIT \n");
   printf("ENTER YOUR CHOICE :");
   scanf("%d",&ch);

   if (ch != 1 && ch != 2 && ch != 3) {
      printf("RE-ENTER YOUR CHOICE.\n");
      array_choice();
   }
 switch (ch) {
    case 1 : arrays1();
     printf("\nPRESS 1 TO CONTINUE AND ANY OTHER NUM KEY TO EXIT\n");
     scanf("%d",&c);
     if (c == 1)
      array_choice();
     else
       exit(0);
      break;
    case 2 : arrays2();
     printf("\nPRESS 1 TO CONTINUE AND ANY OTHER NUM KEY TO EXIT\n");
     scanf("%d",&c);
     if (c == 1)
      array_choice();
     else
     exit(0);
     break;
    }
}
void string_choice() {
   int ch;
   int c;
   printf("\n 1.CONCATINATING TWO STRINGS \n 2.CHANGING CASES \n 3.EXIT \n");
   printf("ENTER YOUR CHOICE :");
   scanf("%d",&ch);

   if (ch != 1 && ch != 2 && ch != 3) {
      printf("RE-ENTER YOUR CHOICE.\n");
      string_choice();
   }
 switch (ch) {
    case 1 : strings1();
     printf("\n PRESS 1 TO CONTINUE AND ANY OTHER NUM KEY TO EXIT\n");
     scanf("%d",&c);
     if (c == 1)
      string_choice();
     else
       exit(0);
      break;
    case 2 : strings2();
     printf("PRESS 1 TO CONTINUE AND ANY OTHER NUM KEY TO EXIT");
     scanf("%d",&c);
     if (c == 1)
      string_choice();
     else
     exit(0);
     break;
    }
}
void sort_choice() {
   int ch;
   int c;
   printf("\n 1.BUBBLE SORT \n 2.BALLOON SORT \n 3.EXIT \n");
   printf("ENTER YOUR CHOICE :");
   scanf("%d",&ch);

   if (ch != 1 && ch != 2 && ch != 3) {
      printf("RE-ENTER YOUR CHOICE.\n");
      sort_choice();
   }
 switch (ch) {
    case 1 : sort1();
     printf("\nPRESS 1 TO CONTINUE AND ANY OTHER NUM KEY TO EXIT\n");
     scanf("%d",&c);
     if (c == 1)
      sort_choice();
     else
       exit(0);
      break;
    case 2 : sort2();
     printf("\nPRESS 1 TO CONTINUE AND ANY OTHER NUM KEY TO EXIT\n");
     scanf("%d",&c);
     if (c == 1)
      sort_choice();
     else
     exit(0);
     break;
    }
}

void strings1() {
  char a[1000];
  char b[1000];
  char c[1000];

    printf("ENTER STRING 1 :");
    gets(a);

    printf("ENTER STRING 2 :");
    gets(b);

    strcpy(c,a);
    strcat(c,b);

    printf("CONCATINATED STRING : %s\n",c);
}

void strings2() {
   int c = 0;
   char ch;
   char str[1000];

      printf("ENTER A STRING :");
      gets(str);

	while (str[c] != '\0') {
	  ch = str[c];
	  if (ch >= 'A' && ch <= 'Z')
	    str[c] = str[c] + 32;
	  else if (ch >= 'a' && ch <= 'z')
	    str[c] = str[c] - 32;
	    c++;
       }
       printf("AFTER CHANGING CASES : %s\n",str);
}

void num_check1() {
    int n;
    int c = 2;

    printf("ENTER A NUMBER:");
    scanf("%d",&n);

    for(c = 2; c <= n - 1; c++) {
       if (n % c == 0) {
	  printf("%d IS Not PRIME.\n",n);
	  break;
       }
     }
   if (c == n)
     printf("%d IS PRIME.\n",n);
}

void num_check2() {
    int n;

    printf("ENTER N VALUE:");
    scanf("%d",&n);

     if (n % 10 == 7 || n % 7 == 0)
       printf("THE NUMBER IS BUZZ.\n");
     else
       printf("THE NUMBER IS NOT A BUZZ.\n");
}

void arrays1() {
    int i;
    int j;
    int a;
    int n;
    int num[500];

      printf("ENTER N VALUES :");
      scanf("%d",&n);

      printf("ENTER NUMBERS :");
      for (i = 0; i < n; ++i) {
	scanf("%d",&num[i]);
    }

    for (i = 0; i < n; ++i) {
	for (j = i + 1; j < n; ++j) {
	  if (num[i] > num[j]) {
	    a = num[i];
	    num[i] = num[j];
	    num[j] = a;
	 }
       }
     }
     printf("THE NUMBERS ARRANGED IN ASCENDING ORDER:\n");

   for (i = 0; i < n; ++i) {
     printf("%5d",num[i]);
   }
}

void arrays2() {
   int i;
   int j;
   int temp;
   int arr[10];

   printf("ENTER ELEMENTS OF AN ARRAY:");
   for (i = 0; i < 10; i++) {
     scanf("%d",&arr[i]);
    }

   printf("ALTERNATE ELEMENTS OF GIVEN ARRAY\n");
   for (i = 0; i < 10; i += 2) {
       printf("%4d",arr[i]);
   }
}

void sort1() {
    int i;
    int j;
    int n;
    int temp;
    int a[50];

    printf("HOW MANY NUMBERS ARE YOU GONNA SORT :");
    scanf("%d",&n);

    printf("ENTER NUMBERS TO BE SORTED :");
    for (i = 0; i < n; i++) {
      scanf("%d",&a[i]);
     }

     printf("NUMBERS TO BE SORTED:");
     for (i = 0; i < n; i++) {
       printf("%d",&a[i]);
     }

     for (i = 0; i < n; i++) {
	for (j = 0; j < n - 1; j++) {
	   if (a[j] > a[j + 1]) {
	       temp = a[j];
	       a[j] = a[j + 1];
	       a[j + 1] = temp;
	   }
	}
     }
  printf("\n AFTER SORTING :");
  for (i = 0; i < n; i++) {
     printf("%d",a[i]);
  }
}

void sort2() {
   int x;
   int y;
   int z;
   int num;
   int n[50];
   int temp;

      printf("HOW MANY NUMBERS WOULD YOU LIKE TO SORT :");
      scanf("%d",&num);

      printf("ENTER %d NUMBERS :",num);
      for (x = 0; x < num; x++) {
	scanf("%d",&n[x]);
      }

      for (x = 0; x < num; x++) {
	 for (y = 0; y < num; y++) {
		   if (n[x] > n[x + y]) {
		     temp = n[x];
		     n[x] = n[x + y];
		     n[x + y] = temp;
		   }
	       }
	  printf("STEP %d :", x + 1);
	  for (z = 0; z < num; z++) {
	    printf("%3d",n[z]);
	  }
	  printf("\n");
   }
}

int main(int argc, char *argv[]) {
    if (argc == 2) {
	 if (strcmp(argv[1], "1"))
	       num_choice();
	 else if (strcmp(argv[1],"2"))
		array_choice();
	 else if (strcmp(argv[1], "3"))
	       string_choice();
	 else if (strcmp(argv[1], "4"))
		sort_choice();
	 else {
	     choice();
	 printf("WRONG CHOICE. PLEASE RE-ENTER.\n");
	 exit(0);
	}
  } else {
  choice();
  printf("INVALID ENTRY");
  exit(0);
  }
  return 0;
}
