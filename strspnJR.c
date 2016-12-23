//
//  strspnJR.c
//
//  Spans the initial part of the null-terminated string
//  s1 as long as characters from s1 occur in the null-terminated
//  string s2. Returns the number of characters spanned.
//
//  Last modified by Joel Rorseth on 2016-12-23.
//

#include <stdio.h>

size_t strspnJR(const char *, const char *);

// ===============================================
// Demonstration
// ===============================================
int main(void) {
    
    char w1[] = "This is a sentence.";
    char w2[] = " Tish";
    
    printf("w1 = \"%s\"\nw2 = \"%s\"\n", w1, w2);
    printf("strspn(w1,w2) = %zu\n", strspnJR(w1,w2));
    
    return 0;
}

// ===============================================
// ===============================================
size_t strspnJR(const char * s1, const char * s2) {
    
    size_t n = 0;
    char * s2_head = (char *)s2;
    
    // Test every character combination of both strings
    for (; *s1 != '\0'; s1++) {
        for (s2 = s2_head; *s2 != '\0'; s2++) {
            
            // If char from s2 is found in s1, go to next s1 char
            if (*s1 == *s2) {
                n++;
                break;
            }
        }
        
        // If s2 loop has exited without a match, then
        // no match found in s1. Exit loop.
        if (*s1 != *s2)
            break;
    }
    
    return n;
}
