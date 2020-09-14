#include <Latestmint.h>

class Sandbox : public Latestmint::Application {
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Latestmint::Application* Latestmint::CreateApplication()
{
	return new Sandbox();
}