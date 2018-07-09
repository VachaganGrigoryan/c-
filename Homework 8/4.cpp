#include <iostream>
#include <string>
#include <sstream>
unsigned int encode(const std::string& ipAddress){
	int a,b,c,d;
	char ch;
	std::istringstream iss(ipAddress);
	iss >> a >> ch >> b >> ch >> c >> ch >> d;
	return (a << 24 | b<< 16 | c << 8 | d);
}
std::string decode(unsigned int code){
	std::ostringstream oss;
	for( int  i= 0; i < 4; i++ )
    {
		int maska = code;
		oss << (maska << i*8 >> 24) << (i==3 ?' ':'.');		
	}
	return oss.str();
}
int main()
{
	std::cout << decode(encode("125.50.0.4"))<< "\n"
			  << encode(decode(19)) << "\n";
}

