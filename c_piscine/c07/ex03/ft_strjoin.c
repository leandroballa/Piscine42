/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 11:42:21 by lballa            #+#    #+#             */
/*   Updated: 2022/12/11 12:48:17 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
char	*ft_strejoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		x;
	int		r;

	ret = (char *) malloc((size * 2));
	printf("sizeRet%lu\n", sizeof (ret));
	if (size == 0)
	{
		ret = NULL;
		return ret;
	}
	x = 0;
	r = 0;
	while (x < (size - 2))
	{
		//printf("%c", strs[0][x]);
		ret[r++] = strs[0][x];
		x++;
		if (x != (size - 2))
		{
			//printf("%c\n", sep[0]);
			ret[r++] = sep[0];
		}
	}
	return (ret);
}
#include <stdio.h>
int	main(void)
{
	char	se = ',';
	char	*st = "abcdef";
	char	*ret;
	int		i;

	printf("size%lu\n", sizeof (st));
	ret = ft_strejoin( sizeof (st), &st, &se);
	i = 0;
	while (i < (sizeof (st) - 1))
	{
		printf("%c", ret[i]);
		i++;
	}
	return (0);
}
