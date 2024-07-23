# Project Title: Procedural Programming in C - Word Counter

## Author: Jacob McKenzie

### Description:
This program reads text from a file, processes it to count the frequency of each word, and displays the results. It demonstrates basic file I/O, dynamic memory allocation, and linked list usage in C.

### Files:
- `main.c`: The main file containing the entry point of the program.
- `listcode.c`: Contains functions to manipulate the linked list of words.
- `nodecode.c`: Contains functions to create and manage individual word nodes.
- `WordList.h`: Header file containing the definition of the WordList structure and function prototypes.
- `WordNode.h`: Header file containing the definition of the WordNode structure.

### How to Compile:
1. Ensure you have GCC installed on your system.
2. Open a terminal and navigate to the directory containing the source files.
3. Compile the program using the following command:
   ```bash
   gcc -o my_program main.c listcode.c nodecode.c
   ```

### How to Run:
1. Ensure you have a text file that you want to process (e.g., `test.txt`).
2. Run the compiled program with the name of the text file as an argument:
   ```bash
   ./my_program <program_name> <file_name>
   ```
   Example:
   ```bash
   ./my_program myprogram test.txt
   ```

### Expected Output:
The program will read the contents of the specified text file, count the frequency of each word, and display the results in the terminal.

### Usage:
- Make sure the text file you want to process is in the same directory as the compiled program, or provide the correct path to the file.
- The program will display the contents of the file and the word frequency count in the terminal.

### Notes:
- Ensure that the text file does not exceed memory limits, as the program reads the entire file into memory.
- The program counts words based on spaces and newlines as delimiters.

Feel free to modify and extend the program as needed. If you encounter any issues or have questions, please refer to the source code and comments for further details.