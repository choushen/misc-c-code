/*
 *      Jacob McKenzie
 *      Week 2 Exercise: Makefiles and Modular Programming
 *
 */

 /* -------------------------------------------
         NODAL DATA STRUCTURE
  ------------------------------------------- */

 typedef struct data_structure
 {
   int integer_data;
   double real_data;
 } NODAL_DATA;

 //typedef struct data_structure NODAL_DATA;
 typedef NODAL_DATA *DATA;

 /* -------------------------------------------
         TREE NODE STRUCTURE
  ------------------------------------------- */

 typedef struct node
 {
   DATA data_pointer;
   struct node *left;
   struct node *right;
 } NODE;

 //typedef struct node NODE;
 typedef NODE *TREE;
