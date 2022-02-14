#include <stdio.h>
int main() 
{
   unsigned int i;
   printf("Enter a number");
   scanf("%u",&i);
   char *c = (char*)&i;
   if (*c)    
       printf("Little endian");
   else
       printf("Big endian");
  
}
