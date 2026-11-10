# ########################################################################### #
#   shebang: 0                                                                #
#                                                          :::      ::::::::  #
#   ft_custom_errors.py                                  :+:      :+:    :+:  #
#                                                      +:+ +:+         +:+    #
#   By: fradiaz <fradiaz@student.42malaga.com>       +#+  +:+       +#+       #
#                                                  +#+#+#+#+#+   +#+          #
#   Created: 2026/11/08 18:20:22 by fradiaz             #+#    #+#            #
#   Updated: 2026/11/08 19:01:13 by fradiaz            ###   ########.fr      #
#                                                                             #
# ########################################################################### #

class GardenError(Exception):
    def __init__(self, *args: object) -> None:
        super().__init__(*args)


class PlantError(GardenError):
    pass

class WaterError(GardenError):
    pass
