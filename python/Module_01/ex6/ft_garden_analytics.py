#!/usr/bin/env python3
# ########################################################################### #
#   shebang: 1                                                                #
#                                                          :::      ::::::::  #
#   ft_garden_analytics.py                               :+:      :+:    :+:  #
#                                                      +:+ +:+         +:+    #
#   By: fradiaz <fradiaz@student.42malaga.com>       +#+  +:+       +#+       #
#                                                  +#+#+#+#+#+   +#+          #
#   Created: 2026/10/28 16:32:06 by fradiaz             #+#    #+#            #
#   Updated: 2026/10/29 02:24:23 by fradiaz            ###   ########.fr      #
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

    @staticmethod
    def check_age(age: int) -> None:
        if (age < 365):
            print(f"Is {age} days more than year? -> False")
        else:
            print(f"Is {age} days more than year? -> True")

    @classmethod
    def create_anonymous(cls) -> "Plant":
       return cls("Unknown plant", 0.0, 0)

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

class Seed(Flower):
    def __init__(self, name: str, height: float, age: int,
                 color: str, seed: int):
        super().__init__(name, height, age, color)
        self.seed = seed

    def new_seed(self):
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

