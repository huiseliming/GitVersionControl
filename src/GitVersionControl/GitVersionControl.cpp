#include "GitVersionControl/Git.h"
#include <iostream>

int main() 
{
	std::cout << GIT_TAG << std::endl;
	std::cout << GIT_VERSION << std::endl;
	std::cout << GIT_COMMIT_DATE_ISO8601 << std::endl;
	std::cout << GIT_HEAD_SHA1 << std::endl;
}