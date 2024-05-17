#include <iostream>
#include <string>
#include <exception>

#include <map>

template <typename T1, typename T2>
struct Pair
{
    T1 first;
    T2 second;
};

void ExampleMap()
{
    std::map<int, std::string> regions;
    std::map<std::string, std::string> info;

    regions.insert({ 71, "Tula" });
    regions.insert({ 95, "Moscow" });
    regions.insert({ 71, "Tulskaya obl" });
    regions.insert_or_assign(71, "Tulskaya obl");
    regions.insert_or_assign(38, "Irkutsk");

    regions[38] = "Irkutskaya oblast";

    try
    {
        regions.at(62) = "Ryazan";
    }
    catch (std::exception ex)
    {
        std::cout << ex.what() << "\n";
    }


    for (auto r : regions)
        std::cout << r.first << " -> " << r.second << "\n";
}