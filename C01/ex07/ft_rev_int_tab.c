#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*int	main(void)
{
	int	i;
	int tab[] = {1, 2, 3, 4, 5};
	int size = sizeof(tab)/sizeof(tab[0]);

	i = 0;
	ft_rev_int_tab(tab, size);
	while ( i < size )
	{
		printf("%d" , tab[i]);
		i++;
	}
	return 0;
}*/
