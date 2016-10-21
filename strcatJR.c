//
//  strcatJR.c
//
//  Append a copy of the null-terminated string s2 to the
//  end of the null-terminated string s1, then add '\0'.
//  The pointer s1 is returned.
//
//  Last modified by Joel Rorseth on 2016-09-28.
//

#include <stdio.h>

char * strcatJR(char *, const char *);

// ===============================================
// Demonstration
// ===============================================
int main(void) {
    
    char example[100] = "The house ";
    
    strcatJR(example, "is over 10 ");
    strcatJR(example, "years old.");
    
    printf("%s\n", example);
    
    return 0;
}

// ===============================================
// ===============================================
char * strcatJR(char * s1, const char * s2) {
    char * start = s1;
    
    // Find the end of s1, the first word
    while (*s1 != '\0') {
        s1++;
    }
    
    // For every valid char in s2, append to s1
    while (*s2 != '\0') {
        *s1 = (*s2);
        
        s1++;
        s2++;
    }
    
    // Add on null character to make it a proper string
    *s1 = '\0';
    
    return start;
}
