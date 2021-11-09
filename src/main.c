#include <stdio.h>
#include "espl_lib.h"


int main()
{
	printf("Please input a number: ");

	int input = 0;
	char validation = 'n';	

	do{
		if(!scanf("%d", &input) || input <= 0){
			printf("Not a positive number");
			return -1;
		}
	printf("your number is %s" , num_to_words((unsigned int) input));
	printf("\n New number (y) or exit (n)?");
	scanf(" %c", &validation);	

	} while(validation ==  'y');
	
	return 0;
}
