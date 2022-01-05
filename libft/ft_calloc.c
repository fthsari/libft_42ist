/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsari <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:25:03 by fsari             #+#    #+#             */
/*   Updated: 2022/01/04 11:38:10 by fsari            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*a;
	int		i;

	i = 0;
	a = (void *)malloc(count * size);
	if (!a)
		return (NULL);
	while (i < count)
	{
		a[i] = '0';
		i++;
	}
	return (a);
}
