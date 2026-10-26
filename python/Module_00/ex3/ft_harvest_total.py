# ************************************************************************* #
#                                                                           #
#                                                      :::      ::::::::    #
#  ft_harvest_total.py                               :+:      :+:    :+:    #
#                                                  +:+ +:+         +:+      #
#  By: fradiaz <fradiaz@student.42.fr>           +#+  +:+       +#+         #
#                                              +#+#+#+#+#+   +#+            #
#  Created: 2026/10/26 14:04:17 by fradiaz         #+#    #+#               #
#  Updated: 2026/10/26 14:25:48 by fradiaz         ###   ########.fr        #
#                                                                           #
# ************************************************************************* #

def ft_harvest_total() -> None:
    day_one = int(input("Day 1 harvest: "))
    day_two = int(input("Day 2 harvest: "))
    day_three = int(input("Day 3 harvest: "))
    print(f"Total harvest: {day_one + day_two + day_three}")
