/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maringar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:19:00 by maringar          #+#    #+#             */
/*   Updated: 2022/07/24 20:10:00 by maringar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_atoi(char *str);
char	*valid_argv(int argc, char **argv);
int		val_nums(char *str);

char	*ft_read_dic(char *dic);
int		val_dict(char *dic);
int		ft_search_num(char *dic, char *num);
char	*ft_name_num(char *num, char *dict);

char	*ft_get_pack(char *str);
char	*ft_rest_str(char *str);

char	*ft_hundreds(char *pack, char *dict);

void	ft_main_program(char *str, char *dict);
char	*get_zeros(char *str);
