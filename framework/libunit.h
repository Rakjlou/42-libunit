/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsierra- <nsierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 00:57:29 by nsierra-          #+#    #+#             */
/*   Updated: 2022/01/09 06:59:18 by nsierra-         ###   ########.fr       */
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
	ABORT,
	FPE,
	PIPE,
	ILL,
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
	long		timeout;
}	t_test;

typedef struct s_suite
{
	t_list	*tests;
	int		total;
	int		success;
	int		capture_pipe[2];
	int		stdout;
}	t_suite;

t_test	*test_add(t_suite *suite, char *name, int (*callback)(void));
void	run_tests(t_suite *suite, char *section_name);
void	init_suite(t_suite *suite);
int		end_suite(t_suite *suite);
int		start_stdout_capture(t_suite *suite);
void	end_stdout_capture(t_suite *suite);
int		get_stdout_fd(t_suite *s);
char	*get_stdout_line(void);
void	setup_timer(long timeout);

/* libft */
typedef struct s_gnl_node
{
	char				*buffer;
	size_t				start;
	size_t				end;
	size_t				len;
	struct s_gnl_node	*next;
}	t_gnl_node;

size_t	ft_strlen(const char *s);
void	ft_putnbr(int n);
void	ft_putstr(const char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *s, int c, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s1);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **alst, void *content);
void	ft_lstclear(t_list **lst, void (*del)(void *));
char	*get_next_line(int fd);

#endif
