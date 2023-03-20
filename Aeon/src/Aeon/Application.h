#pragma once

#include "Core.h"

namespace Aeon
{
	class AEON_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}

