#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max);

int main(void)
{
	int i = -1;
	int min = 1;
	int max = 110;
	int *range = ft_range(min, max);

	while(++i < max - min)
		printf("%d  ", range[i]); 
	free(range);
}

int *ft_range(int min, int max)
{
	if(min > max)
		return(NULL);
	int *range;
	int ind;

	ind = 0;
	range = (int *)malloc((max - min) * sizeof(int));
	while(ind < max - min )
	{
		range[ind] = ind + min;
		ind++;
	}
	return(range);
}