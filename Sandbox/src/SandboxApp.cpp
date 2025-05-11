#include <IronSprout.h>

class Sandbox : public IS::Application
{
public:
	Sandbox(){}
	~Sandbox(){}

private:

};

IS::Application* IS::CreatApplictaion()
{
	return new Sandbox();
}