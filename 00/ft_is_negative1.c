#include <unistd.h>
#include <stdio.h>

void ft_is_negative(char *n);

int main (void){
	char *a = "1";

	ft_is_negative(a);
	write(1,"\n",1);
}

void ft_is_negative(char *n){
	int p = 0, i = 0;
	while (n[i] == '-' || n[i] == '+'){
		if (n[i] == '-')
			p++;
		i++;
	}
	if (n[i]>= '0' && n[i] <= '9'){
		if(p % 2 == 0)
			write(1, "P",1);
		else
			write (1,"N",1);
	}
	else 
	write(1, "bad" ,3 );
}