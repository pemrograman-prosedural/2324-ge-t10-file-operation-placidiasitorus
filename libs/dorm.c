#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dorm.h"

// Fungsi untuk membuat objek asrama baru
struct dorm_t create_dorm(char *_name, unsigned short _capacity, enum gender_t _gender) {
    // Mengalokasikan memori untuk objek asrama baru
    struct dorm_t new_dorm;
    
    // Menyalin data tentang asrama ke objek baru
    strncpy(new_dorm.name, _name, sizeof(new_dorm.name));
    new_dorm.capacity = _capacity;
    new_dorm.gender = _gender;
    new_dorm.residents_num = 0; // Awalnya belum ada penghuni
    
    // Mengembalikan objek asrama baru
    return new_dorm;
}


