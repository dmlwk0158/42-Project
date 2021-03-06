/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzeng <kzeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 19:13:49 by kzeng             #+#    #+#             */
/*   Updated: 2016/07/17 13:44:07 by kzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_print_middle_rows_results(int width, int x)
{
	if ((width == 0) || (width == x - 1))
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	ft_length_print(int length, int y, int x, int width)
{
	if ((length == 0) || (length == y - 1))
	{
		if ((width == 0) || (width == x - 1))
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
	}
	else
	{
		ft_print_middle_rows_results(width, x);
	}
}

void	rush(int x, int y)
{
	int width;
	int length;

	length = 0;
	if ((x > 0) && (y > 0))
	{
		while (length < y)
		{
			width = 0;
			while (width < x)
			{
				ft_length_print(length, y, x, width);
				width++;
			}
			ft_putchar('\n');
			length++;
		}
	}
	else
	{
		write(1, "\n", 1);
	}
}
