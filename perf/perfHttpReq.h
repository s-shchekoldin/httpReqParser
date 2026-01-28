// ==============================================================
// Date: 2026-01-28 20:26:22 GMT
// Generated using vProto(2026.01.28)        https://www.cgen.dev
// Author: Sergey V. Shchekoldin     Email: shchekoldin@gmail.com
// ==============================================================

#ifndef PERFHTTPREQ_H
#define PERFHTTPREQ_H
#pragma once

#include <array>
#include <cstdint>
#include <cstdio>
#include <string>

struct perfHttpReqResult
{
    std::string host;
    std::string url;
    uint64_t content_length = 0;

    // Don't forget to declare:
    void payload([[maybe_unused]] const char * data, [[maybe_unused]] unsigned len, [[maybe_unused]] bool isFirst, [[maybe_unused]] bool isLast);
};

struct perfHttpReq : perfHttpReqResult
{
    template<class... Args> explicit perfHttpReq(Args && ... args) : perfHttpReqResult(std::forward<Args>(args)...) {}
    bool parse(const char * data, unsigned len);
    bool parse(const std::string & data) { return parse(data.data(), data.length()); }
    bool empty() const { return mstate.node == NodeT::NoState; }
    void reset();

private:
    enum class NodeT
    {
        Loop1_0, // line_1
            Text1_0, Call1_1, Call1_2,
            Text2_0, Call2_1, Call2_2,
            Text3_0, Cases3_1,
                Text4_0, Call4_1, Call4_2,
                Text5_0, Call5_1, Call5_2,
                Text6_0, Call6_1, Call6_2,
            Text7_0, Call7_1, Call7_2,
            Text8_0, Call8_1, Call8_2,
            Text9_0, Call9_1, Call9_2,
            Text10_0, Call10_1, Call10_2,
            Text11_0, Call11_1, Call11_2,
            Text12_0, Call12_1, Call12_2,
            Text13_0, Text13_1,
        Loop15_0, // line_15
            Label15_0, Range15_1, String15_2, Range15_3, Text15_4, Range15_5, Text15_6, Range15_7, Text15_8, Text15_9, Ret15_10,
        Loop17_0, // line_17
            Label17_0, Loop17_1,
                Text18_0, Range18_1, String18_2, Text18_3, Text18_4,
                Text19_0, Range19_1, Uint19_2, Text19_3, Text19_4,
                Range20_0, Range20_1, Text20_2, Text20_3,
                Text21_0, Text21_1, Cases21_2,
                    Func22_0, Data22_1, Func22_2, Ret22_3,
                    Ret23_0,
                 // catch:
                Range24_0, Text24_1, Text24_2,
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

    void parse(StateT & state);
    bool loop1_0(StateT & state) const;
    bool text1_0(StateT & state, bool is_branch) const;
    bool call1_1(StateT & state) const;
    bool call1_2(StateT & state) const;
    bool text2_0(StateT & state, bool is_branch) const;
    bool call2_1(StateT & state) const;
    bool call2_2(StateT & state) const;
    bool text3_0(StateT & state) const;
    bool cases3_1(StateT & state) const;
    bool text4_0(StateT & state, bool is_branch) const;
    bool call4_1(StateT & state) const;
    bool call4_2(StateT & state) const;
    bool text5_0(StateT & state, bool is_branch) const;
    bool call5_1(StateT & state) const;
    bool call5_2(StateT & state) const;
    bool text6_0(StateT & state, bool is_branch) const;
    bool call6_1(StateT & state) const;
    bool call6_2(StateT & state) const;
    bool text7_0(StateT & state, bool is_branch) const;
    bool call7_1(StateT & state) const;
    bool call7_2(StateT & state) const;
    bool text8_0(StateT & state, bool is_branch) const;
    bool call8_1(StateT & state) const;
    bool call8_2(StateT & state) const;
    bool text9_0(StateT & state, bool is_branch) const;
    bool call9_1(StateT & state) const;
    bool call9_2(StateT & state) const;
    bool text10_0(StateT & state, bool is_branch) const;
    bool call10_1(StateT & state) const;
    bool call10_2(StateT & state) const;
    bool text11_0(StateT & state, bool is_branch) const;
    bool call11_1(StateT & state) const;
    bool call11_2(StateT & state) const;
    bool text12_0(StateT & state, bool is_branch) const;
    bool call12_1(StateT & state) const;
    bool call12_2(StateT & state) const;
    bool text13_0(StateT & state) const;
    bool text13_1(StateT & state) const;
    bool loop15_0(StateT & state) const;
    bool label15_0(StateT & state) const;
    bool range15_1(StateT & state) const;
    bool string15_2(StateT & state);
    void string15_2(const char * data, unsigned len, uint64_t consumed);
    bool range15_3(StateT & state) const;
    bool text15_4(StateT & state) const;
    bool range15_5(StateT & state) const;
    bool text15_6(StateT & state) const;
    bool range15_7(StateT & state) const;
    bool text15_8(StateT & state) const;
    bool text15_9(StateT & state) const;
    bool ret15_10(StateT & state) const;
    bool loop17_0(StateT & state) const;
    bool label17_0(StateT & state) const;
    bool loop17_1(StateT & state) const;
    bool text18_0(StateT & state, bool is_branch) const;
    bool range18_1(StateT & state) const;
    bool string18_2(StateT & state);
    void string18_2(const char * data, unsigned len, uint64_t consumed);
    bool text18_3(StateT & state) const;
    bool text18_4(StateT & state) const;
    bool text19_0(StateT & state, bool is_branch) const;
    bool range19_1(StateT & state) const;
    bool uint19_2(StateT & state);
    void uint19_2(const char * data, unsigned len, uint64_t consumed);
    bool text19_3(StateT & state) const;
    bool text19_4(StateT & state) const;
    bool range20_0(StateT & state) const;
    bool range20_1(StateT & state) const;
    bool text20_2(StateT & state) const;
    bool text20_3(StateT & state) const;
    bool text21_0(StateT & state) const;
    bool text21_1(StateT & state) const;
    bool cases21_2(StateT & state);
    bool func22_0(StateT & state);
    bool func22_0();
    bool data22_1(StateT & state);
    bool func22_2(StateT & state);
    bool func22_2();
    bool ret22_3(StateT & state) const;
    bool ret23_0(StateT & state) const;
    bool range24_0(StateT & state) const;
    bool text24_1(StateT & state) const;
    bool text24_2(StateT & state) const;
};
#endif
