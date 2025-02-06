#include <stdio.h>
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	chst;
	char	chend;

	chst = 'a';
	chend = 'z';
	while (chend >= chst)
	{
		write (1, &chend, 1);
		chend--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
