
#include <stdio.h>
#include <string.h>

#define MSG "Hello World"

int main()
{
int val=0;
char buffer[256];
	val=strcmp(gets(buffer),MSG);
	printf("La cadena recibida es:<%s>\n",buffer);
	printf("La cadena esperada es:<%s>\n",MSG);
	return(val);
}
