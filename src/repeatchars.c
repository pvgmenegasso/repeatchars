/*
 ============================================================================
 Name        : repeatchars.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int getstrsize(char str[])
{
	int size = 0 ;

	while(str[size] != '\0')
	{
		size++;
	}

	return size ;

}

char* repeatchar(int nrepeat, char str[])
{
	int strsize = getstrsize(str) ;
	char aux[2*strsize] ;

	for(int i = 0 ; i < strsize ; i++)
	{
		for(int j = 0; j < nrepeat; j++)
		{
			aux[(nrepeat*i)+j] = str[i] ;
		}
	}

	return &aux ;
}



int main(void) {

	int nrepeat = 2 ;
	char original[10] ;
	strcpy(original, "hello") ;
	char* str = NULL ;
	str = (char*) malloc(nrepeat * getstrsize(original) * sizeof(char)) ;

	str = repeatchar(2, original) ;
	printf("%s", str) ;

	free(str) ;
	return EXIT_SUCCESS;
}
