#include <iostream>
#include <string>

using namespace std;

class Date {
 private:
   unsigned day;
   unsigned month;
   string monthName;
   unsigned year;

 public:
   // creates the date January 1st, 2000.
   Date();


   /* parameterized constructor: month number, day, year 
       - e.g. (3, 1, 2010) will construct the date March 1st, 2010

       If any of the arguments are invalid (e.g. 15 for month or 32 for day)
       then the constructor will construct instead a valid Date as close
       as possible to the arguments provided - e.g. in above example,
       Date(15, 32, 2010), the Date would be corrected to Dec 31st, 2010.
       In case of such invalid input, the constructor will issue a console error message: 

       Invalid date values: Date corrected to 12/31/2010.
       (with a newline at the end).
   */
   Date(unsigned m, unsigned d, unsigned y);


   /* parameterized constructor: month name, day, year
      - e.g. (December, 15, 2012) will construct the date December 15th, 2012

       If the constructor is unable to recognize the string argument as a valid month name,
       then it will issue a console error message: 

       Invalid month name: the Date was set to 1/1/2000.
       (with a newline at the end).
 
       If the day argument is invalid for the given month (but the month name was valid),
       then the constructor will handle this error in the same manner as the other
       parameterized constructor. 

       This constructor will recognize both "december" and "December"
       as month name.
   */
   Date(const string &mn, unsigned d, unsigned y);


   /* Outputs to the console (cout) a Date exactly in the format "3/15/2012". 
      Does not output a newline at the end.
   */
   void printNumeric() const;


   /* Outputs to the console (cout) a Date exactly in the format "March 15, 2012".
      The first letter of the month name is upper case, and the month name is
      printed in full - January, not Jan, jan, or january. 
      Does not output a newline at the end.
   */
   void printAlpha() const;

 private:

   /* Returns true if the year passed in is a leap year, otherwise returns false.
   */
   bool isLeap(unsigned y) const;


   /* Returns number of days allowed in a given month
      -  e.g. daysPerMonth(9, 2000) returns 30.
      Calculates February's days for leap and non-leap years,
      thus, the reason year is also a parameter.
   */
   unsigned daysPerMonth(unsigned m, unsigned y) const;

   /* Returns the name of a given month
      - e.g. name(12) returns the string "December"
   */
   string name(unsigned m) const;

   /* Returns the number of a given named month
      - e.g. number("March") returns 3
   */
   unsigned number(const string &mn) const;
};


// Implement the Date member functions here:

   // creates the date January 1st, 2000.
   Date::Date() {
      month = 1;
      day = 1;
      year = 2000;
      monthName = name(month);
   }

   /* parameterized constructor: month number, day, year 
       - e.g. (3, 1, 2010) will construct the date March 1st, 2010

       If any of the arguments are invalid (e.g. 15 for month or 32 for day)
       then the constructor will construct instead a valid Date as close
       as possible to the arguments provided - e.g. in above example,
       Date(15, 32, 2010), the Date would be corrected to Dec 31st, 2010.
       In case of such invalid input, the constructor will issue a console error message: 

       Invalid date values: Date corrected to 12/31/2010.
       (with a newline at the end).
   */
   Date::Date(unsigned m, unsigned d, unsigned y) {
      bool invalid = false;

      month = m;
      day = d;
      year = y;
      
      if (day > daysPerMonth(month, year)) {    // Check if day is greater than total days in that month.
         if (month > 0) {
            if (month < 13) {
               day = daysPerMonth(month, year);
               invalid = true;
            }
         }
      }
      if (month < 1) {
         month = 1;
         invalid = true;
      }
      if (month > 12) {
         month = 12;
         invalid = true;
      }
      if (day > 31) {
         day = daysPerMonth(month, year);
         invalid = true;
      }
      if (day < 1) {
         day = 1;
         invalid = true;
      }
      if ((month == 2) && (isLeap(year) == false) && (day >= 29)) {   // Check for leap year.
         day = 28;
         invalid = true;
      }

      if (invalid == true) {
         cout << "Invalid date values: Date corrected to " << month << "/" << day << "/" << year << "." << endl;
      }
      
      monthName = name(month);
   }

   /* parameterized constructor: month name, day, year
      - e.g. (December, 15, 2012) will construct the date December 15th, 2012

       If the constructor is unable to recognize the string argument as a valid month name,
       then it will issue a console error message: 

       Invalid month name: the Date was set to 1/1/2000.
       (with a newline at the end).
 
       If the day argument is invalid for the given month (but the month name was valid),
       then the constructor will handle this error in the same manner as the other
       parameterized constructor. 

       This constructor will recognize both "december" and "December"
       as month name.
   */
   Date::Date(const string &mn, unsigned d, unsigned y) {
      bool invalid = false;

      monthName = mn;
      monthName[0] = toupper(monthName[0]);

      day = d;
      year = y;
      month = number(monthName);

      if (month == 0) {
         month = 1;
         day = 1;
         year = 2000;
         monthName = name(1);
         cout << "Invalid month name: the Date was set to " << month << "/" << day << "/" << year << "." << endl;
      }
      if (day > 31) {
         day = daysPerMonth(month, year);
         invalid = true;
      }
      if (day > daysPerMonth(month, year)) {    // Check if day is greater than total days in that month.
         if (month > 0) {
            if (month < 13) {
               day = daysPerMonth(month, year);
               invalid = true;
            }
         }
      }
      if ((month == 2) && (isLeap(year) == false) && (day >= 29)) {   // Check for leap year.
         day = 28;
         cout << "Invalid date values: Date corrected to " << month << "/" << day << "/" << year << "." << endl;
      }
      if (day < 1) {
         day = 1;
         invalid = true;
      }
      if (invalid == true) {
         cout << "Invalid date values: Date corrected to " << month << "/" << day << "/" << year << "." << endl;
      }

   }

   /* Outputs to the console (cout) a Date exactly in the format "3/15/2012". 
      Does not output a newline at the end.
   */
   void Date::printNumeric() const {
      cout << month << "/" << day << "/" << year;
   }

   /* Outputs to the console (cout) a Date exactly in the format "March 15, 2012".
      The first letter of the month name is upper case, and the month name is
      printed in full - January, not Jan, jan, or january. 
      Does not output a newline at the end.
   */
   void Date::printAlpha() const {
      cout << monthName << " " << day << ", " << year;
   }

