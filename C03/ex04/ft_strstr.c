/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:56:21 by mmourdal          #+#    #+#             */
/*   Updated: 2022/08/20 23:32:46 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!(*to_find))
	{
		return (str);
	}
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 0;
			while (to_find && str[i] == to_find[i])
			{
				i++;
				if (i == ft_strlen(to_find))
				{
					return (str);
				}
			}
		}
		str++;
	}
	return (0);
}
