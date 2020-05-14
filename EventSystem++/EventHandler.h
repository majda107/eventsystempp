#pragma once
#include "EventArgs.h"

typedef void(*EVENT_HANDLER)(EventArgs* args);

struct EventHandler
{
private:
	EVENT_HANDLER m_handler; /*void(*m_handler)(EventArgs* args);*/
	bool m_fired;

public:
	EventHandler(void(*handler)(EventArgs* args))
	{
		this->m_handler = handler;
	}

	void fire(EventArgs* e);
	
	bool get_fired() { return this->m_fired; }
};

