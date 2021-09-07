#pragma once
#include <stdio.h>
#ifdef BL_PLATFORM_WINDOWS

extern Blue::Application* Blue::CreateApplication();

int main(int argc, char* argv[])
{
	Blue::Log::Init();
	BLUE_CLIENT_INFO("Welcome");
	auto app = Blue::CreateApplication();
	app->Run();
	delete app;
}

#endif