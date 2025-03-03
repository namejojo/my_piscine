#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	ind;
	int	temp;

	ind = 0;
	while (ind < size / 2)
	{
		temp = tab[ind];
		tab[ind] = tab[size - ind - 1];
		tab[size - ind - 1] = temp;
		ind++;
	}
}

/*
int main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int ind = 0;
	
	ft_rev_int_tab(tab, 5);
	while(ind < 5)
	{
		printf("%d",tab[ind]);
		ind++;
	}
}
*/