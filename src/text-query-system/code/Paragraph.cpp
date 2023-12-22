// -------------------------------------------
//					Paragraph
// -------------------------------------------

#include "Paragraph.h"
#include <iostream>
using namespace std;

void Paragraph::addLine(const Line &line)
{

	paragraphStack.push_back(line.getLine());
}

tuple<bool, vector<int>> Paragraph::contains(const Word &search_word)
{

	bool state = false;
	for (int i = 0; i < paragraphStack.size(); i++)
	{
		auto ss = stringstream{paragraphStack[i]};
		auto temp = string{""};
		
		while (getline(ss, temp, ' '))
		{

			auto new_word = Word{temp};

			if (new_word.isQueryable())
			{
				if (new_word.getWord() == search_word.getWord())
				{
					wordlineNumber.push_back(i+1);

					
					state = true;

				}
				
			}
		}
		
			
		
	}

	return {state, wordlineNumber};
}