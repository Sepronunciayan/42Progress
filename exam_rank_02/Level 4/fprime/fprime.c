#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	num;
	int	min_fator;

	if (argc == 2)
	{
		num = atoi(argv[1]);
		if (num <= 0)
		{
			printf("\n");
			return (0);
		}
		if (num == 1)
		{
			printf("1\n");
			return (0);
		}
		min_factor = 2;
		while (min_factor <= num)
		{
			if (num % min_factor == 0)
			{
				printf("%d", min_factor);
				num = num / min_factor;
				if (num != 1)
					printf("*");
			}
			else
				min_factor++;
		}
	}
	printf("\n");
	return (0);
}