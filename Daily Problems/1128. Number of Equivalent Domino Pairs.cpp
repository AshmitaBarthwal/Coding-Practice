// /https://leetcode.com/problems/number-of-equivalent-domino-pairs/description/?envType=daily-question&envId=2025-05-04



int count = 0;
            for (int i = 0 ; i < dominoes.size() ; i++) {
                for (int j = i + 1 ; j < dominoes.size() ; j++) {
                    int a = dominoes[i][0], b = dominoes[i][1];
                    int c = dominoes[j][0], d = dominoes[j][1];
                    if ((a == c && b == d) || (a == d && b == c))
                    ++count;
                }
            }
            return count;
