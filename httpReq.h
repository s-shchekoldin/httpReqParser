// ==============================================================
// Generated using https://www.vsyn.ru/
// Author: Sergey V. Shchekoldin     Email: shchekoldin@gmail.com
// ==============================================================

#ifndef HTTPREQ_H
#define HTTPREQ_H
#pragma once

#include <string>
#include <vector>
#include <cstdint>

struct httpReqResult
{
    std::string host;
    std::string type;
    std::string url;
    uint64_t contentLength = 0;
    // Don't forget to declare:
    void payload(__attribute__((unused)) const char * data, __attribute__((unused)) unsigned len, __attribute__((unused)) bool isFirst, __attribute__((unused)) bool isLast);
};

struct httpReq : httpReqResult
{
    bool parse(const char * data, unsigned len);
    bool parse(const std::string & data) { return parse(data.c_str(), data.length()); }
    void reset();
    bool empty() const { return mainState.node == node_t::NO_STATE && prlState.empty(); }

private:
    enum class node_t
    {
        LOOP_1_0, // line_1
            LABEL_1_0, LOOP_1_1,
                ANY_2_0,
                    TEXT_2_0_0_0, 
                    TEXT_2_0_1_0, 
                    TEXT_2_0_2_0, 
                    TEXT_2_0_3_0, 
                    TEXT_2_0_4_0, 
                    TEXT_2_0_5_0, 
                    TEXT_2_0_6_0, 
                    TEXT_2_0_7_0, 
                    TEXT_2_0_8_0, 
                    TEXT_2_0_9_0, 
                    TEXT_2_0_10_0, 
                        BANG_2_0, GOTO_2_2, GOTO_2_3, 
                TEXT_3_0, TEXT_3_1, 
        LOOP_5_0, // line_5
            LABEL_5_0, LOOP_5_1,
                RANGE_6_0, STRING_6_1, RANGE_6_2, FUNC_6_3, TEXT_6_4, RANGE_6_5, TEXT_6_6, RANGE_6_7, TEXT_6_8, TEXT_6_9, RET_6_10, 
        LOOP_8_0, // line_8
            LABEL_8_0, LOOP_8_1,
                TEXT_9_0, RANGE_9_1, STRING_9_2, FUNC_9_3, RANGE_9_4, TEXT_9_5, TEXT_9_6, 
                ANY_10_0,
                    TEXT_10_0_0_0, 
                        BANG_10_0, RANGE_10_2, STRING_10_3, FUNC_10_4, TEXT_10_5, TEXT_10_6, 
                ANY_11_0,
                    TEXT_11_0_0_0, 
                        BANG_11_0, RANGE_11_2, UINT_11_3, FUNC_11_4, TEXT_11_5, TEXT_11_6, 
                RANGE_12_0, RANGE_12_1, TEXT_12_2, TEXT_12_3, 
                TEXT_13_0, TEXT_13_1, FUNC_13_2, CASES_13_3,
                    FUNC_14_0, DATA_14_1, FUNC_14_2, RET_14_3, 
                    RET_15_0, 
                 // catch:
                RANGE_16_0, TEXT_16_1, TEXT_16_2, 
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
    std::vector<state_t> prlState;

    void parse(state_t & state);
    bool loop_1_0(state_t & state);
    bool label_1_0(state_t & state);
    bool loop_1_1(state_t & state);
    bool any_2_0(state_t & state);
    bool text_2_0_0_0(state_t & state);
    bool text_2_0_1_0(state_t & state);
    bool text_2_0_2_0(state_t & state);
    bool text_2_0_3_0(state_t & state);
    bool text_2_0_4_0(state_t & state);
    bool text_2_0_5_0(state_t & state);
    bool text_2_0_6_0(state_t & state);
    bool text_2_0_7_0(state_t & state);
    bool text_2_0_8_0(state_t & state);
    bool text_2_0_9_0(state_t & state);
    bool text_2_0_10_0(state_t & state);
    bool bang_2_0(state_t & state);
    bool goto_2_2(state_t & state);
    bool goto_2_3(state_t & state);
    bool text_3_0(state_t & state);
    bool text_3_1(state_t & state);
    bool loop_5_0(state_t & state);
    bool label_5_0(state_t & state);
    bool loop_5_1(state_t & state);
    bool range_6_0(state_t & state);
    bool string_6_1(state_t & state);
    void _string_6_1(const char * data, unsigned len, bool isFirst);
    bool range_6_2(state_t & state);
    bool func_6_3(state_t & state);
    bool _func_6_3();
    bool text_6_4(state_t & state);
    bool range_6_5(state_t & state);
    bool text_6_6(state_t & state);
    bool range_6_7(state_t & state);
    bool text_6_8(state_t & state);
    bool text_6_9(state_t & state);
    bool ret_6_10(state_t & state);
    bool loop_8_0(state_t & state);
    bool label_8_0(state_t & state);
    bool loop_8_1(state_t & state);
    bool text_9_0(state_t & state, bool isCaseCall);
    bool range_9_1(state_t & state);
    bool string_9_2(state_t & state);
    void _string_9_2(const char * data, unsigned len, bool isFirst);
    bool func_9_3(state_t & state);
    bool _func_9_3();
    bool range_9_4(state_t & state);
    bool text_9_5(state_t & state);
    bool text_9_6(state_t & state);
    bool any_10_0(state_t & state);
    bool text_10_0_0_0(state_t & state);
    bool bang_10_0(state_t & state);
    bool range_10_2(state_t & state);
    bool string_10_3(state_t & state);
    void _string_10_3(const char * data, unsigned len, bool isFirst);
    bool func_10_4(state_t & state);
    bool _func_10_4();
    bool text_10_5(state_t & state);
    bool text_10_6(state_t & state);
    bool any_11_0(state_t & state);
    bool text_11_0_0_0(state_t & state);
    bool bang_11_0(state_t & state);
    bool range_11_2(state_t & state);
    bool uint_11_3(state_t & state);
    void _uint_11_3(const char * data, unsigned len, bool isFirst);
    bool func_11_4(state_t & state);
    bool _func_11_4();
    bool text_11_5(state_t & state);
    bool text_11_6(state_t & state);
    bool range_12_0(state_t & state);
    bool range_12_1(state_t & state);
    bool text_12_2(state_t & state);
    bool text_12_3(state_t & state);
    bool text_13_0(state_t & state);
    bool text_13_1(state_t & state);
    bool func_13_2(state_t & state);
    bool _func_13_2();
    bool cases_13_3(state_t & state);
    bool func_14_0(state_t & state);
    bool _func_14_0();
    bool data_14_1(state_t & state);
    bool func_14_2(state_t & state);
    bool _func_14_2();
    bool ret_14_3(state_t & state);
    bool ret_15_0(state_t & state);
    bool range_16_0(state_t & state);
    bool text_16_1(state_t & state);
    bool text_16_2(state_t & state);
};
#endif
