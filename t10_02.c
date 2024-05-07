// 12S23022 - p. Santa Hillary Sitorus
// 12S23025 - Alif Aflah Suedi

#include <stdio.h>   
#include <string.h>
#include "./libs/dorm.h"
#include "./libs/student.h"
#include "./libs/repository.h"

// Include guards for dorm.h and student.h to prevent multiple inclusions
#ifndef DORM_H_INCLUDED
#define DORM_H_INCLUDED
#include "./libs/dorm.h"
#endif

#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include "./libs/student.h"
#endif

void save_data() {
    // menyimpan data asrama
    FILE *dorm_file = fopen("storage/dorm.txt", "w");
    if (dorm_file != NULL) {
        for (int i = 0; i < get_dorm_count(); i++) {
            Dorm dorm = get_dorm(i);
            fprintf(dorm_file, "%s|%d|%d\n", dorm.name, dorm.capacity, dorm.gender);
        }
        fclose(dorm_file);
    } else {
        printf("Failed to open dorm.txt for writing.\n");
    }

    // menyimpan data mahasiswa
    FILE *student_file = fopen("storage/student.txt", "w");
    if (student_file != NULL) {
        for (int i = 0; i < get_student_count(); i++) {
            Student student = get_student(i);
            fprintf(student_file, "%s#%s#%d#%s\n", student.id, student.name, student.year, student.gender);
        }
        fclose(student_file);
    } else {
        printf("Failed to open student.txt for writing.\n");
    }
}

int main(int _argc, char **_argv)
{
    // kode lainnya...

    // menyimpan data sebelum program berakhir
    save_data();

    return 0;
}
