/*Factorial of a number. 
11. Swapping two values using pointers and functions also  ( call by value and call by reference both


//Factorial of a number!!

#include<stdio.h>
int main(){
    int n, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i++){
       fact = fact * i;
    }
    printf("Factorial is: %d\n", fact);
    return 0;
}

#include<stdio.h>
int main(){
	int n, r = 0;
	printf("Enter number: ");
	scanf("%d", &n);
	while(n > 0){
		r = n%10;
		printf("%d", r);
		n = n/10;
	}
}

#include<stdio.h>
int main(void){
	int i;
	for(i = 100; i <= 200; i++)
		if(i % 5 == 0 && i % 15 != 15)
			printf("%d\n", i);
}

								///*****
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int n, i, f = 1, c = 0;
	int r[20];
	printf("Enter the number: ");
	scanf("%d", &n);
	while(n > 1){
		r[c] = n % 10;
		n = n/10;
		c++;
	}
		for(i = 0; i < c; i++){
			f=f*r[i];
		}
		printf("required multiplied number: %d", f);
}

#include<stdio.h>
void main(){
	float y = 3.999;
	int x = (int)y;
	printf("%d", x);
}

#include<stdio.h>
int main() {
    int a[10][10], b[10][10], c[10][10], n, i, j, k;

    printf("Enter the value of N (N <= 10): ");
    scanf("%d", & n);
    printf("Enter the elements of Matrix-A: \n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", & a[i][j]);
        }
    }

    printf("Enter the elements of Matrix-B: \n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", & b[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The product of the two matrices is: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int arr[10], i, j, flag;
    for(i = 0; i < 10; i++)
    scanf("%d", &arr[i]);
    for(i = 0; i < 10; i++){
    flag = 1;
    for(j = 2; j <= (arr[i]/2); j++){
        if(arr[i] % j == 0){
            flag = 0;
            break;
            }
        }
    }
    for(i = 0; i < 10; i++){
        if(flag = 1)
        printf("%d", arr[i]);
    }
    return 0;
}

#include <stdio.h>
int factorial(int number){
    if(number == 1 || number == 0)
        return 1;
    else
        return(number * factorial(number-1));
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The factorial of %d is: %d\n", num, factorial(num));
    return 0;
}

#include<stdio.h>
void main(){
    int i;
    for(i = 0; i < 10; i++){
        printf("%d\t",fibo(i));
    }
}

int fibo(int x){
    int n;
    if(x == 0)
        return 0;
    else if(x == 0)
        return 1;
    else
        return (fibo(n-1) + fibo(n-2));
}*/

#include<stdio.h>
int main(){
    int n1, n2, n3, i, number;
    n1 = 0, n2 = 1;
    printf("Enter the term: ");
    scanf("%d", &number);
    printf("\n%d %d", n1, n2);
    for(i = 2; i < number; ++i){
    	n3 = n1 + n2;
    	printf(" %d", n3);
    	n1 = n2;
    	n2 = n3;
	}
	return 0;
}