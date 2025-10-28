/*Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int i = 0, start = 0, len;
    scanf("%[^\n]", str);
    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (i == 0) {
            printf("%c.", str[i]); 
        } else if (str[i] == ' ' && str[i + 1] != '\0') {
            if (strchr(str + i + 1, ' ') != NULL)
                printf("%c.", str[i + 1]);  
            else {
                printf(" %s", str + i + 1);
                break;
            }
        }
    }

    return 0;
}
