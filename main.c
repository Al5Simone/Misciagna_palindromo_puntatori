#include <stdio.h>

int main(void) {
    char palindormo[] = {"I topi non avevano nipoti"};
    char *p_start = palindormo;
    char *p_end = palindormo;
    while (*p_end != '\0') {
        p_end++;
    }
    p_end--;
    int pal = 1;

    while (p_start < p_end) {
        if (*p_start != *p_end) {
            pal = 0;
            break;
        }
        p_start++;
        p_end--;
    }
    if (pal) {
        printf("palindromo\n");
    } else {
        printf("non palindromo\n");
    }


    return 0;
}
