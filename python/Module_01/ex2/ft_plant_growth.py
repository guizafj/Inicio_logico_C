# ########################################################################### #
#   shebang: 0                                                                #
#                                                          :::      ::::::::  #
#   ft_plant_growth.py                                   :+:      :+:    :+:  #
#                                                      +:+ +:+         +:+    #
#   By: fradiaz <fradiaz@student.42malaga.com>       +#+  +:+       +#+       #
#                                                  +#+#+#+#+#+   +#+          #
#   Created: 2026/10/26 23:16:46 by fradiaz             #+#    #+#            #
#   Updated: 2026/10/27 02:36:41 by fradiaz            ###   ########.fr      #
#                                                                             #
# ########################################################################### #


class Plant:
    def __init__(self, name: str, height: float, age: int):
        self.name = name
        self.height = height
        self.age = age

    def increase_grow(self) -> None:
        self.height += 0.8

    def increase_age(self):
        self.age += 1

    def show(self, days: int) -> None:
        print("=== Garden Plant Growth ===")
        for i in range(1, (days + 2)):
            print(f"{self.name}: {round(self.height, 1)}cm, ", end="")
            print(f"{self.age} days old")
            if i <= days:
                print(f"=== Day {i} ===")
                self.increase_age()
                self.increase_grow()
        print(f"Growth this week: {round(self.height, 1)}")


if __name__ == "__main__":
    plant_1 = Plant("Rose", 25.0, 30)
    plant_1.show(10)
