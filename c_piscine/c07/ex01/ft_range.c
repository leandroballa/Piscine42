/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:09:10 by lballa            #+#    #+#             */
/*   Updated: 2022/12/08 14:15:45 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret;
	int	i;

	if (min > max || min == max)
		return (ret);
	ret = malloc(4 * (max - min));
	i = 0;
	while (min < max)
	{
		ret[i] = min;
		min++;
		i++;
	}
	return (ret);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*dest;
	int i;

	dest = ft_range(1, 10);
	i = 0;
	while (dest[i] != '\0')
	{
		printf("%d\n", dest[i]);
		i++;
	}
	return (0);
}
*/
