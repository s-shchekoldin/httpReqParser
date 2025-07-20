// ==============================================================
// Date: 2025-07-20 10:34:01 GMT
// Generated using vProto(2025.07.20)        https://www.cgen.dev
// Author: Sergey V. Shchekoldin     Email: shchekoldin@gmail.com
// ==============================================================

#ifndef HTTPREQ_H
#define HTTPREQ_H
#pragma once

#include <cstdint>
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
    template<class... Args> explicit httpReq(Args ... args) : httpReqResult(args ...) {}
    bool parse(const char * data, unsigned len);
    bool parse(const std::string & data) { return parse(data.data(), data.length()); }
    void reset();
    bool empty() const { return mainState.node == node_t::NO_STATE && prlState.empty(); }

private:
    enum class node_t
    {
        LOOP_1_0, // line_1
            ANY_1_0,
                    TEXT_1_0_0_0, 
                    TEXT_1_0_1_0, 
                    TEXT_1_0_2_0, 
                    TEXT_1_0_3_0, 
                    TEXT_1_0_4_0, 
                    TEXT_1_0_5_0, 
                    TEXT_1_0_6_0, 
                    TEXT_1_0_7_0, 
                    TEXT_1_0_8_0, 
                    TEXT_1_0_9_0, 
                    TEXT_1_0_10_0, 
                    BANG_1_0, GOTO_1_2, GOTO_1_3, 
            TEXT_2_0, TEXT_2_1, 
        LOOP_4_0, // line_4
            LABEL_4_0, LOOP_4_1,
                RANGE_5_0, STRING_5_1, RANGE_5_2, FUNC_5_3, TEXT_5_4, RANGE_5_5, TEXT_5_6, RANGE_5_7, TEXT_5_8, TEXT_5_9, RET_5_10, 
        LOOP_7_0, // line_7
            LABEL_7_0, LOOP_7_1,
                TEXT_8_0, RANGE_8_1, STRING_8_2, FUNC_8_3, RANGE_8_4, TEXT_8_5, TEXT_8_6, 
                ANY_9_0,
                    TEXT_9_0_0_0, 
                        BANG_9_0, RANGE_9_2, STRING_9_3, FUNC_9_4, TEXT_9_5, TEXT_9_6, 
                ANY_10_0,
                    TEXT_10_0_0_0, 
                        BANG_10_0, RANGE_10_2, UINT_10_3, FUNC_10_4, TEXT_10_5, TEXT_10_6, 
                RANGE_11_0, RANGE_11_1, TEXT_11_2, TEXT_11_3, 
                TEXT_12_0, TEXT_12_1, CASES_12_2,
                    FUNC_13_0, DATA_13_1, FUNC_13_2, RET_13_3, 
                    RET_14_0, 
                 // catch:
                RANGE_15_0, TEXT_15_1, TEXT_15_2, 
        NO_STATE
    };
    struct state_t
    {
        const char * data = nullptr;
        const char * end = nullptr;
        uint64_t consumed = 0;
        node_t node = node_t::LOOP_1_0;
        unsigned retStackCount = 0;
        node_t retStack[2];

        unsigned remainDataLen() const { return (unsigned)(end - data); }
        const char * name() const;
    };
    state_t mainState;
    std::vector<state_t> prlState;

    void parse(state_t & state);
    bool loop_1_0(state_t & state);
    bool any_1_0(state_t & state);
    bool text_1_0_0_0(state_t & state);
    bool text_1_0_1_0(state_t & state);
    bool text_1_0_2_0(state_t & state);
    bool text_1_0_3_0(state_t & state);
    bool text_1_0_4_0(state_t & state);
    bool text_1_0_5_0(state_t & state);
    bool text_1_0_6_0(state_t & state);
    bool text_1_0_7_0(state_t & state);
    bool text_1_0_8_0(state_t & state);
    bool text_1_0_9_0(state_t & state);
    bool text_1_0_10_0(state_t & state);
    bool bang_1_0(state_t & state);
    bool goto_1_2(state_t & state);
    bool goto_1_3(state_t & state);
    bool text_2_0(state_t & state);
    bool text_2_1(state_t & state);
    bool loop_4_0(state_t & state);
    bool label_4_0(state_t & state);
    bool loop_4_1(state_t & state);
    bool range_5_0(state_t & state);
    bool string_5_1(state_t & state);
    void _string_5_1(const char * data, unsigned len, uint64_t consumed);
    bool range_5_2(state_t & state);
    bool func_5_3(state_t & state);
    bool _func_5_3();
    bool text_5_4(state_t & state);
    bool range_5_5(state_t & state);
    bool text_5_6(state_t & state);
    bool range_5_7(state_t & state);
    bool text_5_8(state_t & state);
    bool text_5_9(state_t & state);
    bool ret_5_10(state_t & state);
    bool loop_7_0(state_t & state);
    bool label_7_0(state_t & state);
    bool loop_7_1(state_t & state);
    bool text_8_0(state_t & state, bool isCaseCall);
    bool range_8_1(state_t & state);
    bool string_8_2(state_t & state);
    void _string_8_2(const char * data, unsigned len, uint64_t consumed);
    bool func_8_3(state_t & state);
    bool _func_8_3();
    bool range_8_4(state_t & state);
    bool text_8_5(state_t & state);
    bool text_8_6(state_t & state);
    bool any_9_0(state_t & state);
    bool text_9_0_0_0(state_t & state);
    bool bang_9_0(state_t & state);
    bool range_9_2(state_t & state);
    bool string_9_3(state_t & state);
    void _string_9_3(const char * data, unsigned len, uint64_t consumed);
    bool func_9_4(state_t & state);
    bool _func_9_4();
    bool text_9_5(state_t & state);
    bool text_9_6(state_t & state);
    bool any_10_0(state_t & state);
    bool text_10_0_0_0(state_t & state);
    bool bang_10_0(state_t & state);
    bool range_10_2(state_t & state);
    bool uint_10_3(state_t & state);
    void _uint_10_3(const char * data, unsigned len, uint64_t consumed);
    bool func_10_4(state_t & state);
    bool _func_10_4();
    bool text_10_5(state_t & state);
    bool text_10_6(state_t & state);
    bool range_11_0(state_t & state);
    bool range_11_1(state_t & state);
    bool text_11_2(state_t & state);
    bool text_11_3(state_t & state);
    bool text_12_0(state_t & state);
    bool text_12_1(state_t & state);
    bool cases_12_2(state_t & state);
    bool func_13_0(state_t & state);
    bool _func_13_0();
    bool data_13_1(state_t & state);
    bool func_13_2(state_t & state);
    bool _func_13_2();
    bool ret_13_3(state_t & state);
    bool ret_14_0(state_t & state);
    bool range_15_0(state_t & state);
    bool text_15_1(state_t & state);
    bool text_15_2(state_t & state);
};
#endif
