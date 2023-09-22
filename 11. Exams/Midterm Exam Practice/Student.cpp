#include "student.h"

   Student() {
      name = "Jane Doe";
      userName = "jdoe002";
      major = "Computer Science";
   }
   
   Student(const string &name, const string &userName, const string &major) {
      this->name = name;
      this->userName = userName;
      this->major = major;
   }
   
   Student(const string &name, const string &username) {
      this->name = name;
      this->userName = userName;
   }
   
   const string& name() const {
       return name;
   }
   const string& username() const;
   const string& major() const;
   int numCourses() const;
   void changeMajor(const string &);
  
   /* Adds a new course to the end of the list of courses.
   */
   void addCourse(const string &);
  
   /* Removes a course by copying the last course
     in the list into the spot where the deleted course was.
     It will not shift up all courses after the one being deleted.
   */
   void deleteCourse(const string &);
  
   /* Outputs a tab character at beginning of each line that
     contains a course name.
   */
   ostream &operator<<(ostream &, const Student &);