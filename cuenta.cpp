/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
  int contador,cuenta;
  cuenta = 1;
  cout << "multiplos de tres entre 1 y 100\n";
  cout << "-----------------------------------------------------\n";
  for(contador=1; contador<=100; contador++)
  {
   if (contador % 3 == 0) // *Ver nota.
   {
    cout << contador << " , ";
    cuenta++;
   }
  }
  cout << "\nEl numero total de multiplos de 3 entre 1 y 100 es: " << 
     cuenta << endl;
  cin.get();
  return 0;
}