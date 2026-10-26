# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_plot_area.py                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fradiaz <fradiaz@student.42malaga.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/25 23:29:31 by fradiaz           #+#    #+#              #
#    Updated: 2026/10/26 10:53:45 by fradiaz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

def ft_plot_area()->None:
	length = int(input("Enter length: "))
	width = int(input("Enter width: "))
	print(f"Plot area: {length * width}")
