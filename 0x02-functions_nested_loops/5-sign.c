#include "main.h"


/**
 * main - check the code.
 *
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 *Returns -1 and prints - if n is less than zero
 * */

int print_sign(int n){
	int i=-1;
	int z=0;
	int y=1;
	if(n>0){
		char* k="-";
	 	_putchar(k);
		return i;
	}
	else if(n==0){
		_putchar("0,");
		_putchar('\n');
		return z;
	}
	else{
		_putchar("\+");
		_putchar(",");
		_puchar('\n');
		return y;
	}

}

