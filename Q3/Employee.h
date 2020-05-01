#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
  protected:
    string name;
    float payRate;
  public:
    Employee();
    Employee(string theName, float thePayRate);
    string getName() const;
    float getPayRate() const;
    float pay(float hoursWorked) const;
    void printInfo();
};

#endif
