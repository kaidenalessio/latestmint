#pragma once

#ifdef LM_PLATFORM_WINDOWS

extern Latestmint::Application* Latestmint::CreateApplication();

int main(int argc, char** argv)
{
	Latestmint::Log::Init();
	LM_CORE_WARN("Initiialized log!");
	int a = 5;
	LM_INFO("Hello hello {0}!", a);

	auto app = Latestmint::CreateApplication();
	app->Run();
	delete app;
}

#endif