/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 15:59:14 by sdummett          #+#    #+#             */
/*   Updated: 2021/03/23 16:12:07 by sdummett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isupper(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (42);
	return (0);
}
