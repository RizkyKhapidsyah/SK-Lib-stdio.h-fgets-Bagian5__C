#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main(void) {
    FILE* tmpf = tmpfile();
    fputs("Manusia satu\n", tmpf);
    fputs("Manusia dua dan tiga\n", tmpf);
    fputs("Manusia empat\n", tmpf);

    rewind(tmpf);

    char buf[8];
    while (fgets(buf, sizeof buf, tmpf) != NULL) {
        printf("\"%s\"\n", buf);
    }
        
    if (feof(tmpf)) {
        puts("End of file reached");
    }

    _getch();
    return 0;
}