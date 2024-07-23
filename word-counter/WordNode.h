#ifndef WORDNODE_H
#define WORDNODE_H

// Struct for representing the word
struct word_struct {
    char *word;              // (i.e. how we identify the word)
    int frequency;           // (i.e. the number of times the word appears)
    struct word_struct *nextWord; // Pointer to the next item
}; 

typedef struct word_struct WordNode;

#endif // WORDNODE_H
