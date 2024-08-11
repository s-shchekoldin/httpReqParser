// ==============================================================
// Date: 2024-08-11 17:24:14 GMT
// Generated using vProto(2024.08.11)         https://www.vsyn.ru
// Author: Sergey V. Shchekoldin     Email: shchekoldin@gmail.com
// ==============================================================

#ifndef PERFHTTPREQ_H
#define PERFHTTPREQ_H
#pragma once

#include <string>
#include <vector>
#include <cstdint>

struct perfHttpReqResult
{
    std::string host;
    std::string url;
    uint64_t content_length = 0;

    // Don't forget to declare:
    void payload(__attribute__((unused)) const char * data, __attribute__((unused)) unsigned len, __attribute__((unused)) bool isFirst, __attribute__((unused)) bool isLast);
};

struct perfHttpReq : perfHttpReqResult
{
    bool parse(const char * data, unsigned len);
    bool parse(const std::string & data) { return parse(data.data(), data.length()); }
    void reset();
    bool empty() const { return mainState.node == node_t::NO_STATE; }

private:
    enum class node_t
    {
        LOOP_1_0, // line_1
            TEXT_1_0, GOTO_1_1, GOTO_1_2, 
            TEXT_2_0, GOTO_2_1, GOTO_2_2, 
            TEXT_3_0, CASES_3_1,
                TEXT_4_0, GOTO_4_1, GOTO_4_2, 
                TEXT_5_0, GOTO_5_1, GOTO_5_2, 
                TEXT_6_0, GOTO_6_1, GOTO_6_2, 
            TEXT_7_0, GOTO_7_1, GOTO_7_2, 
            TEXT_8_0, GOTO_8_1, GOTO_8_2, 
            TEXT_9_0, GOTO_9_1, GOTO_9_2, 
            TEXT_10_0, GOTO_10_1, GOTO_10_2, 
            TEXT_11_0, GOTO_11_1, GOTO_11_2, 
            TEXT_12_0, GOTO_12_1, GOTO_12_2, 
            TEXT_13_0, TEXT_13_1, 
        LOOP_15_0, // line_15
            LABEL_15_0, RANGE_15_1, STRING_15_2, RANGE_15_3, TEXT_15_4, RANGE_15_5, TEXT_15_6, RANGE_15_7, TEXT_15_8, TEXT_15_9, RET_15_10, 
        LOOP_17_0, // line_17
            LABEL_17_0, LOOP_17_1,
                TEXT_18_0, RANGE_18_1, STRING_18_2, TEXT_18_3, TEXT_18_4, 
                TEXT_19_0, RANGE_19_1, UINT_19_2, TEXT_19_3, TEXT_19_4, 
                RANGE_20_0, RANGE_20_1, TEXT_20_2, TEXT_20_3, 
                TEXT_21_0, TEXT_21_1, CASES_21_2,
                    FUNC_22_0, DATA_22_1, FUNC_22_2, RET_22_3, 
                    RET_23_0, 
                 // catch:
                RANGE_24_0, TEXT_24_1, TEXT_24_2, 
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

    void parse(state_t & state);
    bool loop_1_0(state_t & state);
    bool text_1_0(state_t & state, bool isCaseCall);
    bool goto_1_1(state_t & state);
    bool goto_1_2(state_t & state);
    bool text_2_0(state_t & state, bool isCaseCall);
    bool goto_2_1(state_t & state);
    bool goto_2_2(state_t & state);
    bool text_3_0(state_t & state);
    bool cases_3_1(state_t & state);
    bool text_4_0(state_t & state, bool isCaseCall);
    bool goto_4_1(state_t & state);
    bool goto_4_2(state_t & state);
    bool text_5_0(state_t & state, bool isCaseCall);
    bool goto_5_1(state_t & state);
    bool goto_5_2(state_t & state);
    bool text_6_0(state_t & state, bool isCaseCall);
    bool goto_6_1(state_t & state);
    bool goto_6_2(state_t & state);
    bool text_7_0(state_t & state, bool isCaseCall);
    bool goto_7_1(state_t & state);
    bool goto_7_2(state_t & state);
    bool text_8_0(state_t & state, bool isCaseCall);
    bool goto_8_1(state_t & state);
    bool goto_8_2(state_t & state);
    bool text_9_0(state_t & state, bool isCaseCall);
    bool goto_9_1(state_t & state);
    bool goto_9_2(state_t & state);
    bool text_10_0(state_t & state, bool isCaseCall);
    bool goto_10_1(state_t & state);
    bool goto_10_2(state_t & state);
    bool text_11_0(state_t & state, bool isCaseCall);
    bool goto_11_1(state_t & state);
    bool goto_11_2(state_t & state);
    bool text_12_0(state_t & state, bool isCaseCall);
    bool goto_12_1(state_t & state);
    bool goto_12_2(state_t & state);
    bool text_13_0(state_t & state);
    bool text_13_1(state_t & state);
    bool loop_15_0(state_t & state);
    bool label_15_0(state_t & state);
    bool range_15_1(state_t & state);
    bool string_15_2(state_t & state);
    void _string_15_2(const char * data, unsigned len, uint64_t consumed);
    bool range_15_3(state_t & state);
    bool text_15_4(state_t & state);
    bool range_15_5(state_t & state);
    bool text_15_6(state_t & state);
    bool range_15_7(state_t & state);
    bool text_15_8(state_t & state);
    bool text_15_9(state_t & state);
    bool ret_15_10(state_t & state);
    bool loop_17_0(state_t & state);
    bool label_17_0(state_t & state);
    bool loop_17_1(state_t & state);
    bool text_18_0(state_t & state, bool isCaseCall);
    bool range_18_1(state_t & state);
    bool string_18_2(state_t & state);
    void _string_18_2(const char * data, unsigned len, uint64_t consumed);
    bool text_18_3(state_t & state);
    bool text_18_4(state_t & state);
    bool text_19_0(state_t & state, bool isCaseCall);
    bool range_19_1(state_t & state);
    bool uint_19_2(state_t & state);
    void _uint_19_2(const char * data, unsigned len, uint64_t consumed);
    bool text_19_3(state_t & state);
    bool text_19_4(state_t & state);
    bool range_20_0(state_t & state);
    bool range_20_1(state_t & state);
    bool text_20_2(state_t & state);
    bool text_20_3(state_t & state);
    bool text_21_0(state_t & state);
    bool text_21_1(state_t & state);
    bool cases_21_2(state_t & state);
    bool func_22_0(state_t & state);
    bool _func_22_0();
    bool data_22_1(state_t & state);
    bool func_22_2(state_t & state);
    bool _func_22_2();
    bool ret_22_3(state_t & state);
    bool ret_23_0(state_t & state);
    bool range_24_0(state_t & state);
    bool text_24_1(state_t & state);
    bool text_24_2(state_t & state);
};
#endif
