//
//  strncatJR.c
//
//  Append no more than 'n' characters fromq s2 to the
//  end of the null-terminated string s1, then add '\0'.
//  The pointer s1 is returned.
//
//  Last modified by Joel Rorseth on 2016-09-28.
//


#include <stdio.h>

char * strncatJR(char *, const char *, size_t);

// ===============================================
// Demonstration
// ===============================================
int main(void) {
    
    char example[100] = "The house ";
    
    strncatJR(example, "is older than me.", 6);
    printf("%s\n", example);
    
    return 0;
}

// ===============================================
// ===============================================
char * strncatJR(char * s1, const char * s2, size_t n) {
    
    char * start = s1;
    int i;
    
    // Find the end of s1, the first word
    while (*s1 != '\0') {
        s1++;
    }
    
    // Append another character from s2 to s1 'n' times
    for (i = 0; i < n; i++) {
        
        // If s2 is not empty, append. Else, we are done
        if (*s2 != '\0') {
            *s1 = *s2;
            s1++;
            s2++;
        }
        else
            break;
    }
    
    // Add on null character to make it a proper string
    *s1 = '\0';
    
    return start;
}
