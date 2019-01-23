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
		vector <int> ob[q];
		for (int i = 0; i < q; i++) {
			int te;
			cin >> te;
			while(te--) {
				int temp;
				cin >> temp;
				ob[i].push_back(temp);
			}
		}
		int p[n] = {};
		for (int i = 0; i < q; i++) {
			if (ob[i].size() > k) {
				cout << "No" << '\n';
				break;
			} else if (i == (q-1)) {
				cout << "Yes" << '\n';
			}
		}
	}
}
