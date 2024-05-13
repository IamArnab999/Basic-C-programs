#include<stdio.h>
int main(){
int n = 0;
printf("Enter a number: ");
scanf("%d", &n);
if(n%1 == 0 && n%n == 0){
	printf("%d is a prime number", n);
}
else{
	printf("%d is not a prime number", n);
}
return 0;
}