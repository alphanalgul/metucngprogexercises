#include <iostream>
#include "salary.h"
#include "CompositeEmployee.h"
#include "AggregateEmployee.h"
int main() {
    Salary s1(2000, 300);
    Salary s2(2500, 400);

    AggregateEmployee e1(&s1);
    AggregateEmployee e2(&s2);

    std::cout << "Initial salaries:\n";
    e1.printSalary();
    e2.printSalary();

    // Change salaries
    s1.setBase(3500);
    s2.setBonus(600);

    std::cout << "\nAfter changes:\n";
    e1.printSalary();
    e2.printSalary();

    return 0;

}
