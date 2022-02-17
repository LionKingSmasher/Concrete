#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char* itoa(int value, char* str){
	int i = 0, j;
	bool minus = (value < 0) ? true : false;

	if(minus){
		value = -value;
		i = 1;
		str[0] = '-';
	}

	do{
		for(j = i; j > 0; j--)
			str[j] = str[j-1];
		str[minus] = 0x30 + (value % 10);
		value/=10;
		i++;
	}while(value > 0);

	str[i] = '\0';
	return str;
}