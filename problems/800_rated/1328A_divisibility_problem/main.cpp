#include <iostream>
#include <vector>

int main() {
	int n;

	std::cin >> n;

	std::vector<int> arr_1(n);
	std::vector<int> arr_2(n);
	std::vector<int> arr_final(n, 0);


	for (int i = 0; i < n; i++) {
		std::cin >> arr_1[i] >> arr_2[i];
	}

	for (int i = 0; i < n; i++) {

		while( arr_1[i] % arr_2[i] != 0 ) {
				arr_1[i]++;
				arr_final[i]++;
		}

	}

	for (int i = 0; i < n; i++) {
		std::cout << arr_final[i] << std::endl;
	}

	return 0;

}
