/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:27:58 by mmourdal          #+#    #+#             */
/*   Updated: 2022/08/17 15:50:13 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <bsd/string.h>

int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (src[j])
	{
		j++;
	}
	i = 0;
	while (i < size - 1 && size > 0 && src[i])
	{
			dest[i] = src[i];
			i++;
	}
	if (size > 0)
	dest[i] = '\0';
	return (j);
}
