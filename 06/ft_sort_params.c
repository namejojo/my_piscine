#include <unistd.h>
#include <stdio.h>

void change(int * arg_ind, int upper, int lower);
int ft_strcmp(char ** argv, int lower, int upper, int * arg_ind);
void ft_sort_params(int *arg_ind, int argc, char ** argv);
void ft_initialize (int *arg_ind, int argc);

int main (int argc, char ** argv)
{
	int arg_ind[argc];
	int ind;
	int i = 1;
	
	ft_sort_params(arg_ind, argc, argv);
	while(i != argc)
	{
		ind = 0;
		while(argv[arg_ind[i]][ind] != '\0')
			write(1, &argv[arg_ind[i]][ind++], 1);
		write(1,"\n", 1);
		i++;
	}
}

void ft_sort_params(int *arg_ind, int argc, char ** argv)
{
	int upper;
	int lower;

	lower = 1;
	upper = 2;
	ft_initialize (arg_ind, argc);
	while(lower < argc - 1)
	{
		if(ft_strcmp(argv, lower, upper, arg_ind) > 0)
			change(arg_ind, lower, upper);
		if(upper < argc - 1)
			upper++;
		else
		{
			lower++;
			upper = lower + 1;
		}
	}
}

int ft_strcmp(char ** argv, int lower, int upper, int * arg_ind)
{
	int ind;

	ind = 0;
	while((argv[arg_ind[lower]][ind] != '\0' && argv[arg_ind[upper]][ind] != '\0') && (argv[arg_ind[lower]][ind] == argv[arg_ind[upper]][ind]))
		ind++;
	ind = argv[arg_ind[lower]][ind] - argv[arg_ind[upper]][ind];
	return (ind);
}

void ft_initialize (int *arg_ind, int argc)
{
	int upper;

	upper = -1;
	while(++upper != argc)
		arg_ind[upper] = upper;
}

void change(int * arg_ind, int upper, int lower)
{
	int a;

	a = arg_ind[lower];
	arg_ind[lower] = arg_ind[upper];
	arg_ind[upper] = a;
}