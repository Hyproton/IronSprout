#pragma once

#ifdef IS_PLATFROM_WINDOWS

extern IS::Application* IS::CreatApplictaion();

int main(int argc, char** argv)
{
	//printf("IronSprout Engine\n");
	IS::Application* app = IS::CreatApplictaion();
	app->Run();
	delete app;

	return 0;
}

#endif // IS_PLATFROM_WINDOWS
