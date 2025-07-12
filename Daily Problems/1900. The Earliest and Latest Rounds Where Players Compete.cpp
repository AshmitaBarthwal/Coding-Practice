//https://leetcode.com/problems/the-earliest-and-latest-rounds-where-players-compete/description/?envType=daily-question&envId=2025-07-12



class Solution {
public:
    vector<int> earliestAndLatest(int n, int firstPlayer, int secondPlayer) {
        int earliest = INT_MAX;
        int latest = -1;
        
        function<void(vector<int>, int)> backtrack = [&](vector<int> players, int round) {
            int n = players.size();
            if (n < 2) return;
            vector<int> nextRound(n / 2 + n % 2);
            
            for (int mask = 0; mask < (1 << (n / 2)); mask++) {
                int bit = 1;
                bool continueLoop = false;
                for (int i = 0; i < n / 2; i++) {
                    if (players[i] == firstPlayer && players[n - i - 1] == secondPlayer) {
                        if (round < earliest) {
                            earliest = round;
                        }
                        if (round > latest) {
                            latest = round;
                        }
                        goto endLoop;
                    }
                    if ((players[i] == firstPlayer || players[i] == secondPlayer) && (mask & bit) == 0) {
                        continueLoop = true;
                        break;
                    }
                    if ((players[n - 1 - i] == firstPlayer || players[n - 1 - i] == secondPlayer) && (mask & bit) != 0) {
                        continueLoop = true;
                        break;
                    }
                    nextRound[i] = (mask & bit) != 0 ? players[i] : players[n - 1 - i];
                    bit = bit << 1;
                }
                if (continueLoop) continue;
                if (n % 2 == 1) {
                    nextRound[n / 2] = players[n / 2];
                }
                sort(nextRound.begin(), nextRound.end());
                backtrack(nextRound, round + 1);
            }
            endLoop:;
        };
        
        vector<int> players(n);
        for (int i = 0; i < n; i++) {
            players[i] = i + 1;
        }
        backtrack(players, 1);
        
        return {earliest, latest};
    }
};
