# ########################################################################### #
#   shebang: 0                                                                #
#                                                          :::      ::::::::  #
#   ft_plant_types.py                                    :+:      :+:    :+:  #
#                                                      +:+ +:+         +:+    #
#   By: fradiaz <fradiaz@student.42malaga.com>       +#+  +:+       +#+       #
#                                                  +#+#+#+#+#+   +#+          #
#   Created: 2026/10/27 17:32:59 by fradiaz             #+#    #+#            #
#   Updated: 2026/10/28 16:25:36 by fradiaz            ###   ########.fr      #
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
            self._height += height

    def set_age(self, age: int) -> None:
        if age < 0:
            print(f"{self.name}: Error age can't be negative")
            print("Age update reject")
        else:
            self._age += age

    def show(self) -> None:
        print(f"{self.name.capitalize()}: ", end="")
        print(f"{round(self.get_height(), 1)}cm, {self.get_age()} days old")


class Flower(Plant):
    def __init__(self, name: str, height: float, age: int, color: str):
        super().__init__(name, height, age)
        self.color = color
        self.bloom = False

    def is_bloom(self) -> None:
        if self.bloom:
            print(f" {self.name} is blooming beatifully!")
        else:
            print(f" {self.name} has not bloomed yet")
            print(f"[asking the {self.name} to bloom]")
            self.bloom = True

    def show_flower(self) -> None:
        self.show()
        print(f" Color: {self.color.capitalize()}")
        self.is_bloom()


class Tree(Plant):
    def __init__(self, name: str, height: float, age: int,
                 trunk_diameter: float):
        super().__init__(name, height, age)
        self.trunk_diameter = trunk_diameter
        self.shade: float = 0

    def produce_shade(self) -> None:
        print(f"[asking the {self.name} to produce shade]")
        if self.get_age() == 0 or self.get_height() == 0:
            print("An age and height are required.")
        else:
            self.shade = self.get_height()
            print(f"Tree {self.name} now produces a shade of ", end="")
            print(f"{self.shade}cm long and ", end="")
            print(f"{round(self.trunk_diameter, 1)}cm wide.")

    def show_tree(self) -> None:
        self.show()
        print(f" Trunk diameter: {round(self.trunk_diameter, 1)}cm")
        self.produce_shade()


class Vegetable(Plant):
    def __init__(self, name: str, height: float, age: int,
                 harvest_season: str):
        super().__init__(name, height, age)
        self.harvest_season = harvest_season
        self.nutricional_value: float = 0

    def make_grow(self, days: int) -> None:
        print(f"[make {self.name} grow and age for {days} days]")
        self.set_age(days)
        self.set_height(2.1 * days)
        self.nutricional_value = days
        self.show_vegetable()

    def show_vegetable(self):
        self.show()
        print(f" Harvest season: {self.harvest_season.capitalize()}")
        print(f" Nutricional value: {round(self.nutricional_value, 0)}")


if __name__ == "__main__":
    plant_1 = Flower("Rose", 15.0, 10, "red")
    plant_2 = Tree("Oak", 200.0, 365, 5.0)
    plant_3 = Vegetable("Tomato", 5.0, 10, "April")

    print("=== Garden Plant Types ===")
    print("=== Flower")
    plant_1.show_flower()
    plant_1.show_flower()
    print("\n==== Tree")
    plant_2.show_tree()
    print("\n=== Vegetable")
    plant_3.show_vegetable()
    plant_3.make_grow(20)
