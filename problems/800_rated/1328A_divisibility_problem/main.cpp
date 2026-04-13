#include <iostream>

int main() {
	int n;

	int arr_1[n];
	int arr_2[n];
	int arr_final[n] = {0};


	for (int i = 0; i < n; i++) {
		std::cin >> arr_1[i] >> arr_2[i];
	}

	for (int i = 0; i < n; i++) {

		if ( arr_1[i] % arr_2[i] == 0 ) {
			continue;
		} else {
			arr_final[i]++;
		}
	}

	for (int i = 0; i < n; i++) {

		std::cout << arr_final[i] << std::endl;

	}

	return 0;

}
