#include<stdio.h>
int countsetbits(unsigned int n)
  {
      int count=0;
      while(n)
      {
         n= n&(n-1);
         count++;
      }
      return count;
  }
    int main()
    {
       int num=12;
       printf("Number of 1 bits= %d",countsetbits(num));
       return 0;

    }


