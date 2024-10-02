 #include <stdio.h>

void ft_ultimate_ft(int *********nbr9);

int main()
{
	int a = 7, *nbr1, **nbr2, ***nbr3, ****nbr4, *****nbr5, ******nbr6, *******nbr7,********nbr8;

	nbr1 = &a;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;

	ft_ultimate_ft(&nbr8);
	printf("%d", a);
}

void ft_ultimate_ft(int *********nbr9){

	*********nbr9 = 42;
}