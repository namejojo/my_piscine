#include <unistd.h>

int main (int argc, char ** argv)
{
	int arg_ind = 1;
	int ind;

	while(arg_ind != argc)
	{
		ind = 0;
		while(argv[arg_ind][ind] != '\0')
			write(1, &argv[arg_ind][ind++], 1);
		arg_ind++;
		write(1,"\n", 1);
	}
}