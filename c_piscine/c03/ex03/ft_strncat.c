/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:13:19 by lballa            #+#    #+#             */
/*   Updated: 2022/12/06 15:06:34 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				d;
	unsigned int	s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
		d++;
	while (src[s] != '\0' && s < nb)
	{
		dest[d] = src[s];
		s++;
		d++;
	}
	dest[d] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char dst[10] = "abc";
	char sr[] = "defghi";
	char	*desti;

	desti = ft_strncat(dst, sr, 3);
	printf("%s", dst);
	return (0);
}
*/
