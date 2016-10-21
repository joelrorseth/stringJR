//
//  strlenJR.c
//
//  Computes the length of the string 's'. Return number
//  of characters that precede the null terminating character.
//
//  Last modified by Joel Rorseth on 2016-10-04.
//

#include <stdio.h>

size_t strlenJR(const char *);

// ===============================================
// Demonstration
// ===============================================
int main(void) {
    
    char example[20] = "This is a string";
    
    printf("Length of \"%s\" is %zu\n", example, strlenJR(example));
    return 0;
}

// ===============================================
// ===============================================
size_t strlenJR(const char * s) {
    
    if (*s != '\0')
        return (1 + (strlenJR(++s)) );
    else
        return 0;
}
