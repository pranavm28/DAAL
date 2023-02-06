#include<stdio.h>
#include<stdlib.h>

int main(){
	int m = 0, n = 0 , opc =0;
	
	printf("Enter the first number: ");
	scanf("%d" , &m);

	printf("Enter the second number: ");
	scanf("%d" , &n);

	int max = (n > m) ? n : m;
	int min = (n + m) - max;

	while(min != 0){
		opc++;
		if(n % min == 0 && m % min == 0){
			printf("GCD is: %d\n" , min);
			break;

		}
		min--;
	}

	printf("Number of operations = %d\n" , opc);

}