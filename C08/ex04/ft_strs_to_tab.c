/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmourdal <mmourdal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 21:19:11 by mmourdal          #+#    #+#             */
/*   Updated: 2022/08/29 03:13:14 by mmourdal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*cpy;

	i = 0;
	len = ft_strlen(src);
	cpy = (char *)malloc(sizeof(char) * len + 1);
	if (cpy == NULL)
	{
		return (NULL);
	}
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;
	int					i;

	tab = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (tab == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
/*Argc = Taille du Tableau
Argv = Tableau de chaine de 
caractere Type str[i]
Transformer chaque element parcouru
dans le tableau en struct
Garder l'ordre des elements fourni
dans Argv
Le tableau de struct doit etre malloc et le
dernier element fourni par argv auras 0 de valeur de str qui 
mettre fin au tableau
Si erreur de malloc securise renvoyer un pointeur null*/
