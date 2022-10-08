/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakarya <azakarya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:31:50 by azakarya          #+#    #+#             */
/*   Updated: 2022/03/12 13:33:02 by azakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*str;
	unsigned const char	*src_a;

	str = dst;
	src_a = src;
	if (dst < src)
		ft_memcpy(dst, src, n);
	else
		while (n--)
			*(str + n) = *(src_a + n);
	return (dst);
}
