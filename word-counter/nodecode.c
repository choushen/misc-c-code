#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "WordNode.h"
#include "WordList.h"

// CreateBlankNode function
WordNode *CreateBlankNode() { // CreateBlankNode()
    // Allocating memory for the blank node
    WordNode *newNode = (WordNode *)malloc(sizeof(WordNode));

    // Setting fields for the new node and default values
    newNode->word = strdup("");
    newNode->frequency = 0;

    // Setting the next pointer to NULL
    newNode->nextWord = NULL;

    // Return the node
    return newNode;
} // CreateBlankNode()
