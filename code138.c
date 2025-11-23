//Print all enum names and integer values using a loop.
#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {

    // Array of enum names
    char *roleNames[] = {"ADMIN", "USER", "GUEST"};

    // Total count of enum items
    int total = sizeof(roleNames) / sizeof(roleNames[0]);

    // Print enum names and their integer values
    for (int i = 0; i < total; i++) {
        printf("%s = %d\n", roleNames[i], i);
    }

    return 0;
}
