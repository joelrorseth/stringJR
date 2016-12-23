//
//  memsetJR.c
//
//  The memset() function writes len bytes of value c
//  (converted to an unsigned char) to the string b.
//  Returns the void * point b originally passed.
//
//  Last modified by Joel Rorseth on 2016-12-23.
//

#include <stdio.h>

void * memsetJR(void *, int, size_t);

// ===============================================
// Demonstration
// ===============================================
int main(void) {
    
    char str[] = "http://www.google.com";
    char ch = '*';
    
    printf("Original string     => %s\n", str);
    memsetJR(str, ch, 4);
    printf("memset(str, '*', 4) => %s\n", str);
    
    return 0;
}

// ===============================================
// ===============================================
void * memsetJR(void * b, int c, size_t len) {
    
    int i;
    unsigned char * p = b;
    
    for (i = 0; i < len; i++) {
        *p = c;
        p++;
    }
    
    return b;
}
