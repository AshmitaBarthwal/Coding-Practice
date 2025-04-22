//https://leetcode.com/problems/count-the-number-of-ideal-arrays/description/?envType=daily-question&envId=2025-04-22



const int MOD = 1e9 + 7;
int dp[10001][14] = {1};
int cnt[10001][14] = {};
class Solution {
public:
    int idealArrays(int n, int maxValue) {
        if (dp[1][1] == 0){
            for (int i = 1; i <= 10000; i++){
                for (int j = 0; j < 14; j++){
                    dp[i][j] = j == 0 ? 1 : (dp[i - 1][j - 1] + dp[i - 1][j]) % MOD;
                }
            }
            for (int cur = 1; cur <= 10000; cur++){
                ++cnt[cur][0];
                for (int k = 2 * cur; k <= 10000; k += cur){
                    for (int bars = 0; cnt[cur][bars]; bars++){
                        cnt[k][bars + 1] += cnt[cur][bars];
                    }
                }
            }
        }
        int res = 0;
        for (int i = 1; i <= maxValue; i++){
            for (int bars = 0; bars < min(14, n) && cnt[i][bars]; bars++){
                res = (1LL * cnt[i][bars] * dp[n - 1][bars] + res) % MOD;
            }
        }
        return res;
    }
};
