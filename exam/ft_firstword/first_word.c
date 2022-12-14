/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:28:19 by lballa            #+#    #+#             */
/*   Updated: 2022/12/13 14:32:13 by lballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ======================================./1-2- first_word.txt================*/
/* Assignment name : first_word */
/* Expected files : first_word.c */
/* Allowed functions: write */
/* ---------------------------------------------------------- ----------------*/
/* Write a program that takes a string and displays its first word, followed  */
/* by a newline.															  */
/* A word is a section of string delimited by spaces/tabs or by the start/end */
/* of the string.															  */
/* If the number of parameters is not 1, or if there are no words, simply     */
/* displaya newline. 														  */
/* Examples: 																  */
/* $> ./first_word "FOR PONY" | cat -e 										  */
/* FOR$ 																	  */
/* $> ./first_word "this ... is sparta, then again, maybe not" | cat -e 	  */
/* this$ 																	  */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	control;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\r')
			{
				write(1, &argv[1][i], 1);
				control = 1;
			}
			else if (argv[1][i] == ' ' && control == 1)
				return (0);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
