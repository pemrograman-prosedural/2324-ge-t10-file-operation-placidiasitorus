#ifndef DORM_H
#define DORM_H

#include "gender.h"

typedef struct dorm_t
{
  char name[20];
  unsigned short capacity;
  enum gender_t gender;
  unsigned short residents_num;
} Dorm;

Dorm create_dorm(char *_name, unsigned short _capacity, enum gender_t _gender);

#endif