/*


						// C assignments source codes


// 1st

#include<stdio.h>
main()
 {
 int h,m,s,h1,m1,s1,h2,m2,s2,day;
 printf("Enter first hours,minutes and seconds\n");
 scanf("%d%d%d",&h1,&m1,&s1); 
 printf("Enter second hours,minutes and seconds\n");
 scanf("%d%d%d",&h2,&m2,&s2);
 s=h=m=day=0;
 s=s1+s2;
 if(s>60)
  {
  m=s/60;
  s=s%60;
  }
 m=m+m1+m2;
 if(m>60)
  {
  h=m/60;
  m=m%60;
  }
 h=h+h1+h2;
 if(h>24)
  {
  day=1;
  h=h%24;
  }
 printf("First time = %d:%d:%d",h1,m1,s1);
 printf("\nSecond time = %d:%d:%d",h2,m2,s2);
 printf("\nAdded time =");
 if(day==0)
 printf("%d:%d:%d\n",h,m,s);
 else
  {
  printf("%d day",day);
  printf("%d:%d:%d\n",h,m,s);
  }
 }
 
 
 
 //2nd
 
#include<stdio.h>
#include<conio.h>
int main(){

    float num1, num2;
    char ch;
    printf("Enter First Number: ");
    scanf("%f", &num1);
    printf("Enter Second Number: ");
    scanf("%f", &num2);
    printf("Enter the Operator (+, -, *, /): ");
    scanf(" %c", &ch);
    if(ch=='+')
        printf("Result = %0.2f", num1+num2);
    else if(ch=='-')
        printf("Result = %0.2f", num1-num2);
    else if(ch=='*')
        printf("Result = %0.2f", num1*num2);
    else if(ch=='/')
        printf("Result = %0.2f", num1/num2);
    else
        printf("Wrong Operator");
    getch();
    return 0;
}
 
// 3rd

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);


    if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
    {
        printf("'%c' is alphabet.", ch);
    }
    else if(ch >= 48 && ch <= 57)
    {
        printf("'%c' is digit.", ch);
    }
    else
    {
        printf("'%c' is special character.", ch);
    }

    return 0;
}


//4th


#include<stdio.h>

int main()
{
        int n,sum,sum1=0,i,j;

        printf("\nEnter value for n = ");
        scanf("%d",&n);

        for(i=1;i<=n;i++)
    {
                sum=0;
                for(j=1;j<=i;j++)
                {
                    sum=sum+j;
                }
                sum1=sum1+sum;
        }

        printf("\nThe Sum of Series up to Value [ %d ] = [ %d ]\n",n,sum1);

        return 0;
}


//5th


#include <stdio.h> 
void main()
{
    int fib1 = 0, fib2 = 1, fib3, num, count = 0;
 
    printf("Enter the value of num \n");
    scanf("%d", &num);
    printf("First %d FIBONACCI numbers are ...\n", num);
    printf("%d\n", fib1);
    printf("%d\n", fib2);
    count = 2; 
    while (count < num)
    {
        fib3 = fib1 + fib2;
        count++;
        printf("%d\n", fib3);
        fib1 = fib2;
        fib2 = fib3;
   }
}


//6th

#include <stdio.h>

int main()
{
    int i, num1, num2, min, hcf=1;

    printf("Enter any two numbers to find HCF: ");
    scanf("%d%d", &num1, &num2);

    min = (num1<num2) ? num1 : num2;

    for(i=1; i<=min; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf = i;
        }
    }

    printf("HCF of %d and %d = %d\n", num1, num2, hcf);

    return 0;
}


// 7th


#include <stdio.h>
int main()
{
    int n, num = 0;

    printf("Enter any number to print in words: ");
    scanf("%d", &n);
    while(n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }
    
    while(num != 0)
    {
        switch(num % 10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }
        
        num = num / 10;
    }

    return 0;
}


//8th


#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    int i, j, rows, k, m;  
    printf (" Enter a number to define the rows: \n");  
    scanf ("%d", &rows);   
    printf("\n");  
    for ( i = 1; i <= rows; i++)  
    {  
        for ( j = 1; j <= rows-i; j++)  
        {     
            printf (" ");   
        }  
        for ( k = 1; k <= i; k++)  
        {  
            printf ("%d", k);
        }  
        for (m = i-1; m >=1; m--)  
        {  
            printf("%d", m); 
        }  
        printf ("\n");  
    }  
    getch();  
}  


//9th

#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    int i, j, rows;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; ++i)  
    {  
        for (j = 1; j <= i; ++j) 
        {  
            printf ("%c ", 'A' + j - 1); 
        }  
        printf ("\n"); 
    }  
    getch();      
} 


//10th


#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
        }
        else
        {
            for (int j = i; j >= 1; j--)
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    return 0;
} 


//11th


#include <stdio.h>
int main() {
  int n;
  double arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }

  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %.2lf", arr[0]);

  return 0;
}


//12th

 
#include <stdio.h>
#define MAX 100
int main()
{
    int arr[MAX],n,i;
    int temp;
     
    printf("Enter total number of elements: ");
    scanf("%d",&n);
     
    if(n%2 !=0)
    {
        printf("Total number of elements should be EVEN.");
        return 1;
    }
    printf("Enter array elements:\n");
    for(i=0;i < n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i < n;i+=2)
    {
        temp    = arr[i];
        arr[i]  = arr[i+1];
        arr[i+1]= temp;
    }
     
    printf("\nArray elements after swapping adjacent elements:\n");
    for(i=0;i < n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return;
}


//13th

#include<stdio.h>
#include<conio.h>
int main()
{
    int mat[3][3], i, j, sum;
    sum = 0;
    printf("Enter all 9 elements of 3*3 Matrix:-\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &mat[i][j]);
            sum = sum + mat[i][j];
        }
    }
    printf("\nSum of all elements = %d", sum);
    getch();
    return 0;
}

//14th


#include <stdio.h>
int main() {
  int a[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }

  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    transpose[j][i] = a[i][j];
  }

  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  }
  return 0;
}


//15th


#include <stdio.h>
#include <conio.h>
void main ()
{
           int a;
           long f,fact();
           //clrscr();
           printf ("\n Enter a Number : ");
           scanf ("%d",&a);
           f=fact(a);
           printf ("\n The Factorial of %d is : %ld",a,f);
           getch();
}
       long fact(int b)
 {
     int i;
     long f=1;
     for (i=1;i<=b;i++)
            f=f*i;
            return(f);
}
Output :
Enter a Number : 5
The Factorial of 5 is : 120


//16th


#include <stdio.h>
#include <conio.h>
int sumofarray(int a[],int n)
 {
 	int i,sum=0;

    for(i=0; i<n; i++)
    {
         sum+=a[i];
         
    }
 	return sum;
 }
int main()
{
    int a[1000],i,n,sum;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    sum=sumofarray(a,n);
    printf("sum of array is :%d",sum);
    
}

//17th


#include<stdbool.h>
#include<stdio.h>
bool isPrime(int n)
{
	if (n == 1 || n == 0)
		return false;

	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int r = 0;
	printf("Enter range: ");
	scanf("%d", &r);
	int N = r;

	for (int i = 1; i <= N; i++) {
		if (isPrime(i))
			printf("%d ", i);
	}
	return 0;
}*/


