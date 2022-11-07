/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:39:30 by mmourdal          #+#    #+#             */
/*   Updated: 2022/08/29 23:52:39 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		cpt++;
	}
	return (cpt);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[c])
	{
		dest[i + c] = src[c];
		c++;
	}
	dest[i + c] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		cpt;
	char	*str;

	cpt = ft_strlen(*strs);
	i = 1;
	while (i < size && size > 0)
	{
		cpt += ft_strlen(sep);
		cpt += ft_strlen(strs[i]);
		i++;
	}	
	str = (char *)malloc(sizeof(char) * cpt + 1);
	if (str == 0)
		return (NULL);
	*str = '\0';
	i = 0;
	while (i < size && size > 0)
	{
		str = ft_strcat(str, strs[i]);
		if (i != size - 1)
				str = ft_strcat(str, sep);
		i++;
	}
	return (str);
}

/*
int	main(int argc, char **argv)
{
	printf("%s\n",  ft_strjoin(argc, argv, "----"));
	return (0);
}

	"avion" "bateau" "terre" "sepa"
	"avionsepabateausepaterre" 
	total += longueur de avion
	total += longueur de bateau*/
