#include <stdio.h>
/**
 * main - Each new term in the Fibonacci sequence is generated by
 * adding the previous two terms. By starting with 1 and 2
 * Fibonacci sequence values not exceed 4,000,000
 *
 * Return:0
 */
int main(void)
{
	long pri = 0, sec = 1, sum, total_sum;
	int val;

	sum = pri + sec;
	while (sum <= 4000000)
	{
		val = sum % 2;
		sum = pri + sec;
		if (val == 0)
		{
			total_sum += sum;
		}
		pri = sec;
		sec = sum;
	}
	printf("%lu\n", total_sum);
	return (0);
}
