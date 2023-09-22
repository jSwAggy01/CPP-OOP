#include "Distance.h"

Distance::Distance() {
   feet = 0;
   inches = 0;
}

Distance::Distance(unsigned ft, double in) {
   feet = ft;
   inches = in;
   init();
}

Distance::Distance(double in) {
   feet = 0;
   inches = in;
   init();
}

unsigned Distance::getFeet() const {
   return feet;
}

double Distance::getInches() const {
   return inches;
}

double Distance::distanceInInches() const {
   return (feet * 12 + inches);
}

double Distance::distanceInFeet() const {
   return (distanceInInches() / 12);
}

double Distance::distanceInMeters() const {
   return (distanceInInches() * 0.0254);
}

Distance Distance::operator+(const Distance &rhs) const {
   return Distance(feet + rhs.feet, inches + rhs.inches);
}

Distance Distance::operator-(const Distance &rhs) const {
   return Distance(distanceInInches() - rhs.distanceInInches());
}

ostream& operator<<(ostream &out, const Distance &rhs) {
   out << rhs.feet << "' "<< rhs.inches << "\"";
   return out;
}

void Distance::init(){

   if(inches < 0)
   inches = -inches;

   while(inches >= 12){
      feet = feet + 1;
      inches = inches -12;
      }
}