#include <Blue.h>


	class Sandbox : public Blue::Application
	{
	public:
		Sandbox()
		{

		};
		~Sandbox()
		{
		}

	};



	Blue::Application* Blue::CreateApplication()
	{
		return new Sandbox();
	}
