/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:25:28 by mmourdal          #+#    #+#             */
/*   Updated: 2022/08/30 18:48:53 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{
	unsigned int	i;
	unsigned int	nbb;

	nbb = nb;
	if (nbb < 2)
		return (0);
	i = 3;
	if (nbb == 2)
	{
		return (1);
	}
	if (nbb % 2 == 0)
	{
		return (0);
	}
	while (i * i <= nbb)
	{
		if (nbb % i == 0)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
	{
		return (2);
	}
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

/*
int	main()
{
	printf("%i", ft_find_next_prime(56));
	printf("\n");
	return (0);
}
*/
