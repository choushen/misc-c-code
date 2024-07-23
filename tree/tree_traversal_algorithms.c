/*
 *      Jacob McKenzie
 *      Week 2 Exercise: Makefiles and Modular Programming
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "tree_functions.h"

#ifndef NULL
#define NULL 0
#endif

/* -------------------------------------------
           POSTORDER TRAVERSAL
 ------------------------------------------- */

void postorder(TREE root)
{
  if( root != NULL )
  {
    postorder(root->left);
    postorder(root->right);
    printf(" %d\n",(root->data_pointer)->integer_data);
  }
}

/* -------------------------------------------
          PREORDER TRAVERSAL
 ------------------------------------------- */

void preorder(TREE root)
{
  if( root != NULL )
  {
    printf(" %d\n",(root->data_pointer)->integer_data);
    preorder(root->left);
    preorder(root->right);
  }
}

/* -------------------------------------------
          INORDER TRAVERAL
 ------------------------------------------- */

void inorder(TREE root)
{
  if( root != NULL )
  {
    inorder(root->left);
    printf(" %d\n",(root->data_pointer)->integer_data);
    inorder(root->right);
  }
}
