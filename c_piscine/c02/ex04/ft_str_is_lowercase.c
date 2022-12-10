/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:02:40 by lballa            #+#    #+#             */
/*   Updated: 2022/11/30 16:05:11 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' & str[i] <= 'z')
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
	if (ft_str_is_lowercase("abcdefg") == 1)
		write(1, "Lower\n", 6);
	if (ft_str_is_lowercase("ABCDEFG") == 0)
		write(1, "Upper\n", 6);
	if (ft_str_is_lowercase("0123456") == 0)
		write(1, "Digits\n", 7);
	if (ft_str_is_lowercase("") == 1)
		write(1, "Empty", 5);
}*/
