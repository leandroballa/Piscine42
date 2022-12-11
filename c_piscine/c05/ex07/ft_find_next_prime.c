/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:30:36 by lballa            #+#    #+#             */
/*   Updated: 2022/12/11 11:24:36 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (2);
	i = nb;
	while (!ft_is_prime(i))
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("3=%d\n", ft_find_next_prime(3));
	printf("4=%d\n", ft_find_next_prime(4));
	printf("5=%d\n", ft_find_next_prime(5));
	printf("98=%d\n", ft_find_next_prime(98));
	printf("100=%d\n", ft_find_next_prime(100));
	printf("113=%d\n", ft_find_next_prime(113));
	return (0);
}
*/
