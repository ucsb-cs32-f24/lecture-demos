#include "grade.h"
#include "tddFuncs.h"
int main() {
    assertEquals("A grade at 90", "A", getLetterGrade(90));
    assertEquals("A grade at 100", "A", getLetterGrade(100));
    
    assertEquals("B grade at 80", "B", getLetterGrade(80));
    assertEquals("B grade at 89", "B", getLetterGrade(89));

    assertEquals("C grade at 70", "C", getLetterGrade(70));
    assertEquals("C grade at 79", "C", getLetterGrade(79));

    assertEquals("D grade correct", "D", getLetterGrade(60));
    assertEquals("D grade correct", "D", getLetterGrade(69));

    assertEquals("F grade ", "F", getLetterGrade(0));
    assertEquals("F grade ", "F", getLetterGrade(59));

    assertEquals("Invalid score", "Invalid score", getLetterGrade(101));
    assertEquals("Invalid score", "Invalid score", getLetterGrade(-1));

    return 0;
}