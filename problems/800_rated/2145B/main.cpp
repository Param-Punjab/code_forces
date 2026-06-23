#include <iostream>
#include <vector>


class solution {
    public:
        int n = 0, k = 0;
        std::string temp;
        std::vector<char> result;

        solution() {
            std::cin >> n >> k;
            result.resize(n, '+');
            std::cin >> temp;

        
        void zero_operation(std::vector<char> &result, int i, bool h = 0) {
            if ((result[i] == '?' || result[i] == '-') && i < result.size() - 1) {
                one_operation(result, i + 1);
            } else {
                if (h == 0) {
                    result[i] = '-';
                } else {
                    result[i] = '?';
                }
            }
        }

        void one_operation(std::vector<char> &result, int i, bool h = 0) {
            if ((result[i] == '?' || result[i] == '-') && i > 0) {
                zero_operation(result, i - 1);
            } else {
                if (h == 0) {
                    result[i] = '-';
                } else {
                    result[i] = '?';
                }
            }
        }


        void two_operation(std::vector<char> &result) {
            zero_operation(result, result.size() - 1, 1);
            one_operation(result, 0, 1);
        }

        void display() {
            for (int i = 0; i < n; i++) {
                std::cout << result[i];
            }
            std::cout << std::endl;
        }
};

int main() {
    int t = 0;
    std::cin >> t;


    for (int i = 0; i < t; i++) {
        solution s;
        s.display();
    }

    return 0;
}
