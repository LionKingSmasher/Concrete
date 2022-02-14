#include <string.h>

char* strcpy(char* str1, const char* str2){
	int i = 0;
	while(str2[i++])
		str1[i] = str2[i];

	str1[i] = 0;

	return str1;
}

int strcmp(const char* str1, const char* str2){
	unsigned int i = 0;
	while(str1[i] && str2[i]){
		if(str1[i] < str2[i])
			return -1;
		else if(str1[i] > str2[i])
			return 1;
		i++;
	}
	return 0;
}

size_t strlen(const char* str){
	unsigned int len = 0;

	while(str[len++]);
	
	return len;
}