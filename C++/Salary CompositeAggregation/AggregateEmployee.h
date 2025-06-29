
#ifndef SALARY_COMPOSITEAGGREGATION_AGGREGATEEMPLOYEE_H
#define SALARY_COMPOSITEAGGREGATION_AGGREGATEEMPLOYEE_H
#include "salary.h"
class AggregateEmployee
{
private:
    Salary* salary;
public:
    AggregateEmployee(Salary *s)
    {
        this->salary = s;
    }
    void setSalary(int base,int bonus)
    {
        salary->setBase(base);
        salary->setBonus(bonus);
    }
    Salary *getSalary()
    {
        return salary;
    }
    void printSalary()
    {
        salary->printSalary();
    }
};
#endif //SALARY_COMPOSITEAGGREGATION_AGGREGATEEMPLOYEE_H
