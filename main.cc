#include "httpReq.h"

void httpReqResult::payload(__attribute__((unused)) const char * data, __attribute__((unused)) unsigned len, __attribute__((unused)) bool isFirst, __attribute__((unused)) bool isLast)
{
    printf("\tDATA(%u)[%u_%u]: ", len, isFirst, isLast);
    for(unsigned i = 0; i < len; i++)
        printf("%c", data[i]);
    printf("\n");
}

int main()
{
    std::vector<std::string> examples;
    examples.push_back("GET /example/ HTTP/1.1\r\nHost: www.test.com\r\n\r\n");
    examples.push_back("POST /url/ HTTP/1.1\r\nHost: www.test.com\r\nContent-Length: 5\r\n\r\n12345");

    httpReq state;

    printf("===Stage1 - full request:===\n");
    for(const auto & e : examples)
    if (!state.parse(e))
        printf("Error parse\n");

    printf("===Stage2 - data fragmentation 1 byte===\n");
    for(const auto & e : examples)
    {
        for(const auto & c : e)
        if (!state.parse(&c, 1))
            printf("Error parse\n");
    }



    return 0;
}
