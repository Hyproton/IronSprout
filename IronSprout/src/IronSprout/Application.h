#pragma once

#include "Core.h"

namespace IS {

	class IRONSPROUT_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreatApplictaion();

}


