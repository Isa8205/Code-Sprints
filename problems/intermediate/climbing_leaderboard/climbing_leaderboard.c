#include <stdio.h>
#include <stdlib.h>

/**
 * Calculates the player's rank after each new score.
 *
 * @param ranked_count Number of elements in the ranked array.
 * @param ranked Array of leaderboard scores (descending order, may have duplicates).
 * @param player_count Number of elements in the player array.
 * @param player Array of player's scores (ascending order).
 * @param result_count Pointer to store the size of the returned array.
 * @return Dynamically allocated array of player ranks after each new score.
 *
 */

int* climbingLeaderboard(int* ranked, int rankedCount, int* player, int playerCount, int* resultCount) {
    // Remove duplicates from the ranked array
    int* uniqueRanked = (int*)malloc(rankedCount * sizeof(int));
    int uniqueCount = 0;
    uniqueRanked[uniqueCount++] = ranked[0];
    for (int i = 1; i < rankedCount; i++) {
        if (ranked[i] != ranked[i - 1]) {
            uniqueRanked[uniqueCount++] = ranked[i];
        }
    }
     // Allocate memory for the result array
    int* result = (int*)malloc(playerCount * sizeof(int));
    *resultCount = playerCount;
     // Determine the rank for each player's score
    int index = uniqueCount - 1; // Start from the lowest rank
    for (int i = 0; i < playerCount; i++) {
        while (index >= 0 && player[i] >= uniqueRanked[index]) {
            index--;
        }
        result[i] = index + 2; // Rank is index + 2 (1-based index and next rank)
    }



    *resultCount = 0;
    // Write your code here
    return NULL;
}
