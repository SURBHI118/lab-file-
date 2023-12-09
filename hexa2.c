#include <stdio.h>
#include <string.h>
#include <math.h>
//To convert hex to binary first
long long int hexa_binary(char hex[]) {
   long long int binary, place;
   int i = 0, rem, val;
   int n = strlen(hex);
   binary = 0ll;
   place = 0ll;
   for (i = 0; hex[i] != '\0'; i++) {
      binary = binary * place;
      switch (hex[i]) {
      case '0':
         binary += 0;
         break;
      case '1':
         binary += 1;
         break;
      case '2':
         binary += 10;
         break;
      case '3':
         binary += 11;
         break;
      case '4':
         binary += 100;
         break;
      case '5':
         binary += 101;
         break;
      case '6':
         binary += 110;
         break;
      case '7':
         binary += 111;
         break;
      case '8':
         binary += 1000;
         break;
      case '9':
         binary += 1001;
         break;
      case 'a':
      case 'A':
         binary += 1010;
         break;
      case 'b':
      case 'B':
         binary += 1011;
         break;
      case 'c':
      case 'C':
         binary += 1100;
         break;
      case 'd':
      case 'D':
         binary += 1101;
         break;
      case 'e':
      case 'E':
         binary += 1110;
         break;
      case 'f':
      case 'F':
         binary += 1111;
         break;
      default:
         printf("Invalid hexadecimal input.");
      }
      place = 10000;
   }
   return binary;
}

