/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talqam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:28:11 by talqam            #+#    #+#             */
/*   Updated: 2025/02/05 14:48:49 by talqam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	n;
	char	p;

	if (n < 0)
	{
		n = 'N';
		write(1, &n, 1);
	}
	else
	{
		p = 'P';
		write(1, &p, 1);
	}
}
