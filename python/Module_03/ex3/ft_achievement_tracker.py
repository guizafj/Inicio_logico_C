#!/usr/bin/env python3
# ########################################################################### #
#   shebang: 1                                                                #
#                                                          :::      ::::::::  #
#   ft_achievement_tracker.py                            :+:      :+:    :+:  #
#                                                      +:+ +:+         +:+    #
#   By: fradiaz <fradiaz@student.42malaga.com>       +#+  +:+       +#+       #
#                                                  +#+#+#+#+#+   +#+          #
#   Created: 2026/11/21 16:38:09 by fradiaz             #+#    #+#            #
#   Updated: 2026/11/21 19:53:30 by fradiaz            ###   ########.fr      #
#                                                                             #
# ########################################################################### #

import random

def gen_player_achievements() -> set:
    achievement_list = [
        "Crafting Genius", "Worls Savior", "Master Explorer",
        "Collector Supreme", "Untouchable", "Boss Slayer",
        "Strategist", "Unstoppable", "Speed Runner", "Survivor",
        "Treasure Hunter", "First Steps", "Sharp Mind",
    ]
    k = random.randint(4, 8)
    new_set = set(random.sample(achievement_list, k=k))
    return new_set


def create_team() -> dict:
    players = {
        "Alice" : gen_player_achievements(),
        "Bob" : gen_player_achievements(),
        "Charlie" : gen_player_achievements(),
        "Dylan" : gen_player_achievements()
    }
    return players

def analize_team(new_team: dict) -> None:
        distinct = set()
        common = set()
        difference = set()
        for key, value in new_team.items():
            print(f"Player {key}: {value}")
        for value in new_team.values():
            distinct = set.union(value)
        print(f"\nAll distinct achievements: {distinct}")
        for value in new_team.values():
            common = set.intersection(value)
        print(f"\nCommon achievement: {common}")
        for value in new_team.values():
            difference = set.difference(value)
        print(difference)


if __name__ == "__main__":
    print("=== Achievement Tracker System ===\n")
    players = create_team()
    analize_team(players)




