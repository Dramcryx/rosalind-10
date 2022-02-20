#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    constexpr unsigned MAXLENGTH = 10001;


    std::string input;
    input.resize(MAXLENGTH);
    std::cin >> input;
    
    std::reverse(input.begin(), input.end());

    char complementary[128] = "";
    complementary['A'] = 'T';
    complementary['T'] = 'A';
    complementary['C'] = 'G';
    complementary['G'] = 'C';
    std::transform(input.begin(), input.end(), input.begin(), [complementary](char c){
        return complementary[c];
    });

    std::cout << input << std::endl;
    return 0;
}
