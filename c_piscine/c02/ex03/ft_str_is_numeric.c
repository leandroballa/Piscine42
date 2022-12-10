/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:53:32 by lballa            #+#    #+#             */
/*   Updated: 2022/11/30 15:57:34 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' & str[i] <= '9')
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
	if (ft_str_is_numeric("abcdefg") == 0)
		write(1, "Character\n", 10);
	if (ft_str_is_numeric("ABCDEFG") == 0)
		write(1, "Character\n", 10);
	if (ft_str_is_numeric("0123456") == 1)
		write(1, "Digits\n", 7);
	if (ft_str_is_numeric("") == 1)
		write(1, "Empty", 5);
}*/
