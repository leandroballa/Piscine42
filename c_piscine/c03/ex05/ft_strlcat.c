/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:11:58 by lballa            #+#    #+#             */
/*   Updated: 2022/12/07 16:46:15 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res_d;
	unsigned int	res_s;

	i = ft_strlen(dest);
	j = 0;
	res_d = ft_strlen(dest);
	res_s = ft_strlen(src);
	if (size < 1)
		return (res_s + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < res_d)
		return (res_s + size);
	else
		return (res_d + res_s);
}
/*
#include <stdio.h>
int		main(void)
{
	char			dest[50] = "abcd";
	char			src[50] = "xyz";
	unsigned int	size;
	unsigned int	ret;

	size = 7;
	ret = ft_strlcat(dest, src, size);
	printf("%d\n", ret);
	printf("dest: %s\nsrc: %s\n", dest, src);
}
*/
