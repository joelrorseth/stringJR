//
//  strncmpJR.c
//
//  Lexicographically compare the null-terminated strings
//  s1 and s2. Return an integer greater than, equal to, or
//  less than 0, according as the string s1 is greater than,
//  equal to, or less than the string s2. Compare no more than
//  n characters.
//
//  Last modified by Joel Rorseth on 2016-10-20.
//

#include <stdio.h>

int strncmpJR(const char *, const char *, size_t);

// ===============================================
// Demonstration
// ===============================================
int main(void) {
    
    const char w1[] = "Hello";
    const char w2[] = "World";
    const char w3[] = "Word";
    
    printf("w1 = %s\nw2 = %s\nw3 = %s\n", w1, w2, w3);
    
    printf("strncmp(w1,w1,5) = %d\n", strncmpJR(w1, w1, 5));
    printf("strncmp(w2,w3,5) = %d\n", strncmpJR(w2, w3, 5));
    printf("strncmp(w2,w3,4) = %d\n", strncmpJR(w2, w3, 4));
    
    return 0;
}

// ===============================================
// ===============================================
int strncmpJR(const char * s1, const char * s2, size_t n) {
    
    int count = 1;
    
    // If characters are equal, and neither are null character,
    while ((*s1 == *s2) && (*s1 != '\0') && (*s2 != '\0') && (count < (n - 1))) {
        // Increase both s1 and s2 to next characters
        s1++;
        s2++;
        count++;
    }
    
    // Result is the difference of current chars at position 'n-1'
    return *s1 - *s2;
}

