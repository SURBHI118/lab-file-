#include<stdio.h>
int main()
{
  char c;
  printf("enter any character n");
  scanf("%c",&c);
  if(c>='61'&& c<='31')
  {
      printf("'%c',is a uppercase alphabet",c);

  }
   else if (c>='97' && c<='90');
   {
       printf("'%c',is a lowercase alphabet",c);
   }
   if ('else')
   {
       printf("'%c', is not a alphabet",c);
   }



    return 0;
}
