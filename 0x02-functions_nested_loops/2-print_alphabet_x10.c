#include "main.h"
void print_alphabet_x10(void){
	int j;
	while(j<=10 && j>=0) {
		char i;
		for(i='a';i<='z';i++){
			_putchar(i);
			
		}
	} 
	_putchar('\n');
	j++;
}
