# ************************************************************************* #
#                                                                           #
#                                                      :::      ::::::::    #
#  ft_water_reminder.py                              :+:      :+:    :+:    #
#                                                  +:+ +:+         +:+      #
#  By: fradiaz <fradiaz@student.42.fr>           +#+  +:+       +#+         #
#                                              +#+#+#+#+#+   +#+            #
#  Created: 2026/10/26 14:04:27 by fradiaz         #+#    #+#               #
#  Updated: 2026/10/26 14:26:24 by fradiaz         ###   ########.fr        #
#                                                                           #
# ************************************************************************* #


def ft_water_reminder() -> None:
    watering_last = int(input("Days since last waterind: "))
    if watering_last > 2:
        print("Water the plants!")
    else:
        print("Plants are fine")
