# ########################################################################### #
#   shebang: 0                                                                #
#                                                          :::      ::::::::  #
#   ft_custom_errors.py                                  :+:      :+:    :+:  #
#                                                      +:+ +:+         +:+    #
#   By: fradiaz <fradiaz@student.42malaga.com>       +#+  +:+       +#+       #
#                                                  +#+#+#+#+#+   +#+          #
#   Created: 2026/11/08 18:20:22 by fradiaz             #+#    #+#            #
#   Updated: 2026/11/11 08:12:18 by fradiaz            ###   ########.fr      #
#                                                                             #
# ########################################################################### #

class GardenError(Exception):
    default_message = "Unknown plant error"

    def __init__(self, message: str | None = None) -> None:
        super().__init__(message or self.default_message)


class PlantError(GardenError):
    def __init__(self, plant_name: str | None = None) -> None:
        super().__init__(f"The {plant_name} plant is wilting!")

class WaterError(GardenError):
    water_message = "Not enought water in the tank!"

    def __init__(self, message: str | None = None) -> None:
        super().__init__(message or self.water_message)


def check_plant(name: str, state: str) -> None:
    if (state == "wilting"):
        raise PlantError(name)
    raise GardenError()

def check_water(amount: int) -> None:
    if (amount <= 0):
        raise WaterError()
    raise GardenError()

def test_errors(name: str, state: str, amount: int) -> None:
    try:
        check_plant(name, state)
    except PlantError as error:
        print(f"Caught PlantError: {error}")
    try:
        check_water(amount)
    except WaterError as error:
        print(f"Caught WaterError: {error}")
    except GardenError as error:
        print(f"Caught GardenError: {error}")

if __name__ == "__main__":
    print("=== Custom Garden Errors Demo ===\n")
    try:
        print("Testing PlantError...")
        test_errors("tomato", "wilting", 1)
        print("\nTesting WaterError...")
        test_errors("water", "void", 0)
        print("\nTesting catching all garden errors...")
        test_errors("tomato", "diferent", 3)
    finally:
        print("\nAll custom error types work correctly!")




