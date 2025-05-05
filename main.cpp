#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void usage(char *program_name) {
    printf("Sposob uzycia: %s <komunikat> <#powtorzen>\n", program_name);
    exit(1);
}


int main(int argc, char *argv[]) {
    int result;
    int numerpierwszy;
    int numerdrugi;
    if (argc < 4)

        usage(argv[0]);
    numerpierwszy = atoi(argv[1]);
    numerdrugi = atoi(argv[3]);
    if (strcmp(argv[2], "add") == 0) {
        result = numerpierwszy + numerdrugi;
        printf("%d + %d = %d", numerpierwszy, numerdrugi, result);
    }
    if (strcmp(argv[2], "sub") == 0) {
        result = numerpierwszy - numerdrugi;
        printf("%d - %d = %d", numerpierwszy, numerdrugi, result);
    }
    if (strcmp(argv[2], "mul") == 0) {
        result = numerpierwszy * numerdrugi;
        printf("%d * %d = %d", numerpierwszy, numerdrugi, result);
    }
    if (strcmp(argv[2], "div") == 0) {
        result = numerpierwszy / numerdrugi;
        printf("%d / %d = %d", numerpierwszy, numerdrugi, result);
        if ( numerdrugi = 0){
            printf("Nie można dzielić przez 0");
        }
    }
    else {
        printf("Nieznana operacja");

    }
    return 0;
}
/*printf("Powtarzam %d razy..\n", count);
for (i = 0; i < count; i++)
printf("%3d - %s\n", i, argv[1]);
return 0;*/