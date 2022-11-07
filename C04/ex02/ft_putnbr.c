/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 02:11:39 by mmourdal          #+#    #+#             */
/*   Updated: 2022/08/24 02:16:33 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	i;

	if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * -1;
	}
	i = (unsigned int)nb;
	if (i > 9)
	{
		ft_putnbr(i / 10);
		i = i % 10;
	}
	ft_putchar(i + '0');
}
