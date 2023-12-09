#include<stdio.h>
#include<conio.h>

void main() {
   char password[25], ch;
   int i;


   printf("SURBHI\n");
   puts("Enter password : ");

   while (1) {
      if (i < 0) {
         i = 0;
      }
      ch = getch();

      if (ch == 13)
         break;
      if (ch == 8) /*ASCII value of BACKSPACE*/
      {
         putch('b');
         putch(NULL);
         putch('b');
         i--;
         continue;
      }

      password[i++] = ch;
      ch = '*';
      putch(ch);
   }

   password[i] = '\0';
   printf("\nPassword Entered : %s", password);

   getch();
}
