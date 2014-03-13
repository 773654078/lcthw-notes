#include "stdio.h"

int IsPrime(int num)
{
	for (int i = 2; i < num; ++i)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main(int argc, char const *argv[])
{
	int max = 100;

	for (int i = 2; i < max; ++i)
	{
		if (IsPrime(i))
		{
			printf("The number %d is Prime.\n", i);
		}
		/*else printf("The number %d is not Prime.\n", i);*/
	}
	return 0;
}
