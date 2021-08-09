/*fig07_18.cpp*/

#include <GradeBook.h>
#include <GradeBook.cpp>

int main()
{
   int gradesArray[GradeBook::students] =
      {87, 68, 94, 100, 83, 78, 85, 91, 76, 87};

   GradeBook myGradeBook("CS101 Introduction to C++ Programming", gradesArray);
   myGradeBook.displayMessage();
   myGradeBook.processGrades();

   return 0;
}
