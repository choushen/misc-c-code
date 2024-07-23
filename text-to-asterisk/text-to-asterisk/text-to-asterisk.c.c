#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
***********************************************************
**This program will print out magnified versions of text***
***********************************************************
*/

    int  align1 = 53;
    char userinstructions[200] = "Print any string to create your banner!(30 characters max)";

int main() {        //main

          printf("This program will print out magnified versions of text\n");
          printf("\n");
          printf("           .--------.                                                        \n");
          printf("           .        .                                                        \n");
          printf("           .        .                                                        \n");
          printf("           .        .                  +*****************+                   \n");
          printf("        ________________               *                 *                   \n");
          printf("         .   O     O   .               *   Hello User!   *                   \n");
          printf("          .     __    .                *                 *                   \n");
          printf("      /+------------------+|           +*****************+                   \n");
          printf("     / +------------------+ |                                                \n");
          printf("    /  +------------------+  |                                               \n");
          printf("   /   +Basic Text Banners+   |                                              \n");
          printf("  |    +------------------+   /                                              \n");
          printf(" <M>   +------------------+ /                                                \n");
          printf("       +------------------+                                                  \n");

          printf("\n");


          printf("\n");


          printf("%*s\n", align1, userinstructions); //Print function to prompt the user to
                                                    // input a string

          printf("Type '!exit()' to exit out of the program\n");

const char   *LA[7];
LA[0]="*****";
LA[1]="*   *";
LA[2]="*   *";
LA[3]="*****";
LA[4]="*   *";
LA[5]="*   *";
LA[6]="*   *";


const char   *LB[7];
LB[0]="**** ";
LB[1]="*   *";
LB[2]="*   *";
LB[3]="**** ";
LB[4]="*   *";
LB[5]="*   *";
LB[6]="**** ";

const char   *SPC[7];
SPC[0]="     ";
SPC[1]="     ";
SPC[2]="     ";
SPC[3]="     ";
SPC[4]="     ";
SPC[5]="     ";
SPC[6]="     ";

const char   *LC[7];
LC[0]=" ****";
LC[1]="*    ";
LC[2]="*    ";
LC[3]="*    ";
LC[4]="*    ";
LC[5]="*    ";
LC[6]=" ****";

const char    *LD[7];
LD[0]="***  ";
LD[1]="*  * ";
LD[2]="*   *";
LD[3]="*   *";
LD[4]="*   *";
LD[5]="*  * ";
LD[6]="***  ";

const char    *LE[7];
LE[0]="*****";
LE[1]="*    ";
LE[2]="*    ";
LE[3]="*****";
LE[4]="*    ";
LE[5]="*    ";
LE[6]="*****";

const char   *LF[7];
LF[0]="*****";
LF[1]="*    ";
LF[2]="*    ";
LF[3]="*****";
LF[4]="*    ";
LF[5]="*    ";
LF[6]="*    ";

const char    *LG[7];
LG[0]="*****";
LG[1]="*    ";
LG[2]="*    ";
LG[3]="*  **";
LG[4]="*   *";
LG[5]="*   *";
LG[6]="*****";

const char    *LH[7];
LH[0]="*   *";
LH[1]="*   *";
LH[2]="*   *";
LH[3]="*****";
LH[4]="*   *";
LH[5]="*   *";
LH[6]="*   *";

const char    *LI[7];
LI[0]="*****";
LI[1]="  *  ";
LI[2]="  *  ";
LI[3]="  *  ";
LI[4]="  *  ";
LI[5]="  *  ";
LI[6]="*****";

const char    *LJ[7];
LJ[0]="    *";
LJ[1]="    *";
LJ[2]="    *";
LJ[3]="    *";
LJ[4]="*   *";
LJ[5]="*   *";
LJ[6]="*****";

const char    *LK[7];
LK[0]="*   *";
LK[1]="*  * ";
LK[2]="* *  ";
LK[3]="**   ";
LK[4]="* *  ";
LK[5]="*  * ";
LK[6]="*   *";

const char    *LL[7];
LL[0]="*    ";
LL[1]="*    ";
LL[2]="*    ";
LL[3]="*    ";
LL[4]="*    ";
LL[5]="*    ";
LL[6]="*****";

const char    *LM[7];
LM[0]="*   *";
LM[1]="** **";
LM[2]="* * *";
LM[3]="* * *";
LM[4]="*   *";
LM[5]="*   *";
LM[6]="*   *";

const char    *LN[7];
LN[0]="*   *";
LN[1]="*   *";
LN[2]="**  *";
LN[3]="* * *";
LN[4]="*  **";
LN[5]="*   *";
LN[6]="*   *";

const char    *LO[7];
LO[0]=" *** ";
LO[1]="*   *";
LO[2]="*   *";
LO[3]="*   *";
LO[4]="*   *";
LO[5]="*   *";
LO[6]=" *** ";

const char    *LP[7];
LP[0]="**** ";
LP[1]="*   *";
LP[2]="*   *";
LP[3]="**** ";
LP[4]="*    ";
LP[5]="*    ";
LP[6]="*    ";

const char    *LQ[7];
LQ[0]=" *** ";
LQ[1]="*   *";
LQ[2]="*   *";
LQ[3]="**  *";
LQ[4]="* * *";
LQ[5]="*  * ";
LQ[6]=" ** *";

const char    *LR[7];
LR[0]="**** ";
LR[1]="*   *";
LR[2]="*   *";
LR[3]="**** ";
LR[4]="*  * ";
LR[5]="*   *";
LR[6]="*   *";

const char    *LS[7];
LS[0]=" ****";
LS[1]="*    ";
LS[2]="*    ";
LS[3]=" *** ";
LS[4]="    *";
LS[5]="    *";
LS[6]="**** ";

const char    *LT[7];
LT[0]="*****";
LT[1]="  *  ";
LT[2]="  *  ";
LT[3]="  *  ";
LT[4]="  *  ";
LT[5]="  *  ";
LT[6]="  *  ";

const char    *LU[7];
LU[0]="*   *";
LU[1]="*   *";
LU[2]="*   *";
LU[3]="*   *";
LU[4]="*   *";
LU[5]="*   *";
LU[6]=" *** ";

const char    *LV[7];
LV[0]="*   *";
LV[1]="*   *";
LV[2]="*   *";
LV[3]="*   *";
LV[4]="*   *";
LV[5]=" * * ";
LV[6]="  *  ";

const char    *LW[7];
LW[0]="*   *";
LW[1]="*   *";
LW[2]="*   *";
LW[3]="*   *";
LW[4]="* * *";
LW[5]="** **";
LW[6]="*   *";

const char    *LX[7];
LX[0]="*   *";
LX[1]="*   *";
LX[2]=" * * ";
LX[3]="  *  ";
LX[4]="* *  ";
LX[5]="*   *";
LX[6]="*   *";

const char    *LY[7];
LY[0]="*   *";
LY[1]="*   *";
LY[2]=" * * ";
LY[3]="  *  ";
LY[4]="  *  ";
LY[5]="  *  ";
LY[6]="  *  ";

const char    *LZ[7];
LZ[0]="*****";
LZ[1]="    *";
LZ[2]="   * ";
LZ[3]="  *  ";
LZ[4]=" *   ";
LZ[5]="*    ";
LZ[6]="*****";



//Lower case const character array



const char    *La[7];
La[0]="     ";
La[1]="     ";
La[2]="     ";
La[3]=" *** ";
La[4]="*   *";
La[5]="*   *";
La[6]=" ** *";

const char    *Lb[7];
Lb[0]="*    ";
Lb[1]="*    ";
Lb[2]="*    ";
Lb[3]="**** ";
Lb[4]="*   *";
Lb[5]="*   *";
Lb[6]="**** ";

const char    *Lc[7];
Lc[0]="     ";
Lc[1]="     ";
Lc[2]=" *** ";
Lc[3]="*    ";
Lc[4]="*    ";
Lc[5]="*    ";
Lc[6]=" *** ";

const char    *Ld[7];
Ld[0]="    *";
Ld[1]="    *";
Ld[2]="    *";
Ld[3]=" ****";
Ld[4]="*   *";
Ld[5]="*   *";
Ld[6]=" ** *";

const char    *Le[7];
Le[0]="     ";
Le[1]="     ";
Le[2]="     ";
Le[3]=" *** ";
Le[4]="* * *";
Le[5]="*    ";
Le[6]=" *** ";

const char    *Lf[7];
Lf[0]=" *** ";
Lf[1]="*   *";
Lf[2]="*   *";
Lf[3]="*    ";
Lf[4]="**** ";
Lf[5]="*    ";
Lf[6]="*    ";

const char    *Lg[7];
Lg[0]="     ";
Lg[1]=" ****";
Lg[2]="*   *";
Lg[3]="*   *";
Lg[4]=" ****";
Lg[5]="    *";
Lg[6]="**** ";

const char    *Lh[7];
Lh[0]="*    ";
Lh[1]="*    ";
Lh[2]="*    ";
Lh[3]="**** ";
Lh[4]="*   *";
Lh[5]="*   *";
Lh[6]="*   *";

const char    *Li[7];
Li[0]="  *  ";
Li[1]="     ";
Li[2]="  *  ";
Li[3]="  *  ";
Li[4]="  *  ";
Li[5]="  *  ";
Li[6]="  *  ";

const char    *Lj[7];
Lj[0]="    *";
Lj[1]="     ";
Lj[2]="  ***";
Lj[3]="    *";
Lj[4]="*   *";
Lj[5]="*   *";
Lj[6]=" ****";

const char    *Lk[7];
Lk[0]="*    ";
Lk[1]="* ** ";
Lk[2]="* *  ";
Lk[3]="**   ";
Lk[4]="* *  ";
Lk[5]="*  * ";
Lk[6]="** **";

const char    *Ll[7];
Ll[0]="     ";
Ll[1]="     ";
Ll[2]="  *  ";
Ll[3]="  *  ";
Ll[4]="  *  ";
Ll[5]="  *  ";
Ll[6]="  *  ";

const char    *Lm[7];
Lm[0]="     ";
Lm[1]="     ";
Lm[2]="     ";
Lm[3]="*   *";
Lm[4]="** **";
Lm[5]="* * *";
Lm[6]="* * *";

const char    *Ln[7];
Ln[0]="     ";
Ln[1]="     ";
Ln[2]="     ";
Ln[3]="**** ";
Ln[4]="*   *";
Ln[5]="*   *";
Ln[6]="*   *";

const char    *Lo[7];
Lo[0]="     ";
Lo[1]="     ";
Lo[2]=" *** ";
Lo[3]="*   *";
Lo[4]="*   *";
Lo[5]="*   *";
Lo[6]=" *** ";

const char    *Lp[7];
Lp[0]="     ";
Lp[1]=" *** ";
Lp[2]="*   *";
Lp[3]="*   *";
Lp[4]="**** ";
Lp[5]="*    ";
Lp[6]="*    ";

const char    *Lq[7];
Lq[0]="     ";
Lq[1]=" *** ";
Lq[2]="*   *";
Lq[3]="*   *";
Lq[4]=" ****";
Lq[5]="    *";
Lq[6]="    *";

const char    *Lr[7];
Lr[0]="     ";
Lr[1]="     ";
Lr[2]=" *** ";
Lr[3]="*   *";
Lr[4]="*   *";
Lr[5]="*    ";
Lr[6]="*    ";

const char    *Ls[7];
Ls[0]="     ";
Ls[1]="     ";
Ls[2]=" ****";
Ls[3]="*    ";
Ls[4]=" *** ";
Ls[5]="    *";
Ls[6]="**** ";

const char    *Lt[7];
Lt[0]="     ";
Lt[1]="     ";
Lt[2]=" *   ";
Lt[3]=" *   ";
Lt[4]="**** ";
Lt[5]=" *   ";
Lt[6]="  ***";

const char    *Lu[7];
Lu[0]="     ";
Lu[1]="     ";
Lu[2]="     ";
Lu[3]="*   *";
Lu[4]="*   *";
Lu[5]="*   *";
Lu[6]=" *** ";

const char    *Lv[7];
Lv[0]="     ";
Lv[1]="     ";
Lv[2]="     ";
Lv[3]="*   *";
Lv[4]="*   *";
Lv[5]=" * * ";
Lv[6]="  *  ";

const char    *Lw[7];
Lw[0]="     ";
Lw[1]="     ";
Lw[2]="     ";
Lw[3]="*   *";
Lw[4]="* * *";
Lw[5]="** **";
Lw[6]="*   *";

const char    *Lx[7];
Lx[0]="     ";
Lx[1]="     ";
Lx[2]="*   *";
Lx[3]="* *  ";
Lx[4]="  *  ";
Lx[5]=" * * ";
Lx[6]="*   *";

const char    *Ly[7];
Ly[0]="     ";
Ly[1]="     ";
Ly[2]="*   *";
Ly[3]="*   *";
Ly[4]=" * * ";
Ly[5]="  *  ";
Ly[6]=" *   ";

const char    *Lz[7];
Lz[0]="     ";
Lz[1]="     ";
Lz[2]="*****";
Lz[3]="   * ";
Lz[4]="  *  ";
Lz[5]=" *   ";
Lz[6]="*****";

//Number array

const char    *N1[7];
N1[0]=" **  ";
N1[1]="* *  ";
N1[0]="  *  ";
N1[0]="  *  ";
N1[0]="  *  ";
N1[0]="  *  ";
N1[0]="*****";

const char    *N2[7];
N2[0]=" *** ";
N2[1]="*   *";
N2[2]="   * ";
N2[3]="  *  ";
N2[4]=" *   ";
N2[5]="*    ";
N2[6]="*****";

const char    *N3[7];
N3[0]=" *** ";
N3[1]="*   *";
N3[2]="   * ";
N3[3]=" **  ";
N3[4]="   * ";
N3[5]="*   *";
N3[6]=" *** ";

const char    *N4[7];
N4[0]="   * ";
N4[1]="  ** ";
N4[2]=" * * ";
N4[3]="*  * ";
N4[4]="*****";
N4[5]="   * ";
N4[6]="   * ";

const char    *N5[7];
N5[0]="*****";
N5[1]="*    ";
N5[2]="*    ";
N5[3]=" *** ";
N5[4]="    *";
N5[5]="    *";
N5[6]="**** ";

const char    *N6[7];
N6[0]=" *** ";
N6[1]="*   *";
N6[2]="*    ";
N6[3]="**** ";
N6[4]="*   *";
N6[5]="*   *";
N6[6]="**** ";

const char    *N7[7];
N7[0]="*****";
N7[1]="    *";
N7[2]="   * ";
N7[3]="*****";
N7[4]="  *  ";
N7[5]=" *   ";
N7[6]=" *   ";

const char    *N8[7];
N8[0]=" *** ";
N8[1]="*   *";
N8[2]="*   *";
N8[3]=" *** ";
N8[4]="*   *";
N8[5]="*   *";
N8[6]=" *** ";

const char    *N9[7];
N9[0]=" ****";
N9[1]="*   *";
N9[2]="*   *";
N9[3]=" ****";
N9[4]="    *";
N9[5]="    *";
N9[6]=" *** ";

const char    *N0[7];
N0[0]=" *** ";
N0[1]="*   *";
N0[2]="*  **";
N0[3]="* * *";
N0[4]="**  *";
N0[5]="*   *";
N0[6]=" *** ";

//Basic Punctuation array

//exclamation mark
const char    *Pexclamation[7];
Pexclamation[0]="  *  ";
Pexclamation[1]="  *  ";
Pexclamation[2]="  *  ";
Pexclamation[3]="  *  ";
Pexclamation[4]="  *  ";
Pexclamation[5]="     ";
Pexclamation[6]="  *  ";

//question mark
const char    *Pquestion[7];
Pquestion[0]=" ****";
Pquestion[1]="*    ";
Pquestion[2]="*    ";
Pquestion[3]=" **  ";
Pquestion[4]="  *  ";
Pquestion[5]="     ";
Pquestion[6]="  *  ";

//comma
const char    *Pcomma[7];
Pcomma[0]="     ";
Pcomma[1]="     ";
Pcomma[2]="     ";
Pcomma[3]="     ";
Pcomma[4]="     ";
Pcomma[5]="    *";
Pcomma[6]="  *  ";

//point
const char    *Ppoint[7];
Ppoint[0]="     ";
Ppoint[1]="     ";
Ppoint[2]="     ";
Ppoint[3]="     ";
Ppoint[4]="     ";
Ppoint[5]="     ";
Ppoint[6]=" **  ";

//dash
const char    *Pdash[7];
Pdash[0]="     ";
Pdash[1]="     ";
Pdash[2]="     ";
Pdash[3]="***  ";
Pdash[4]="     ";
Pdash[5]="     ";
Pdash[6]="     ";

//semicolon
const char    *Psemicolon[7];
Psemicolon[0]="  *  ";
Psemicolon[1]="  *  ";
Psemicolon[2]="     ";
Psemicolon[3]="     ";
Psemicolon[4]="     ";
Psemicolon[5]="  *  ";
Psemicolon[6]=" *   ";

//colon
const char    *Pcolon[7];
Pcolon[0]="  *  ";
Pcolon[1]="  *  ";
Pcolon[2]="     ";
Pcolon[3]="     ";
Pcolon[4]="     ";
Pcolon[5]="  *  ";
Pcolon[6]="  *  ";

const char    *Pamp[7];
Pamp[0]=" *** ";
Pamp[1]="*    ";
Pamp[2]="*    ";
Pamp[3]=" **  ";
Pamp[4]="* * *";
Pamp[5]="*  * ";
Pamp[6]=" ** *";



char banner[31]; //variable to define char length of banner

  int y; //variable for y axis of my characters
  int x; //variable for y axis of my characters
  int number_of_inputs; //variable for strlen

/*int bold; //variable for bold
  int italic;//variable for italic */

// currently, the variables are not being used

  while (1){//While loop

    fgets(banner, sizeof(banner), stdin); //fgets function to take user input
    //number_of_inputs stores the number of entries the user makes
    number_of_inputs += strlen(banner)-1;// minus one to remove null value
    
    // Check if the input is "!exit"
    if (strcmp(banner, "!exit\n") == 0) {
        printf("Exiting program.\n");
        break;
    }

    if (banner[0] == '\n'){
        printf("Your character count = %d \n", number_of_inputs); //prints the size of the printed banner
        return 0; //exit from the while
    }


    for (y=0; y < 7; y++) {//First For loop
      for (x=0; x < strlen(banner); x++){//Second For loop

        char characters = banner[x];

        //using the switch statement as a control mechanism for selecting
        //charactes from my list of arrays

        switch (characters) { //Switch statement

//Upper case

          case 'A':
          printf("%s ", LA[y]);
            break;

          case 'B':
          printf("%s ", LB[y]);
            break;

          case ' ':
          printf("%s ", SPC[y]);
            break;

          case 'C':
          printf("%s ", LC[y]);
            break;

          case 'D':
          printf("%s ", LD[y]);
            break;

          case 'E':
          printf("%s ", LE[y]);
            break;

          case 'F':
          printf("%s ", LF[y]);
            break;

          case 'G':
          printf("%s ", LG[y]);
            break;

          case 'H':
          printf("%s ", LH[y]);
            break;

          case 'I':
          printf("%s ", LI[y]);
            break;

          case 'J':
          printf("%s ", LJ[y]);
            break;

          case 'K':
          printf("%s ", LK[y]);
            break;

          case 'L':
          printf("%s ", LL[y]);
            break;

          case 'M':
          printf("%s ", LM[y]);
            break;

          case 'N':
          printf("%s ", LN[y]);
            break;

          case 'O':
          printf("%s", LO[y]);
            break;

          case 'P':
          printf("%s ", LP[y]);
            break;

          case 'Q':
          printf("%s ", LQ[y]);
            break;

          case 'R':
          printf("%s ", LR[y]);
            break;

          case 'S':
          printf("%s ", LS[y]);
            break;

          case 'T':
          printf("%s ", LT[y]);
            break;

          case 'U':
          printf("%s ", LU[y]);
            break;

          case 'V':
          printf("%s ", LV[y]);
            break;

          case 'W':
          printf("%s ", LW[y]);
            break;

          case 'X':
          printf("%s ", LX[y]);
            break;

          case 'Y':
          printf("%s ", LY[y]);
            break;

          case 'Z':
          printf("%s ", LZ[y]);
            break;

//Lower case

          case 'a':
          printf("%s ", La[y]);
            break;

          case 'b':
          printf("%s ", Lb[y]);
            break;

          case 'c':
          printf("%s ", Lc[y]);
            break;

          case 'd':
          printf("%s ", Ld[y]);
            break;

          case 'e':
          printf("%s ", Le[y]);
            break;

          case 'f':
          printf("%s ", Lf[y]);
            break;

          case 'g':
          printf("%s ", Lg[y]);
            break;

          case 'h':
          printf("%s ", Lh[y]);
            break;

          case 'i':
          printf("%s ", Li[y]);
            break;

          case 'j':
          printf("%s ", Lj[y]);
            break;

          case 'k':
          printf("%s ", Lk[y]);
            break;

          case 'l':
          printf("%s ", Ll[y]);
            break;

          case 'm':
          printf("%s ", Lm[y]);
            break;

          case 'n':
          printf("%s ", Ln[y]);
            break;

          case 'o':
          printf("%s ", Lo[y]);
            break;

          case 'p':
          printf("%s ", Lp[y]);
            break;

          case 'q':
          printf("%s ", Lq[y]);
            break;

          case 'r':
          printf("%s ", Lr[y]);
            break;

          case 's':
          printf("%s ", Ls[y]);
            break;

          case 't':
          printf("%s ", Lt[y]);
            break;

          case 'u':
          printf("%s ", Lu[y]);
            break;

          case 'v':
          printf("%s ", Lv[y]);
            break;

          case 'w':
          printf("%s ", Lw[y]);
            break;

          case 'x':
          printf("%s ", Lx[y]);
            break;

          case 'y':
          printf("%s ", Ly[y]);
            break;

          case 'z':
          printf("%s ", Lz[y]);
            break;

//Numbers

          case '1':
          printf("%s ", N1[y]);
            break;

          case '2':
          printf("%s ", N2[y]);
            break;

          case '3':
          printf("%s ", N3[y]);
            break;

          case '4':
          printf("%s ", N4[y]);
            break;

          case '5':
          printf("%s ", N5[y]);
            break;

          case '6':
          printf("%s ", N6[y]);
            break;

          case '7':
          printf("%s ", N7[y]);
            break;

          case '8':
          printf("%s ", N8[y]);
            break;

          case '9':
          printf("%s ", N9[y]);
            break;

          case '0':
          printf("%s ", N0[y]);
            break;

//Punctuation

          case '!':
          printf("%s ", Pexclamation[y]);
            break;

          case '?':
          printf("%s ", Pquestion[y]);
            break;

          case ',':
          printf("%s ", Pcomma[y]);
            break;

          case '.':
          printf("%s ", Ppoint[y]);
            break;

          case '-':
          printf("%s ", Pdash[y]);
            break;

          case ';':
          printf("%s ", Psemicolon[y]);
            break;

          case ':':
          printf("%s ", Pcolon[y]);
            break;

          case '&':
          printf("%s ", Pamp[y]);
            break;


          } //Switch statement
        } //Second For loop
      printf("\n"); //Blank space
    } //First For loop
  } //While loop

return(0);

}                   //main
