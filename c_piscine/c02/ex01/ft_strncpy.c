/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:30:31 by lballa            #+#    #+#             */
/*   Updated: 2022/11/30 15:47:40 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' & i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include<unistd.h>
int	main(void)
{
	char	dest[20];
	char	src[] = "9876543210";
	char	*dest_src;

	dest_src = ft_strncpy(dest, src, 5);
	write(1, dest, 20);
	write(1, "\n", 1);
	write(1, dest_src, 20);
	return (0);
}*/
