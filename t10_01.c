// 12S23022 - P. Santa Hillary Sitorus
// 12S23022 - Alif Aflah Suedi

#include <stdio.h>
#include <string.h>
#include "./libs/dorm.h"
#include "./libs/student.h"
#include "./libs/repository.h"

int main(int _argc, char **_argv)
{
    // membaca setiap baris dari berkas
    FILE *file = fopen("storage/data.txt", "r");
    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }

    char line[100];
    while (fgets(line, sizeof(line), file) != NULL)  {
        printf("%s", line);
    }
    
    fclose(file);

    // cek argumen
    for (int i = 1; i < _argc; i++) {
        if (strcmp(_argv[i], "dorm-print-all-detail") == 0) {
            dorm_print_all_detail();
        } else if (strcmp(_argv[i], "student-print-all-detail") == 0) {
            student_print_all_detail();
        }
    }

    return 0;
}
