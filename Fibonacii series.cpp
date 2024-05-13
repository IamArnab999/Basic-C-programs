//write a c program which will make Fibonacii series

#include<stdio.h>
int main(){
	int a=0, b=1, n, c, i=1;
	printf("Enter the term: ");
	scanf("%d", &n);
do{
	printf("%d ", a);
	i++;
	c = a+b;
	a=b;
	b=c;
	}	
while(i<=n);

return 0;	
}
