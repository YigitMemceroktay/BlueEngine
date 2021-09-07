#pragma once
#include "Core.h"
#include <spdlog/spdlog.h>
#include "spdlog/sinks/stdout_color_sinks.h"

#include "spdlog/fmt/ostr.h"
#include <memory>
namespace Blue {
	class BLUE_API Log
	{
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	public:
		static  void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; };
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; };

	};
	
}
//CORE LOG MACROS
#define BLUE_CORE_ERROR(...)	::Blue::Log::GetCoreLogger()->error(__VA_ARGS__);
#define BLUE_CORE_INFO(...)		::Blue::Log::GetCoreLogger()->info(__VA_ARGS__);
#define BLUE_CORE_WARN(...)		::Blue::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define BLUE_CORE_TRACE(...)	::Blue::Log::GetCoreLogger()->trace(__VA_ARGS__);
#define BLUE_CORE_ASSERT(...)	::Blue::Log::GetCoreLogger()->assert(__VA_ARGS__);

#define BLUE_CLIENT_ERROR(...)	::Blue::Log::GetClientLogger()->error(__VA_ARGS__);
#define BLUE_CLIENT_INFO(...)		::Blue::Log::GetClientLogger()->info(__VA_ARGS__);
#define BLUE_CLIENT_WARN(...)		::Blue::Log::GetClientLogger()->warn(__VA_ARGS__);
#define BLUE_CLIENT_TRACE(...)	::Blue::Log::GetClientLogger()->trace(__VA_ARGS__);
#define BLUE_CLIENT_ASSERT(...)	::Blue::Log::GetClientLogger()->assert(__VA_ARGS__);

