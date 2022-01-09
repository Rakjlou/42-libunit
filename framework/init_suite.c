/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_suite.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 00:37:26 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 00:37:46 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	init_suite(t_suite *suite)
{
	suite->tests = NULL;
	suite->total = 0;
	suite->success = 0;
}
