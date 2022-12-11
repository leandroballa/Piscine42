/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:25:33 by lballa            #+#    #+#             */
/*   Updated: 2022/12/10 11:24:37 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ret;
	int	i;

	if (min > max || min == max)
	{
		*range = NULL;
		return (0);
	}
	ret = (int *) malloc (max - min);
	i = 0;
	while (min < max)
	{
		ret[i] = min;
		min++;
		i++;
	}
	*range = ret;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	int	size;
	int	*arr;
	int	i;

	i = 0;
	size = ft_ultimate_range(&arr, 1, 10);
	printf("size=%d\n", size);
	while (i < size)
	{
		printf("n:%d\n", arr[i]);
		i++;
	}
	return (0);
}
*/
