// ==============================================================
// Date: 2026-01-21 18:12:37 GMT
// Generated using vProto(2026.01.21)        https://www.cgen.dev
// Author: Sergey V. Shchekoldin     Email: shchekoldin@gmail.com
// ==============================================================

#ifndef HTTPREQ_H
#define HTTPREQ_H
#pragma once

#include <array>
#include <cstdint>
#include <cstdio>
#include <string>
#include <vector>

struct httpReqResult
{
    std::string host;
    std::string type;
    std::string url;
    uint64_t contentLength = 0;

    // Don't forget to declare:
    void payload([[maybe_unused]] const char * data, [[maybe_unused]] unsigned len, [[maybe_unused]] bool isFirst, [[maybe_unused]] bool isLast);
};

struct httpReq : httpReqResult
{
    template<class... Args> explicit httpReq(Args && ... args) : httpReqResult(args ...) {}
    bool parse(const char * data, unsigned len);
    bool parse(const std::string & data) { return parse(data.data(), data.length()); }
    bool empty() const { return mstate.node == NodeT::NoState && pstate.empty(); }
    void reset();

private:
    enum class NodeT
    {
        Loop1_0, // line_1
            Any1_0,
                    Text1_0_0_0,
                    Text1_0_1_0,
                    Text1_0_2_0,
                    Text1_0_3_0,
                    Text1_0_4_0,
                    Text1_0_5_0,
                    Text1_0_6_0,
                    Text1_0_7_0,
                    Text1_0_8_0,
                    Text1_0_9_0,
                    Text1_0_10_0,
                        Bang1_0, Call1_2, Call1_3, Reset1_4,
        Loop3_0, // line_3
            Label3_0, Loop3_1,
                Range4_0, String4_1, Range4_2, Func4_3, Text4_4, Range4_5, Text4_6, Range4_7, Text4_8, Text4_9, Ret4_10,
        Loop6_0, // line_6
            Label6_0, Loop6_1,
                Text7_0, Range7_1, String7_2, Func7_3, Text7_4, Text7_5,
                Any8_0,
                    Text8_0_0_0,
                            Bang8_0, Range8_2, String8_3, Func8_4, Text8_5, Text8_6,
                Any9_0,
                    Text9_0_0_0,
                            Bang9_0, Range9_2, Uint9_3, Func9_4, Text9_5, Text9_6,
                Range10_0, Range10_1, Text10_2, Text10_3,
                Text11_0, Text11_1, Cases11_2,
                    If12_0, Data12_1, Ret12_2,
                    Ret13_0,
                 // catch:
                Range14_0, Text14_1,
        NoState
    };
    struct StateT
    {
        const char * data = nullptr;
        const char * end = nullptr;
        uint64_t consumed = 0;
        NodeT node = NodeT::Loop1_0;
        unsigned rcount = 0;
        std::array<NodeT, 2> rstack;
        unsigned remain() const { return unsigned(end - data); }
        const char * name() const;
    };
    StateT mstate;
    std::vector<StateT> pstate;

    void parse(StateT & state);
    bool loop1_0(StateT & state);
    bool any1_0(StateT & state);
    bool text1_0_0_0(StateT & state) const;
    bool text1_0_1_0(StateT & state) const;
    bool text1_0_2_0(StateT & state) const;
    bool text1_0_3_0(StateT & state) const;
    bool text1_0_4_0(StateT & state) const;
    bool text1_0_5_0(StateT & state) const;
    bool text1_0_6_0(StateT & state) const;
    bool text1_0_7_0(StateT & state) const;
    bool text1_0_8_0(StateT & state) const;
    bool text1_0_9_0(StateT & state) const;
    bool text1_0_10_0(StateT & state) const;
    bool bang1_0(StateT & state);
    bool call1_2(StateT & state) const;
    bool call1_3(StateT & state) const;
    bool reset1_4(StateT & state);
    bool loop3_0(StateT & state) const;
    bool label3_0(StateT & state) const;
    bool loop3_1(StateT & state) const;
    bool range4_0(StateT & state) const;
    bool string4_1(StateT & state);
    void string4_1(const char * data, unsigned len, uint64_t consumed);
    bool range4_2(StateT & state) const;
    bool func4_3(StateT & state);
    bool func4_3();
    bool text4_4(StateT & state) const;
    bool range4_5(StateT & state) const;
    bool text4_6(StateT & state) const;
    bool range4_7(StateT & state) const;
    bool text4_8(StateT & state) const;
    bool text4_9(StateT & state) const;
    bool ret4_10(StateT & state) const;
    bool loop6_0(StateT & state) const;
    bool label6_0(StateT & state) const;
    bool loop6_1(StateT & state);
    bool text7_0(StateT & state, bool is_branch) const;
    bool range7_1(StateT & state) const;
    bool string7_2(StateT & state);
    void string7_2(const char * data, unsigned len, uint64_t consumed);
    bool func7_3(StateT & state);
    bool func7_3();
    bool text7_4(StateT & state) const;
    bool text7_5(StateT & state) const;
    bool any8_0(StateT & state);
    bool text8_0_0_0(StateT & state) const;
    bool bang8_0(StateT & state);
    bool range8_2(StateT & state) const;
    bool string8_3(StateT & state);
    void string8_3(const char * data, unsigned len, uint64_t consumed);
    bool func8_4(StateT & state);
    bool func8_4();
    bool text8_5(StateT & state) const;
    bool text8_6(StateT & state) const;
    bool any9_0(StateT & state);
    bool text9_0_0_0(StateT & state) const;
    bool bang9_0(StateT & state);
    bool range9_2(StateT & state) const;
    bool uint9_3(StateT & state);
    void uint9_3(const char * data, unsigned len, uint64_t consumed);
    bool func9_4(StateT & state);
    bool func9_4();
    bool text9_5(StateT & state) const;
    bool text9_6(StateT & state) const;
    bool range10_0(StateT & state) const;
    bool range10_1(StateT & state) const;
    bool text10_2(StateT & state) const;
    bool text10_3(StateT & state) const;
    bool text11_0(StateT & state) const;
    bool text11_1(StateT & state) const;
    bool cases11_2(StateT & state) const;
    bool if12_0(StateT & state) const;
    bool data12_1(StateT & state);
    bool ret12_2(StateT & state) const;
    bool ret13_0(StateT & state) const;
    bool range14_0(StateT & state) const;
    bool text14_1(StateT & state) const;
};
#endif
