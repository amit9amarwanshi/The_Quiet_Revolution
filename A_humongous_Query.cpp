#include <bits/stdc++.h>
 
using namespace std;
 
const int MX = 32;
 
char s[MX + 1];
int X, ans;
 
void brute(int i, int a, int b, long long p, long long q, int cur) {
	if (cur >= ans || a > X) return;
	if (s[i] == 0) {
		if (a == X) ans = cur;
		return;
	}
	
	if (p < 0) {
		long long x = (b - 1 - p) / b;
		p += x * b;
		q -= x * a;
	}
	
	if (q < 0) {
		long long x = (a - 1 - q) / a;
		p -= x * b;
		q += x * a;
	}
	
	if (p < 0) return;
	
	int c[2] = {0, 0};
	c['1' - s[i]] = 1;
	if (i == 0) c[0] = MX + 1;
	if (s[i + 1] == 0) c[1] = MX + 1;
	
	brute(i + 1, a + b, b, p, q - p, c[0] + cur);
	brute(i + 1, a, a + b, p - q, q, c[1] + cur);
}
 
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		scanf(" %s %d", s, &X);
		X++;
		ans = MX + 1;
		brute(0, 1, 0, X, 0, 0);
		if (ans > MX) printf("NO\n");
		else printf("YES\n%d\n", ans);
	}
	
	return 0;
} 
