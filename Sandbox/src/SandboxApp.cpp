#include <Aeon.h>

class Sandbox : public Aeon::Application
{
public:
	Sandbox()
	{
		
	}

	~Sandbox()
	{
		
	}
};

Aeon::Application* Aeon::CreateApplication()
{
	return new Sandbox();
}