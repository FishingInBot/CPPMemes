// CommissionEmployee class derived from Employee.
#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H

#include <string> // C++ standard string class
#include "Employee.h" // Employee class definition

class HourlyWorker : public Employee {
public:
	HourlyWorker(const std::string&, const std::string&,
      const std::string&, double = 0.0, double = 0.0);
   virtual ~HourlyWorker() = default; // virtual destructor

   void setHourlyWage(double); // set commission rate
   double getHourlyWage() const; // return commission rate

   void setHoursWorked(double); // set gross sales amount
   double getHoursWorked() const; // return gross sales amount

   // keyword virtual signals intent to override
   virtual double earnings() const override; // calculate earnings
   virtual std::string toString() const override; // string representation
private:
   double hoursWorked; // gross weekly sales
   double hourlyWage; // commission percentage
};

#endif
