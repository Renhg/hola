#include <iostream>

#include <stdio.h>

using namespace std;

int main()

{

FILE *arch;

arch=fopen("parcial.txt", "a");

char palabras[1000];

float numero;

cout<< "Digite unas Palabras: ";

fgets(palabras, 1000, stdin);

fputs(palabras, arch);

cout<< "Digite un numero: ";

system("pause");

return 0;

}
