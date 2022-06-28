#include <iostream>
#include <fstream>
#include <string>
#include "sculptor.h"
using namespace std;

int main() 

{
  
    
    Sculptor planckton (100,100,100);
    //cabeça 
    planckton.setColor(0.94, 0.86, 0.03, 1);
    planckton.putBox(6,11,10,15,4,8);

    //cabelo
   planckton.setColor(0.94, 0.86, 0.03, 1);
   planckton.putBox(10,11,9,10,7,8);
   planckton.putBox(10,11,9,10,4,5);
   planckton.putBox(8,9,9,10,4,5);
   planckton.putBox(8,9,9,10,7,8);
   planckton.putBox(6,7,9,10,4,5);
   planckton.putBox(6,7,9,10,7,8);
  
  //olhos
  planckton.setColor(1, 1, 1, 1);
  planckton.putVoxel(10,11,7);
  planckton.putVoxel(10,12,7);
  planckton.putVoxel(9,11,7);
  planckton.putVoxel(7,11,7);
  planckton.putVoxel(7,12,7);
  planckton.putVoxel(6,11,7);

  planckton.setColor(0, 0, 0, 1);
  planckton.putVoxel(9,12,7);
  planckton.putVoxel(6,12,7);

  //nariz
  planckton.setColor(0.94, 0.86, 0.03, 1);
  planckton.putBox(8,9,13,14,8,9);
  
    //peito e ombro
    planckton.setColor(0.94 ,0.45, 0.16, 1);
    planckton.putBox(6,11,15,21,4,7);
    planckton.putBox(4,6,15,17,4,7);
    planckton.putBox(11,13,15,17,4,7);

   //barriga
  planckton.setColor(0.94 ,0.45, 0.16, 1);
  planckton.putBox(6,11,17,21,7,8);
  
  //braços
 planckton.setColor(0.94, 0.86, 0.03, 1);
 planckton.putBox(4,6,17,20,4,7);
 planckton.putBox(11,13,17,20,4,7);

  //pernas 
  planckton.setColor(0.05, 0.15, 0.83, 1);
  planckton.putBox(6,11,21,24,4,7); 
  //short
  planckton.setColor(0.94, 0.86, 0.03, 1);
  planckton.putBox(6,8,24,26,4,7); 
  planckton.putBox(9,11,24,26,4,7); 
  //meias
  planckton.setColor(1, 1, 1, 1);
  planckton.putBox(6,8,26,27,4,7); 
  planckton.putBox(9,11,26,27,4,7);
  //sapatos
  planckton.setColor(0.05, 0.15, 0.83, 1);
  planckton.putBox(6,8,27,28,4,9); 
  planckton.putBox(9,11,27,28,4,9);

  //skate
  planckton.setColor(0.08, 0.58, 0.07, 1);
  planckton.putBox(3,14,28,29,4,9);
  planckton.putBox(13,14,27,28,4,9);
  planckton.putBox(14,15,26,27,4,9);
  planckton.putBox(14,15,27,28,4,9);
  
  //rodinhas do skate
  planckton.setColor(0, 0, 0, 1);
  planckton.putBox(5,6,29,30,8,9);
  planckton.putBox(5,6,29,30,4,5);
  planckton.putBox(11,12,29,30,8,9);
  planckton.putBox(11,12,29,30,4,5);
  
    planckton.writeOFF((char*)"planckton.off");
  }
    