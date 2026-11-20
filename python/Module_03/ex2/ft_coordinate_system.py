#!/usr/bin/env python3
# ########################################################################### #
#   shebang: 1                                                                #
#                                                          :::      ::::::::  #
#   ft_coordinate_system.py                              :+:      :+:    :+:  #
#                                                      +:+ +:+         +:+    #
#   By: fradiaz <fradiaz@student.42malaga.com>       +#+  +:+       +#+       #
#                                                  +#+#+#+#+#+   +#+          #
#   Created: 2026/11/20 10:25:47 by fradiaz             #+#    #+#            #
#   Updated: 2026/11/20 11:13:09 by fradiaz            ###   ########.fr      #
#                                                                             #
# ########################################################################### #

import math

def get_player_pos() -> None:
    try:
        num_pos = input("Enter new coordinates as floats in format "
                        "'x,y,z': ")
        pos_tuple = tuple(map(float, num_pos.split(",")))
    except ValueError:
        print("Invalid syntax")
    else:
        if len(pos_tuple) == 3:
            print(
                f"Got a first tuple: {pos_tuple}"
                f"It includes: X={pos_tuple[0]},"
                f"Y={pos_tuple[1]}, Z={pos_tuple[2]}"
            )


if __name__ == "__main__":
    get_player_pos()

