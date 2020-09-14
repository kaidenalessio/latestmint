#pragma once

#ifdef LM_PLATFORM_WINDOWS

extern Latestmint::Application* Latestmint::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Latestmint::CreateApplication();
	app->Run();
	delete app;
}

#endif