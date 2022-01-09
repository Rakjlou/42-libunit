/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 00:53:20 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 00:55:54 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putnbr_positive(long nb)
{
	char	printed;

	if (nb >= 10)
		ft_putnbr_positive(nb / 10);
	printed = '0' + (nb % 10);
	write(STDOUT_FILENO, &printed, 1);
}

void	ft_putnbr(int n)
{
	long	number;

	number = n;
	if (number < 0)
	{
		write(STDOUT_FILENO, "-", 1);
		number = -number;
	}
	ft_putnbr_positive(number);
}
