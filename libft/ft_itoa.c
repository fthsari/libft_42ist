/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsari <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:12:20 by fsari             #+#    #+#             */
/*   Updated: 2022/01/05 20:20:17 by fsari            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	bas_deg(int n)
{
	int	i;

	i = 1;
	if (0 > n)
	{
		n = -n;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;

	if (n == 0)
		return ("0");
	i = bas_deg(n);
	result = (char *)malloc((i + 1) * sizeof(char));
	result[i] = '\0';
	i--;
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	while (n != 0 && n > 0)
	{
		result[i] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	return (result);
}
