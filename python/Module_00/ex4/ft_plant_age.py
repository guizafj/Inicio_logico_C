# ************************************************************************* #
#                                                                           #
#                                                      :::      ::::::::    #
#  ft_plant_age.py                                   :+:      :+:    :+:    #
#                                                  +:+ +:+         +:+      #
#  By: fradiaz <fradiaz@student.42.fr>           +#+  +:+       +#+         #
#                                              +#+#+#+#+#+   +#+            #
#  Created: 2026/10/26 14:04:22 by fradiaz         #+#    #+#               #
#  Updated: 2026/10/26 14:26:05 by fradiaz         ###   ########.fr        #
#                                                                           #
# ************************************************************************* #

def ft_plant_age() -> None:
    plant_age = int(input("Enter plant age in days: "))
    if (plant_age <= 60):
        print("Plant needs more time to grow.")
    else:
        print("Plant is ready to harvest!")
