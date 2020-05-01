#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

class Manager: public Employee {
  protected: 
   bool isSalaried; 
   float Salary; 
   
  public: 
    Manager();
    Manager(string theName, float pay, bool isSalaried); 
    bool getIsSalaried() const;
    float getSalary() const;
    void setIsSalaried(bool x);
    void setSalary(float x);

    float pay(float hoursWorked) const;

    friend ostream& operator<<(ostream &out, const Manager &m) {
      if (m.getIsSalaried() == true) {
        out << m.getName() << " is salaried and has a salary of " << m.getSalary() << " USD" << endl;
      } else {
        out << m.getName() << " is not salaried and has an hourly rate of " << m.getPayRate() << " USD" << endl;
      }

      return out; 
    }
};
