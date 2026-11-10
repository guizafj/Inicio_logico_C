# ########################################################################### #
#   shebang: 0                                                                #
#                                                          :::      ::::::::  #
#   ft_different_errors.py                               :+:      :+:    :+:  #
#                                                      +:+ +:+         +:+    #
#   By: fradiaz <fradiaz@student.42malaga.com>       +#+  +:+       +#+       #
#                                                  +#+#+#+#+#+   +#+          #
#   Created: 2026/11/08 14:55:10 by fradiaz             #+#    #+#            #
#   Updated: 2026/11/08 18:17:47 by fradiaz            ###   ########.fr      #
#                                                                             #
# ########################################################################### #

def garden_operations(operation_number: int, test: str) -> int | None:

    if operation_number == 0:
        return int(test)
    if operation_number == 1:
        return 1 // int(test)
    if operation_number == 2:
        file = open(test, "r")
        print(file.read())
        file.close()
        return None
    if operation_number == 3:
        return 4 + test
    if operation_number == 4:
        return int(test)
    raise ValueError(f"Unknown operation: {operation_number}")


def test_operation(operation_number: int, test: str) -> None:
    try:
        garden_operations(operation_number, test)
    except ValueError as error:
        print(f"Caught ValueError : {error}")
    except ZeroDivisionError as error:
        print(f"Caught ZeroDivisionError: {error}")
    except FileNotFoundError as error:
        print(f"Caught FileNotFoundError: {error}")
    except TypeError as error:
        print(f"Caught TypeError: {error}")
    else:
        print("Operation completed successfully")


if __name__ == "__main__":
    print("=== Garden Error Types Demo ===")
    try:
        print("Testing operation 0...")
        test_operation(0, "abc")
        print("Testing operation 1...")
        test_operation(1, "0")
        print("Testing operation 2...")
        test_operation(2, "no_existe.txt")
        print("Testing operation 3...")
        test_operation(3, "source")
        print("Testing operation 4...")
        test_operation(4, "5")
    finally:
        print("\nAll error types tested successfully!")
