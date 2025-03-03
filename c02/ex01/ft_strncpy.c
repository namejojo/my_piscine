char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	ind;

	ind = 0;
	while (src[ind] && ind < n)
	{
		dest[ind] = src[ind];
		ind++;
	}
	while (ind < n)
	{
		dest[ind] = '\0';
		ind++;
	}
	return (dest);
}