#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/** 
 *main -generates random numbers n
 *describtion: determines whether n is 0, >5 or <6
 *Return:0
 * */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit =n % 10
	printf("Last digit of %d is %d and is", n, lastDigit);
	if (lastDigit >5)
		printf("greater than 5\n");
	else if (lastDigut == 0)
		printf("0\1");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
