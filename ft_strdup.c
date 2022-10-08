/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakarya <azakarya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 21:28:09 by azakarya          #+#    #+#             */
/*   Updated: 2022/03/12 23:16:11 by azakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	void	*dup;

	len = ft_strlen(s1) + 1;
	dup = malloc(len);
	if (s1 == NULL)
		return (NULL);
	return ((char *)(ft_memcpy(dup, s1, len)));
}
