#include "main.h"


/**
 * main - check the code.
 *
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 *Returns -1 and prints - if n is less than zero
 * */

int print_sign(int n){
	int i;
	if(n>0){
		i=-1;
	 	_putchar('-');
		putchar(',');
		
	}
	else if(n==0){
		i=0;
		_putchar('0');
		
		
	}
	else{
		i=1;
		_putchar('1');
		
		
	}
	return i;

}

