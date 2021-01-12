/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 07:25:41 by monoue            #+#    #+#             */
/*   Updated: 2021/01/12 16:12:50 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBASM_H
# define LIBASM_H

# include <stdio.h>

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <sys/types.h>

# define ESC		"\033"
# define RED_S		ESC"[31:1m"
# define GREEN_S	ESC"[32:1m"
# define YELLOW_S	ESC"[33:1m"
# define BLUE_S		ESC"[34:1m"
# define PURPLE_S	ESC"[35:1m"
# define CYAN_S		ESC"[36:1m"
# define RESET		ESC"[m"

# define OK	0
# define KO	1

# define ITOC(num) num + '0' 

typedef enum	e_colors{
	RED_N,
	GREEN_N,
	YELLOW_N,
	BLUE_N,
	PURPLE_N,	
	CYAN_N,

	COLORS_NUM
}				t_colors;

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fildes, const void *buf, size_t nbyte);
// ssize_t	ft_read(int fildes, void *buf, size_t nbyte);
// char	*ft_strdup(const char *s1);

#endif
