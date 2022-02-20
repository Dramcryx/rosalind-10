#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::string t;
    std::cin >> s >> t;

    unsigned count = 0;
    for (auto i = 0; i < s.length(); ++i)
    {
        if (s[i] != t[i])
        {
            ++count;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
