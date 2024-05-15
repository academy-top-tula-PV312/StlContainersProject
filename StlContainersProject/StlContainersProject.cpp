#include <iostream>
#include <vector>
#include <list>
#include <forward_list>

bool IsEven(int item) { return item % 2 == 0; }

class Predicate
{
public:
    bool operator()(int item)
    {
        return item % 2 == 0;
    }
};

int main()
{
    std::vector<int> v1{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    std::vector<int> v2{ 11, 22, 33, 44, 55, 66, 77, 88, 99 };

    std::forward_list<int> l1{ 11, 22, 33, 44, 55, 66, 77, 88, 99 };

    /*v1.swap(v2);
    
    for (auto i : v1)
        std::cout << i << " ";
    std::cout << "\n";

    for (auto i : v2)
        std::cout << i << " ";
    std::cout << "\n";*/

    /*v2.assign(v1.begin() + 2, v1.end() - 3);
    for (auto i : v1)
        std::cout << i << " ";
    std::cout << "\n";*/

    //std::cout << v1.front() << " " << v1.back() << "\n";
    /*for (auto it{ v1.begin()}; it != v1.end(); it++)
        std::cout << *it << " ";*/


    //std::cout << v1.max_size() / 4 / 1024 << "\n";

    /*auto it = v1.begin() + 4;

    v1.insert(it, {444, 555, 666});*/


    auto isEven = [](int item) { return item % 2 == 0; };

    //l1.remove_if([](int item) { return item % 2 == 0; });
    //l1.remove_if(IsEven);
    //l1.remove_if(Predicate());
    l1.remove_if(isEven);

    []() {};

    for (auto i : l1)
        std::cout << i << " ";
    std::cout << "\n";

    

}
