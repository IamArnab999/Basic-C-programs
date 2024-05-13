/*#define prod(a, b) a*b
main(){
	int x = 3, y = 4;
	printf("%d", prod(x+2, y-1));
}

#include<stdio.h>
//#include<conio.h>
void main(){
	int c;
	printf("Enter a character: ");
	scanf("%4d", &c);
	printf("value is: %d", c);
	//getch();
}

#include<stdio.h>
int main(){
	int i;
	printf("Enter either 1 or 2: ");
	scanf("%d", &i);
	if(i == 1)
	printf("Nice! you have printed 1");
	else{
		if(i == 2)
		printf("Okay! you have printed 2");
		else
		printf("What the Fu*k! you're told to type 1 or 2");
	}
}

#include<stdio.h>
int main(){
	int i, j, n, s = 0, sum = 0;
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		sum += s;
		for(j = 1; j <= i; j++)
			s += j;
	}
	printf("%d", sum);
}

#include<stdio.h>
#include<conio.h>
void main(){
	int j, k = 1, t, n;
	//clrscr();
	printf("Enter the line number you want to see: ");
	scanf("%d", &n);
	for(j = 1; j <= t; j++){
		scanf("%d", k);
		k++;
	}
	printf("\n");
getch();
}

#include<stdio.h>
long factorial(int);
int main()
{
    int i, n, c;
    
    printf("How many rows you want to show in pascal triangle?\n");
    
    scanf("%d",&n);
    
    for ( i = 0 ; i < n ; i++ )
    {
        for ( c = 0 ; c <= ( n - i - 2 ) ; c++ )
        printf(" ");
        for( c = 0 ; c <= i ; c++ )
            printf("%ld ",factorial(i)/(factorial(c)*factorial(i-c)));
            printf("\n");
    }
    return 0;
}
long factorial(int n)
{
    int c;    
    long result = 1;
    
    for( c = 1 ; c <= n ; c++ )
        result = result*c;
        return ( result );
}*/

/*#include<stdio.h>
#include<conio.h>
void main(){
	int i, j, k, sp;
	//clrscr();
	sp = 0;
	for(i = 7; i >= 1; i--){
		printf("\n");
		for(j = 65; j <= 65+(i-1); j++)
			printf("%c", j);
		for(j = j - 2; j >= 65; j--)
			printf("%c", j);
	}
	getch();
}

#include<stdio.h>
#include<conio.h>
void main(){
	int r = 0, d, m, n, ans;
	printf("Enter the number: ");
	scanf("%d", &n);
	m=n;
	do{
		d=m%10;
		m=m/10;
		r=(r*10) + d;
	}
	while(m != 0);
	printf("%d is the reverse\n", r);
	ans=r-9;
	printf("\nAfter substracting 9 we get %d", ans);
}

#include<stdio.h>
int main(){
	int n, j=1;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	while(j <= n)
	printf("%d\n", ++j);
	return 0;
}

#include<stdio.h>
#include<conio.h>
int main(void){
	int n, j = 1;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	while(j <= n){
		if(j % 10 != 0)
		printf(" %d\n", j);
		++j;
	}
	return 0;
	//EXIT_SUCCESS;
}

#include<stdio.h>
#include<conio.h>
int main(void){
	int n, x, sum = 0, sum1;
	printf("Enter any integer: ");
	scanf("%d", &n);
	while(n > 0){
		x = n % 10;
		sum += x;
		n /= 10;
	}
	sum1 = sum * sum;
	printf("the sum of the digits is %d", sum1);
	getch();
}

#include<stdio.h>
#include<conio.h>
int main(){
	int i, n, sum = 0;
	printf("Enter the value n: ");
	scanf("%d", n);
	for(i = 1; i <= n; i++){
		if(i % 2 != 0)
			sum = sum + i;
		else
			sum = sum - i;
	}
	printf("Summation of the series is: = %d", sum);
	return 0;
}

#include<stdio.h>
#include<conio.h>
main(){
	int num1, num2, max;
	printf("Enter two positive integers: ");
	scanf("%d %d", &num1, &num2);
	max = (num1 > num2) ? num1: num2;
	while(1){
		if(max % num1 == 0 && max % num2 == 0){
			printf("LCM of %d and %d is %d", num1, num2, max);
			break; 
			}
			max++;
		}
	}

#include<stdio.h>
int main(){
	int age;
	printf("Enter your age? ");
		scanf("%d", &age);
	Vote:
		printf("You are eligible for voting\n");
	NoVote:
		printf("You are not eligible to voting!");
		if(age >= 18)
			goto Vote;
		else
			goto NoVote;
		return 0;
}

#include<stdio.h>
int main(){
	int n, i, num, product;
	for(i = 1, product = 1; i <= 4; ++i){
		printf("Enter num %d: ", i);
		scanf("%d", &num);
		if(num == 0)
			continue;
			
		product *= num;
	}
	printf("Product = %d", product);
	return 0;
}

#include<stdio.h>
int main(){
	int i, j;
	for(j = 1; j <= 4; j++){
		for(i = 1; i <= 5; i++){
			printf("*");
		}
		printf("\n");
	}
	getch();
}

#include <stdio.h>
int main()
{
  int c = 0, count = 0;
  char s[1000];

  printf("Input a string\n");
  gets(s);

  while (s[c] != '\0') {
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
      count++;
    c++;
  }

  printf("Number of vowels in the string: %d", count);

  return 0;
}


#include<stdio.h>
void main(){
	int arr[3][4], i, j;
	printf("Enter 12: ");
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
}*/

/* array of 5 ineger elements and find the total number of odd no.s

#include<stdio.h>
int main(){
	int arr[5], i;
	printf("Enter the element: ");
	for(i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	printf("The odd numbers are:\n");
	for(i = 0; i < 5; i++){
		if(arr[i] % 2 != 0)
			printf("%d\n", arr[i]);
	}
	return 0;
}

#include<stdio.h>
struct book{
	int no_of_pages;
	float price;
	char name[50];	
};

int main(){
    struct book b1, b2;
    b1.name = 'Ansi C';
    b1.price = 456.5;
    b1.no_of_pages = 780;
    b2.name = 'Digit electronis';
    b2.price = 200;
    b2.no_of_pages = 820;
    
    printf("number of pages of the first book: %d\n", b1.no_of_pages);
    printf("number of pages of the second book: %d", b2.no_of_pages);
}

#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    printf("Before Swapping: %d %d\n", a, b);
    swap(a, b);
}

void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("After Swapping: %d %d", x, y);
}*/

//Swapping using function(Call by refferance)

include<stdio.h>
int main(){
    void wrongSwap(int a, int b){
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    void Swap(int *a, int *b){
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }
    int main(){
        int a, b;
        printf("Enter 2 nums: ");
        scanf("%d%d", &a, &b);
        printf("Before Swap: %d and %d", a, b);
        wrongSwap(a, b);
        Swap(&a, &b);
        printf("After Swap: %d and %d", a, b);
        return 0;
    }
    
}