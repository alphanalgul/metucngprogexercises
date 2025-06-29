
#ifndef SALARY_COMPOSITEAGGREGATION_SALARY_H
#define SALARY_COMPOSITEAGGREGATION_SALARY_H
class Salary
{
private:
    int base;
    int bonus;
public:
    Salary()
    {
        base = 0;
        bonus = 0;
    }
    Salary(int b,int bo)
    {
        base = b;
        bonus = bo;
    }
    void setBase(int b)
    {
        base = b;
    }
    void setBonus(int bo)
    {
        bonus = bo;
    }
    int getBase(){
        return base;
    }
    int getBonus()
    {
        return bonus;
    }
    void printSalary()
    {
        std::cout<<"Base = "<<base<<std::endl;
        std::cout<<"Bonus = "<<bonus<<std::endl;
    }
};

#endif
