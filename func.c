/*#include<stdio.h>
void main(){
	int i, j;
	for(i = 1; i <= 50; i++){
		for(j = 2; j <= i; j++){
			if(i % j == 0)
			break;
		}
		if(i == j)
		printf("%d\n", j);
	}

//write a c pogram to check whether a number is prime or not (using pointer)
#include<stdio.h>
void main(){
	int n, i, *p, count = 0;
	printf("Enter num: ");
	scanf("%d", &n);
	p = &n;
	for(i = 1; i <= *p; i++){
		if(*p % i == 0)
		count++;
	}
	if(count == 2)
		printf("Prime!");
	else
		printf("Not prime");
		
	return 0;
}
}

#include<stdio.h>
void main(){
	int arr[3][3], i, j;
	printf("Enter values: ");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	printf("array in matrix form:\n");
	for(i = 0; i <= 2; i++){
		for(j = 0; j <= 2; j++){
			printf("%d ", arr[i][j]);
		}
	printf("\n");
	}
	getch();
}
	|
	|
	|
	|
	|
	|
	|
	|
	|
	|
	|
	|
	|
	|
	|
	|
	|
	|
	|
	
	
1. Odd or even (done)
2. Convert Celsius to Fahrenheit and vice-versa.(done)
3. Area and perimeter of a rectangle. (done)
4. Area and circumference of circle. (done)
5. Volume of a cylinder (done)
6. Print all even numbers between 10 and 30 using loops.(done)
7. Star pattern
8. Square pattern.
9. Check whether a number is prime or not.
10. Factorial of a number. 
11. Swapping two values using pointers and functions also ( call by value and call by reference both)

// Swapping two values using functions (call by reference)

#include<stdio.h>


int swap(int *p, int *q){
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
	
	printf("\nAfter swapping numbers: %d and %d", *p, *q);

}

int main(){
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);
	printf("\nBefore swapping numbers: %d and %d", a, b);
	swap(a, b);

return 0;
}

// C Program to Check If the Number is Krishnamurthy Number or Not

#include <stdio.h>
int main(){
    int num, i, rem, temp, fact, sum = 0;
    
    // Asking for input
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (temp = num; temp > 0; temp = temp/10){
        fact = 1;
        rem = temp % 10;
        
        for (i = 1; i <= rem; i++){
            fact = i * fact;
        }
        sum = sum + fact;
    }
    
    // Checking for krishnamurthy number
    if (num == sum){
        printf("%d is a krishnamurthy number.", num);
    }
    else{
        printf("%d is not a krishnamurthy number.", num);
    }
    return 0;
}*/

