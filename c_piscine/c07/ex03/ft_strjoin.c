/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 11:42:21 by lballa            #+#    #+#             */
/*   Updated: 2022/12/12 17:22:53 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strejoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		x;
	int		y;
	int		r;

	ret = (char *) malloc(sizeof (strs));
	x = 0;
	r = 0;
	while (x < size)
	{
		y = 0;
		while (strs[x][y] != '\0')
			ret[r++] = strs[x][y++];
		y = 0;
		while (sep[y] != '\0')
			ret[r++] = sep[y++];
		x++;
	}
	ret[r] = '\0';
	return (ret);
}
/*
#include <stdio.h>
int	main(void)
{
	//char	se = "balla";
	char	*st[4];
	char	*ret;

	st[0] = " ";
	st[1] = " ";
	st[2] = " ";
	st[3] = " ";
	ret = ft_strejoin( 4, st, "balla");
	printf("%s\n", ret);
	return (0);
}
*/
