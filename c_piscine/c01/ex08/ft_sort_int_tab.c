/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:26:48 by lballa            #+#    #+#             */
/*   Updated: 2022/12/15 11:40:54 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	swp;
	int	y;

	x = 1;
	while (x < size)
	{
		swp = tab[x];
		y = x - 1;
		while (y >= 0 && tab[y] > swp)
		{
			tab[y + 1] = tab[y];
			y = y - 1;
		}
		tab[y + 1] = swp;
		x++;
	}
}
/*
#include <unistd.h>
int	main(void)
{
	int		*arr;
	int		i;
	char	l;

	arr[0] = 3;
	arr[1] = 1;
	arr[2] = 4;
	arr[3] = 2;
	ft_sort_int_tab(arr, 4);
	i = 0;
	while (i < 4)
{
		l = arr[i] + '0';
		write(1, &l, 1);
		i++;
	}
	return (0);

}
*/
