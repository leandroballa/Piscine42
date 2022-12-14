/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:29:05 by lballa            #+#    #+#             */
/*   Updated: 2022/12/08 11:43:45 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	x;

	if (argc > 1)
	{
		i = argc - 1;
		while (i >= 1)
		{
			x = 0;
			while (argv[i][x] != '\0')
			{
				write (1, &argv[i][x], 1);
				x++;
			}
			i--;
			write(1, "\n", 1);
		}
	}
	return (0);
}
