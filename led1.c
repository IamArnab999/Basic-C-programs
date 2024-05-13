/*#include<stdio.h>
void main(){
    int num, count = 1, i;
	printf("Enter no of rows of Pyramid\n");
    scanf("%d", &num);
    while(count <= num)
    {
        i = 0;
        while( i <= (num - count)){
            printf(" ");
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
*/

#include<stdio.h>
int main(){
	int arr[500], size, i, sml;
	printf("Enter size of array: ");
	scanf("%d", &size);
	printf("Enter values: ");

	for(i = 0; i < arr[i]; i++){
		scanf("%d", &arr[i]);
	}
	sml = arr[0];
	for(i = 0; i < arr[i]; i++){
		if(arr[i] < sml){
			sml = arr[i];
		}
	}
	printf("Maximum value is: %d", sml);
	return 0;
}