#include<stdio.h>
void checkChar(char ch)
{
  if((ch >= 'A' && ch <= 'Z')|| (ch >= 'a' && ch <= 'z'))
  printf("after XOR with 32 : %c\n",ch^32);
  else
  printf("not an alphabet");

  }
  int main()
  {
     char c='a';
     checkChar(c);
     return 0;

  }
