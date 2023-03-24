#include <stdio.h>

void printMessage() {
    printf("This is a simple C program that can be cloned and used \n"
        "by the user to learn more about GitHub. This same program is \n"
        "available in multiple different languages to give a good idea\n"
        "of how repositories work. Please refer to the README.md file in \n"
        "this repo to learn more about adding this to your OWN GitHub\n"
        "and how to eventually showcase your own code!\n");
}

int main() {
    printf("Hello World!\n");                                   // Print "Hello World!" to the console
    printf("Press the enter key to continue...\n");              // Prompt the user to press enter

    char input[100];                                             // Create a char array to read input from the user
    fgets(input, 100, stdin);                                    // Read a line of input from the user and store it in the 'input' variable

    while (strcmp(input, "\n") != 0) {                           // Enter a loop that will continue as long as the user enters non-empty input
        printf("Incorrect input. Please just press enter!\n");   // Print an error message indicating that the input was incorrect
        fgets(input, 100, stdin);                                // Read another line of input from the user
    }

    printMessage();                                              // Call the printMessage() function after the correct input is provided

    return 0;
}
