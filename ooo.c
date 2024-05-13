/*#include<stdio.h>
int main(){
	float num1, num2 = 0;
	char ch;
	printf("Enter two numbers: ");
	scanf("%d%d", &num1,&num2);
	printf("Enter the operator(+, -, *, /): ");
	scanf("%c", &ch);
	if(ch == '+')
		printf("The result is: %0.2f", num1+num2);
	else if(ch == '-')
		printf("The result is: %0.2f", num1-num2);
	else if(ch == '*')
		printf("The result is: %0.2f", num1*num2);
	else if(ch == '/')
		printf("The result is: %0.2f", num1/num2);
	else
		printf("wrong operand/operator!");
		
	return 0;
}*/

#include<stdio.h>
int main(){
	char ch;
	printf("Enter any character/ alphabet or digit: ");
	scanf("%c", &ch);
	if(ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90){
	printf("%c is alphabet!", ch);
	}
	else if(ch >= 48 && ch <= 57){
		printf("%c is digit!", ch);
	}
	else{
		printf("%c is a special chracter!", ch);
	}
			
	return 0;
}