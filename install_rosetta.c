#include <stdlib.h>
#include <stdio.h>

int main() {
    // Path to the Rosetta 2 Updater
    const char *rosettaPath = "/System/Library/CoreServices/Rosetta 2 Updater.app";

    // Command to open the updater
    char command[256];
    snprintf(command, sizeof(command), "open \"%s\"", rosettaPath);

    // Execute the command
    int result = system(command);
    
    if (result == 0) {
        printf("Rosetta 2 installation initiated.\n");
    } else {
        printf("Failed to run the Rosetta 2 Updater.\n");
    }

    return 0;
}
