#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _putchar(char c);
int get_endianness(void);

/**
 * struct EndiannessCheck - check for endianness
 * @i: integer
 * @c: array of characters
 *
 * Description: struct
 */
struct EndiannessCheck
{
	int i;
	char c[sizeof(int)];
};

#endif
