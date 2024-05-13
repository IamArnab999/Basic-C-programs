/*c progarm to add three numbers using function
#include<stdio.h>
int main(){
int a, b, c, sum;
printf("Enter three numbers: ");
scanf("%d%d%d", &a,&b,&c);
sum = calsum(a, b, c);
printf("Sum is: %d", sum);
}
int calsum(int a, int b, int c);
	{
	int s;
	s = x + y + z;
	return (s);
}

#include<stdio.h>
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
	
	printf("The first value is: %d\n", a);
	printf("The second value is: %d\n", b);

}

#include<stdio.h>
void main(){
	int a[100], i, n, count = 0, item;
	printf("Enter element: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("Enter the element %d", &i+1);
		scanf("%d", &a[i]);
	}
	printf("Enter the item to be counted");
	scanf("%d", &item);
	for(i = 0; i < n; i++){
		if(item = a[i]){
			count++;
		}
	}
	else{
		printf("Item not found: ");
	}
	printf("Total number of occurance of that item is: %d", count);	
}

#include<stdio.h>
int main(){
	int arr[100], size, i, max, min;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	printf("Enter the values: ");
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}
	min = arr[0];
	for(i = 0; i < size; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	max = arr[0];
	for(i = 0; i < size; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	
	printf("Big is %d\n", max);	
	printf("small is %d", min);	

}

1. Odd or even. (done)
2. Convert Celsius to Fahrenheit and vice-versa.(done)
3. Area and perimeter of a rectangle.(done) 
4. Area and circumference of circle.(done)
5. Volume of a cylinder.(done)
6. Print all even numbers between 10 and 30 using loops.(done)
7. Star pattern. (done)
8. Square pattern. (done)
9. Check whether a number is prime or not. (done)
10. Factorial of a number. (done)
11. Swapping two values using pointers and functions also  ( call by value and call by reference both)
*/


// Swapping two values using pointers

#include<stdio.h>
int main(){
	int x, y, *p, *q, temp;
	p = &x;
	q = &y;
	printf("Enter two numbers: ");
	scanf("%d%d", &x, &y);
	printf("\nBefore swapping: %d %d", x, y);
	temp = *p;
	*p = *q;
	*q = temp; 
	printf("\nAfter swapping: %d and %d", *p, *q);
	return 0;
	}



