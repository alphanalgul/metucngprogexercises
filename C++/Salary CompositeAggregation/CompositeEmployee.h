
#ifndef SALARY_COMPOSITEAGGREGATION_COMPOSITEEMPLOYEE_H
#define SALARY_COMPOSITEAGGREGATION_COMPOSITEEMPLOYEE_H
#include "salary.h"
class CompositeEmployee
{
private:
    Salary s;
public:
    CompositeEmployee()
    {
        s = Salary();
    }
    CompositeEmployee(int base,int bonus)
    {
       s = Salary(base,bonus);
    }

    void setSalary(int base, int bonus)
    {
        s.setBase(base);
        s.setBonus(bonus);
    }

    Salary& getSalary()
    {
        return s;
    }
    void printSalary()
    {
        s.printSalary();
    }
};
#endif //SALARY_COMPOSITEAGGREGATION_COMPOSITEEMPLOYEE_H
