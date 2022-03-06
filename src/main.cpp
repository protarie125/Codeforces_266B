#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, t;
	cin >> n >> t;

	string line;
	cin >> line;

	if (1 == n) {
		cout << line;
		return 0;
	}

	for (int i = 0; i < t; ++i) {
		auto toSwap = vector<int>{};
		for (int j = 0; j < n - 1; ++j) {
			if ('B' == line[j] && 'G' == line[j + 1]) {
				toSwap.push_back(j);
			}
		}

		for (const auto& index : toSwap) {
			auto temp = line[index];
			line[index] = line[index + 1];
			line[index + 1] = temp;
		}
	}

	cout << line;

	return 0;
}