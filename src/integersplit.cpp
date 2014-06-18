#include <algorithm>
#include <cstdint>
#include <iostream>
#include <iterator>
#include <vector>

typedef std::vector<int> SplitValues;

SplitValues splitter(std::int32_t number)
{
    SplitValues values(8);

    for (auto& iter : values)
    {
        iter = static_cast<int>(number & 0xF);
        number >>= 4;
    }

    return values;
}

int main()
{
    std::int32_t number = 432214123;

    SplitValues values = splitter(number);

    std::reverse_copy(values.begin(), values.end(),
        std::ostream_iterator<int>(std::cout, " "));
}
