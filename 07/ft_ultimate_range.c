#include <stdlib.h>
#include <stdio.h>

int ft_untimate_range(int min, int max, int **range);

int main(void)
{
	
	int min = 1;
	int max = 1000;
	int **range;
	int ind = -1;
	range = (int **)malloc((1) * sizeof(int*));
	int i = ft_untimate_range(min, max, range);

	while(++ind < i)
		printf("%d ", range[0][ind]); 
	free(range);
}

int ft_untimate_range(int min, int max, int **range)
{
	int ind;

	if(min > max)
		return(-1);
	
	ind = 0;

	range[0] = (int *)malloc((max - min) * sizeof(int));
	while(ind < max - min)
	{
		range[0][ind] = ind + min;
		ind++;
	}
	return(max - min);
}
