/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:45:15 by lballa            #+#    #+#             */
/*   Updated: 2022/12/15 13:07:13 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that prints the numbers from 1 to 100, each separated by a
newline.
If the number is a multiple of 3, it prints 'fizz' instead.
If the number is a multiple of 5, it prints 'buzz' instead.
If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.
Example:
$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz*/

#include <unistd.h>

void ft_print(int i)
{
	char	n;

	if (i > 9)
	{
		n = i / 10 + '0';
		write(1, &n, 1);
	}
	n = i % 10 + '0';
	write(1, &n, 1);
}

int	main(void)
{
	int		i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
				write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else{
			ft_print(i);
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
