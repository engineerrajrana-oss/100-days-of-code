//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>

int main() {
    // Define enum for traffic lights
    enum TrafficLight { RED, YELLOW, GREEN };

    // Let's take a variable and assign a light
    enum TrafficLight light = YELLOW;   // Change to YELLOW or GREEN to test

    // Check the value and print message
    if (light == RED) {
        printf("Stop\n");
    }
    else if (light == YELLOW) {
        printf("Wait\n");
    }
    else if (light == GREEN) {
        printf("Go\n");
    }

    return 0;
}

