// -------------------------------------------
//					Line
// -------------------------------------------

#include "Line.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>


using namespace std;

Line::Line(const string &line) : line_(line)
{
	// Hint: some of string's member functions might come in handy here
	// for extracting words.

	auto ss = stringstream { line };
	auto temp = string { "" };

	while (getline(ss, temp, ' '))
	{
		
	
		auto new_word = Word { temp };
	

		if (new_word.isQueryable())
			wordsInLine_.push_back(new_word.getWord());
	}
}

bool Line::contains(const Word &search_word) const
{
	for (auto i = 0u; i < wordsInLine_.size(); i++)
		if (wordsInLine_.at(i) == search_word.getWord())
			{return true;

			}

	return false;
}

string Line::getLine()  const {return line_;}