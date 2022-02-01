/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utility.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 23:34:44 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/01 15:13:19 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_UTILITY_H
# define FILE_UTILITY_H
# include <unistd.h>
# include <fcntl.h>

int		valid_char(int i, char *inf, char c);
int		extract_row(char *line, int size);
int		valid_info(int index, char *line, t_info *info);
int		valid_each_line(t_info *info, int row, t_index *index_key, int **max);
int		valid_first_line(t_info *info, int *n_row);
char	*ft_read_line(int fd);

#endif
