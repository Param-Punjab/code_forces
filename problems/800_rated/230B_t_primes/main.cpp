#include <cmath>
#include <iostream>
#include <vector>

long long int factorial(long long int n) {
  long long int answer = 1;
  for (int i = 1; i <= n; i++) {
    answer *= i;
  }
  return answer;
}

int main() {
  long long int n = 0;

  std::vector<long long int> primes = {
2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61,
67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137,
139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211,
223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283,
293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379,
383, 389, 397, 401, 403, 409, 419, 421, 431, 433, 439, 443, 449, 457,
461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557,
563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641,
643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733,
739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827,
829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929,
937, 941, 947, 953, 967, 971, 977, 983, 991, 997
};


  int t = 0;

  long double test = 0.00;

  std::cin >> t;
  std::vector<std::string> arr(t, "NO");

  for (int i = 0; i < t; i++) {
    std::cin >> n;
    if (n == 1) {
      continue;
    }
    test = std::sqrt(n);
    int int_test = (int)test;

    if ((int)test == test) {
      n = test;

      for (int j = 0; j < primes.size(); j++) {
        if (n % primes[j] == 0) {
          arr[i] = "YES";
          break;
        }
      }

      // std::cout << factorial(n - 1) << std::endl;

      // // Using wilson theorm
      // if ((factorial(n - 1) + 1) % n == 0) {
      //   arr[i] = "YES";
      // }
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << arr[i] << std::endl;
  }
  return 0;
}
