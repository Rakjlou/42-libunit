/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 23:46:31 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 03:02:39 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "launchers.h"

int	main(void)
{
	t_suite	suite;

	init_suite(&suite);
	launcher_atoi(&suite);
	launcher_split(&suite);
	return (end_suite(&suite));
}
