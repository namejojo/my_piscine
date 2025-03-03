int ft_str_is_alpha(char *str)
{
	int ind;

	ind = 0;
	if (str == NULL)
		return (1);
	while (str[ind])
	{
		if ((str[ind] < 65 || str[ind] > 90 ) && (str[ind] < 97 || str[ind] > 122))
			return (0);
		ind++;
	}
	return(1);
}