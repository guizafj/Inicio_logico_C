/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 10:48:16 by fradiaz           #+#    #+#             */
/*   Updated: 2026/08/21 15:43:36 by fradiaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SHOW_TAB_H

# include <stdlib.h>
# include <unistd.h>

# define FT_SHOW_TAB_H

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
#endif
