#include <stdio.h>
#include "espl_lib.h"

int main(){

	int number,a=1;
	char c;
	while(a!=0){
		printf("Please choose a number : ");
		scanf("%d", &number);
	      	getchar ();
        	printf("%s\n",num_to_words(number));
        	printf("Type the letter x to exit or the letter r to choose another number : ");
        	scanf("%c", &c);
        	if (c  == 'r') { 
              		a=1; 
		}
        	else { 
              		a=0; 
		}
	}
}
