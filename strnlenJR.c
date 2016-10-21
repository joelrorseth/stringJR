//
//  strnlenJR.c
//
//  Computes the length of the string 's'. Returns the
//  smaller of 'maxlen' and the computed string length.
//
//  Last modified by Joel Rorseth on 2016-10-04.
//

#include <stdio.h>

size_t strnlenJR(const char *, size_t);

// ===============================================
// Demonstration
// ===============================================
int main(void) {
    
    char example[20] = "Example";
    
    printf("With maxlen = 5, Length of \"%s\" is %zu\n", example, strnlenJR(example, 5));
    return 0;
}

// ===============================================
// ===============================================
size_t strnlenJR(const char * s, size_t maxlen) {
    
    size_t length = 0;
    while (*s != '\0' && length < maxlen) {
        length += 1;
        s++;
    }
    
    return length;
}
