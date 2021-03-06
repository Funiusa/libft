/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevelyne <tevelyne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:45:38 by tevelyne          #+#    #+#             */
/*   Updated: 2020/11/12 13:57:00 by tevelyne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (!dst)
		return (0);
	if (size > 0)
	{
		while (count < (size - 1) && *src)
		{
			*dst = *src;
			dst++;
			src++;
			count++;
		}
		*dst = '\0';
	}
	while (*src)
	{
		count++;
		src++;
	}
	return (count);
}
