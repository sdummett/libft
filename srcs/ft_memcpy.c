/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 20:00:10 by sdummett          #+#    #+#             */
/*   Updated: 2021/03/11 21:01:59 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	if (!(dest == src))
	{
		i = 0;
		while (n--)
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src
					+ i);
			i++;
		}
	}
	return (dest);
}
