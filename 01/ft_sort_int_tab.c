#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int * tab, int size);
void change(int * tab, int upper, int lower);

int main(void)
{
	int i = 0, tab[] = {8,2,8,9,4,6,-1,45,1,7,435,5,1,67,7,2,6}, a = 16;

	ft_sort_int_tab(tab, a);
	
	while(i < a)
	{
		printf("%d ", tab[i]);
		i++;
	}
}

void ft_sort_int_tab(int * tab, int size)
{
	int upper;
	int a;
	int lower;

	lower = 0;
	while(lower < size - 2)
	{
		upper = lower + 1;
		while(tab[lower] <= tab[upper] && lower <= size - 2)
		{
			if(upper >= size - 1)
			{
				lower++;
				upper = lower + 1;
			}
			else if(upper < size - 1)
				upper++;
		}
		if(tab[lower] > tab[upper])
			change(tab, upper, lower);
	}
}

void change(int * tab, int upper, int lower)
{
	int a;

	a = tab[lower];
	tab[lower] = tab[upper];
	tab[upper] = a;
}