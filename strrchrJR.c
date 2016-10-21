//
//  strrchrJR.c
//
//  Locates the last occurence of 'c' (converted to
//  a char) in the string pointed to by 's'. The null
//  terminating character is considered part of the string.
//  Returns a pointer to the located character, else NULL.
//
//  Last modified by Joel Rorseth on 2016-09-28.
//

#include <stdio.h>

char * strrchrJR(const char *, int);

// ===============================================
// Demonstration
// ===============================================
int main(void) {
    
    const char str[] = "http://www.google.com";
    const char ch = '/';
    char *ret;
    
    ret = strrchrJR(str, ch);
    printf("Original string: %s\n", str);
    printf("String at last occurence of '%c' is %s\n", ch, ret);
    
    return 0;
}

// ===============================================
// ===============================================
char * strrchrJR(const char *s, int c) {
    
    char * latestMatch = NULL;
    
    // Check all valid characters, find all matches
    while (*s != '\0') {
        if (*s == c)
            latestMatch = (char *)s;
        s++;
    }
    
    // Return location of \0 if found, else last match
    if (c == '\0')
        return (char *)s;
    else
        return latestMatch;
}
