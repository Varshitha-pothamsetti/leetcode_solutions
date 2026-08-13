// Last updated: 13/08/2026, 21:32:30
1/** 
2 * Forward declaration of guess API.
3 * @param  num   your guess
4 * @return 	     -1 if num is higher than the picked number
5 *			      1 if num is lower than the picked number
6 *               otherwise return 0
7 * int guess(int num);
8 */
9
10class Solution {
11public:
12    int guessNumber(int n) {
13        long long low = 1, high = n;
14        while (low <= high) {
15            long long mid = low + (high - low) / 2;
16            int result = guess(mid);
17            if (result == 0)
18                return mid;
19            else if (result == 1)
20                low = mid + 1;
21            else
22                high = mid - 1;
23        }
24        return -1;
25    }
26};