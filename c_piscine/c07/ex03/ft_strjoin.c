/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 11:42:21 by lballa            #+#    #+#             */
/*   Updated: 2022/12/12 16:52:11 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strejoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		x;
	int		y;
	int		r;

	ret = (char *) malloc(size);
	if (size == 0)
	{
		ret = NULL;
		return (ret);
	}
	x = 0;
	y = 0;
	r = 0;
	while (strs[x][y] != '\0')
	{
		y = 0;
		while (strs[x][y] != '\0')
		{
			ret[r++] = strs[0][y];
			y++;
			ret[r++] = sep[0];
		}
		ret[r - 1] = '\0';
		x++;
	}
	return (ret);
}

#include <stdio.h>
int	main(void)
{
	char	se = ';';
	char	*st[4];
	char	*ret;
	int		i;
	int		s;

	st[0] = "a";
	st[1] = "b";
	st[2] = "c";
	st[3] = "d";
	s = sizeof (st);
	printf("s%d\n", s);
	ret = ft_strejoin( s, st, &se);
	i = 0;
	while (ret[i] != '\0')
	{
		printf("%c", ret[i]);
		i++;
	}
	return (0);
}

