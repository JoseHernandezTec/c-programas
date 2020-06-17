/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream> //Biblioteca para cin y cout
#include <stdlib.h> //Biblioteca para system("pause")

using namespace std;

int main() //funcion main lleva el control del programa
{
 int x=0; //declaracion e inicializacion de variable
 do 
   {
    x=x+5;  //hacer aumento de cinco en cinco
    cout <<x<<", "<<endl; //escribir los numeros separados por coma y salto de pagina
    }
    while (x<=99);  //condicion siempre que sea menor a cien     
 
  system("PAUSE");
  return 0;
}