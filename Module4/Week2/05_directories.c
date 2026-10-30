#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>

int main(void) {
    // Open directory
    DIR *dir = opendir("ParentDirectory");

    // Iteration
    struct dirent *d;
    while ((d = readdir(dir)) != NULL) {
        // Print item name
        printf("%s\n", d->d_name);
    }

    // Cleanup
    closedir(dir);

    return 0;
}
