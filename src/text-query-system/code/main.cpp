#include <iostream>
#include "Word.h"
#include "Paragraph.h"
#include "Line.h"
using namespace std;

int main()
{
  cout << "Running main" << endl;

  auto paragraph = Paragraph {};
 paragraph.addLine(Line{"Drink from the foreign cup"});
    paragraph.addLine(Line{"Filled with a lust"});
    paragraph.addLine(Line{"We are foreign, forbidden, forbidden"});

    auto objReturned = paragraph.contains(Word{"foreign"});
    auto isPresent = get<0>(objReturned);
    auto occurences = get<1>(objReturned);


   
       

       
       cout<<"occurences at 0: "<<occurences[0]<<endl;
       cout<<"occurences at 1: "<<occurences[1]<<endl;
  
  
  return 0;
}