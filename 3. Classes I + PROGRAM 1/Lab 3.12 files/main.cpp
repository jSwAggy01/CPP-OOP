#include <iostream>
#include <cmath>

using namespace std;

// Rational Class declaration
class Rational {
   private:
      int numerator;                               // Private data member
      int denominator;                             // Private data member
   public:
      Rational();                                  // Constructor
      explicit Rational(int);                      // Constructor
      Rational(int, int);                          // Constructor
      Rational add(const Rational &) const;        // Accessor
      Rational subtract(const Rational &) const;   // Accessor
      Rational multiply(const Rational &) const;   // Accessor
      Rational divide(const Rational &) const;     // Accessor
      void simplify();                             // Mutator
      void display() const;                        // Accessor
   private:
      int gcd(int, int) const;                     // Helper function
};

// Implement Rational class member functions here

// (1) Create 3 constructors:

   // (1A) a constructor with two parameters (numerator and denominator)
   Rational::Rational(int topNum, int bottomNum) {
      numerator = topNum;
      denominator = bottomNum;
   }

   // (1B) a constructor with one parameter (denominator set to 1)
   Rational::Rational(int topNum) {
      numerator = topNum;
      denominator = 1;
   }

   // (1C) a constructor with no parameters (0/1)
   Rational::Rational() {
      numerator = 0;
      denominator = 1;
   }

// (2) Create 5 accessor functions:

   // (2A) ADD ~ (a/b) + (c/d) = (ad + bc) / (b*d)
   Rational Rational::add(const Rational &fraction) const { 
      double numerator;
      double denominator;

      numerator = ((this->numerator * fraction.denominator) + (this->denominator * fraction.numerator));
      denominator = (this->denominator * fraction.denominator);
      Rational sum(numerator, denominator);

      return sum;
   }

   // (2B) SUBTRACT ~ (a/b) - (c/d) = (ad - bc) / (b*d)
   Rational Rational::subtract(const Rational &fraction) const { 
      double numerator;
      double denominator;

      numerator = ((this->numerator * fraction.denominator) - (this->denominator * fraction.numerator));
      denominator = (this->denominator * fraction.denominator);
      Rational difference(numerator, denominator);

      return difference;
   }

   // (2C) MULTIPLY ~ (a/b) * (c/d) = (ac) / (bd)
   Rational Rational::multiply(const Rational &fraction) const { 
      double numerator;
      double denominator;

      numerator = (this->numerator * fraction.numerator);
      denominator = (this->denominator * fraction.denominator);
      Rational product(numerator, denominator);

      return product;
   }

   // (2D) DIVIDE ~ (a/b) / (c/d) = (ad) / (cb)
   Rational Rational::divide(const Rational &fraction) const { 
      double numerator;
      double denominator;

      numerator = (this->numerator * fraction.denominator);
      denominator = (fraction.numerator * this->denominator);
      Rational quotient(numerator, denominator);

      return quotient;
   }

   // (2E) DISPLAY
   void Rational::display() const {
      cout << numerator << " / " << denominator;
   }

// (3) Create one mutator function:
void Rational::simplify() {
   double divisor = gcd(numerator, denominator);;
   numerator = numerator / divisor;
   denominator = denominator / divisor;
}

// Helper function; greatest common divisor:
int Rational::gcd(int topNum, int bottomNum)const {
   while (bottomNum != 0) {
      int temp = topNum % bottomNum;
      topNum = bottomNum;
      bottomNum = temp;
   }
   return topNum;
}

// Do not change any of the code below this line!!

Rational getRational();
void displayResult(const string &, const Rational &, const Rational&, const Rational&);

int main() {
   Rational A, B, result;
   char choice;
   
   cout << "Enter Rational A:" << endl;
   A = getRational();
   cout << endl;
   
   cout << "Enter Rational B:" << endl;
   B = getRational();
   cout << endl;
   
   cout << "Enter Operation:" << endl
      << "a - Addition (A + B)" << endl
      << "s - Subtraction (A - B)" << endl
      << "m - Multiplication (A * B)" << endl
      << "d - Division (A / B)" << endl
      << "y - Simplify A" << endl;
   cin >> choice;
   cout << endl;
   
   if (choice == 'a') {
      result = A.add(B);
      displayResult("+", A, B, result);
   } else if (choice == 's') {
      result = A.subtract(B);
      displayResult("-", A, B, result);
   } else if (choice == 'm') {
      result = A.multiply(B);
      displayResult("*", A, B, result);
   } else if (choice == 'd') {
      result = A.divide(B);
      displayResult("/", A, B, result);
   } else if (choice == 'y') {
      A.simplify();
      A.display();
   } else {
      cout << "Unknown Operation";
   }
   cout << endl;
   
   return 0;
}


Rational getRational() {
   int choice;
   int numer, denom;
   
   cout << "Which Rational constructor? (Enter 2, 1, or 0)" << endl
      << "2 - 2 parameters (numerator & denominator)" << endl
      << "1 - 1 parameter (numerator)" << endl
      << "0 - 0 parameters (default)" << endl;
   cin >> choice;
   cout << endl;
   
   if (choice == 2) {
      cout << "numerator? ";
      cin >> numer;
      cout << endl;
      cout << "denominator? ";
      cin >> denom;
      cout << endl;
      return Rational(numer, denom);
   } else if (choice == 1) {
      cout << "numerator? ";
      cin >> numer;
      cout << endl;
      return Rational(numer);
   } else {
      return Rational();
   }
}

void displayResult(const string &op, const Rational &lhs, const Rational&rhs, const Rational &result) {
   cout << "(";
   lhs.display();
   cout << ") " << op << " (";
   rhs.display();
   cout << ") = (";
   result.display();
   cout << ")";
}

