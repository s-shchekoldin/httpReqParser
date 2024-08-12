#include <chrono>
#include <ctime>
#include <fstream>
#include <iostream>

#include "perfHttpReq.h"

#ifdef TEST_BOOST_HTTP
#include <boost/beast/http.hpp>
#include <boost/beast/http/parser.hpp>
#endif

#ifdef REPEAT_COUNT
uint64_t repeatCount = REPEAT_COUNT;
#else
uint64_t repeatCount = 10*1000*1000;
#endif


void perfHttpReqResult::payload(__attribute__((unused)) const char * data, __attribute__((unused)) unsigned len, __attribute__((unused)) bool isFirst, __attribute__((unused)) bool isLast)
{
}

int main()
{
    std::ifstream f("input.txt");
    std::string input((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());

    uint64_t reqCount = 0;
    uint64_t totalBytes = 0;
    auto startTime = std::chrono::high_resolution_clock::now();
    for(uint64_t i = 0; i < repeatCount; i++)
    {
        reqCount++;
        totalBytes += input.length();

#ifdef TEST_BOOST_HTTP
        boost::beast::http::request_parser<boost::beast::http::string_body> parser;
        boost::system::error_code ec;
        auto consumed = parser.put(boost::asio::buffer(input.data(), input.size()), ec);
        if (!ec && consumed == input.size())
            continue;
        printf("ec.message(): %s\n", ec.message().c_str());
#else
        perfHttpReq state;
        if (state.parse(input.data(), input.size()))
            continue;
#endif
        printf("ERROR PARSE\n");
        return 1;
    }
    auto endTime = std::chrono::high_resolution_clock::now();
    uint64_t usec = std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime).count();
    if (usec == 0)
    {
        printf("Warning! increase repeatCount=%lu\n", repeatCount);
        return 0;
    }
    printf("\t\t\tRESULT: usec=%lu, Mbites/sec=%lu ReqPerSeq: %lu TotalBytes: %lu\r\n",
        usec, totalBytes*8000*1000/usec/1024/1024, reqCount*1000*1000/usec, totalBytes);
    return 0;
}

