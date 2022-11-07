/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:50:35 by mmourdal          #+#    #+#             */
/*   Updated: 2022/08/28 02:55:43 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	result;

	result = 0;
	while (result * result < nb)
	{
		result++;
	}
	if (result * result == nb)
	{
		return (result);
	}
	return (0);
}

/*
int	main(void)
{
	printf("0:%d\n", ft_sqrt(-2147483648));
	printf("0:%d\n", ft_sqrt(2147483647));
	printf("0:%d\n", ft_sqrt(37));
	printf("100:%d\n", ft_sqrt(10000));
	printf("0:%d\n", ft_sqrt(10001));
	printf("2000:%d\n", ft_sqrt(4000000));
	printf("0:%d\n", ft_sqrt(-36));
}
*/
