# ########################################################################### #
#   shebang: 0                                                                #
#                                                          :::      ::::::::  #
#   ft_plant_factory.py                                  :+:      :+:    :+:  #
#                                                      +:+ +:+         +:+    #
#   By: fradiaz <fradiaz@student.42malaga.com>       +#+  +:+       +#+       #
#                                                  +#+#+#+#+#+   +#+          #
#   Created: 2026/10/27 01:50:33 by fradiaz             #+#    #+#            #
#   Updated: 2026/10/27 02:39:07 by fradiaz            ###   ########.fr      #
#                                                                             #
# ########################################################################### #


class Plant:
    def __init__(self, name: str, height: float, age: int):
        self.name = name
        self.height = height
        self.age = age

    def show(self) -> None:
        print(f"Created: {self.name.capitalize()}: ", end="")
        print(f"{round(self.height, 1)},cm {self.age} days old")


if __name__ == "__main__":
    plants = {
        "plant_1": Plant("Rose", 25.0, 30),
        "plant_2": Plant("Oak", 200.0, 365),
        "plant_3": Plant("Cactus", 5.0, 90),
        "plant_4": Plant("Sunflower", 80.0, 90),
        "plant_5": Plant("Fern", 15.0, 120),
    }
    print("=== Plant Factory Output ===")
    for value in plants.values():
        value.show()
