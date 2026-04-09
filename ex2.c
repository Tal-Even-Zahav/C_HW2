#include <stdio.h>

// TODO: add your recursive function implementation here
int rec_sum(int numr, int sum)
{
  if ((numr == 0)&&(sum < 10))
    return sum;  
  if ((numr == 0)&&(sum >= 10))
    return rec_sum(sum,0); 
  else
    return rec_sum(numr/10, sum + numr%10) ;    

}
int main() {
  unsigned int num;
  unsigned int result;

  // Prompt user for input
  printf("Please insert a non-negative integer:\n");
  scanf("%u", &num);

  // TODO: Compute the repeated sum of digits:
  result = rec_sum(num,0);
  // Prompt result to user
  printf("The repeated sum of digits in %u is: %u\n", num, result);
  return 0;
}
