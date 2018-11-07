/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynaamane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:09:48 by ynaamane          #+#    #+#             */
/*   Updated: 2018/11/07 15:15:59 by ynaamane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char str);

void	ft_putstr(int *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (*s1 - *s2);
	while (*s1 != *s2)
	{
		if (*s1 != *s2)
			return(*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

int	main(argc, char **argv)
