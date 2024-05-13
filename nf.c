/*#include<stdio.h>
void main()
{
	int a, b, c, res;
	printf("Enter three numbers: ");
	scanf("%d%d%D", &a, &b, &c);
	res = add(a, b, c);
	printf("Addition is: %d", res);
	return(0);
}
int add(int x, int y, int z){
	int w;
	w = x + y + z;
	return(w);
}

// create a c program to find the factorial of a number using function

#include<stdio.h>
int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	factorial (num);
	return 0;
}

int factorial(int num){
	int fact = 1, i;
	if(num == 0){
		printf("Factorial of 0 is 1!\n ");
	}
	else{
		for(i = 1; i <= num; i++){
			fact = fact * i;
		}
		printf("The factorial of %d is %d\n ", num, fact);
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

// c program to print the values of an array ascending or decending order!

#include<stdio.h>
int main(){
	int i, j, arr[200], size, temp= 0;
	printf("Enter size of the array: ");
	scanf("%d", &size);
	printf("Enter values: ");
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}
	printf("Before sorting: ");
	for(i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	for(i = 0; i < size; i++){
		for(j = i + 1; j < size; j++){
			if(arr[i] < arr[j]){
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			}
		}
	}
	printf("\nArray values are(in descending order): ");
	for(i = 0; i < size; i++){
	printf("%d ", arr[i]);
	}
	return 0;
}

/*#include <stdio.h>
#include <math.h>
int main(){ 

float n,i,j,q,w;
q=tan(M_PI*0.4);
w=tan(M_PI*0.2);
printf("Enter the size\n");
scanf("%f",&n);
for(j=ceil(n*q);j>=0;j--){
for(i=-ceil(0.55*n*q/w-n);i<ceil(0.55*n*q/w-n);i++){
if((j<=0.55*n*q && j>=(i+n)*w && j>=(n-i)*w)||(j>=(i+n)*w && j<=(i+n)*q && j<=(n-i)*q)||(j<=(n-i)*q && j>=(n-i)*w && j<=(i+n)*q)){
printf("*");
}
else{
printf(" ");
}
}
printf("\n");
}
return 0;
}*/


