#include "pch.h"
#include "Brain.h"


Brain::Brain()
{
	this->intellect = 0;
}

Brain::Brain(unsigned nIntellect)
{
	SetIntellect(nIntellect);
}


Brain::~Brain()
{
}

void Brain::SetIntellect(unsigned nIntellect)
{
	if(nIntellect>0 && nIntellect<=100)
		this->intellect = nIntellect;
	else 
		throw - 1;
}

unsigned Brain::GetIntellect()
{
	return this->intellect;
}
