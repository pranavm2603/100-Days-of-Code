class Solution {
public:
    int countPrimes(int n) {
         if (n <= 2) {
            return 0;
        }

        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;

        int count = 0;
        int limit = sqrt(n);

        for (int i = 2; i <= limit; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        for (bool prime : isPrime) {
            if (prime) {
                count++;
            }
        }

        return count;
    }
};
