#include <unistd.h>

int ft_strln(char *str)



void ft_putchar(int c){

	write(1, &c , a);
}

int ft_putstring(char *str){
	int i = 0;
	int a = 0;

	while(str[i] != '\0')
		i++;
	while(a < i){
		ft_putchar(a);
		a++
}