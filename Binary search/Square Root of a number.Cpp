

    long long int floorSqrt(int n) {

        int s = 0;
        int e = n;
        long long int mid, ans = -1;

        while (s <= e) {
            mid = s + (e - s) / 2;
            long long int square = mid * mid;

            if (square == n)
                return mid;

            if (square < n) {
                ans = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ans;
    }

   


