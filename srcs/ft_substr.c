/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 14:45:28 by sdummett          #+#    #+#             */
/*   Updated: 2021/03/12 18:46:44 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (!(ptr = malloc(sizeof(char) * len + 1)))
		return (0);
	*(ptr + len) = 0;
	if (!(start > ft_strlen(s)))
		while (len)
		{
			*(ptr + len - 1) = *(s + start + len - 1);
			len--;
		}
	else
		while (len--)
			*(ptr + len - 1) = 0;
	return (ptr);
}