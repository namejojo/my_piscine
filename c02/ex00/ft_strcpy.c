char	*ft_strncpy(char *dest, char *src)
{
	int	ind;

	ind = 0;
	while (src[ind])
	{
		dest[ind] = src[ind];
		ind++;
	}
	dest[ind] = '\0';
	return (dest);
}