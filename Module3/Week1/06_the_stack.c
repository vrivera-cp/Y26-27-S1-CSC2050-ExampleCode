void first(int argument) {
    int x = 100;
    second(argument + x);
}

void second(int argument) {
    double items[16] = {1.0, 2.0};
    first(argument + sizeof(items));
}

int main(void) {
    first(0);
    return 0;
}
