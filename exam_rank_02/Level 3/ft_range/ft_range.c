#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int *range;
	int size;
	int i;
	
	size = end - start + 1;
	if (start > end)
		size = start - end + 1;

	range = malloc(size * sizeof(int));
	if (!range)
		return (NULL);

	for (i = 0; start <= end && i < size; i++, start++)
		range[i] = start;
	
	for (i = 0; start >= end && i < size; i++, start--)
		range[i] = start;

	return (range);
}
