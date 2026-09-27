int main(void) {
    int x = 2050;

    // y is a pointer to an int
    int *y = &x; // Address of

    int z = *y + 1;

    // Assignment of dereference value
    *y = 1001;

    return 0;
}
