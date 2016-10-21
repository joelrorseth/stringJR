//
//  strcspnJR.c
//
//  Spans the initial part of the null-terminated string s1 as
//  long as characters from s1 do not occur in the null-terminated
//  string s2. Returns the number of characters spanned.
//
//  Last modified by Joel Rorseth on 2016-09-28.
//

#include <stdio.h>

size_t strcspnJR(const char *, const char *);

// ===============================================
// Demonstration
// ===============================================
int main(void) {
    
    char w1[] = "This is a sentence.";
    char w2[] = "ezSrg";
    
    printf("w1 = \"%s\"\nw2 = \"%s\"\n", w1, w2);
    printf("strcspn(w1,w2) = %zu\n", strcspnJR(w1,w2));
    
    return 0;
}

// ===============================================
// ===============================================
size_t strcspnJR(const char * s1, const char * s2) {
    
    size_t n = 0;
    char * s2_head = (char *)s2;
    
    // Tes every character combination of both strings
    for (; *s1 != '\0'; s1++) {
        for (s2 = s2_head; *s2 != '\0'; s2++) {
            
            // If char from s2 is found, we are finished
            if (*s1 == *s2)
                return n;
            else
                continue;
        }
        
        // At this point, current letter from s1 is
        // not in s2, so increment 'n'
        n++;
    }
    
    return n;
}
