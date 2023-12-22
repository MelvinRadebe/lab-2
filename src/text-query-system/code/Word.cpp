// -------------------------------------------
//					Word
// -------------------------------------------

#include "Word.h"
#include <algorithm>
#include <iostream>

Word::Word(const string &word) : word_{word}
{
	// throws an exception (in the form of WordContainsNoLetters object)
	// indicating that the word being constructed contains no letters
	if (word_.empty())
		throw WordContainsNoLetters{};
	if (wordConsistsOnlyPunc())
		throw WordContainsNoLetters{};

	if (wordContainsSpace())
		throw WordContainsSpace{};

	convertAlltoLowerCase();
	eliminatePunctuation();
	// Note, we will cover exceptions in more detail later on in the course.
}

// overloads the equivalence operator which allows to Words to be compared using ==
bool Word::operator==(const Word &rhs) const
{
	return word_ == rhs.word_;
}
bool Word::isQueryable() const
{

	if (word_.size() >= 3)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Word::convertAlltoLowerCase()
{
	auto temp = string{""};

	for (auto i = 0u; i < word_.length(); i++)
	{
		word_[i] = tolower(word_[i]);
	}
}

void Word::eliminatePunctuation()
{
	for (int i = PUNCTUATION.size() - 1; i >= 0; i--)
	{
		for (int j = word_.size() - 1; j >= 0; j--)
		{
			if (PUNCTUATION[i] == word_[j])
			{
				word_.erase(j, 1);
			}
		}
	}

	// for (auto elements : word_)
	// {
	// 	std::cout << elements << std::endl;
	// }
}

bool Word::wordConsistsOnlyPunc()
{

	for (int i = PUNCTUATION.size() - 1; i >= 0; i--)
	{
		for (int j = word_.size() - 1; j >= 0; j--)
		{
			if (PUNCTUATION[i] == word_[j])
			{
				word_.erase(j, 1);
			}
		}
	}

	if (word_.empty())
	{
		return true;
	}

	else
	{
		return false;
	}
}

bool Word::wordContainsSpace()
{

	for (auto element : word_)
	{
		if (element == ' ')
		{
			return true;
		}
	}

	return false;
}

string Word::getWord() const
{
	return word_;
}
