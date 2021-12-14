#include <iostream>
#include <ctime>

using namespace std;

int main ()
{
//time_t seconds = time(NULL);
//tm* timeinfo = localtime(&seconds);
//cout<<asctime(timeinfo);
//return 0;

	std::time_t t = std::time(0);   // get time now
	std::tm* now = std::localtime(&t);
	std::ostream os;
	os << "[" << now->tm_year + 1900
				 << now->tm_mon + 1
				 << now->tm_mday << "_"
				 << now->tm_hour
				 << now->tm_min
				 << now->tm_sec << "] ";
	std::cout << os ;
}