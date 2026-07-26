#include <iostream>
#include <unordered_map>

int main() {
  std::unordered_map<char, char> left, right;

  left['q'] = 'q';
  left['w'] = 'q';
  left['e'] = 'w';
  left['r'] = 'e';
  left['t'] = 'r';
  left['y'] = 't';
  left['u'] = 'y';
  left['i'] = 'u';
  left['o'] = 'i';
  left['p'] = 'o';
  left['a'] = 'a';
  left['s'] = 'a';
  left['d'] = 's';
  left['f'] = 'd';
  left['g'] = 'f';
  left['h'] = 'g';
  left['j'] = 'h';
  left['k'] = 'j';
  left['l'] = 'k';
  left[';'] = 'l';
  left['z'] = 'z';
  left['x'] = 'z';
  left['c'] = 'x';
  left['v'] = 'c';
  left['b'] = 'v';
  left['n'] = 'b';
  left['m'] = 'n';
  left[','] = 'm';
  left['.'] = ',';
  left['/'] = '.';

  right['q'] = 'w';
  right['w'] = 'e';
  right['e'] = 'r';
  right['r'] = 't';
  right['t'] = 'y';
  right['y'] = 'u';
  right['u'] = 'i';
  right['i'] = 'o';
  right['o'] = 'p';
  right['p'] = ';';
  right['a'] = 's';
  right['s'] = 'd';
  right['d'] = 'f';
  right['f'] = 'g';
  right['g'] = 'h';
  right['h'] = 'j';
  right['j'] = 'k';
  right['k'] = 'l';
  right['l'] = ';';
  right['z'] = 'x';
  right['x'] = 'c';
  right['c'] = 'v';
  right['v'] = 'b';
  right['b'] = 'n';
  right['n'] = 'm';
  right['m'] = ',';
  right[','] = '.';
  right['.'] = '/';

  char c;
  std::cin >> c;
  std::string input;
  std::cin >> input;

  // Fixed logic:
  // If hands moved LEFT ('L') → typed char is left neighbour → recover by
  // moving RIGHT
  // If hands moved RIGHT ('R') → typed char is right neighbour → recover by
  // moving LEFT
  if (c == 'L') {
    for (char ch : input) {
      std::cout << right[ch]; // was left[ch] → fixed
    }
  } else if (c == 'R') {
    for (char ch : input) {
      std::cout << left[ch]; // was right[ch] → fixed
    }
  }

  return 0;
}
