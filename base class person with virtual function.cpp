#include <iostream>
#include <string>
class Person {
public:
    virtual void work() = 0; // Pure virtual function
};
class Employee : public Person {
public:
    void work() override {
        std::cout << "Employee is working on their tasks." << std::endl;
    }
};
class Manager : public Person {
public:
    void work() override {
        std::cout << "Manager is overseeing the project." << std::endl;
    }
};
int main() {
    Employee emp;
    Manager mgr;
    emp.work(); // Calls Employee's work()
    mgr.work(); // Calls Manager's work()
    return 0;
}
