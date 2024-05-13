#include<stdio.h>
void main(){
int n, i, flag = 0;
printf("Enter the number: ");
scanf("%d", &n);
	for(i = 1; i <= n; i++){
		if(n % i == 0){
		flag++;
		}
	}
if(flag == 2)
printf("Prime number");
else
printf("Not a prime number!");
return 0;
}
