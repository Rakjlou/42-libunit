/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 23:46:31 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 04:05:08 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "launchers.h"

int	main(void)
{
	t_suite	suite;

	init_suite(&suite);
	success_launcher(&suite);
	failure_launcher(&suite);
	sigsev_launcher(&suite);
	sigbus_launcher(&suite);
	stdout_launcher(&suite);
	return (end_suite(&suite));
}
