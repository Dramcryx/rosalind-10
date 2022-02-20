#include <iostream>
#include <algorithm>

int main()
{
    constexpr unsigned MAXLENGTH = 10001;
    char input[MAXLENGTH] = "";
    std::cin >> input;
    std::transform(input, input + MAXLENGTH, input, [](char c){
        return c == 'T' ? 'U' : c;
    });
    std::cout << input << std::endl;

    return 0;
}