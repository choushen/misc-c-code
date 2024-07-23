////////////////////////////////////
//     Procedural Programming     //
//         Jacob McKenzie         //
////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "WordList.h"

int main(int argc, char const *argv[]) { // MAIN

    // Check for proper arguments
    if (argc < 3) {
        printf("Usage: %s <program_name> <file_name>\n", argv[0]);
        return 1;
    }

    //***********************************//
    //           VARIABLES              //
    //               &                 //
    //           POINTERS             //
    //*******************************//

    // File pointer
    FILE *in_file;

    // Buffer to hold the data
    char *buffer;

    // Number of bytes
    long size;

    //*********************************//
    //        READING IN_FILE         //
    //*******************************//

    // Opening the file defined by user input using argument vectors
    // "rb" to enable standard and binary reading
    in_file = fopen(argv[2], "rb");

    // Checking to see if the file was opened correctly
    if (in_file == NULL) { // If: (in_file = NULL)
        printf("Unable to open file.\n");
        printf("Please check your input and try again.\n");
        exit(1);
    } // If: (in_file = NULL)

    // Obtains the number of bytes
    fseek(in_file, 0L, SEEK_END);
    size = ftell(in_file);

    // Reset indicator to file start
    fseek(in_file, 0L, SEEK_SET);

    // Memory for the buffer to
    buffer = (char*)calloc(size + 1, sizeof(char));  // +1 to ensure null-terminated string

    // Checking for buffer errors
    if (buffer == NULL) { // buffer == NULL
        printf("Buffer error.\n");
        return 1;
    } // buffer == NULL

    // Copying the file into the buffer
    fread(buffer, sizeof(char), size, in_file);
    buffer[size] = '\0'; // Ensuring null termination

    // Print test: checking the file has been read into the buffer
    printf("in_file reads: %s\n", argv[2]);
    printf("%s\n", buffer);

    //*********************************//
    //       INITIALISING LIST        //
    //*******************************//

    // WordList structure
    WordList myList;

    // Actual initialisation
    InitialiseList(&myList);

    //*********************************//
    //       PROCESSING BUFFER        //
    //*******************************//

    // Tokenizing the buffer to extract words
    char *token = strtok(buffer, " \n");
    while (token != NULL) {
        // Add or update the node in the list
        AddOrUpdateNode(&myList, token);

        // Get the next word
        token = strtok(NULL, " \n");
    }

    //*********************************//
    //         LIST FUNCTIONS         //
    //*******************************//

    // Printing out the list
    PrintList(&myList);

    //*********************************//
    //        CLOSING IN_FILE         //
    //*******************************//

    // Closing file (Move this later)
    fclose(in_file);
    // Freeing the memory buffer
    free(buffer);

    //////////////////////////////////

    // Return for success! :)
    return 0;
} // MAIN
