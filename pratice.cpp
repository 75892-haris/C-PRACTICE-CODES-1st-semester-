#include <iostream>
using namespace std;

int x = 32;
int b = 8;

int main() {
   // optional in C++, but still valid
   extern int b; 
   cout << "The value of extern variables x and b : " << x << ", " << b << endl;

   x = 15;
   cout << "The value of modified extern variable x : " << x << endl;
   return 0;
}
