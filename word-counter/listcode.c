#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "WordList.h"

void InitialiseList(WordList *wordList) { // InitialiseList
    wordList->topWord = NULL; // Setting default value of the list to NULL
}

int CountNodes(WordList *wordList) { // CountNodes()
    int nNodes = 0; // Variable for counting the # of nodes
    WordNode *walkNode; // Node used for moving down the list

    for (walkNode = wordList->topWord; walkNode != NULL; walkNode = walkNode->nextWord) {
        nNodes++;
    }

    return nNodes; // Returns the total node count
}

void PrintNode(WordNode *node) {
    if (node != NULL) {
        printf("Word: %s, Frequency: %d\n", node->word, node->frequency);
    }
}

void PrintList(WordList *wordList) { // PrintList()
    WordNode *walkNode = wordList->topWord; // Node used for moving down the list

    printf("Number of words: %d\n", CountNodes(wordList));
    printf("=======================\n");

    for (; walkNode != NULL; walkNode = walkNode->nextWord) { // For: PrintNode
        PrintNode(walkNode);
    } // For: PrintNode
}

WordNode *FindNode(WordList *wordList, const char *word) {
    WordNode *walkNode = wordList->topWord;
    while (walkNode != NULL) {
        if (strcmp(walkNode->word, word) == 0) {
            return walkNode;
        }
        walkNode = walkNode->nextWord;
    }
    return NULL;
}

void AddNodeToEnd(WordList *wordList, WordNode *wordNode) { // AddNodeToEnd()
    WordNode *lastNode = wordList->topWord; // Function for finding the last node in the list

    if (lastNode == NULL) { // Special case for empty list
        wordNode->nextWord = NULL; // New node pointing to NULL
        wordList->topWord = wordNode; // Function to make the list point to the node
    } else { // Else: non-empty list
        while (lastNode->nextWord != NULL) { // While: lastNode->nextWord
            lastNode = lastNode->nextWord;
        }
        lastNode->nextWord = wordNode; // Setting the next pointer to point to the new node
        wordNode->nextWord = NULL; // Setting the new node to point to NULL
    }
}

void AddOrUpdateNode(WordList *wordList, const char *word) {
    WordNode *existingNode = FindNode(wordList, word);
    if (existingNode != NULL) {
        existingNode->frequency++;
    } else {
        WordNode *newNode = (WordNode *)malloc(sizeof(WordNode));
        newNode->word = strdup(word);
        newNode->frequency = 1;
        newNode->nextWord = NULL;
        AddNodeToEnd(wordList, newNode);
    }
}

void DeleteNode(WordNode *node) {
    if (node != NULL) {
        free(node->word);
        free(node);
    }
}

void DeleteNodeFromList(WordList *wordList, WordNode *wordNode) { // DeleteNodeFromList()
    WordNode *walkNode = wordList->topWord; // Pointer starts from the top

    if (walkNode == NULL) { // If: walkNode == NULL
        return;
    }

    if (walkNode == wordNode) { // Deleting the top node from the list
        wordList->topWord = wordNode->nextWord; // Moving the tail end to be the top node
        wordNode->nextWord = NULL; // Setting the pointer to NULL
        DeleteNode(wordNode); // Function for deleting wordNode
        return; // Once top node has been deleted return()
    }
}
