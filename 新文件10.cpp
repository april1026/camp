#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k, q;
		cin >> n >> k >> q;
		int p[n+1] = {};
		for (int i = 0; i < q; i++) {
			int te;
			cin >> te;
			while(te--) {
				int temp;
				cin >> temp;
				p[temp] += temp;
				if (p[temp] > temp)
					p[temp]--;
				if (p[temp] > k) {
					cout << "No" << '\n';
					goto out;
				}
			}
		}
		out:
		cout << "Yes" << '\n';
	}
}
