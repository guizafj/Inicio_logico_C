# ########################################################################### #
#   shebang: 0                                                                #
#                                                          :::      ::::::::  #
#   ft_first_exception.py                                :+:      :+:    :+:  #
#                                                      +:+ +:+         +:+    #
#   By: fradiaz <fradiaz@student.42malaga.com>       +#+  +:+       +#+       #
#                                                  +#+#+#+#+#+   +#+          #
#   Created: 2026/11/01 22:24:50 by fradiaz             #+#    #+#            #
#   Updated: 2026/11/08 09:54:34 by fradiaz            ###   ########.fr      #
#                                                                             #
# ########################################################################### #


def input_temperature(temp_str: str) -> int:
    try:
        return int(temp_str)
    except ValueError:
        print(f"Input data is '{temp_str}'")
        raise


def test_temperature(test_data: str) -> None:
    try:
        temperature = input_temperature(test_data)
        temperature = input_temperature(test_data)
    except ValueError:
        print("Caught input_temperature error: invalid literal ", end="")
        print(f"for int() whit base 10: {test_data}\n")
    else:
        print(f"Input data is '{temperature}'")
        print(f"Temperature is now {temperature}°C\n")


if __name__ == "__main__":
    print("=== Garden Temperature ===\n")
    try:
        test_temperature("32")
        test_temperature("abc")
    finally:
        print("All tests completed - program didn't crash!")
