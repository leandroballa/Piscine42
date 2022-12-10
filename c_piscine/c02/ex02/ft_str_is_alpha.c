/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:35:25 by lballa            #+#    #+#             */
/*   Updated: 2022/11/30 15:52:26 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' & str[i] <= 'z') | (str[i] >= 'A' & str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include<unistd.h>
int	main(void)
{
	if (ft_str_is_alpha("abcdefg") == 1)
		write(1, "Alpha\n", 6);
	if (ft_str_is_alpha("ABCDEFG") == 1)
		write(1, "Alpha\n", 6);
	if (ft_str_is_alpha("0123456") == 0)
		write(1, "Character\n", 10);
	if (ft_str_is_alpha("") == 1)
		write(1, "Empty", 5);
}*/
