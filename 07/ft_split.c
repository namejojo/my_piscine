#include <stdlib.h>
#include <stdio.h>

void ft_malloc(char *str, char *charset, char **strs);
void ft_strdup(char *str, char *charset, char **strs);
char **ft_split(char *str, char *charset);
int ft_str_count(char *str, char *charset);
int ft_check(char ch, char *charset);

int main(void)
{
	char *str = "                   macacos com duas maos esquerdas tendem a morrer na natureza";
	char charset[] = " ";
	char **strs;
	int ind = 0;

	strs = ft_split(str, charset);

	while(strs[ind] != NULL)
	{
		printf("%s\n", strs[ind]);
		ind++;
	}
}

char **ft_split(char *str, char *charset)
{
	char **strs;
	int str_count;
	int ind;
	char *sep;
	
	str_count = ft_str_count(str, charset);
	strs = (char **)malloc((str_count + 1) * sizeof(char*));
	strs[str_count] = NULL;
	sep = (char *)malloc(2 * sizeof(char));
	ft_malloc(str, charset, strs);
	ft_strdup(str, charset, strs);
	return(strs);
}

void ft_strdup(char *str, char *charset, char **strs)
{
	int ind;
	int str_count;
	int char_count;

	str_count = 0;
	ind = 0;
	
	while(str[ind] != '\0')
	{
		char_count = 0;
		while(ft_check(str[ind], charset) == 1)
			ind++;
		if(ft_check(str[ind], charset) == 0)
		{
			while(ft_check(str[ind], charset) == 0 && str[ind] != '\0')
			{
				strs[str_count][char_count] = str[ind];
				char_count++;
				ind++;
			}
			strs[str_count][char_count] = '\0';
			str_count++;
		}
	}
}

void ft_malloc(char *str, char *charset, char **strs)
{
	int ind;
	int str_count;
	int char_count;

	str_count = 0;
	ind = 0;
	
	while(str[ind] != '\0')
	{
		char_count = 0;
		while(ft_check(str[ind], charset) == 1)
			ind++;
		if(ft_check(str[ind], charset) == 0)
		{
			while(ft_check(str[ind], charset) == 0 && str[ind] != '\0')
			{
				char_count++;
				ind++;
			}
			strs[str_count] = (char *)malloc((char_count + 1) * sizeof(char));
				if(!strs[str_count])
					printf("erro");
			str_count++;
		}
	}
}

int ft_str_count(char *str, char *charset)
{
	int ind;
	int str_count;

	str_count = 0;
	ind = 0;
	
	while(str[ind] != '\0')
	{
		while(ft_check(str[ind], charset) == 1)
			ind++;
		if(ft_check(str[ind], charset) == 0)
		{
			while(ft_check(str[ind], charset) == 0 && str[ind] != '\0')
				ind++;
		str_count++;
		}
	}
	return(str_count);
}

int ft_check(char ch, char *charset)
{
	int ind;

	ind = 0;
	while(charset[ind] != '\0')
	{
		if(charset[ind] == ch)
			return(1);
		ind++;
	}
	return(0);
}