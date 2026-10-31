# ########################################################################### #
#   shebang: 0                                                                #
#                                                          :::      ::::::::  #
#   ft_garden_security.py                                :+:      :+:    :+:  #
#                                                      +:+ +:+         +:+    #
#   By: fradiaz <fradiaz@student.42malaga.com>       +#+  +:+       +#+       #
#                                                  +#+#+#+#+#+   +#+          #
#   Created: 2026/10/27 02:44:03 by fradiaz             #+#    #+#            #
#   Updated: 2026/10/27 16:30:17 by fradiaz            ###   ########.fr      #
#                                                                             #
# ########################################################################### #


class Plant:
    def __init__(self, name: str, height: float, age: int):
        self.name = name
        self._height = height
        self._age = age

    def get_height(self) -> float:
        return self._height

    def get_age(self) -> int:
        return self._age

    def set_height(self, height: float) -> None:
        if height < 0:
            print(f"{self.name}: Error height can't be negative")
            print("Height update reject")
        else:
            self._height = height
            print(f"Height update: {round(self.get_height())}cm")

    def set_age(self, age: int) -> None:
        if age < 0:
            print(f"{self.name}: Error age can't be negative")
            print("Age update reject")
        else:
            self._age = age
            print(f"Age update: {self.get_age()} days")

    def show(self, state: str) -> None:
        if state.lower() == "show":
            print(f"Plant created: {self.name.capitalize()}: ", end="")
            print(f"{round(self.get_height(), 1)}cm, ", end="")
            print(f"{self.get_age()} days old")
        elif state.lower() == "current":
            print(f"Current state: {self.name.capitalize()}: ", end="")
            print(f"{round(self.get_height(), 1)}cm, ", end="")
            print(f"{self.get_age()} days old")
        else:
            print("!Option wrong")


if __name__ == "__main__":
    plant_1 = Plant("Rose", 15.0, 10)
    print("=== Garden Security System ===")
    plant_1.show("show")
    print(" ")
    plant_1.set_height(25.0)
    plant_1.set_age(30)
    print(" ")
    plant_1.set_height(-1)
    plant_1.set_age(-3)
    print(" ")
    plant_1.show("current")
