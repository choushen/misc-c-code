/*
 *      Jacob McKenzie
 *      Week 2 Exercise: Makefiles and Modular Programming
 *
 */

#include "tree_structures.h"

 /* -------------------------------------------
           FUNCTION PROTOTYPES
  ------------------------------------------- */

 TREE new_node(void);
 TREE init_node(int, TREE, TREE);
 TREE create_regular_tree(int *, int, int);
 TREE create_data_tree(int *, int);
 void postorder(TREE);
 void preorder(TREE);
 void inorder(TREE);
