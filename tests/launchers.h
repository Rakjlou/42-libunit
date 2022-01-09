/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launchers.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 23:46:57 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 00:05:16 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LAUNCHERS_H
# define LAUNCHERS_H

# include "libunit.h"

void	success_launcher(t_suite *suite);
void	failure_launcher(t_suite *suite);
void	sigsev_launcher(t_suite *suite);
void	sigbus_launcher(t_suite *suite);

#endif
