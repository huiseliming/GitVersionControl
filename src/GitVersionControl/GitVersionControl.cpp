#include "GitVersionControl/Git.h"
#include <iostream>

int main() 
{
	std::wcout << GIT_TAG << std::endl;
	std::wcout << GIT_VERSION << std::endl;
	std::wcout << GIT_COMMIT_DATE_ISO8601 << std::endl;
	std::wcout << GIT_HEAD_SHA1 << std::endl;
}