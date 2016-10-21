//
//  strstrJR.c
//
//  Locates the first occurrence of the null-terminated
//  string 'needle' in null-terminated string 'haystack'.
//  If needle is empty, haystack is returned. If needle
//  isn't found, returns NULL. Else, return pointer to
//  first character of first occurrence.
//
//  Last modified by Joel Rorseth on 2016-10-20.
//

#include <stdio.h>

char * strstrJR(const char *, const char *);

// ===============================================
// Demonstration
// ===============================================
int main(void) {
    
    const char str[] = "http://www.google.com";
    
    printf("Original string: %s\n", str);
    printf("Substring found: %s\n", strstrJR(str, "www"));
    
    return 0;
}

// ===============================================
// ===============================================
char * strstrJR(const char * haystack, const char * needle) {
    
    if (!needle)
        return NULL;
    
    // Check every letter in 'haystack'
    while (*haystack) {
        
        // Need more pointers so we don't lose original positions
        char * begin = (char *) haystack;
        char * substring = (char *) needle;
        
        // Loop for every character, or until characters match
        while (*haystack && *substring && (*haystack == *substring)) {
            haystack++;
            substring++;
        }
        
        // If all characters matched (none left), return pointer to substring
        if (!*substring)
            return begin;
        
        // Move to next character
        haystack = begin + 1;
    }
    
    // If not found, return NULL
    return NULL;
}

