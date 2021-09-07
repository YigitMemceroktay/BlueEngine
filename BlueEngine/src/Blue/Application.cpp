#include "bluecph.h"
#include "Application.h"

namespace Blue
{
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1290, 1200);
		if (e.IsInCategory(EventCategoryApplication))
		{
			BLUE_CORE_TRACE(e);
		}
		if (e.IsInCategory(EventCateogryInput))
		{
			BLUE_CORE_TRACE(e);
		}
		
		BLUE_CORE_TRACE(e.GetStaticType());
		BLUE_CORE_TRACE(e.GetEventType());
		BLUE_CORE_TRACE(e.GetCategoryFlags());


		while (true);
	}

}
