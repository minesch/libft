/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakarya <azakarya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:13:44 by azakarya          #+#    #+#             */
/*   Updated: 2022/03/23 19:33:09 by azakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	x;
	size_t	dstlen;
	size_t	dst1;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	dst1 = dstlen;
	x = 0;
	if (dstsize == 0)
		return (srclen);
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	while (x < (dstsize - dst1 - 1) && src[x])
	{
		dst[dstlen] = src[x];
		x++;
		dstlen++;
	}
	dst[dstlen] = '\0';
	return (dst1 + srclen);
}
