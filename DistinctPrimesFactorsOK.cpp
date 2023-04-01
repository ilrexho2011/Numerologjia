/*  Distinct primes factors

The first two consecutive numbers to have two distinct prime factors are:

14 = 2 × 7
15 = 3 × 5

The first three consecutive numbers to have three distinct prime factors are:

644 = 2² × 7 × 23
645 = 3 × 5 × 43
646 = 2 × 17 × 19.

Find the first four consecutive integers to have four distinct prime factors each. 
What is the first of these numbers? 
returns the answer 134043  */

#include <math.h>
#include <stdbool.h>
#include <stdio.h>

#define LIMIT 1000000
#define NUM_OF_PRIMES 78498

int primes[78498];
int next_index = 0;


void generate_sieve(void);
bool distinct_primes(int x);

int main(int argc, char **argv)
{
	generate_sieve();
	
	int x = 648;
	
	while(!distinct_primes(x) || !distinct_primes(x + 1) || 
			!distinct_primes(x + 2) || !distinct_primes(x + 3))
		x++;

	
	printf("%d\n", x);
	
	return 0;
}

void generate_sieve(void)
{
	bool sieve[LIMIT] = {};
	int i, j, square;
	
	square = (int)sqrt(LIMIT);
	
	for(i = 2; i <= square; i++)
	{
		primes[next_index++] = i;
		
		for(j = i * i; j < LIMIT; j += i)
		{
			sieve[j] = true;
		}
		
		while(sieve[i + 1] == true)
			i++;
	}
	
	while(i < LIMIT)
	{
		if(sieve[i] == false)
			primes[next_index++] = i;
		i++;
	}
}

bool distinct_primes(int x)
{
	int i = 0;
	int c = 0;
	
	while(x > 1 && c < 4)
	{
		if( (x / primes[i]) * primes[i] == x)
		{
			c++;
			do{
			x /= primes[i];
			}while( (x / primes[i]) * primes[i] == x);
		}
		
		i++;
	}
	
	if(x == 1 && c == 4)
		return true;
	else
		return false;
}
