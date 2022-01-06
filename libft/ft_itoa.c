/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsari <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:12:20 by fsari             #+#    #+#             */
/*   Updated: 2022/01/06 16:14:33 by fsari            ###   ########.tr       */
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

char	*cringe(int i)
{
	char	*c;

	if (i == 0)
	{
		c = "0";
		return (c);
	}
	if (i == -2147483648)
	{
		c = "-2147483648";
		return (c);
	}
	return (NULL);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;

	i = bas_deg(n);
	result = (char *)malloc((i + 1) * sizeof(char));
	if (n == 0)
		return (cringe(n));
	if (n == -2147483648)
		return (cringe(n));
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
