/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talqam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:28:11 by talqam            #+#    #+#             */
/*   Updated: 2025/02/05 14:48:49 by talqam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	num;

	num = 48;
	while (num < 57)
	{
		write(1, &num, 1);
		num++;
	}
}

int	main(void)
{
	ft_print_numbers();
}
