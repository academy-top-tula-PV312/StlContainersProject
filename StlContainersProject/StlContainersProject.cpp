#include <iostream>
#include <string>
#include <exception>
#include <unordered_set>
#include <stack>
#include <queue>



int main()
{
    srand(time(nullptr));

    //std::unordered_set<int> nums;
    //auto hash_f = nums.hash_function();

    //int num;
    //for (int i{}; i < 10; i++)
    //{
    //    //num = rand() % 8 + 1;
    //    //std::cout << "Insert " << num << ":\n";
    //    nums.insert((i + 1) * 10);
    //    std::cout << hash_f((i + 1) * 10) << " ";
    //}
    //std::cout << "\n";

    //for (auto it{ nums.begin() }; it != nums.end(); it++)
    //    std::cout << *it << " ";
    //std::cout << "\n";
    
    std::stack<int> stack;
    std::queue<int> queue;
    std::priority_queue<int> pqueue;

    int number;
    for (int i{}; i < 10; i++)
    {
        number = rand() % 100;
        stack.push(number);
        queue.push(number);
        pqueue.push(number);
        std::cout << number << " ";
    }
    std::cout << "\n";

    std::cout << "stack pops: ";
    while (!stack.empty())
    {
        std::cout << stack.top() << " ";
        stack.pop();
    }
    std::cout << "\n";

    std::cout << "queue pops: ";
    while (!queue.empty())
    {
        std::cout << queue.front() << " ";
        queue.pop();
    }
    std::cout << "\n";

    std::cout << "priorety queue pops: ";
    while (!pqueue.empty())
    {
        std::cout << pqueue.top() << " ";
        pqueue.pop();
    }
    std::cout << "\n";
    
}
