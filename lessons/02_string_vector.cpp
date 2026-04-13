#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string name = "Fly";
    std::vector<int> nums = {1, 2, 3, 4, 5};

    std::cout << "name = " << name << '\n';
    std::cout << "name length = " << name.size() << '\n';

    nums.push_back(6);

    std::cout << "nums: ";
    for (int n : nums) {
        std::cout << n << ' ';
    }
    std::cout << '\n';

    return 0;
}
