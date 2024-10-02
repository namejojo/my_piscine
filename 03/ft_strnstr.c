#include <stdio.h>

char * ft_strstr(char *str, char *to_find, unsigned int n);
int ft_strlen(char * str);

int main (void)
{
	char hay[] = "ola mundo";
	char needle[] = "z";
	int n = 1000;

	printf("%s", ft_strstr(hay, needle, n));
}

char * ft_strstr(char *str, char *to_find, unsigned int n){
	int in1;
	int in2;
	int i;
	int compi;

	str[n] = '\0';
	in1 = 0;
	i = ft_strlen(to_find);
	while(str[in1] != '\0'){
		compi = 0;
		in2 = 0;
		while(str[in1] == to_find[in2] && to_find[in2] != '\0'){
			in1++;
			in2++;
			compi++;
		}
		if(compi == i){
			in2 = 0;
			while(in2++ < in1 - i)
				*str++;
			return (str);
		}
		in1++;
	}
}

int ft_strlen(char * str)
{
	int ind;

	ind = 0;
	while (str[ind] != '\0')
		ind++;
	return (ind);
}