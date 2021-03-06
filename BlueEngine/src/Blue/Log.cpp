
#include "bluecph.h"
#include "Log.h"

namespace Blue
{
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;

	void Log::Init()
	{

		
		s_CoreLogger = spdlog::stderr_color_mt("Blue");
		s_CoreLogger->set_level(spdlog::level::trace);
		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_ClientLogger = spdlog::stderr_color_mt("App");
		spdlog::set_level(spdlog::level::trace);
		spdlog::set_pattern("%^[%T] %n: %v%$");
	}
}