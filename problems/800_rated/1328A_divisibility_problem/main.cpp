#include <iostream>
#include <vector>

int main() {
	int n;

	std::cin >> n;

  std::vector<std::vector<long long int>> arr(n, std::vector<long long int>(2, 0));
	std::vector<int> arr_final(n, 0);


	for (int i = 0; i < n; i++) {
    std::cin >> arr[i][0] >> arr[i][1];
	}

	for (int i = 0; i < n; i++) {

		while( arr[i][0] % arr[i][1] != 0 ) {
				arr[i][0]++;
				arr_final[i]++;
		}

	}

	for (int i = 0; i < n; i++) {
		std::cout << arr_final[i] << std::endl;
	}

	return 0;

}
