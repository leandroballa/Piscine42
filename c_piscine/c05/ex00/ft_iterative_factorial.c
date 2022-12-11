/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:57:58 by lballa            #+#    #+#             */
/*   Updated: 2022/12/05 18:10:58 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ret;
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	ret = 1;
	while (i <= nb)
	{
		ret *= i;
		i++;
	}
	return (ret);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}
*/
