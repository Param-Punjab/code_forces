#include <iostream>

int main() {
   std::string number; 
   std::cin >> number;

   int max[2] = {0}, count[2] = {0};


   for (int i = 0; i < number.size(); i++) {
    
    if ( number[i] == '0') {
        count[0]++;
        max[0] = std::max(max[0], count[0]);

        count[1] = 0;
    } 
    else {
        count[1]++;
        max[1] = std::max(max[1], count[1]);

        count[0] = 0;
    }

   }

   if (max[0] >= 7 || max[1] >= 7) {
    std::cout << "YES";
   } else {
    std::cout << "NO";
   }
}