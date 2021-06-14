/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int front = 1, back = n;
        while (front <= back) {
            int mid = front + (back - front) / 2;
            int res = guess(mid);
            if (res == 0) {
                return mid;
            } else if (res == -1) {
                back = mid - 1;
            } else {
                front = mid + 1;
            }
        }
        return 0;
    }
};
