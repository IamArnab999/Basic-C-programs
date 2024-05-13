//progarm to find out the factorial of a number
/*#include<stdio.h>
int main(){
	int num, i, fact = 1;
	printf("Enter a number to find factorial: ");
	scanf("%d", &num);
	for(i = 1; i <= num; i++){
		fact = fact * i;
	}
	printf("Factorial of %d is: %d", num, fact);
	return 0;
}
//c program to find the maximum and minimum value in an array 

#include<stdio.h>
int main(){
	int a[100], size, i, min, max;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	printf("Enter value in array: ");
	for(i = 0; i < size; i++){
		scanf("%d", &a[i]);
		}
		min = a[0];
		for(i = 0; i < size; i++){
			if(a[i] < min){
			min = a[i];
			}
		}
		max = a[0];
		for(i = 0; i < size; i++){
			if(a[i] > max){
			max = a[i];
			}
		}
		printf("maximum no. is: %d\n", max);
		printf("minimum no. is: %d", min);
	
	return 0;
	}
	
	#include<stdio.h>
	
	void printstr(char str[]){
		int i;
		while(str[i]!='\0'){
			printf("%c", str[i]);
			i++;
		}
	}
	int main(){
	char str[]= "Arnab";
	//strcat(str1, str2);
	//puts(str2);
	printstr(str);
	return 0;
	}
	
#include<stdio.h>
int main(){
	int a, b, *p, *q, temp;
	p = &a;
	q = &b;
	printf("Enter two numbers: ");
	scanf("%d %d\n", &a, &b);
	printf("Before swapping: ", a, b);
	temp = *p;
	*p = *q;
	*q = temp;
	printf("After swapping: %d %d", *p, *q);
	return 0;
}

#include<stdio.h>
int main(){
	char str1[20] = "Hello";
	char str2[20] = " Arnab!";
	
	//strcat(str1, str2);
	
	printf("%d\n", strcmp(str1, str2));
return 0;
}*/

#include<stdio.h>
int main(){
	char str[50];
	int i, vol = 0;
	printf("Enter the string");
	gets(str);
	i = 0;
	while(str[i] != '\0'){
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' str[i] == 'o' || str[i] == 'u'){
			vol++;
		}	
		i++;
	}	
	printf("No. of vowels is = %d", vol);
	return 0;
}



	

	