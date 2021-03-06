

#include <liblogger.h>

using namespace liblogger;

class MyFilter : public ILogFilter
{
	public:
	
		bool Filter(const LogType Type, const std::string &str)
		{
			return true;
		}
};


bool Called = false;

static void Function(void *arg, const LogType Type, const std::string &str)
{
	printf("%d - %s\n", Type, str.c_str());
	Called = true;
}

int main(int argc, char ** argv)
{
	LogManager::Add(new LogCallBack(NULL, Function));
	LogManager::FilterAdd(new MyFilter());

	LogInfo("Testing");

	if (Called)
		abort();

	LogManager::RemoveAll();
	return 0;
}

