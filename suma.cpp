/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
int
main ()
{
  int num1;
  int num2;
  int resultado;
  std::cout << "Ingrese el primer numero\n";
  std::cin >> num1;
  std::cout << "Ingrese el segundo numero\n";
  std::cin >> num2;
  resultado = num1 + num2;
  std::cout << resultado << "\n";
  return 0;
}
