# ************************************************************************* #
#                                                                           #
#                                                      :::      ::::::::    #
#  ft_count_harvest_iterative.py                     :+:      :+:    :+:    #
#                                                  +:+ +:+         +:+      #
#  By: fradiaz <fradiaz@student.42.fr>           +#+  +:+       +#+         #
#                                              +#+#+#+#+#+   +#+            #
#  Created: 2026/10/26 14:04:31 by fradiaz         #+#    #+#               #
#  Updated: 2026/10/26 14:26:32 by fradiaz         ###   ########.fr        #
#                                                                           #
# ************************************************************************* #

def ft_count_harvest_iterative() -> None:
    to_harvest = int(input("Days until harvest: "))
    for i in range(1, (to_harvest + 1)):
        print(f"Day {i}")
    print("Harvest time!")
