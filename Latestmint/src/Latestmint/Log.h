#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Latestmint {

	class LATESTMINT_API Log
	{
	public:
		static void Init();
		
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define LM_CORE_TRACE(...)  ::Latestmint::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define LM_CORE_INFO(...)   ::Latestmint::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LM_CORE_WARN(...)   ::Latestmint::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LM_CORE_ERROR(...)  ::Latestmint::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LM_CORE_FATAL(...)	::Latestmint::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define LM_TRACE(...)       ::Latestmint::Log::GetClientLogger()->trace(__VA_ARGS__)
#define LM_INFO(...)        ::Latestmint::Log::GetClientLogger()->info(__VA_ARGS__)
#define LM_WARN(...)        ::Latestmint::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LM_ERROR(...)       ::Latestmint::Log::GetClientLogger()->error(__VA_ARGS__)
#define LM_FATAL(...)       ::Latestmint::Log::GetClientLogger()->fatal(__VA_ARGS__)