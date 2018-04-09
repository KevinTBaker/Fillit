/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lapang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 22:28:20 by lapang            #+#    #+#             */
/*   Updated: 2018/04/02 12:50:54 by kbaker           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "./libft/libft.h"
# include <sys/stat.h>
# include <fcntl.h>

typedef	struct	s_map
{
	int			xmax;
	int			ymax;
	char		**array;
}				t_map;

typedef struct s_char
{
	int			hash;
	int			dot;
	int			newline;
}				t_char;


#endif
