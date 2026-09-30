#include <stdlib.h>

int bss;
int data = 100;

void function(int param) {
    int local = param + 1;
    if (local < 3) {
        function(local);
    }
}

int main(int argc, char **argv) {
    char *environment = getenv("PATH");
    char *read_only = "mochi";

    function(0);

    int heap = malloc(sizeof(int));

    return 0;
}

