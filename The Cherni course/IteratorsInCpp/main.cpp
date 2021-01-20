#include <iostream>
#include <vector>
#include <unordered_map>

int main(int, char **)
{
    std::vector<int> values = {1, 2, 3, 4, 5};

    // normal iteration

    for (int i = 0; i < values.size(); i++)
    {
        std::cout << values[i] << std::endl;
    }

    // simpler version  (range based for loop)

    for (int value : values)
    {
        std::cout << value << std::endl;
    }

    // The above one underhood is as follows (normal iterator)

    for (std::vector<int>::iterator it = values.begin(); it != values.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    // iterator with unordered map (const iterator)

    using ScoreMap = std::unordered_map<std::string, int>;
    ScoreMap map;
    map["Cherno"] = 5;
    map["C++"] = 2;

    std::cout << std::endl;
    for (ScoreMap::const_iterator it = map.begin(); it != map.end(); it++)
    {
        auto &key = it->first;
        auto &value = it->second;
        std::cout << key << " = " << value << std::endl;
    }

    // range based loop with map
    std::cout << std::endl;
    for (auto kv : map)
    {
        auto &key = kv.first;
        auto &value = kv.second;
        std::cout << key << " = " << value << std::endl;
    }

    // structured bindings with c++ 17
    std::cout << std::endl;
    for (auto [key, value] : map)
    {
        std::cout << key << " = " << value << std::endl;
    }

    std::cin.get();
}
