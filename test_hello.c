
#include <stdio.h>
#include <string.h>

#define MSG "Hello World"

char * gets2(char *str){
	fgets(str,256,stdin);
	if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';
	return str;
}

int main()
{
int val=0;
char buffer[256];
	val=strcmp(gets2(buffer),MSG);
	printf("La cadena recibida es:<%s>\n",buffer);
	printf("La cadena esperada es:<%s>\n",MSG);
	return(val);
}