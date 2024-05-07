#ifndef STUDENT_H
#define STUDENT_H

#include "gender.h"
#include "dorm.h"

// Definisi struktur student_t
struct student_t
{
    char id[12];
    char name[40];
    char year[5];
    enum gender_t gender;
    struct dorm_t *dorm;
};

// Deklarasi fungsi create_student untuk membuat objek mahasiswa baru
struct student_t create_student(char *_id, char *_name, char *_year,
                                enum gender_t _gender);

#endif /* STUDENT_H */



