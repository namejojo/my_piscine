void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int temp1;
	int temp2;

	temp1 = a;
	temp2 = b;
	*div = temp1 / temp2;
	*mod = temp1 % temp2;
}