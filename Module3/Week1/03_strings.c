int main(void) {
    char greeting[] = "Hey";
    int maybe_size = sizeof(greeting);

    char longer[5] = "Hey";
    char shorter[2] = "Hey";

    char *literal = "Hey";

    greeting[0] = "h";
    literal[0] = "h";
}
