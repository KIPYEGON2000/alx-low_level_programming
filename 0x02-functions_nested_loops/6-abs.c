#include "main.h"
/**
 *_abs - Check main
 * @i: An integre input
 * Description: This function returns absolute value of a number
 * Return: Absolut value of number i
 */

int _abs(int i){
	
	if(i<0){
		int a;
		a=(-1)*i;
		return a;
	}
	
	else{
		return i;
	}
}
