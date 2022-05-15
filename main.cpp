#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, a, b;
	cin >> n >> a >> b;

	auto sum = a / 2 + b;
	if (n < sum) {
		sum = n;
	}

	cout << sum;

	return 0;
}