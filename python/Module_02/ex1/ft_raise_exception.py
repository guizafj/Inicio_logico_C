# ########################################################################### #
#   shebang: 0                                                                #
#                                                          :::      ::::::::  #
#   ft_raise_exception.py                                :+:      :+:    :+:  #
#                                                      +:+ +:+         +:+    #
#   By: fradiaz <fradiaz@student.42malaga.com>       +#+  +:+       +#+       #
#                                                  +#+#+#+#+#+   +#+          #
#   Created: 2026/11/08 09:56:27 by fradiaz             #+#    #+#            #
#   Updated: 2026/11/08 14:52:47 by fradiaz            ###   ########.fr      #
#                                                                             #
# ########################################################################### #


def input_temperature(temp_str: str) -> int:
    try:
        new = int(temp_str)
    except ValueError:
        raise ValueError(
            f"Input data is: {temp_str}\n"
            f"Caught input_temperature error: invalid literal "
            f"for int() whit base 10: '{temp_str}'\n"
        )
    if not (0 <= new <= 40):
        if new < 0:
            raise ValueError(
                f"Input data is: {new}\n"
                f"Caught input_temperature error: {new}°C "
                f"is too cold for plants (min 0°C)\n"
            )
        elif new > 40:
            raise ValueError(
                f"Input data is: {new}\n"
                f"Caught input_temperature error: {new}°C is "
                f"too hot for plants (max 40°C)\n"
            )
    return new


def test_temperature(test_data: str) -> None:
    try:
        temperature = input_temperature(test_data)
    except ValueError as error:
        print(f"{error}")
    else:
        print(f"Input data is: {temperature}")
        print(f"Temperature is now {temperature}°C\n")


if __name__ == "__main__":
    print("=== Garden Temperature ===\n")
    try:
        test_temperature("25")
        test_temperature("abc")
        test_temperature("100")
        test_temperature("-50")
    finally:
        print("All tests completed - program didn't crash!")
