/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libasm.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: coscialp <coscialp@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/22 15:33:02 by coscialp     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 18:14:16 by coscialp    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

ssize_t		ft_read(int fd, void *buf, size_t count);
ssize_t		ft_write(int fd, const void *_buf, ssize_t nbytes);
size_t		ft_strlen(const char *s);
int			ft_strcmp(const char *rdi, const char *rsi);
char		*ft_strcpy(char *dest, const char *src);
char		*ft_strdup(char *str);

#endif