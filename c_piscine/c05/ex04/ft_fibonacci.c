/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:03:53 by lballa            #+#    #+#             */
/*   Updated: 2022/12/11 11:28:58 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci_recur(int index, int n1, int n2)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (n2);
	if (index > 1)
		return (ft_fibonacci_recur(index - 1, n2, n1 + n2));
	return (-1);
}

int	ft_fibonacci(int index)
{
	return (ft_fibonacci_recur(index, 0, 1));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("fibo-3=%d\n", ft_fibonacci(-3));
	printf("fibo0=%d\n", ft_fibonacci(0));
	printf("fibo9=%d\n", ft_fibonacci(9));
	return (0);
}
*/
