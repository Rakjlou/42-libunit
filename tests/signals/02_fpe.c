/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_fpe.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 07:05:16 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 07:08:38 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>

int	fpe_test(void)
{
	raise(SIGFPE);
	return (0);
}
