#include <bitset>
#include <climits>
#include <iostream>
#include <sstream>
#include <string>
///////////////////////////////////////////////////////////////////////////////
const   int     NUMBERS_PER_ADDRESS     {4};
const   char    POINT_SYMB              {'.'};
///////////////////////////////////////////////////////////////////////////////
typedef std::bitset     < CHAR_BIT >   T_byte_bitset;
///////////////////////////////////////////////////////////////////////////////
unsigned  encode( std::string const & ipAddress )
{
    unsigned  int res;
    std::istringstream  ssin    ( ipAddress );
    unsigned  int            val;
    char                delim;
 
    do
    {
        ssin    >>      val;
        res     <<=     CHAR_BIT;
        res     |=      val;
    }
    while( ssin >> delim );
 
    return  res;
}
///////////////////////////////////////////////////////////////////////////////
std::string    decode( unsigned int  code )
{
    std::string    res_adr;
    for( int  i; i < NUMBERS_PER_ADDRESS; ++i )
    {
        res_adr = std::to_string(T_byte_bitset( code ).to_ulong()) + POINT_SYMB + res_adr;
        code  >>= CHAR_BIT;
    }
 
    res_adr.pop_back();
    return  res_adr;
}
///////////////////////////////////////////////////////////////////////////////
int     main()
{
    std::cout <<  decode(encode("125.0.0.4")) <<  std::endl
                <<  encode(decode(19)) <<  std::endl;
}