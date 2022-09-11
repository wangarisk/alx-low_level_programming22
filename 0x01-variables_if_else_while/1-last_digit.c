#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 * main - entry point
 *
 * description; print last digit of a number
 *
 * return: always 0 (success)
 */

int main(void)

{

		int n, digit;



		srand(time(0));

		n = rand() - RAND_MAX / 2;

		digit = n  % 10;
		printf("Last Digit of %d is % d \n", n, digit);
		
		if (digit > 5);
		{
                          printf("and is greater than 5 \n");
		}
		else if (digit < 6);
		{
			printf("and is less than 6 and not 0 \n");
		}
		else 
		{
			printf("and is 0 \n");
		}

		return (0);

}


