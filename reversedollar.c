#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int len = strlen(str);
    strrev(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == '0') {
            str[i] = '$';
        }
    }
    printf("Reversed string with $ for 0: %s\n", str);

    return 0;
}
