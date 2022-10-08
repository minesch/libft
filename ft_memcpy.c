/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakarya <azakarya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:32:01 by azakarya          #+#    #+#             */
/*   Updated: 2022/03/23 19:20:28 by azakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*str;
	unsigned const char	*src_1;

	if (!dst && !src)
		return (dst);
	str = dst;
	src_1 = src;
	while (n--)
		*str++ = *src_1++;
	return (dst);
}
