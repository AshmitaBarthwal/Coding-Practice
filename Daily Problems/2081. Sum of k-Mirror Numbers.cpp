//https://leetcode.com/problems/sum-of-k-mirror-numbers/description/?envType=daily-question&envId=2025-06-23



class Solution {
public:
    long long kMirror(int k, int n) {
      long long sum = 0;   
        
        // Step 1: Count of valid k-mirror numbers
        int found = 0;       

        // Step 2: Loop through increasing lengths
        for (int len = 1; found < n; len++) 
        {
            int start = pow(10, (len - 1) / 2); // Start of half
            int end = pow(10, (len + 1) / 2);   // End of half

            // Step 3: Generate palindromes
            for (int half = start; half < end; half++) 
            {
                long long pal = createPalindrome(half, len % 2 == 1);

                // Step 4: Check base-k palindromicity
                if (isBaseKPalindrome(pal, k)) 
                {
                    // Step 5: Add to sum
                    sum += pal;     
                    
                    // Step 5: Increment count
                    found++;        
                    
                    // Step 6: If enough numbers found, return
                    if (found == n)
                    {
                        return sum;
                    }
                }
            }
        }

        return sum;
    }

    // Step 3: Build decimal palindrome
    long long createPalindrome(int half, bool odd) 
    {
        long long pal = half;
        if (odd)
        {
            half /= 10;
        }

        while (half > 0) 
        {
            pal = pal * 10 + (half % 10);
            half /= 10;
        }
        return pal;
    }

    // Step 4: Check base-k palindrome using math
    bool isBaseKPalindrome(long long num, int k) 
    {
        long long rev = 0;
        long long orig = num;
        while (num > 0) 
        {
            rev = rev * k + num % k;
            num /= k;
        }
        
        return rev == orig;
    }
};
