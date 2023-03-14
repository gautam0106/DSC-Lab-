#include <stdio.h>

int main() {

  int num1, num2, result;
  printf("Enter two numbers: ");
  scanf("%d",&num1);
  printf("Enter the second number:");
  scanf("%d",&num2);
  	
	result = num1 & num2;
	printf("Result of And Operation: %d\n",result);
	
	return 0; 
}
