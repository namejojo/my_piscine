#include <unistd.h>
 
void ft_print_void(void);

int main (void){
	ft_print_void();
}

void ft_print_void (void){
	int a = 0, b = 0, c = 0, i = 0;

	char *all = "0123456789";
	
	while (all[a] != '\0' ){
		if(a != b && a != c && b != c){
			if (a < b && b < c){	
				if(i == 1)
					write(1, ", ", 2);
				write(1, &all[a], 1);	
				write(1, &all[b], 1);	
				write(1, &all[c], 1);
				i = 1;

			}	
		}	
			c++;
			if(all[c] == '\0'){
				b++;
				c = 0;
			}
			if(all[b] == '\0'){
				b = 0;
				c = 0;
				a++;
			}
	}
	write (1, "\n", 1);
}