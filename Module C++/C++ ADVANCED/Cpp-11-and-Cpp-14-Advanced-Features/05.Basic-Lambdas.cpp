#include <iostream>
#include <list>
#include <algorithm>

class Person {
    std::string name;
    int age;

public:
    Person(std::string name, int age) :
        name(name),
        age(age) {
    }

    Person(std::string name) : Person(name, 0) {}

    Person() : Person("[unknown]", 0) {}

    Person(std::pair<std::string, int> nameAgePair) : Person(nameAgePair.first, nameAgePair.second) {}

    std::string getName() const {
        return this->name;
    }

    int getAge() const {
        return this->age;
    }

    friend std::ostream& operator<<(std::ostream&, const Person&);
};

std::ostream& operator<<(std::ostream& stream, const Person& p) {
    stream << p.name << " " << p.age;
    return stream;
}

int main() {
   
    std::cout << *std::find_if(people.begin(), people.end(), [](const Person& p) { return p.getAge() == 69;} ) << std::endl;

    std::cout << "----------" << std::endl;

    people.sort([](const Person& a, const Person& b) {
                return a.getAge() < b.getAge();
                });

    for (auto p : people) {
        std::cout << p << std::endl;
    }

    return 0;
}
