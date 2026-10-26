# ########################################################################### #
#   shebang: 0                                                                #
#                                                          :::      ::::::::  #
#   ft_count_harvest_recursive.py                        :+:      :+:    :+:  #
#                                                      +:+ +:+         +:+    #
#   By: fradiaz <fradiaz@student.42malaga.com>       +#+  +:+       +#+       #
#                                                  +#+#+#+#+#+   +#+          #
#   Created: 2026/10/26 14:09:32 by fradiaz             #+#    #+#            #
#   Updated: 2026/10/26 14:27:58 by fradiaz            ###   ########.fr      #
#                                                                             #
# ########################################################################### #

def ft_count_harvest_recursive() -> None:
    days = int(input("Days until harvest: "))
    ft_days_aux(days)
    print("Harvest time!")


def ft_days_aux(days: int) -> None:
    if (days == 0):
        return
    ft_days_aux(days - 1)
    print(f"Day: {days}")
