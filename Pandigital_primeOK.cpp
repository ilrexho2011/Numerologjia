// Pandigital Prime
/*  We shall say that an n-digit number is pandigital 
	if it makes use of all the digits 1 to n exactly once. 
	For example, 2143 is a 4-digit pandigital and is also prime.
	What is the largest n-digit pandigital prime that exists?  
   	Pergjigja e sakte eshte: 7652413*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool isprimeandpandigit(unsigned int);

int main(void) {
	unsigned int max = 0;
	for(unsigned int i = 123; i <= 7654321; i++) if(isprimeandpandigit(i) && i > max) max = i;	
	printf("%d\n", max);
}

bool isprimeandpandigit(unsigned int number) {
    if (number <= 1) return false; 
    if ((number > 2) && ((number % 2) == 0)) return false; 
    for (unsigned int i = 3; i * i <= number; i += 2) if (number % i == 0) return false;
	char s[10];
	itoa(number, s, 10);
	if(strchr(s, '0') != NULL) return false;
	for(unsigned int j = 0; j < strlen(s); j++) if(strchr(s, (j + 1) + '0') == NULL) return false;
    return true;
}
