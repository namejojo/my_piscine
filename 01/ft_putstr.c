#include <unistd.h>

void ft_putstr(char * str);

int main (void){
	ft_putstr("hoje eu nao me apeteceu");
}

void ft_putstr(char * str){
	int x;
	while (str[x] != '\0')
		{
			x++;
		}
	write(1,"\n",1);
}