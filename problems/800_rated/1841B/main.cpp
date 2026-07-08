#include <iostream>
#include <vector>

int main() {
  int t=0,n=0,drop=0;
  std::cin>>t;

  std::vector<int> my_v;
  std::vector<std::string> result(t);

  for (int i = 0; i < t; i++) {
    n=0,drop=0;
    std::cin>>n;
    
    my_v.clear();
    result[i].clear();
    my_v.resize(n);


    for (int j = 0; j < n; j++) {
      std::cin>>my_v[j];

      if (j == 0) {
        result[i].push_back('1');
      } else {
        if (drop >= 1) {
          if (my_v[j] <= my_v[0] && my_v[j] >= my_v[j-1]) {
            result[i].push_back('1');
          } else {
            result[i].push_back('0');
            my_v[j] = my_v[j-1];
          }
        } else {
          if (my_v[j] < my_v[j-1]) {
            drop++;
          }
          result[i].push_back('1');
        } 
      }
    }
  }


  for (int i = 0; i < t; i++) {
    std::cout<<result[i]<<std::endl;
  }


}