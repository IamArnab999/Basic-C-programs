/*functions
#include<stdio.h>
int main(){
	int a, b, mul=0;
	printf("Enter two numbers: ");
	scanf("%d%d", &a,&b);
	mul = a * b;
	printf("%d", mul);
	return 0;
}*/
int main(){
	
int a, b, mul=0;
printf("Enter two numbers: ");
scanf("%d%d", &a,&b);
mul = multi(a, b);
printf("%d", mul);
}

int multi(int a, int b){
	int c;
	c = a * b;
	return (c);
}