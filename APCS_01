#include <iostream>
#include <string>

using namespace std;

string input;

void output(string in, int now) {
	if (now == input.size()) {
		cout << in << '\n';
	} else {
		for (int i = 0; i <= in.size(); i++) {
			output(in.substr(0, i) + input[now] + in.substr(i), now + 1);
		}
	}
}

int main() {
	while (cin >> input) {
		output ("", 0);
		cout << '\n';
	}
}
