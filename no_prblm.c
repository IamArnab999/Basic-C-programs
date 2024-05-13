#include<stdio.h>
int main(){
	int a, b, sum, sub, mul, div, mod, x = 0;
	printf("Enter two number: ");
	scanf("%d%d", &a, &b);
	printf("Press 1 for addition, 2 for substaction, 3 for multiplication, 4 for division, 5 for modulus: ");
	scanf("%d", &x);
	switch(x){
		case 1: sum = a + b;
		printf("The addition is: %d", sum);
		break;
		case 2: sub = a - b;
		printf("The substaction is: %d", sub);
		break;
		case 3: mul = a * b;
		printf("The multiplication is: %d", mul);
		break;
		case 4: div = a / b;
		printf("The division is: %d", div);
		break;
		case 5: mod = a % b;
		printf("The modulus is: %d", mod);
		break;	
		default: 
		printf("Invalid Input!");
	}
	return 0;
}
