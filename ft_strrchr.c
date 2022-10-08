/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakarya <azakarya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:09:33 by azakarya          #+#    #+#             */
/*   Updated: 2022/03/20 21:41:07 by azakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size;

	size = ft_strlen(s);
	if (s)
	{
		if ((char)c == '\0')
			return ((char *)s + size);
		while (size > 0 && s[size - 1])
		{
			if (s[size - 1] == (char)c)
				return ((char *)(s + size - 1));
			size--;
		}
	}
	return (NULL);
}
