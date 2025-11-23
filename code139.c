//Show that enums store integers by printing assigned values.#include <stdio.h>

enum Role {
    ADMIN = 5,   // assigned value
    USER,        // auto becomes 6
    GUEST = 10   // assigned value
};

int main() {
    printf("ADMIN = %d\n", ADMIN);
    printf("USER  = %d\n", USER);
    printf("GUEST = %d\n", GUEST);

    return 0;
}
