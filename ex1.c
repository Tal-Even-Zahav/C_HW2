#include <stdio.h>

int rec_even(int numr)
{
  if (numr == 0)
    return 0;
  int digit = numr % 10;
  if ((digit % 2 == 0)&&(digit !=0))
    return rec_even(numr/10) + 1;
  else 
    return rec_even(numr/10);

}
int main() {
  unsigned int num;
  unsigned int result;

  // Prompt user for input
  printf("Please insert a non-negative integer:\n");
  scanf("%u", &num);
  result = rec_even(num);
  
  // Prompt result to user
  printf("The number of even digits in %u is: %u\n", num, result);
  return 0;
}
