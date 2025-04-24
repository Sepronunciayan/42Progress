#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int *range;
	int size;
	int i;

	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;

	range = malloc(size * sizeof(int));
	if (!range)
		return (0);
	i = 0;
	if (start <= end)
	{
		while (start <= end)
		{
			range[i] = start;
			i++;
			start++;
		}
	}
	else
	{
		while (start >= end)
		{
			range[i] = start;
			i++;
			start--;
		}
	}
	return (range);
}
