#include "Event.h"

void Event::fire(EventArgs* e)
{
	for (auto it = this->m_handlers.begin(); it != this->m_handlers.end(); it++)
	{
		it->fire(e);
	}
}

void Event::hook(EventHandler handler)
{
	this->m_handlers.push_back(handler);
}

