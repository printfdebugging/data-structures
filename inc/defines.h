#ifndef DEFINES_H
#define DEFINES_H

#include <stdio.h>

#define ASSERT(expression, message) \
    if (expression) { \
    } else{ \
        fprintf(stderr, "[ASSERTION FAILURE] expression: %s, message: %s, file: %s, line: %i\n", #expression, message, __FILE__, __LINE__); \
    } 


#endif
