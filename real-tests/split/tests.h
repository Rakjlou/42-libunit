/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 00:00:20 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 02:51:57 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

void	free_split(char **split);
int		test_simple(void);
int		test_no_split(void);
int		test_split_on_zero(void);
int		test_only_splittable_chars(void);
int		test_empty_string(void);
int		test_split_char_end(void);
int		test_split_char_start(void);
int		test_split_char_start_end(void);
int		test_complex(void);

#endif
