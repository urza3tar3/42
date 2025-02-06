#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void rush(int x, int y)
{
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;
    ft_putchar('A');

    while (i < x - 2)
    {
        ft_putchar('B');
        i++;
    }

    ft_putchar('C');
    write(1, "\n", 1);

    while (k < y - 2)
    {
        ft_putchar('B');

        while (j < x - 2)
        {
            write(1, " ", 1);
            j++;
        }

        ft_putchar('B');
        write(1, "\n", 1);
        k++;
        j = 0;
    }

    i = 0;
    ft_putchar('A');
    while (i < x - 2)
    {
        ft_putchar('B');
        i++;
    }

    ft_putchar('C');
    write(1, "\n", 1);
}

int main(void)
{
    rush(1, 4);
}
