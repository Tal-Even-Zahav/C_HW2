#include <stdio.h>
#define MAX_TARGET 730
#define MIN_TARGET -82 
#define MAX_INPUT 999  
#define MIN_INPUT 0 



int plus_plus(int num1,int num2,int num3, int target){
  if (target == num1+num2+num3)
    return 1;
  else
    return 0;}

int plus_minus(int num1,int num2,int num3, int target){
  if (target == num1+num2-num3)
    return 1;
  else
    return 0;}
int plus_mul(int num1,int num2,int num3, int target){
  if (target == num1+num2*num3)
    return 1;
  else
    return 0;}

int minus_minus(int num1,int num2,int num3, int target){
  if (target == num1-num2-num3)
    return 1;
  else
    return 0;}

int minus_plus(int num1,int num2,int num3, int target){
  if (target == num1-num2+num3)
    return 1;
  else
    return 0;}

int minus_mul(int num1,int num2,int num3, int target){
  if (target == num1-num2*num3)
    return 1;
  else
    return 0;}

int mul_mul(int num1,int num2,int num3, int target){
  if (target == num1*num2*num3)
    return 1;
  else
    return 0;}

int mul_plus(int num1,int num2,int num3, int target){
  if (target == num1*num2+num3)
    return 1;
  else
    return 0;}

int mul_minus(int num1,int num2,int num3, int target){
  if (target == num1*num2-num3)
    return 1;
  else
    return 0;}

int main() 
{
  int num=0, target=0, sum = 0;
  int arr[3];
  printf("Enter a 3-digit integer:\n");
  scanf("%d", &num);
  
  if ((num < MIN_INPUT)||(num > MAX_INPUT))
  {
      printf("Invalid input. Must be a 3-digit number.\n");
      return 0;
  }

  printf("Enter target value:\n");
  scanf("%d", &target);

  if ((target < MIN_TARGET)||(target > MAX_TARGET))
  {
      printf("Invalid target. target %d is outside of range.\n", target);
      return 0;
  }
  
  for (int i=0;i<3;i++)
  {  
    arr[i] = num%10;
    num = num/10;
  }

  for (int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      for( int k = 0; k < 3; k++)
      {

        if(i != j && j != k && i != k)
        {
          sum += plus_plus(arr[i], arr[j], arr[k], target);
          sum += plus_minus(arr[i], arr[j], arr[k], target);
          sum += plus_mul(arr[i], arr[j], arr[k], target);
          sum += minus_minus(arr[i], arr[j], arr[k], target);
          sum += minus_plus(arr[i], arr[j], arr[k], target);
          sum += minus_mul(arr[i], arr[j], arr[k], target);
          sum += mul_mul(arr[i], arr[j], arr[k], target);
          sum += mul_plus(arr[i], arr[j], arr[k], target);
          sum += mul_minus(arr[i], arr[j], arr[k], target);
        }
      }
    }
  }

  printf("Found %d ways to reach the target using +, - and * operations.\n", sum);

 
  return 0;
}
