#include "grade.h"
#include<iostream>

std::string getLetterGrade(int score) {
    if (score < 0 || score > 100) {
        // there are better ways to handle this error like throwing an exception
        // for now we will just return an error message
        return "Invalid score";
    } else if (score >= 90) {
        return "A";
    } else if (score >= 80) {
        return "B";
    } else if (score >= 70) {
        return "C";
    } else if (score >= 60) {
        return "D";
    }
    return "F";
}

