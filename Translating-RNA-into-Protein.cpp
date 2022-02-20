#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string_view>

int main()
{
    std::string s;
    std::cin >> s;
    std::string_view sv{s.c_str(), s.length()};

    std::unordered_map<std::string_view, char> proteins= {{"UUU", 'F'},      {"CUU", 'L'},      {"AUU", 'I'},      {"GUU", 'V'},
                                                          {"UUC", 'F'},      {"CUC", 'L'},      {"AUC", 'I'},      {"GUC", 'V'},
                                                          {"UUA", 'L'},      {"CUA", 'L'},      {"AUA", 'I'},      {"GUA", 'V'},
                                                          {"UUG", 'L'},      {"CUG", 'L'},      {"AUG", 'M'},      {"GUG", 'V'},
                                                          {"UCU", 'S'},      {"CCU", 'P'},      {"ACU", 'T'},      {"GCU", 'A'},
                                                          {"UCC", 'S'},      {"CCC", 'P'},      {"ACC", 'T'},      {"GCC", 'A'},
                                                          {"UCA", 'S'},      {"CCA", 'P'},      {"ACA", 'T'},      {"GCA", 'A'},
                                                          {"UCG", 'S'},      {"CCG", 'P'},      {"ACG", 'T'},      {"GCG", 'A'},
                                                          {"UAU", 'Y'},      {"CAU", 'H'},      {"AAU", 'N'},      {"GAU", 'D'},
                                                          {"UAC", 'Y'},      {"CAC", 'H'},      {"AAC", 'N'},      {"GAC", 'D'},
                                                          {"UAA", '\0'},     {"CAA", 'Q'},      {"AAA", 'K'},      {"GAA", 'E'},
                                                          {"UAG", '\0'},     {"CAG", 'Q'},      {"AAG", 'K'},      {"GAG", 'E'},
                                                          {"UGU", 'C'},      {"CGU", 'R'},      {"AGU", 'S'},      {"GGU", 'G'},
                                                          {"UGC", 'C'},      {"CGC", 'R'},      {"AGC", 'S'},      {"GGC", 'G'},
                                                          {"UGA", '\0'},     {"CGA", 'R'},      {"AGA", 'R'},      {"GGA", 'G'},
                                                          {"UGG", 'W'},      {"CGG", 'R'},      {"AGG", 'R'},      {"GGG", 'G'}};

    for (auto i = 0; i < s.length(); i += 3)
    {
        char out = proteins[sv.substr(i, 3)];
        if (out == 0) {
            break;
        }
        std::cout << out;
    }
    std::cout << std::endl;
    
    return 0;
}