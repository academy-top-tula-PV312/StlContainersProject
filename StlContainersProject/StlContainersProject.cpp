#include <iostream>
#include <string>
#include <exception>
#include <unordered_set>


int main()
{
    srand(time(nullptr));

    std::unordered_set<int> nums;
    auto hash_f = nums.hash_function();

    int num;
    for (int i{}; i < 10; i++)
    {
        //num = rand() % 8 + 1;
        //std::cout << "Insert " << num << ":\n";
        nums.insert((i + 1) * 10);
        std::cout << hash_f((i + 1) * 10) << " ";
    }
    std::cout << "\n";

    for (auto it{ nums.begin() }; it != nums.end(); it++)
        std::cout << *it << " ";
    std::cout << "\n";
    
        
    
}
