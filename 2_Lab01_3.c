#include <stdio.h>
#include <string.h>
#include <ctype.h>


void toLowerCase(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char line[81];  

    while (1) {
        fgets(line, sizeof(line), stdin);  
        line[strcspn(line, "\n")] = '\0';  

        if (strcmp(line, "EOI") == 0) {
            break; 
        }

        toLowerCase(line); 

        if (strstr(line, "nemo") != NULL) {
            printf("Found\n");
        }
        else {
            printf("Missing\n");
        }
    }

    return 0;
}