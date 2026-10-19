#include <stdio.h>
#include <stdlib.h>

struct location {
    char name[32];
    double x;
    double y;
};

int main(void) {
    FILE *data = fopen("point_data.dat", "wb");

    int n;
    printf("How many? ");
    scanf("%d", &n);

    fwrite(&n, sizeof(int), 1, data);

    for(; n > 0; n--) {
        struct location l;
        scanf("%s %lf %lf", l.name, &l.x, &l.y);
        fwrite(&l, sizeof(struct location), 1, data);
    }

    fclose(data);

    return 0;
}
