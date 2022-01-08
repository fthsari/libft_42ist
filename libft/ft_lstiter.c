/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsari <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:19:42 by fsari             #+#    #+#             */
/*   Updated: 2022/01/08 14:22:14 by fsari            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*node;

	if (lst != NULL)
	{
		node = lst;
		while (1)
		{
			(*f)(node->content);
			node = node->next;
			if (node == NULL)
				return ;
		}
	}
}
