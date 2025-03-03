int	check(int n)
{
	int l;
	int l_com;
	int r;
	int r_com;

	l = nbrlen(n);
	while(--l >= 1)
	{
		l_com = l_dig(n , l);
		r = nbrlen(n) - (nbrlen(n) - l);
		while(r >= 1)
		{
			r_com = r_dig(n, r--);
			if(l_com >= r_com)
				return (0);
		}
	}
	return (1);
}