#!/usr/bin/env python3
# ########################################################################### #
#   shebang: 1                                                                #
#                                                          :::      ::::::::  #
#   ft_command_quest.py                                  :+:      :+:    :+:  #
#                                                      +:+ +:+         +:+    #
#   By: fradiaz <fradiaz@student.42malaga.com>       +#+  +:+       +#+       #
#                                                  +#+#+#+#+#+   +#+          #
#   Created: 2026/11/20 07:21:37 by fradiaz             #+#    #+#            #
#   Updated: 2026/11/20 10:13:44 by fradiaz            ###   ########.fr      #
#                                                                             #
# ########################################################################### #

import sys


def print_args() -> None:
    if len(sys.argv) == 1:
        print(
            f"Program name: {sys.argv[0]}\n"
            "No arguments provided!\n"
            f"Total arguments: {len(sys.argv)}"
        )
    else:
        print(
            f"Program name: {sys.argv[0]}\n"
            f"Arguments received: {len(sys.argv[1:])}"
        )
        i = 1
        for arg in sys.argv[1:]:
            print(f"Argument {i}: {arg}")
            i += 1
        print(f"Total arguments: {len(sys.argv)}")


if __name__ == "__main__":
    print("=== Comand Quest ===")
    print_args()
