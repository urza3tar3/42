#include <unistd.h>
#include <stdio.h>

void	ft_print_alphabet(void)
{
	char	chst;
	char	chend;

	chst = 'a';
	chend = 'z';
	while (chst <= chend)
	{
		write (1, &chst, 1);
		++chst;
	}
}
