#pragma once

#ifdef EG_PLATFORM_WINDOWS

extern Emag::Application* Emag::CreateApplication();

int main(int argc,char** argv) {

	auto app = Emag::CreateApplication();
	app->Run();
	delete app;
	
}

#endif