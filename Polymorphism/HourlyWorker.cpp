// CommissionEmployee class member-function definitions.
#include <iomanip>
#include <sstream>
#include "HourlyWorker.h" // CommissionEmployee class definition
using namespace std;

// constructor
HourlyWorker::HourlyWorker(const string &first,
   const string &last, const string &ssn, double hours, double wage)
   : Employee(first, last, ssn) {
   setHoursWorked(hours);
   setHourlyWage(wage);
}

// set gross sales amount
void HourlyWorker::setHoursWorked(double hours) {
   hoursWorked = hours;
}

// return gross sales amount
double HourlyWorker::getHoursWorked() const { return hoursWorked; }

// set commission rate
void HourlyWorker::setHourlyWage(double wage) {
   hourlyWage = wage;
}

// return commission rate
double HourlyWorker::getHourlyWage() const {
   return hourlyWage;
}

// calculate earnings; override pure virtual function earnings in Employee
double HourlyWorker::earnings() const {
	if(getHoursWorked() > 40)
	{
		return ( (getHourlyWage() * 40) + ((getHourlyWage()*1.5) * (getHoursWorked() - 40)) );
	}
	else{
   return getHourlyWage() * getHoursWorked();
	}
}

// return a string representation of CommissionEmployee's information
string HourlyWorker::toString() const {
   ostringstream output;
   output << fixed << setprecision(2);
   output << "commission employee: " << Employee::toString()
      << "\nhours worked: " << getHoursWorked()
      << "; hourly wage: " << getHourlyWage();
   return output.str();
}
