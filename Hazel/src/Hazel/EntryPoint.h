
#pragma once

#ifdef HZ_PLATFORM_WINDOWS
#include "Application.h"
extern Hazel::Application* Hazel::CreateApplication();
void main(int argc, char** argv) {
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}
#endif
