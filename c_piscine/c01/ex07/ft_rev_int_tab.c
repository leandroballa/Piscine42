/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:53:03 by lballa            #+#    #+#             */
/*   Updated: 2022/11/28 16:51:06 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	while (a < size)
	{
		b = tab[size - 1];
		tab[(size -1)] = tab[a];
		tab[a] = b;
		a++;
		size--;
	}
}
/*
int	main(void)
{
	int ar[] = {'1', '2', '3', '4'};
	int	x = 4;
	int	i = 0;

	ft_rev_int_tab(ar, x);
	while (i < x)
	{
		write(1, &ar[i], 1);
		i++;
	}
	return (0);
}*/
