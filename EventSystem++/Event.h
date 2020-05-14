#pragma once
#include <stdio.h>
#include <vector>

#include "EventHandler.h"

class Event
{
private:
	std::vector<EventHandler> m_handlers;

public:
	void fire(EventArgs* e);
	void hook(EventHandler handler);

	Event operator += (EventHandler const& handler)
	{
		this->hook(handler);
		return *this;
	}

	Event operator += (EVENT_HANDLER const& handler)
	{
		this->hook(EventHandler(handler));
		return *this;
	}
};

