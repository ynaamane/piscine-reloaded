/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:48:43 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/07 15:54:07 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int				*tab;
	int				counter;
	unsigned int	diff;

	diff = max - min;
	tab = (int *)malloc(sizeof(int) * (diff));
	counter = 0;
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		tab[counter] = min;
		min++;
		counter++;
	}
	return (tab);
}
