/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:44:39 by slegaris          #+#    #+#             */
/*   Updated: 2023/03/21 17:56:36 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	
	p = s;
	while (n > 0)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
		n--;
	}
	return (NULL);
}
