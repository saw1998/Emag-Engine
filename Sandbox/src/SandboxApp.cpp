#include<Emag.h>

class Sandbox : public Emag::Application {

public:

	Sandbox() {

	}

	~Sandbox() {

	}
};


Emag::Application* Emag::CreateApplication() {
	return new Sandbox();
}