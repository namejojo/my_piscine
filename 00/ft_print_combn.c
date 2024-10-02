#include <unistd.h>
#include <stdio.h>

int elevated(int a);
void ft_putnbr(int nb);
int nbm_lenght(int nb);

int main (void){
	ft_putnbr(2);
}

void ft_putnbr(int n){
	char ch;
	int i, a, b, c = 0;
	if(n >= 0 && n <= 10){
		n = elevated(n);

		while(c != n){
			b = nbm_lenght(c);

			while (b >= 0){
				i = 0;
				a = c;

				while(i != b){
					a = a/10;
					i++;
				}
				if (a >= 10)
					a = a%10;
				ch = a + '0';
					// if( == 2)
						write(1, &ch, 1);
				b--;
			}
			// write (1, " ", 1);
			c++;
		}
	}
	else
		write(1,"BAD\n",4);
}

int elevated(int a)
{
	int c = 1;

	while (a != 0){
		c = c*10;
		a--;
	}
	return c;
}

int nbm_lenght(int nb)
{
	int b = 0;

	while (nb >=10){
		nb = nb/10;
		b++;
	}
	return b;
}