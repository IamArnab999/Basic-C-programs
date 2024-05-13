#include<stdio.h>
int main(){
	int num;
	printf("Enter the number to find factorial: ");
	scanf("%d", &num);
	factorial (num);
	return 0;
}

void factorial(int num){
	int fact = 1, i;
	if(num == 0){
		printf("Factorial of 0 is 1!");
	}
	else{
	for(i = 1; i <= num; i++){
		fact = fact * i;
		}
	printf("The factorial of %d is %d\n", num, fact);

	}
}

/*#include<stdio.h>
int main(){
	int a, b;
	printf("Enter two nums: ");
	scanf("%d%d", &a, &b);
	swap(a, b);
}

void swap(int a, int b){
	int temp = a;
	a = b;
	b = temp;
	printf("1st num: %d \n", a);
	printf("2nd num: %d \n", b);
}*/