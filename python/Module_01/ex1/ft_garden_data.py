# ########################################################################### #
#   shebang: 0                                                                #
#                                                          :::      ::::::::  #
#   ft_garden_data.py                                    :+:      :+:    :+:  #
#                                                      +:+ +:+         +:+    #
#   By: fradiaz <fradiaz@student.42malaga.com>       +#+  +:+       +#+       #
#                                                  +#+#+#+#+#+   +#+          #
#   Created: 2026/10/26 22:48:34 by fradiaz             #+#    #+#            #
#   Updated: 2026/10/27 02:36:36 by fradiaz            ###   ########.fr      #
#                                                                             #
# ########################################################################### #


class Plant:
    def __init__(self, name: str, height: int, age: int):
        self.name = name
        self.height = height
        self.age = age

    def show(self) -> None:
        print(f"{self.name}: {self.height}cm, {self.age} days old")


if __name__ == "__main__":
    plant_1 = Plant("Rose", 25, 30)
    plant_2 = Plant("Sunflower", 80, 45)
    plant_3 = Plant("Cactus", 15, 120)
    plant_4 = Plant("Orquidea", 20, 45)

    print("=== Garden Plant Registry ===")
    plant_1.show()
    plant_2.show()
    plant_3.show()
    plant_4.show()
