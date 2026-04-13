#include <iostream>

int main() {
    int age = 20;
    double score = 95.5;
    char grade = 'A';
    bool isPassed = true;

    std::cout << "age = " << age << '\n';
    std::cout << "score = " << score << '\n';
    std::cout << "grade = " << grade << '\n';
    std::cout << "isPassed = " << isPassed << '\n';

    int a = 10;
    int b = 3;
    std::cout << "a / b (int) = " << a / b << '\n';
    std::cout << "a / b (double) = " << static_cast<double>(a) / b << '\n';

    const double pi = 3.14159;
    std::cout << "pi = " << pi << '\n';

    int value = 42;
    int& ref = value;
    ref = 100;
    std::cout << "value after ref change = " << value << '\n';

    auto count = 7;
    auto price = 19.9;
    auto letter = 'Z';
    std::cout << "count = " << count << ", price = " << price << ", letter = " << letter << '\n';

    return 0;
}
