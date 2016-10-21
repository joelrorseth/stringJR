//
//  strcpyJR.c
//
//  Copy the string 'source' to 'destination', including
//  the null terminating character. Return 'destination'.
//
//  Last modified by Joel Rorseth on 2016-09-28.
//

#include <stdio.h>

char * strcpyJR(char *, const char *);

// ===============================================
// Demonstration
// ===============================================
int main(void) {
    
    char w1[] = "This is my old string";
    char w2[] = "New String";
    
    printf("w1 = %s\nw2 = %s\n", w1, w2);
    
    // Demonstrate a function call
    strcpyJR(w1, w2);
    printf("After strcpy, w1 = %s\n", w1);
    
    return 0;
}

// ===============================================
// ===============================================
char * strcpyJR(char * destination, const char * source) {
    
    // Create pointer to (start of) destination string
    char * save = destination;
    
    // Copy character at source to destination, increment
    while ((*destination++ = *source++));
    
    // Return pointer to start of destination
    return save;
}
