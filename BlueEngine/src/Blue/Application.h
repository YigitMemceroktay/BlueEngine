#pragma once
#include "Core.h"
#include "Blue/Log.h"
#include "Events/ApplicationEvent.h"
namespace Blue {


	 class BLUE_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();

	};

	 Application* CreateApplication();
	 //DEFINED IN CLIENT
}


