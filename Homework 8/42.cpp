//IP-адрес - это четверка a.b.c.d, где a, b, c, d целые числа
//из интервала [0,255]. Требуется написать функции encode и decode:
 
//unsigned int encode(const std::string& ipAddress);
//std::string decode(unsigned int code);
 
//Первая функция превращает ай-пи адрес в четырех байтовое число.
//Функция decode выполняет обратный процесс. Неважно, как написаны функции.
//Главное, чтобы encode(decode(x)) было равно х для любого без знакового
//целого х; и чтобы decode(encode(strIp)) было равно strIp для любой строки,
//представляющей собой айпи адрес.
 
//std::cout << decode(encode(“125.0.0.4”)) ; //prints 125.0.0.4
//std::cout << encode(decode(19)) ; //pri
///////////////////////////////////////////////////////////////////////////////
#include <bitset>
#include <climits>
#include <iostream>
#include <sstream>
#include <string>
///////////////////////////////////////////////////////////////////////////////

typedef std::bitset     < CHAR_BIT  >   T_byte_bitset;
///////////////////////////////////////////////////////////////////////////////
unsigned  encode( std::string    const   &   ip_adr )
{
    unsigned    int          res;
    std::istringstream  ssin    (ip_adr);
    unsigned    int          val;
    char                delim;
 
    do
    {
        ssin    >>      val;
        res     <<=     CHAR_BIT;
        res     |=      val;
    }
    while( ssin >> delim );
    std::cout   <<  res << "\n";
    return  res;
}
///////////////////////////////////////////////////////////////////////////////
std::string    decode( unsigned   code )
{
    std::string    res_adr;
    std::ostringstream  oss; 
    for( int  i=0; i < 4; ++i )
    {
        oss <<  T_byte_bitset( code ).to_ulong() <<  '.';
        // std::cout <<" " <<std::to_string(T_byte_bitset( code ).to_ulong()) << " ";
        //  res_adr = std::to_string(T_byte_bitset( code ).to_ulong()) + '.' + res_adr;
        code        >>=     CHAR_BIT;
    }
    res_adr = oss.str();
    // res_adr.pop_back();
     std::cout <<"dec = " << res_adr <<"\n";
    return  res_adr;
}
///////////////////////////////////////////////////////////////////////////////
int     main()
{
    // std::cout   <<  decode(encode("125.50.0.4"))  <<  std::endl
 
    std::cout  <<  encode(decode(2100428804)) <<  std::endl;
}