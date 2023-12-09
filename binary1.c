#include<stdlib.h>
#define SIZE 8
int main(){
   int i, carry = 1;
   char num[SIZE + 1], one[SIZE + 1], two[SIZE + 1];
   printf("SURBHI\n");
   printf("Enter the binary number");
   gets(num);
   for(i = 0; i < SIZE; i++){
      if(num[i] == '0'){
         one[i] = '1';
      }
      else if(num[i] == '1'){
         one[i] = '0';
      }
   }
   one[SIZE] = '\0';
   printf("Ones' complement of binary number %s is %s",num, one);
   for(i = SIZE - 1; i >= 0; i--){
      if(one[i] == '1' && carry == 1){
         two[i] = '0';
      }
      else if(one[i] == '0' && carry == 1){
         two[i] = '1';
         carry = 0;
      }
      else{
         two[i] = one[i];
      }
   }
}
