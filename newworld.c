/*printing pyramid of stars using while loop
#include<stdio.h>
void main(){
	int num, count = 1, i;
	printf("Enter a number: ");
	scanf("%d", &num);
	while(count <= num){
		i = 0;
		while(i <= (num - count) ){
			printf("\n");
			i++;
		}
		i = 0;
		while(i < (2*count-1)){
			printf("*");
			i++;
		}
		printf("\n");
		count++;
	}
}

#include <stdio.h>
int main() {
    int n, i;
    float num[100], sum = 0.0, avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);
    return 0;
}

int main(){
	int a[10], i, min;
	printf("Enter 10 element: ");
	for(i = 0; i <= 9; i++){
		scanf("%d", &a[i]);
	}
	min = a[i];

prinf("smallest no. is: %d", min);
}

#include<stdio.h>
int main(){
	int arr[5], n, i, j, temp;
	printf("Enter length: ");
	scanf("%d", &n);
	printf("Enter values: ");
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("Before sorting the elemens are: ");
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(arr[i] < arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("\nAfter sorting(in descending order) array values are: ");
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\nAfter sorting(in ascending order) array values are: ");
	for(i = 0; i < n; i++){
		printf("%d ", arr[j]);
	}
	return 0;
}

//Print all even numbers between 10 and 30 using loops !!

#include<stdio.h>
int main(){
	int i, n, flag = 0;
	printf("Enter the number: ");
	scanf("%d", &n);
	for(i = 2; i <= n/2; i++){
		if(n % i == 0){
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		printf("Prime!");
	else
		printf("Not prime!!");
	return 0;
}*/


#include<stdio.h>
int main(){
	int a, b;
	printf("Enter 2 nums: ");
	scanf("%d%d", &a, &b);
	printf("\nBefore swapping: %d and %d", a, b);
	swap(a, b);
	return 0;
}

void swap(int x, int y){
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("\nAfter swapping: %d and %d", x, y);
}






