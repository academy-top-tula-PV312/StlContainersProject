#include <iostream>
#include <set>
#include <string>

struct User
{
    std::string name;
    int age;

    /*friend bool operator<(User u1, User u2)
    {
        return u1.age < u2.age;
    }*/

    friend std::ostream& operator<<(std::ostream& out, User u)
    {
        out << u.name << " " << u.age;
        return out;
    }
};

class IUserCompare
{
public:
    virtual bool operator()(const User& u1, const User& u2) const = 0;
};

class UserCompareName : public IUserCompare
{
public:
    bool operator()(const User& u1, const User& u2) const override
    {
        return u1.name < u2.name;
    }
};

class UserCompareAge : public IUserCompare
{
public:
    bool operator()(const User& u1, const User& u2) const override
    {
        return u1.age < u2.age;
    }
};

void ExampleSet()
{
    srand(time(nullptr));

    std::set<int> s;
    int number;
    for (int i{}; i < 10; i++)
    {
        number = rand() % 10;
        std::cout << number << " ";
        s.insert(number);
    }
    std::cout << "\n";

    for (auto item : s)
        std::cout << item << " ";
    std::cout << "\n";

    std::set<int> s2{ 1, 3, 7, 9, 12, 15 };
    std::cout << *(s2.lower_bound(6)) << "\n";
    std::cout << *(s2.lower_bound(7)) << "\n";

    std::cout << *(s2.upper_bound(6)) << "\n";
    std::cout << *(s2.upper_bound(7)) << "\n";



    /*std::cout << "1: Sort by Name\n2: Sort by Age\nYour choise: ";
    int answer;
    std::cin >> answer;

    IUserCompare* compare;
    if (answer == 1)
        compare = new UserCompareName();
    else
        compare = new UserCompareAge();*/

    std::set<User, UserCompareName> users;

    users.insert({ "Sam", 52 });
    users.insert({ "Joe", 21 });
    users.insert({ "Bob", 33 });
    users.insert({ "Leo", 40 });

    for (auto u : users)
        std::cout << u << "\n";
}