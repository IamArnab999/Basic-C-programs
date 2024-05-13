/*#include<stdio.h>

int main()
{
    int num, count = 1, i;

    printf("Enter no of rows of Pyramid\n");
    scanf("%d", &num);

    while(count <= num)
    {
        i = 0;
        while( i <= (num - count) )
        {
            printf(" ");
            i++;
        }

        i = 0;
        while(i < (2*count-1))
        {
            printf("*");
            i++;
        }

        printf("\n");
        count++;
    }

    return 0;
}


#include<stdio.h>
void main(){
	int n, *p, i, count = 0;
	printf("Enter a num: ");
	scanf("%d", &n);
	p = &n;

	for(i = 1; i <= *p; i++){
		if(*p % i == 0)
		count++;
	}
	if(count == 2)
		printf("Prime");
	else
		printf("not prime");
		
	return 0;
}



#include <stdio.h>
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
}

#include<stdio.h>
int main(){
	int k, num = 30;
	k = (num > 5?(num < 10 ? 100:200):500);
	printf("%d %d", num, k);
}

#include<stdio.h>
int gcd(int, int);
void main(){
	int m, n, r;
	printf("Enter 2 number: ");
	scanf("%d%d", &m,&n);
	r = gcd(m, n);
	printf("GCD = %d", r);
}

int gcd(int a, int b){
	if(b == 0)
		return (a);
	else if(a < b)
	return (gcd(b, a));
	else
	return (gcd(b, a % b));
	
}*/

/*#include <stdio.h>
union Job {
   float salary;
   int workerNo;
} j;

int main() {
   j.salary = 12.3;

   // when j.workerNo is assigned a value,
   // j.salary will no longer hold 12.3
   j.workerNo = 100;

   printf("Salary = %.1f\n", j.salary);
   printf("Number of workers = %d", j.workerNo);
   return 0;
}

#include<stdio.h>
#include<conio.h>
#include<string.h>
void upperString(char*);
void main(){
	char string[100];
	//clrscr();
	printf("Enter a string to convert it into uppercase: \n");
	gets(string);
	upperString(string);
	printf("Enter string in uppercase: %s\n", string);
	getch();
}
	
#include<stdio.h>
int main(){
	int arr[3][4], i, j;
	printf("Enter 12 element: ");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			scanf("%d", &arr[i][j]);
			printf("Array are: ");
			for(i = 0; i < 3; i++){
				for(j = 0; j < 4; i++){
					printf("%d", arr[i][j]);
				}
				printf("\n");
			}
		}
	}
}

#include<stdio.h>
int main(){
	int array[5], i, count = 0;
	printf("Enter the element: ");
	for(i = 0; i <= 5; i++){
		scanf("%d", &array);
	} 
	for(i = 0; i <= 5; i++){
		if(array[i] % 2 != 0){
			count++;
		}
		printf("The odd numbers are: ", count);
	}
	return 0;
}


// Time complexity 

#include<stdio.h>
//unopt. block of code
void SumofNo(double n){
	double sum = 0;
	for(int i = 1; i <= n; i++){
		sum = sum + i;
	}
	printf("The value of sum is: %lf", sum);
}
//opt. block of code
void OptSumofNo(double n){
	double sum;
	sum = (n*(n+1))/2;  //changes
	printf("The optimized value of sum is: %lf", sum);
}
//^efficient!

int main(){
	double num;
	printf("Enter the value: ");
	scanf("%lf", &num);
	//function call
	
	//SumofNo(num);
	OptSumofNo(num);
}*/


#include<stdio.h>
int BinerySearch(int arr[], int n, int x)
{
    int l = 0, h = n-1;
    while(l<=h)
    {
        int mid = (l+h)/2;
        if(arr[mid] == x)
            return mid;
        else if(arr[mid]<x)
            l = mid+1;
        else
            h = mid-1;
    }
    return -1;
}

int main()
{
    int arr[] = {20, 79, 76, 45, 34, 38, 54, 24, 40};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int x = 54;
    int result = BinerySearch(arr, n, x);
    if(result = -1)
        printf("Element not present in the array!");
    else
        printf("Element is present in %d index!", result);
     
    return 0;
}