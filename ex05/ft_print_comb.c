/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:55:45 by kgarcia           #+#    #+#             */
/*   Updated: 2023/07/06 10:32:54 by kgarcia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_int(int a)
{
	char	*chiffre;

	chiffre = "0123456789";
	write(1, chiffre + a, 1);
}

void	ft_print_nums(int a, int b, int c)
{
	ft_print_int(a);
	ft_print_int(b);
	ft_print_int(c);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_print_nums(a, b, c);
				if (a != 7 || b != 8 || c != 9)
				{
					write(1, ", ", 2);
				}
				c += 1;
			}
			b += 1;
		}
		a += 1;
	}
}
