#include <unistd.h>

void ft_print_comb2(void);

int main (void){
	ft_print_comb2();
}

void ft_print_comb2(void){
	int a = 0, b = 0, c = 0, d = 0, i=0;
	char *all = "0123456789";

	while (all[a] != '\0'){
		if (i == 1)
			write(1, ", ", 2);
		write(1, &all[a], 1);
		write(1, &all[b], 1);
		write(1, " ", 1);
		write(1, &all[c], 1);
		write(1, &all[d], 1);
		d++;
		i = 1;
		if (all[d] == '\0'){
			d = 0;
			c ++;
		}
		if (all[c] == '\0'){
			c = 0;
			d++;
			b++;
		}
		if (all[b] == '\0'){
			b = 0;
			c++;
			d++;
			a++;
		}
	}
	write(1, "\n",1);
}