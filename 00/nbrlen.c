#include <unistd.h>

int nbrlen(int nbr){
	int a = nbr;
	int b = 0;

	while (a >=10){
		a = a/10;
		b++;
	}
	while (a > 10){
		a = a%10;
	}

}

int main (int a)
