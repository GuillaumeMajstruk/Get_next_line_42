/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmajstru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 16:56:18 by gmajstru          #+#    #+#             */
/*   Updated: 2018/07/24 16:56:37 by gmajstru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

# define BUFF_SIZE 1000

int	get_next_line(const int fd, char **line);

#endif
