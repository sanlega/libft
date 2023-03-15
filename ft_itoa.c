/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:12:46 by slegaris          #+#    #+#             */
/*   Updated: 2023/03/15 16:58:12 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

// static int	min(long int n)
// {

// 	return(n);
// }

static size_t	ft_intlen(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 1;
	len = 0;
	if (n < 0)
	{
		sign = -1;
		n = -n;
		len++;
	}
	len += ft_intlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len-- > 0)
	{
		str[len] = '0' + (n % 10);
		n /= 10;
	}
	if (sign < 0)
		str[0] = '-';
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	return 0;
}*/
