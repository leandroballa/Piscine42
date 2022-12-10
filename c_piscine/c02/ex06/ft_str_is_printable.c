/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:08:53 by lballa            #+#    #+#             */
/*   Updated: 2022/11/30 16:14:00 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' & str[i] <= '~')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <unistd.h>
int	main(void)
{
	if (ft_str_is_printable("abcdefg") == 1)
		write(1, "OK\n", 3);
	if (ft_str_is_printable("A\nBCDEFG") == 0)
		write(1, "OK\n", 3);
	if (ft_str_is_printable("0123456") == 1)
		write(1, "OK\n", 3);
}*/
