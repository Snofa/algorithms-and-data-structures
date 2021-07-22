//
// Created by Snofa on 22.07.2021.
//

#ifndef ALGORITHM_TO_ROME_H
#define ALGORITHM_TO_ROME_H
#include "vector"
std::string to_roman(int value)
{
    if (value == 0){
        return "nulla";
    }

    bool minus = false;
    if (value < 0){
        value = abs(value);
        minus = true;
    }



    std::vector<std::pair<int, char const*>> roman
            {
                    { 1000, "M" },{ 900, "CM" },
                    { 500, "D" },{ 400, "CD" },
                    { 100, "C" },{ 90, "XC" },
                    { 50, "L" },{ 40, "XL" },
                    { 10, "X" },{ 9, "IX" },
                    { 5, "V" },{ 4, "IV" },
                    { 1, "I" }
            };

    std::string result =" ";
    for (auto const & [d, r]: roman)
    {
        while (value >= d)
        {
            result += r;
            value -= d;
        }
    }
    if (minus){
        return "-"+result;
    } else{
        return result;
    }

}
#endif //ALGORITHM_TO_ROME_H
