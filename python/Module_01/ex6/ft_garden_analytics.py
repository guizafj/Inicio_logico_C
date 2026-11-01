#!/usr/bin/env python3
# ########################################################################### #
#   shebang: 1                                                                #
#                                                          :::      ::::::::  #
#   ft_garden_analytics.py                               :+:      :+:    :+:  #
#                                                      +:+ +:+         +:+    #
#   By: fradiaz <fradiaz@student.42malaga.com>       +#+  +:+       +#+       #
#                                                  +#+#+#+#+#+   +#+          #
#   Created: 2026/10/28 16:32:06 by fradiaz             #+#    #+#            #
#   Updated: 2026/11/01 21:58:42 by fradiaz            ###   ########.fr      #
#                                                                             #
# ########################################################################### #


class Plant:
    def __init__(self, name: str, height: float, age: int):
        self.name = name
        self._height = height
        self._age = age
        self.count_grow = 0
        self.count_show = 0
        self.count_age = 0
        self.count_shade = 0

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
        self.count_age += 1

    def show(self) -> None:
        print(f"{self.name.capitalize()}: ", end="")
        print(f"{round(self.get_height(), 1)}cm, {self.get_age()} days old")
        self.count_show += 1

    @staticmethod
    def check_age(age: int) -> None:
        if age < 365:
            print(f"Is {age} days more than year? -> False")
        else:
            print(f"Is {age} days more than year? -> True")

    @classmethod
    def create_anonymous(cls) -> "Plant":
        return cls("Unknown plant", 0.0, 0)

    def statistics_plant(self) -> None:
        print(f" [statistics for {self.name.capitalize()}]")
        print(f"Stats: {self.count_grow} grow, {self.count_age} age, ", end="")
        print(f"{self.count_show} show")


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
            self.bloom = True

    def grow_flower(self, height: float, age: int) -> None:
        print(f"[asking the {self.name} to grow and bloom]")
        self.set_height(height)
        if age != 0:
            self.set_age(age)
        self.count_grow += 1

    def show_flower(self) -> None:
        self.show()
        print(f" Color: {self.color}")


class Seed(Flower):
    def __init__(
            self,
            name: str,
            height: float,
            age: int,
            color: str):
        super().__init__(name, height, age, color)
        self.seed = 0

    def show_seed(self) -> None:
        if self.bloom:
            self.seed += 42
        self.show_flower()
        self.is_bloom()
        print(f" Seeds: {self.seed}")

    def grow_flower(self, height: float, age: int) -> None:
        print(f"[make the {self.name} grow and bloom]")
        self.set_height(height)
        if age != 0:
            self.set_age(age)
        self.count_grow += 1


class Tree(Plant):
    def __init__(
            self,
            name: str,
            height: float,
            age: int,
            trunk_diameter: float):
        super().__init__(name, height, age)
        self.trunk_diameter = trunk_diameter
        self.shade: float = 0

    def produce_shade(self) -> None:
        if self.get_age() == 0 or self.get_height() == 0:
            print("An age and height are required.")
        else:
            self.shade = self.get_height()
            print(f"Tree {self.name} now produces a shade of ", end="")
            print(f"{self.shade}cm long and ", end="")
            print(f"{round(self.trunk_diameter, 1)}cm wide.")
        self.count_shade += 1

    def show_tree(self) -> None:
        self.show()
        print(f" Trunk diameter: {round(self.trunk_diameter, 1)}cm")

    def statistics_tree(self) -> None:
        self.statistics_plant()
        print(f"{self.count_shade} shade")
        if self.count_shade == 0:
            print(f"[asking the {self.name} to produce shade]")


if __name__ == "__main__":
    plant_1 = Flower("Rose", 15.0, 10, "red")
    plant_2 = Tree("Oak", 200.0, 365, 5.0)
    plant_3 = Seed("Orquidea", 80.0, 45, "Violet")
    plant_4 = Plant.create_anonymous()

    print("=== Garden statitics ===")
    Plant.check_age(30)
    Plant.check_age(400)

    print("\n=== Flower")
    plant_1.show_flower()
    plant_1.is_bloom()
    plant_1.statistics_plant()
    plant_1.grow_flower(8, 0)
    plant_1.show_flower()
    plant_1.is_bloom()
    plant_1.statistics_plant()

    print("\n=== Tree")
    plant_2.show_tree()
    plant_2.statistics_tree()
    plant_2.produce_shade()
    plant_2.statistics_tree()

    print("\n=== Seed")
    plant_3.show_seed()
    plant_3.grow_flower(30, 20)
    plant_3.show_seed()
    plant_3.statistics_plant()

    print("\n== Anonymous")
    plant_4.show()
    plant_4.statistics_plant()