//18th

// C Program to demonstrate Printing
/* of the first letter of each word
#include <stdio.h>
#include <string.h>
int main()
{
	char str[500];
	printf("Enter a string: ");
	scanf("%c", &str[i]);
	int i, j = 0;

	for (i = 0; i < strlen(str); i++) {
		
		if (i == 0 && str[i] != ' ') {
			printf("%c ", str[i]);
		}
		
		else if (i > 0 && str[i - 1] == ' ') {
			printf("%c ", str[i]);
		}
	}
	return 0;
}

#include<stdio.h>
int main(){
	char str[20] = "Achromatic string"; 
	printf("the first character of each word in the given is\n");
	for(i = 0; str[i] != "\0"; i++){
		if(str[i] =" "){
			continue;
		}
		printf("%c", str[i]);
		for(i = i+1, str[i] != " " && str[i] != "\0"; i++);
	}
	return 0;
}


//19th
 
 
#include <stdio.h> 
void main()
{
    char sentence[80];
    int i, vowels = 0, consonants = 0, special = 0;
 
    printf("Enter a sentence \n");
    gets(sentence);
    for (i = 0; sentence[i] != '\0'; i++)
    {
        if ((sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] ==
        'i' || sentence[i] == 'o' || sentence[i] == 'u') ||
        (sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] ==
        'I' || sentence[i] == 'O' || sentence[i] == 'U'))
        {
            vowels = vowels + 1;
        }
        else
        {
            consonants = consonants + 1;
        }
        if (sentence[i] =='\t' ||sentence[i] =='\0' || sentence[i] ==' ')
        {
            special = special + 1;
        }
    }
    consonants = consonants - special;
    printf("No. of vowels in %s = %d\n", sentence, vowels);
    printf("No. of consonants in %s = %d\n", sentence, consonants);
}


//20th


#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];  
    int i,n,c=0;
    printf("Enter  the string : ");
    gets(s);
    n=strlen(s);

    for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;
 	}
 	if(c==i)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");     
    return 0;
}


//21st

#include <stdio.h>
#include <string.h>
int main()
{    
    char str[100];
    int i, j = 0;
    printf("Enter a string: ");
    gets(str);
  
    for (i = 0; i < strlen(str); i++) {
        if (i == 0 && str[i] != ' ') {
            printf("%c ", str[i]);
        }
        else if (i > 0 && str[i - 1] == ' ') {
            printf("%c ", str[i]);
        }
    }
    return 0;
}


//21th


#include <stdio.h>
void wrongSwap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 3, b = 5;
    printf("The value of a and b before swap is %d and %d\n", a, b);
    wrongSwap(a, b);
    Swap(&a, &b);
    printf("The value of a and b after swap is %d and %d\n", a, b);
    return 0;
}


//22th


#include <stdio.h>
long addTwoNumbers(long *, long *);
int main()
{
   long fno, sno, sum;
   
   printf("\n\n Pointer : Add two numbers using call by reference:\n"); 
   printf("-------------------------------------------------------\n");   
 
   printf(" Input the first number : ");
   scanf("%ld", &fno);
   printf(" Input the second  number : ");
   scanf("%ld", &sno);   
   sum = addTwoNumbers(&fno, &sno);
   printf(" The sum of %ld and %ld  is %ld\n\n", fno, sno, sum);
   return 0;
}
long addTwoNumbers(long *n1, long *n2) 
{
   long sum;
   sum = *n1 + *n2;
   return sum;
}


#include<stdio.h>
#include<conio.h>
int main(){
	int n1, n2, n3, n4, n5;
	float m;
	//clrscr();
	printf("Enter the number of coins of 50 paisa, 25 paisa, 20 paisa, 10 paisa respectively: ");
	scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
	m = (n1 * 0.5) + (n2 * 0.25) + (n3 * 0.2) + (n4 * 0.1) + (n5 * 0.05);
	printf("The total amount of money %f", m);
	getch();
}

#include<stdio.h>
int main(){
	int number;
	int valid = 0;
	while(valid == 0){
		printf("Enter the number (between 1 and 10): ");
		scanf("%d", &number);
		if(number < 1){
			printf("Number is below 1, please re-enter!\n");
			valid = 0;
		}
		else if(number > 10){
			printf("Number is above 10, please re-enter!\n");
			valid = 0;
		}
		else 
		valid = 1;
}
printf("The number is %d\n", number);
}*/

#include<stdio.h>
int main(){
	int n = 0, i;
	printf("Value of n? ");
	scanf("%d", &n);
	for(i = 1; i <= 10; i++){
		n = n + 1; 
	}
	printf("%d", n);
}