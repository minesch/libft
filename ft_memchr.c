/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakarya <azakarya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:32:11 by azakarya          #+#    #+#             */
/*   Updated: 2022/03/23 23:16:49 by azakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t		i;
	const char	*new;

	i = 0;
	new = arr;
	while (i < n)
	{
		if (new[i] == (char)c)
			return ((void *)(new + i));
		i++;
	}
	return (NULL);
}
