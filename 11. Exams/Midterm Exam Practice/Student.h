//Student class interface
#ifndef STUDENT_H
#define STUDENT_H
/* Don't forget to add inclusion guard */

#include <iostream>
#include <vector>
#undef major

using namespace std;

class Student {
 private:
  /* Add your member variables here */
  string name;
  string userName;
  string major;
  vector<string> courseList;
  
 public:
  Student();
  Student(const string &name, const string &username, const string &major);
  Student(const string &name, const string &username);
  const string & name() const;
  const string & username() const;
  const string & major() const;
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
  friend ostream &operator<<(ostream &, const Student &);
};

#endif