#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main (void)
{
	int tab1[] = {0,1,2,3,4,5,6,7,8,9,10,11,12};

	ft_rev_int_tab(tab1, 13);
	
	int i = 0;
	while(i < 13)
	{
		printf("%d ", tab1[i]);
		i++;
	}
}

void ft_rev_int_tab(int *tab, int size)
{
	int b = size, i = 0, a, c = size/2;

	while(b > c)
	{
		a = tab[b - 1];
		tab[b - 1] = tab[i];
		tab[i] = a;
		b--;
		i++;
	}
}