/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsari <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:50:21 by fsari             #+#    #+#             */
/*   Updated: 2022/01/08 13:55:48 by fsari            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	if (lst != NULL)
	{
		node = lst;
		while (1)
		{
			if (node->next == NULL)
				return (node);
			node = node->next;
		}
	}
	return (NULL);
}
