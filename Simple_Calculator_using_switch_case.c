#include <stdio.h>
int main()
{
  int choice, num1, num2, result;

	printf("Select an arithmetic operation from following:");
	printf("\n 1. Addition.");
	printf("\n 2. Subtraction.");
	printf("\n 3. Multiplication.");
	printf("\n 4. Division.");
	printf("\n 5. Modulus.");
	printf("\n");

	scanf("%d", &choice);

	printf("\nEnter two number: ");
	scanf("%d %d", &num1, &num2);

	switch (choice)
  {
		case 1:
			result = num1 + num2;
			break;
		case 2:
			result = num1 - num2;
			break;
		case 3:
			result = num1 * num2;
			break;
		case 4:
			result = num1 / num2;
			break;
		case 5:
			result = num1 % num2;
			break;
		default:
			printf("\nEnter a Valid Number!\n");
	}

	printf("\nResult: %d\n", result);
	return 0;

}