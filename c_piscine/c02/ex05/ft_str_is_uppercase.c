/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:05:56 by lballa            #+#    #+#             */
/*   Updated: 2022/11/30 16:08:40 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' & str[i] <= 'Z')
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
	if (ft_str_is_uppercase("abcdefg") == 0)
		write(1, "Lower\n", 6);
	if (ft_str_is_uppercase("ABCDEFG") == 1)
		write(1, "Upper\n", 6);
	if (ft_str_is_uppercase("0123456_") == 0)
		write(1, "Digits\n", 7);
	if (ft_str_is_uppercase("") == 1)
		write(1, "Empty", 5);
}*/
