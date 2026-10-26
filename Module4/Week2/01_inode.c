#define _GNU_SOURCE
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    struct stat statbuf;

    stat(argv[1], &statbuf);

    printf("inode:\t%ld\n", statbuf.st_ino);
    printf("size:\t%ld\n", statbuf.st_size);
    printf("dir:\t%c\n", ((statbuf.st_mode & S_IFMT) == S_IFDIR) ? 'Y' : 'N');
    printf("links:\t%ld\n", statbuf.st_nlink);

    return 0;
}
