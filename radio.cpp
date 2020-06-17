/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  const float PI = 3.141592;
  float area,radio;
  
  cout << "Introduzca el radio del círculo: ";
  cin >> radio;
  area = PI * radio * radio;
  cout << "El área del círculola es: " << area << endl;
  system("PAUSE");    
  return 0;
}