#include <iostream>
#include "Event.h"

int main()
{
	auto evt1 = Event();

	evt1.hook(EventHandler([](EventArgs* e)
		{
			e->test_print();
		}));

	evt1 += EventHandler([](EventArgs* e)
		{
			printf("This works!\n");
		});
	
	evt1 += [](EventArgs* e)
	{
		printf("This also works!\n");
	};


	evt1.fire(new EventArgs());
}