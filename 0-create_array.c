#include "main.h"
/**
 * *Create_array :creates an array of char
 * @int size: size of array
 * @char c: the char that will initialize the array
 *
 * Return: an address if the array
 */

char *create_array(unsigned int size, char c){
	char *ar;

	ar = malloc(size* sizeof(char));
	ar[0]=c;

	return(*ar);
}
