#include <iostream>

int main() {
  int a = 0, t = 0; 

  std::cin >> a;
  
  std::string arr[a];

  for (int i = 0; i < a; i++) {
   std::cin >> arr[i];
   if (arr[i] == "Tetrahedron") t += 4;
   else if (arr[i] == "Cube") t += 6;
   else if (arr[i] == "Octahedron") t += 8;
   else if (arr[i] == "Dodecahedron") t += 12;
   else if (arr[i] == "Icosahedron") t += 20;
  }

  std::cout << t;
  return 0;
}