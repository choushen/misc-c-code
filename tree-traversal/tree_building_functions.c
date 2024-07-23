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
  ALLOCATE MEMORY FOR THE NODE AND NODAL DATA
 ------------------------------------------- */

TREE new_node(void)
{
  TREE tree_node;
  DATA data_link;

/* TREE NODE */
  tree_node = (TREE)malloc(sizeof(NODE));
  if( tree_node == NULL )
  {
    printf("WARNING: NULL returned from malloc(tree node)\n");
    exit(0);
  }

/* NODAL DATA */
  data_link = (DATA)malloc(sizeof(NODAL_DATA));
  if( data_link == NULL )
  {
    printf("WARNING: NULL returned from malloc(nodal data)\n");
    exit(0);
  }

/* LINK THE TREE NODE TO THE DATA */
  tree_node->data_pointer = data_link;

  return tree_node;
}

/* -------------------------------------------
     INITIALISE THE NODE WITH GIVEN DATA
 ------------------------------------------- */

TREE init_node(int nodal_data, TREE pointer_left, TREE pointer_right)
{
  TREE tree_node;

  tree_node = new_node();

  (tree_node->data_pointer)->integer_data = nodal_data;
  (tree_node->data_pointer)->real_data    = 0.0;
   tree_node->left  = pointer_left;
   tree_node->right = pointer_right;

  return tree_node;
}

/* -------------------------------------------
        CREATE A FULL TREE
 ------------------------------------------- */

TREE create_regular_tree(int tree_data[], int i, int size)
{
  if( i >= size )
  {
    return NULL;
  }
  else
    return init_node(tree_data[i],
                     create_regular_tree(tree_data,2*i+1,size),
                     create_regular_tree(tree_data,2*i+2,size));
}

/* -------------------------------------------
        CREATE A DATA DEPENDENT TREE
 ------------------------------------------- */

TREE create_data_tree(int tree_data[], int n)
{
  int i, done;
  TREE root,location;

  root = init_node(tree_data[0], NULL, NULL);

  for( i=1; i<n; ++i )
  {
    location = root;
    done = 0;

    while( done == 0 )
    {
      if( tree_data[i] < (location->data_pointer)->integer_data )
      {
        if( location->left == NULL )
        {
          location->left = init_node(tree_data[i], NULL, NULL);
          done = 1;
        }
        else
          location = location->left;
      }
      else
      {
        if( location->right == NULL )
        {
          location->right = init_node(tree_data[i], NULL, NULL);
          done = 1;
        }
        else
          location = location->right;
      }
    }
  }
  return root;
}

// /* -------------------------------------------
//            POSTORDER TRAVERSAL
//  ------------------------------------------- */
//
// void postorder(TREE root)
// {
//   if( root != NULL )
//   {
//     postorder(root->left);
//     postorder(root->right);
//     printf(" %d\n",(root->data_pointer)->integer_data);
//   }
// }
//
// /* -------------------------------------------
//           PREORDER TRAVERSAL
//  ------------------------------------------- */
//
// void preorder(TREE root)
// {
//   if( root != NULL )
//   {
//     printf(" %d\n",(root->data_pointer)->integer_data);
//     preorder(root->left);
//     preorder(root->right);
//   }
// }
//
// /* -------------------------------------------
//           INORDER TRAVERAL
//  ------------------------------------------- */
//
// void inorder(TREE root)
// {
//   if( root != NULL )
//   {
//     inorder(root->left);
//     printf(" %d\n",(root->data_pointer)->integer_data);
//     inorder(root->right);
//   }
// }

/* -------------------------------------------
              MAIN
 ------------------------------------------- */

int main( int argc, char **argv )
{
  int size = 16;
  int tree_data[16] = {9,5,17,18,7,2,14,6,4,11,1,16,3,10,12,8};
  TREE root;
/*
  root = create_regular_tree(tree_data, 0, size);
*/
  root = create_data_tree(tree_data, size);

  printf(" Postorder traversal\n");
  postorder(root);

  printf(" Preorder traversal\n");
  preorder(root);

  printf(" Inorder traversal\n");
  inorder(root);

  free(root);
}
