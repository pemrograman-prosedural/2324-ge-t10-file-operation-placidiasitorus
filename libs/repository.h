#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "gender.h"
#include "dorm.h"
#include "student.h"

typedef struct {
    int id;
    char name[50];
    // menambahkan field lain yang diperlukan
} Repository;
// prototype fungsi
void print_repository( const Repository *repo );

#endif
