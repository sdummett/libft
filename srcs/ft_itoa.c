/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 10:37:47 by sdummett          #+#    #+#             */
/*   Updated: 2021/03/23 16:18:34 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	sizeof_n(int n)
{
	int				size;
	unsigned int	tmp;

	if (n)
	{
		if (n < 0)
		{
			size = 1;
			tmp = n * -1;
		}
		else
		{
			size = 0;
			tmp = n;
		}
		while (tmp)
		{
			tmp = tmp / 10;
			size++;
		}
	}
	else
		size = 1;
	return (size);
}

void	protected_malloc(char **str, int size_n)
{
	str = malloc(sizeof(char) * size_n + 1);
	if (!str)
		return ;
	str[size_n] = 0;
}

char	*ft_itoa(int n)
{
	int			size_n;
	char		*str;
	long int	tmp;

	str = NULL;
	tmp = n;
	size_n = sizeof_n(n) - 1;
	protected_malloc(&str, sizeof_n(n));
	if (n && str)
	{
		if (tmp < 0)
		{
			tmp = tmp * -1;
			str[0] = '-';
		}
		while (tmp)
		{
			str[size_n--] = tmp % 10 + 48;
			tmp = tmp / 10;
		}
	}
	else if (!n && str)
		str[size_n] = '0';
	else
		return (0);
	return (str);
}
