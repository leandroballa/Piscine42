/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_apha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:53:57 by lballa            #+#    #+#             */
/*   Updated: 2022/12/14 15:59:22 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	x;
	int	y;
	int	r;

	if (argc == 2)
	{
		x = 1;
		while (x < argc)
		{
			y = 0;
			while (argv[x][y] != '\0')
			{
				r = 1;
				if (argv[x][y] >= 'a' && argv[x][y] <= 'z')
					r += argv[x][y] - 'a';
				else if (argv[x][y] >= 'A' && argv[x][y] <= 'Z')
					r += argv[x][y] - 'A';
				while (r)
				{
					write(1, &argv[x][y], 1);
					r--;
				}
				y++;
			}
			x++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
