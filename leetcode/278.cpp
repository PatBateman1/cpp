// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int res = n, front = 1, back = n;
        while (front <= back) {
            int mid = front + (back - front) / 2;
            if (isBadVersion(mid)) {
                res = mid < res ? mid : res;
                back = mid - 1;
            } else {
                front = mid + 1;
            }
        }
        return res;
    }
};
