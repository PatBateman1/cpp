class Solution {
public:
	int numSquares(int n) {
		vector<int> f(n+1, 0);
		for (int i = 1; i <= n; i++) {
			int minVal = INT_MAX;
			for ( int j = 1; j * j <= i ; j++)  minVal = min(minVal, f[i - j * j]);
			f[i] = minVal + 1;
		}
		return f[n];
	}
};
