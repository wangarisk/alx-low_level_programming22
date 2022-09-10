#include <stdlib.h>

#include <time.h>

header.h



/**
 *
 *  * main - Entry point
 *
 *   * 
 *
 *    * Description: State whether number is positive or negative
 *
 *     * 
 *
 *      * Return: Always 0 (Success)
 */

int main(void)

{

		int n;



			srand(time(0));

			n = rand() - RAND_MAX / 2;
                
			If (n>0)
			{ 
				printf(" is positive\n");
			}
                        Else if (n==0)
			{ 
				printf(" is zero\n");
			}
			Else if (n<0)
			{ 
				printf(" is negative\n");
			}
			return (0);

}
