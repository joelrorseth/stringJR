//
//  strchrJR.c
//
//  Locates the first occurence of 'c' (converted to
//  a char) in the string pointed to by 's'. The null
//  terminating character is considered part of the string.
//  Returns a pointer to the located character, else NULL.
//
//  Last modified by Joel Rorseth on 2016-09-28.
//

#include <stdio.h>

char * strchrJR(const char *, int);

// ===============================================
// Demonstration
// ===============================================
int main(void) {
    
    const char str[] = "http://www.google.com";
    const char ch = '.';
    char *ret;
    
    ret = strchrJR(str, ch);
    printf("Original string: %s\n", str);
    printf("String at first occurence of '%c' is %s\n", ch, ret);
    
    return 0;
}

// ===============================================
// ===============================================
char * strchrJR(const char *s, int c) {
    
    // Until a match is found, check all valid characters
    while (*s != '\0' &&  *s != c)
        s++;
    
    // Return location of match if verified, NULL otherwise
    if (*s == c)
        return (char *)s;
    else
        return NULL;
}
