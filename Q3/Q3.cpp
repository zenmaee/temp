#include <iostream>
#include <string>
#include "Q3.h"

using namespace std;

// 3a
Manager::Manager() {
  name = "";
  payRate = 0; 
  isSalaried = true; 
  Salary = 1; 
}

Manager::Manager(string theName, float pay, bool isSalaried) {
  name = theName; 
  
  if (isSalaried == true) {
    Salary = pay; 
  } else {
    payRate = pay;
  }
}

bool Manager::getIsSalaried() const{
  return isSalaried;
}

float Manager::getSalary() const{
  return Salary;
}

void Manager::setIsSalaried(bool x) {
  isSalaried = x;
}

void Manager::setSalary(float x) {
  Salary = x;
}

//3c 

float Manager::pay(float hoursWorked) const {
  if (this->isSalaried == true) {
    return Salary;
  } else {
  return hoursWorked * payRate;
  }
}