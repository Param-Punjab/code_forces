#include <iostream>

// int main() {
//   int n, c, arr_size, special_index, no_of_special_case;
//   std::cin >> n;
//   int arr[n];
//   for (int i = 0; i < n; i++) {
//     c = 0;
//     std::cin >> arr_size >> no_of_special_case;
//     int special_arr[arr_size];
//     for (int j = 0; j < arr_size; j++) {
//       std::cin >> special_arr[j];
//     }
//     std::cin >> special_index;
//     for (int k = 0; k < arr_size; k++) {
//       if (special_arr[special_index] != special_arr[k]) {
//         special_arr[k] = ~special_arr[k];
//         c++;
//       }
//     }
//     arr[i] = c;
//   }
//   std::cout << arr << std::endl;
// }

int main() {
  int n, c, arr_size, special_index, no_of_special_case;
  std::cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    std::cout << "Inside for loop of test case: " << i << std::endl;
    c = 0;
    std::cout << "c = 0" << std::endl;
    std::cin >> arr_size >> no_of_special_case; //orignal
    std::cout << "array size and number of special case got input" << std::endl;
    int special_arr[arr_size];
    std::cout << "array got created with array size: " << arr_size << std::endl;
    for (int j = 0; j < arr_size; j++) {
      std::cout << "inside loop to get cin array" << std::endl;
      std::cin >> special_arr[j];  // orignal
    }
    std::cin >> special_index;
    std::cout << "special index got cin which is : " << special_arr[special_index] << std::endl;
    for (int k = 0; k < arr_size; k++) {
      std::cout << "Inside loop to check what ever the value is matched with special case or not" << std::endl;
      if (special_arr[special_index] != special_arr[k]) {
        std::cout << "Value got deted and now ~ it" << special_arr[k] << std::endl;
        special_arr[k] = ~special_arr[k];
        c++;
      }
    }
    arr[i] = c;
  }
  for (int i = 0; i < n; i++) {
      std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}
