//
//  strcmpJR.c
//
//  Lexicographically compare the null-terminated strings
//  s1 and s2. Return an integer greater than, equal to, or
//  less than 0, according as the string s1 is greater than,
//  equal to, or less than the string s2
//
//  Last modified by Joel Rorseth on 2016-09-28.
//

#include <stdio.h>

int strcmpJR(const char *, const char *);

// ===============================================
// Demonstration
// ===============================================
int main(void) {
    
    const char w1[] = "Hello";
    const char w2[] = "world";
    const char w3[] = "Greeting";
    
    printf("w1 = %s\nw2 = %s\nw3 = %s\n", w1, w2, w3);
    
    printf("strcmp(w1,w1) = %d\n", strcmpJR(w1, w1));
    printf("strcmp(w1,w2) = %d\n", strcmpJR(w1, w2));
    printf("strcmp(w1,w3) = %d\n", strcmpJR(w1, w3));
    
    return 0;
}

// ===============================================
// ===============================================
int strcmpJR(const char * s1, const char * s2) {

    // If characters are equal, and neither are null character,
    while ((*s1 == *s2) && (*s1 != '\0') && (*s2 != '\0')) {
        // Increase both s1 and s2 to next characters
        s1++;
        s2++;
    }
    
    // Return the difference between ASCII values of current chars
    return *s1 - *s2;
}
