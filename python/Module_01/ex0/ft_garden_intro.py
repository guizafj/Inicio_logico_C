# ########################################################################### #
#   shebang: 0                                                                #
#                                                          :::      ::::::::  #
#   ft_garden_intro.py                                   :+:      :+:    :+:  #
#                                                      +:+ +:+         +:+    #
#   By: fradiaz <fradiaz@student.42malaga.com>       +#+  +:+       +#+       #
#                                                  +#+#+#+#+#+   +#+          #
#   Created: 2026/10/26 22:19:40 by fradiaz             #+#    #+#            #
#   Updated: 2026/10/27 02:36:31 by fradiaz            ###   ########.fr      #
#                                                                             #
# ########################################################################### #


def ft_garden_intro() -> None:
    name = "Rose"
    height = 25
    age = 30

    print("===  Welcome to My Garden ===")
    print(f"Plant: {name}")
    print(f"Height: {height}cm")
    print(f"Age: {age} days\n")
    print("=== End of Program ===")


if __name__ == "__main__":
    ft_garden_intro()
