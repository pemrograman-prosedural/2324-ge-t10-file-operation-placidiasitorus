#include "student.h"
#include <stdlib.h>
#include <string.h>

// Implement the create_student function
struct student_t create_student(char *_id, char *_name, char *_year, enum gender_t _gender) {
    struct student_t new_student;

    // Copy the provided data into the new student struct
    strncpy(new_student.id, _id, sizeof(new_student.id));
    strncpy(new_student.name, _name, sizeof(new_student.name));
    strncpy(new_student.year, _year, sizeof(new_student.year));
    new_student.gender = _gender;
    new_student.dorm = NULL; // Initialize dorm pointer to NULL

    return new_student;
}

// Implement any additional functions related to student management here


/**
 * @brief Define the complete function definition here. Be sure to enlist the prototype of each function
 * defined here in the corresponding header file.
 *
 */
