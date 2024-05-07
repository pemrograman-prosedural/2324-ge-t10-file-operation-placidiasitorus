#include "repository.h"
#include <stdio.h>


void print_repository( const Repository *repo ) {
    printf("ID: %d\n", repo->id);
    printf("Name: %s\n", repo->name);
}
