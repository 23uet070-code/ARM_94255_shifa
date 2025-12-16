#include<stdio.h>
#include<stdint.h>
int main(void)
{
  uint8_t value=5;
  uint8_t leftshift = value << 2;
  uint8_t rightshift = value >> 1;

printf("original value = %d\n",value);
printf("after left shift by 2 = %d\n",leftshift);
printf("after right shift by 1 = %d\n",rightshift);

return 0;
}
