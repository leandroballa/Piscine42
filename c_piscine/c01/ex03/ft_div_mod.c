/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:22:33 by lballa            #+#    #+#             */
/*   Updated: 2022/11/28 16:24:53 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	d;
	int	m;

	x = 8;
	y = 2;
	ft_div_mod(x, y, &d, &m);
	printf("a : %d, b : %d, div : %d, mod : %d\n", x, y, d, m);
}*/
