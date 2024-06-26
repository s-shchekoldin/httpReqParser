This is a demonstration of using the HttpRequest parsing example.
The code (httpReq.h and httpReq.cc) was automatically generated using vProto at https://vsyn.ru
Code generation was based on the description in httpReq.vproto.
The application demonstrates the operation of both: full-http request and any byte-level data fragmentation.

Application output:

===Stage1 - full request:===
URL(9): /example/
HOST: www.test.com
URL(5): /url/
HOST: www.test.com
LENGTH: 5
        DATA(5)[1_1]: 12345
===Stage2 - data fragmentation 1 byte===
URL(9): /example/
HOST: www.test.com
URL(5): /url/
HOST: www.test.com
LENGTH: 5
        DATA(1)[1_0]: 1
        DATA(1)[0_0]: 2
        DATA(1)[0_0]: 3
        DATA(1)[0_0]: 4
        DATA(1)[0_1]: 5
