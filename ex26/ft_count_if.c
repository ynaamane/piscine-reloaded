/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <ynaamane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:10:52 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/08 11:25:05 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (tab[i][0] != '0')
	{
		if (f(tab[i]) == 1)
			nb++;
		i++;
	}
	return (nb);
}