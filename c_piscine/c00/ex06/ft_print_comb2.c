/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:21:20 by lballa            #+#    #+#             */
/*   Updated: 2022/12/15 10:04:17 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_write(int i)
{
	char	dec[2];

	dec[0] = i / 10 + '0';
	dec[1] = i % 10 + '0';
	write(1, dec, 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_write(a);
			write(1, " ", 1);
			ft_write(b);
			if (a == 98 && b == 99)
			{
				return ;
			}
			write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
