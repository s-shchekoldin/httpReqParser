This is a demonstration of using the HttpRequest parsing example.
The code (httpReq.h and httpReq.cc) was automatically generated using vProto at https://cgen.dev
The application demonstrates the operation of both: full-http and any byte-level data fragmentation.

The application uses input test data from 'input.txt' and outputs the result to the file 'output.txt'.

![](httpReq.png)

### cmake Build/Run/Clean:
To build, run, or clean projects using this Makefile, execute the following commands:
```bash
cmake -B build
```
```bash
cd ./build
```
```bash
make
```
```bash
make install
```
```bash
make uninstall
```

### Example of usage
- **Include** "httpReq.h" or "perfHttpReq.h" (#include "httpReq.h")
- **Declare** user functions from "httpReqResult" or "perfHttpReqResult" (section "Don't forget to declare" from .h file)
- **Add Link Library** -lhttpReq or -lperfHttpReq (libhttpReq.a libperfHttpReq.a)
