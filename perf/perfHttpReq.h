// ==============================================================
// Generated using https://www.vsyn.ru/
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
    bool parse(const std::string & data) { return parse(data.c_str(), data.length()); }
    void reset();
    bool empty() const { return mainState.node == node_t::NO_STATE; }

private:
    enum class node_t
    {
        LOOP_1_0, // line_1
            LABEL_1_0, LOOP_1_1,
                TEXT_2_0, GOTO_2_1, GOTO_2_2, 
                TEXT_3_0, GOTO_3_1, GOTO_3_2, 
                TEXT_4_0, CASES_4_1,
                    TEXT_5_0, GOTO_5_1, GOTO_5_2, 
                    TEXT_6_0, GOTO_6_1, GOTO_6_2, 
                    TEXT_7_0, GOTO_7_1, GOTO_7_2, 
                TEXT_8_0, GOTO_8_1, GOTO_8_2, 
                TEXT_9_0, GOTO_9_1, GOTO_9_2, 
                TEXT_10_0, GOTO_10_1, GOTO_10_2, 
                TEXT_11_0, GOTO_11_1, GOTO_11_2, 
                TEXT_12_0, GOTO_12_1, GOTO_12_2, 
                TEXT_13_0, GOTO_13_1, GOTO_13_2, 
                TEXT_14_0, TEXT_14_1, 
        LOOP_16_0, // line_16
            LABEL_16_0, RANGE_16_1, STRING_16_2, RANGE_16_3, TEXT_16_4, RANGE_16_5, TEXT_16_6, RANGE_16_7, TEXT_16_8, TEXT_16_9, RET_16_10, 
        LOOP_18_0, // line_18
            LABEL_18_0, LOOP_18_1,
                TEXT_19_0, RANGE_19_1, STRING_19_2, TEXT_19_3, TEXT_19_4, 
                TEXT_20_0, RANGE_20_1, UINT_20_2, TEXT_20_3, TEXT_20_4, 
                RANGE_21_0, RANGE_21_1, TEXT_21_2, TEXT_21_3, 
                TEXT_22_0, TEXT_22_1, CASES_22_2,
                    FUNC_23_0, DATA_23_1, FUNC_23_2, RET_23_3, 
                    RET_24_0, 
                 // catch:
                RANGE_25_0, TEXT_25_1, TEXT_25_2, 
        NO_STATE
    };
    struct state_t
    {
        const char * data = nullptr;
        const char * end = nullptr;
        uint64_t consumed = 0;
        node_t node = node_t::LOOP_1_0;
        unsigned retStackCount = 0;
        node_t retStack[4];
        unsigned remainDataLen() const { return (unsigned)(end - data); }
        const char * name() const;
    };
    state_t mainState;

    void parse(state_t & state);
    bool loop_1_0(state_t & state);
    bool label_1_0(state_t & state);
    bool loop_1_1(state_t & state);
    bool text_2_0(state_t & state, bool isCaseCall);
    bool goto_2_1(state_t & state);
    bool goto_2_2(state_t & state);
    bool text_3_0(state_t & state, bool isCaseCall);
    bool goto_3_1(state_t & state);
    bool goto_3_2(state_t & state);
    bool text_4_0(state_t & state);
    bool cases_4_1(state_t & state);
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
    bool text_13_0(state_t & state, bool isCaseCall);
    bool goto_13_1(state_t & state);
    bool goto_13_2(state_t & state);
    bool text_14_0(state_t & state);
    bool text_14_1(state_t & state);
    bool loop_16_0(state_t & state);
    bool label_16_0(state_t & state);
    bool range_16_1(state_t & state);
    bool string_16_2(state_t & state);
    void _string_16_2(const char * data, unsigned len, bool isFirst);
    bool range_16_3(state_t & state);
    bool text_16_4(state_t & state);
    bool range_16_5(state_t & state);
    bool text_16_6(state_t & state);
    bool range_16_7(state_t & state);
    bool text_16_8(state_t & state);
    bool text_16_9(state_t & state);
    bool ret_16_10(state_t & state);
    bool loop_18_0(state_t & state);
    bool label_18_0(state_t & state);
    bool loop_18_1(state_t & state);
    bool text_19_0(state_t & state, bool isCaseCall);
    bool range_19_1(state_t & state);
    bool string_19_2(state_t & state);
    void _string_19_2(const char * data, unsigned len, bool isFirst);
    bool text_19_3(state_t & state);
    bool text_19_4(state_t & state);
    bool text_20_0(state_t & state, bool isCaseCall);
    bool range_20_1(state_t & state);
    bool uint_20_2(state_t & state);
    void _uint_20_2(const char * data, unsigned len, bool isFirst);
    bool text_20_3(state_t & state);
    bool text_20_4(state_t & state);
    bool range_21_0(state_t & state);
    bool range_21_1(state_t & state);
    bool text_21_2(state_t & state);
    bool text_21_3(state_t & state);
    bool text_22_0(state_t & state);
    bool text_22_1(state_t & state);
    bool cases_22_2(state_t & state);
    bool func_23_0(state_t & state);
    bool _func_23_0();
    bool data_23_1(state_t & state);
    bool func_23_2(state_t & state);
    bool _func_23_2();
    bool ret_23_3(state_t & state);
    bool ret_24_0(state_t & state);
    bool range_25_0(state_t & state);
    bool text_25_1(state_t & state);
    bool text_25_2(state_t & state);
};
#endif
