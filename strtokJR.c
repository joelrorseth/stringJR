//
//  strtokJR.c
//
//  Successively extract sequential tokens in a null-terminated
//  string 'str', separated by any single character that occurs
//  in 'sep' at least once. Subsequent call to strtok() should
//  pass NULL to 'str'. Returns null terminated token string.
//
//  Last modified by Joel Rorseth on 2016-12-23.
//

#include <stdio.h>

char * strtokJR(char * restrict, const char * restrict);

// ===============================================
// Demonstration
// ===============================================
int main(void) {
    
    char str1[] = "This is a sample string";
    char str2[] = " ";
    char * result;
    int i = 1;
    
    printf("Original string =>  %s\n", str1);
    printf("After strtok(str, \" \") ... \n");
    
    result = strtokJR(str1, str2);
    
    while (result != NULL) {
        printf("Call #%d returns:  %s\n", i++, result);
        result = strtokJR(NULL, str2);
    }
    
    return 0;
}

// ===============================================
// ===============================================
char * strtokJR(char * restrict str, const char * restrict sep) {
    
    static int position;
    static char * string;
    int i = 0, j = 0, start = position;
    
    if (str != NULL)
        string = str;
    
    // Loop through all characters of input string
    while (string[position] != '\0') {
        j = 0;
        
        // Loop through delimiter characters
        while (sep[j] != '\0') {
            
            // If a delimiter was found in input string
            if (string[position] == sep[j]) {
                
                // Add null character
                string[position] = '\0';
                position++;
                
                // Check for relevant string, else return
                if (string[start] != '\0')
                    return (&string[start]);
                else {
                    start = position;
                    position--;
                    break;
                }
            }
            j++;
        }
        position++;
    }
    
    // Append null character
    string[position] = '\0';
    
    if (string[start] == '\0')
        return NULL;
    else
        return &string[start];
}
