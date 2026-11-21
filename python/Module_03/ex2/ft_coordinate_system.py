#!/usr/bin/env python3
# ########################################################################### #
#   shebang: 1                                                                #
#                                                          :::      ::::::::  #
#   ft_coordinate_system.py                              :+:      :+:    :+:  #
#                                                      +:+ +:+         +:+    #
#   By: fradiaz <fradiaz@student.42malaga.com>       +#+  +:+       +#+       #
#                                                  +#+#+#+#+#+   +#+          #
#   Created: 2026/11/20 10:25:47 by fradiaz             #+#    #+#            #
#   Updated: 2026/11/21 16:50:27 by fradiaz            ###   ########.fr      #
#                                                                             #
# ########################################################################### #

import math


def fill_tuple(nums: str) -> tuple:
    result = []
    for item in nums.split(","):
        try:
            result.append(float(item))
        except ValueError as error:
            raise ValueError(f"Error on paramer '{item}': {error}")
    return tuple(result)


def get_first_player_pos() -> tuple:
    pos_one = ()
    try:
        num_pos = input("Enter new coordinates as floats in format x,y,z': ")
        pos_one = fill_tuple(num_pos)
    except ValueError:
        print("Syntax error")
        get_first_player_pos()
    else:
        if len(pos_one) != 3:
            get_first_player_pos()
        else:
            print(
                f"Got a first tuple: {pos_one}\n"
                f"It includes: X={pos_one[0]}, "
                f"Y={pos_one[1]}, Z={pos_one[2]}"
            )
            distance = math.sqrt(
                    (pos_one[0] ** 2)
                    + (pos_one[1] ** 2)
                    + pos_one[2] ** 2
                )
            print(f"Distance to center: {round(distance, 4)}\n")
    return pos_one


def get_second_player_pos() -> tuple:
    pos_tuple_second = ()
    try:
        num_pos = input("Enter new coordinates as floats in format x,y,z': ")
        pos_tuple_second = fill_tuple(num_pos)
    except ValueError as error:
        print(error)
        get_second_player_pos()
    return pos_tuple_second


def calculate_coordinates() -> None:
    pos_one = get_first_player_pos()
    pos_two = get_second_player_pos()
    if len(pos_one) != 3 or len(pos_two) != 3:
        print("Tuples invalid")
        return
    else:
        distance_general = math.sqrt(
            ((pos_two[0] - pos_one[0]) ** 2)
            + ((pos_two[1] - pos_one[1]) ** 2)
            + ((pos_two[2] - pos_one[2]) ** 2)
        )
        print(
            f"Distance between the 2 sets of coordinates: "
            f"{round(distance_general, 4)}"
        )


if __name__ == "__main__":
    print("=== Game Coordinates System ===\n")
    print("Get a first set of coordinates")
    calculate_coordinates()
