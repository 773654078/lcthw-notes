#include <stdio.h>

int main(int argc, char const *argv[])
{
	int sum;
	for (int i = 1; i < 100; ++i)
	{
		if (i % 6 == 0)
		{
			sum += i;
			printf("One of all correct number is %d .\n", i);
		}
	}
	printf("The sum is %d \n", sum);
	return 0;
}