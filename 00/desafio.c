#include <unistd.h>
#include <stdio.h>
void ft_putnbr();

int main (void){
	ft_putnbr();
}

void ft_putnbr(){
	char *ch = "joao\0";
	int i = 0, a = 0;
	char str;

	while(ch[i] != '\0')
		i++;

	while(a < i){
		str = ch[a];
		write (1, &str, i);
		a++;
	}
	write (1, "\n", 1);
}