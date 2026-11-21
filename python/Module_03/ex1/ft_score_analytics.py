#!/usr/bin/env python3
# ########################################################################### #
#   shebang: 1                                                                #
#                                                          :::      ::::::::  #
#   ft_score_analytics.py                                :+:      :+:    :+:  #
#                                                      +:+ +:+         +:+    #
#   By: fradiaz <fradiaz@student.42malaga.com>       +#+  +:+       +#+       #
#                                                  +#+#+#+#+#+   +#+          #
#   Created: 2026/11/20 08:03:19 by fradiaz             #+#    #+#            #
#   Updated: 2026/11/20 10:15:28 by fradiaz            ###   ########.fr      #
#                                                                             #
# ########################################################################### #

import sys


def validate_input(value: str) -> int:
    try:
        new = int(value)
    except ValueError:
        raise ValueError(f"Invalid parameter: '{value}'")
    return new


def process_input() -> None:
    array_num = list()
    if len(sys.argv) == 1:
        print(
            f"No scores provided. Usage: python{sys.version[0]} {sys.argv[0]}"
            "<score1> <score2> ..."
        )
        return
    try:
        for arg in sys.argv[1:]:
            new = validate_input(arg)
            array_num.append(new)
    except ValueError as error:
        print(f"{error}")
        print(
            f"No scores provided. Usage: python{sys.version[0]} {sys.argv[0]}"
            "<score1> <score2> ..."
        )
    else:
        print(
            f"Scores processed: {array_num}\n"
            f"Total players: {len(array_num)}\n"
            f"Total score: {sum(array_num)}\n"
            f"Average score: {round(sum(array_num) / len(sys.argv[1:]), 1)}\n"
            f"High score: {max(array_num)}\n"
            f"Low score: {min(array_num)}\n"
            f"Score range: {max(array_num) - min(array_num)}"
        )


if __name__ == "__main__":
    print("=== Player Score Analytics ===")
    process_input()
