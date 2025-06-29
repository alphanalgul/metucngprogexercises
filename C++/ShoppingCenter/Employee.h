
#ifndef INC_2584639_EMPLOYEE_H
#define INC_2584639_EMPLOYEE_H
class Employee{
private:
    char *firstname;
    char *lastname;
    int SSN;
public:
    Employee();
    Employee(const char *firstname,const char *lastname);
    Employee(const Employee& e);
    ~Employee();
    Employee& operator=(const Employee& e);
    void setFirstName(const char *firstname);
    void setLastName(const char *lastname);
    void setSSN(int SSN);
    const char *getFirstName() const;
    const char *getLastName() const;
    int getSSN() const;
    void printEmployee() const;
    bool checkName(const char *keyword) const;
};
#endif //INC_2584639_EMPLOYEE_H
