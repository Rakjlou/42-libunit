/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_ill.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 07:06:05 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 07:08:48 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>

int	ill_test(void)
{
	raise(SIGILL);
	return (0);
}
