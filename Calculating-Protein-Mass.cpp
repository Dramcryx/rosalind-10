#include <iostream>
#include <algorithm>
#include <iomanip>

int main()
{
    constexpr unsigned MAXLENGTH = 10001;
    char input[MAXLENGTH] = "";
    std::cin >> input;

    double massesTable[128] = {.0};
    massesTable['A'] = 71.03711;
    massesTable['C'] = 103.00919;
    massesTable['D'] = 115.02694;
    massesTable['E'] = 129.04259;
    massesTable['F'] = 147.06841;
    massesTable['G'] = 57.02146;
    massesTable['H'] = 137.05891;
    massesTable['I'] = 113.08406;
    massesTable['K'] = 128.09496;
    massesTable['L'] = 113.08406;
    massesTable['M'] = 131.04049;
    massesTable['N'] = 114.04293;
    massesTable['P'] = 97.05276;
    massesTable['Q'] = 128.05858;
    massesTable['R'] = 156.10111;
    massesTable['S'] = 87.03203;
    massesTable['T'] = 101.04768;
    massesTable['V'] = 99.06841;
    massesTable['W'] = 186.07931;
    massesTable['Y'] = 163.06333;

    double output = 0.0;
    for (auto s = input; *s; ++s)
    {
        output += massesTable[*s];
    }
    printf("%.3f\n", output); // cout broken
    return 0;
}