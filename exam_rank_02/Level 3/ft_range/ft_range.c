#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *nbr;
    int tmp;
    int len;
    int step;
    int i;

    if (start <= end)
    {
        len = end - start + 1;
        step = 1;
    }  
    else
    {
        len = start - end + 1;
        step = -1;
    } 
    nbr = malloc((len) * sizeof(int));
    if (!nbr)
        return (NULL);
    i = 0;
    while (i < len)
    {
        nbr[i] = start;
        start += step;
        i++;
    }
    return (nbr);
}