// Private functions:

   /* Returns true if the year passed in is a leap year, otherwise returns false. */
   bool Date::isLeap(unsigned y) const {

      if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {   // Leap year algorithm.
         return true;
      }
      
      return false;
   }

   /* Returns number of days allowed in a given month
      -  e.g. daysPerMonth(9, 2000) returns 30.
      Calculates February's days for leap and non-leap years,
      thus, the reason year is also a parameter.
   */
   unsigned Date::daysPerMonth(unsigned m, unsigned y) const {
      bool isLeapYear = false;

      if (isLeap(y) == true) {
         isLeapYear = true;
      }
      if (m == 1) {
         return 31;
      }
      if ((m == 2) && (isLeapYear == true)) {
         return 29;
      }
      else if (m == 2) {
         return 28;
      }
      if (m == 3) {
         return 31;
      }
      if (m == 4) {
         return 30;
      }
      if (m == 5) {
         return 31;
      }
      if (m == 6) {
         return 30;
      }
      if (m == 7) {
         return 31;
      }
      if (m == 8) {
         return 31;
      }
      if (m == 9) {
         return 30;
      }
      if (m == 10) {
         return 31;
      }
      if (m == 11) {
         return 30;
      }
      if (m == 12) {
         return 31;
      }

      return 0;
   }

   /* Returns the name of a given month
      - e.g. name(12) returns the string "December"
   */
   string Date::name(unsigned m) const {
      string mn;

      if (m == 1) {
         mn = "January";
      }
      if (m == 2) {
         mn = "February";
      }
      if (m == 3) {
         mn = "March";
      }
      if (m == 4) {
         mn = "April";
      }
      if (m == 5) {
         mn = "May";
      }
      if (m == 6) {
         mn = "June";
      }
      if (m == 7) {
         mn = "July";
      }
      if (m == 8) {
         mn = "August";
      }
      if (m == 9) {
         mn = "September";
      }
      if (m == 10) {
         mn = "October";
      }
      if (m == 11) {
         mn = "November";
      }
      if (m == 12) {
         mn = "December";
      }

      return mn;
   }

   /* Returns the number of a given named month
      - e.g. number("March") returns 3
   */
   unsigned Date::number(const string &mn) const {

      if (mn == "January") {
         return 1;
      }
      if (mn == "February") {
         return 2;
      }
      if (mn == "March") {
         return 3;
      }
      if (mn == "April") {
         return 4;
      }
      if (mn == "May") {
         return 5;
      }
      if (mn == "June") {
         return 6;
      }
      if (mn == "July") {
         return 7;
      }
      if (mn == "August") {
         return 8;
      }
      if (mn == "September") {
         return 9;
      }
      if (mn == "October") {
         return 10;
      }
      if (mn == "November") {
         return 11;
      }
      if (mn == "December") {
         return 12;
      }
      
      return 0;
   }

// Don't change the code below this line.
// You may comment them out if you want to build your own test harness
// while in develope mode, but you will need these to pass tets in submit mode.

Date getDate();

int main() {
   
   Date testDate;
   testDate = getDate();
   cout << endl;
   cout << "Numeric: ";
   testDate.printNumeric();
   cout << endl;
   cout << "Alpha:   ";
   testDate.printAlpha();
   cout << endl;
   
   return 0;
}

Date getDate() {
   int choice;
   unsigned monthNumber, day, year;
   string monthName;

   cout << "Which Date constructor? (Enter 1, 2, or 3)" << endl
      << "1 - Month Number" << endl
      << "2 - Month Name" << endl
      << "3 - default" << endl;
   cin >> choice;
   cout << endl;

   if (choice == 1) {
      cout << "month number? ";
      cin >> monthNumber;
      cout << endl;
      cout << "day? ";
      cin >> day;
      cout << endl;
      cout << "year? ";
      cin >> year;
      cout << endl;
      return Date(monthNumber, day, year);
   } else if (choice == 2) {
      cout << "month name? ";
      cin >> monthName;
      cout << endl;
      cout << "day? ";
      cin >> day;
      cout << endl;
      cout << "year? ";
      cin >> year;
      cout << endl;
      return Date(monthName, day, year);
   } else {
      return Date();
   }
}
