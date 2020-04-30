#include <stdio.h>
#include <string.h>

char buf[10000];

char *getString(char *pszbuff) {
    char *p = pszbuff;
    while (*p) {
        if ((*p == '-') && (*(p + 1) == '>'))
            return p;
        if ((*p == '/') && (*(p + 1) == '/'))
            return NULL;
        p++;
    }
    return NULL;
}

int main() {
    char *p;
    while (fgets(buf, 10000, stdin)) {
        while (p = getString(buf)) {
            *p = '.';
            p++;
            while (*p) {
                *p = *(p + 1);
                p++;
            }
        }
        printf("%s\n", buf);
    }
    return 0;
}