/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:20:14 by lballa            #+#    #+#             */
/*   Updated: 2022/11/28 16:25:04 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 4;
	y = 2;
	printf("Before a : %d, b : %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("After a : %d, b : %d\n", x, y);
}*/
