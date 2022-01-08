/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 00:57:29 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/08 07:37:08 by nsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stddef.h>

typedef enum e_status
{
	UNKNOWN,
	SUCCESS,
	ERROR,
	SEGV,
	BUS,
	TIMEOUT,
	INTERNAL_ERROR
}	t_status;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_test
{
	char		*name;
	int			(*callback)(void);
	t_status	status;
}	t_test;

typedef struct s_suite
{
	t_list			*tests;
	unsigned int	total;
	unsigned int	success;
}	t_suite;

/* libunit */
void	test_add(t_suite *suite, char *name, int (*callback)(void));
void	run_tests(t_suite *suite, char *section_name);

/* libft */
size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *s, int c, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s1);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **alst, void *content);
void	ft_lstclear(t_list **lst, void (*del)(void *));

#endif
