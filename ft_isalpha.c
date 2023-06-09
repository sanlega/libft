/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:44:16 by slegaris          #+#    #+#             */
/*   Updated: 2023/04/05 15:54:59 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
/*
int	main(void)
{
	unsigned char c = 'a';

	printf("%d", ft_isalpha(c));
	return 0;
}
*/

	// if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	// 	return (1);
	// else
	// 	return (0);
