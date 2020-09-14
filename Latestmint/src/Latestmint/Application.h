#pragma once

#include "Core.h"

namespace Latestmint {

	class LATESTMINT_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}