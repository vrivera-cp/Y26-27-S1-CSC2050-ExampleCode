#include <stdio.h>
#include <stdlib.h>

struct location {
    char name[32];
    double x;
    double y;
};

int main(void) {
    FILE *data = fopen("point_data.dat", "rb");

    int n;
    fread(&n, sizeof(int), 1, data);

    struct location *locations = calloc(n, sizeof(struct location));
    fread(locations, sizeof(struct location), n, data);
    fclose(data);

    for (int i = 0; i < n; i++) {
        printf("%s\t%.2lf\t%.2lf\n", locations[i].name, locations[i].x, locations[i].y);
    }

    free(locations);

    return 0;
}
