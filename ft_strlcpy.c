/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakarya <azakarya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:44:28 by azakarya          #+#    #+#             */
/*   Updated: 2022/03/20 21:42:12 by azakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	x;

	srclen = ft_strlen(src);
	x = 0;
	if (dstsize == 0)
		return (srclen);
	while (x < (dstsize - 1) && src[x])
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = '\0';
	return (srclen);
}
