#include "EventHandler.h"

void EventHandler::fire(EventArgs* e)
{
	this->m_handler(e);
	this->m_fired = true;
}