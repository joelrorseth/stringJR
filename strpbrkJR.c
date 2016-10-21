//
//  strpbrkJR.c
//  
//  Locate the first occurrence of any character in S1 found in S2, and returns a
//  pointer to that position in S1. If no character in S2 is found in S1, a NULL value
//  is returned. It is assumed that both S1 and S2 are valid strings. If either S1 or
//  S2 is an empty string, the value NULL is returned.
//
//  Last modified by Joel Rorseth on 2016-09-28.
//
//

#include <stdio.h>

char * strpbrkJR(const char *, const char *);

// ===============================================
// Demonstration
// ===============================================
int main(void) {
    
    char word1[5] = {'t', 'r', 'i', 'p'};
    char word2[5] = {'s', 'e', 'a', 't'};
    
    char * occurence = strpbrkJR(word1, word2);
    
    printf("Word1: %s , Word2: %s \n", word1, word2);
    printf("First common letter was %c located at %p.\n", *occurence, occurence);
    
    return 0;
}

// ===============================================
// ===============================================
char * strpbrkJR(const char * s1, const char * s2) {
    
    // Loop through each letter in s1 to check each letter in s2
    for (; *s1 != '\0'; s1++)
        for (; *s2 != '\0'; s2++)
            if (*s1 == *s2)
                return (char *)s1;
     
    // If no character is found in the loops, return NULL
    return NULL;
}
