#ifndef WORDLIST_H
#define WORDLIST_H

#include "WordNode.h"

// Struct for representing the list
typedef struct word_list {
    WordNode *topWord;
} WordList;

// Function prototypes
void InitialiseList(WordList *wordList);
int CountNodes(WordList *wordList);
void PrintList(WordList *wordList);
void AddOrUpdateNode(WordList *wordList, const char *word);
void DeleteNodeFromList(WordList *wordList, WordNode *wordNode);

#endif // WORDLIST_H
