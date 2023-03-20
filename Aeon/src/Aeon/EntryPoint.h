#pragma once

#ifdef AE_PLATFORM_WINDOWS

extern Aeon::Application* Aeon::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Aeon::CreateApplication();
	app->Run();
	delete app;
}

#endif