/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azakarya <azakarya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 02:37:39 by azakarya          #+#    #+#             */
/*   Updated: 2022/03/21 02:42:01 by azakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	lstcount;

	lstcount = 0;
	while (lst)
	{
		lst = lst->next;
		lstcount++;
	}
	return (lstcount);
}
