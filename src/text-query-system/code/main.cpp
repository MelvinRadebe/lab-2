#include <iostream>
#include "Word.h"
#include "Line.h"
using namespace std;

int main()
{
  cout << "Running main" << endl;

  auto checkIfequal =  Line{"we will Stop"};
  cout<< checkIfequal.contains(Word{"Stop"}) << endl;


  
  
  return 0;
}