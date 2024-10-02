#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int n);

int elevated(int a){
	int c = 1;

	while (a != 0){
		c = c*10;
		a--;
	}
	c--;
	printf("%d",c);
	return c;
}

int main (void){
	ft_putnbr(1);
}

void ft_putnbr(int n){
	char *ch;
	int i = 0, fl = 0, a;
	
	a = elevated(n);

	printf("-%d-",a);
	if(n >= 0 && n <= 10){
		ch = i + '0';
		write(1, &ch, 1);
		write(1,"\n",1);
	}
	else
		write (1, "BAD\n", 4);
}