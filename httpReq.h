// ==============================================================
// Date: 2025-09-22 18:01:21 GMT
// Generated using vProto(2025.09.22)        https://www.cgen.dev
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
                    BANG_1_0, CALL_1_2, CALL_1_3, RESET_1_4, 
        LOOP_3_0, // line_3
            LABEL_3_0, LOOP_3_1,
                RANGE_4_0, STRING_4_1, RANGE_4_2, FUNC_4_3, TEXT_4_4, RANGE_4_5, TEXT_4_6, RANGE_4_7, TEXT_4_8, TEXT_4_9, RET_4_10, 
        LOOP_6_0, // line_6
            LABEL_6_0, LOOP_6_1,
                TEXT_7_0, RANGE_7_1, STRING_7_2, FUNC_7_3, TEXT_7_4, TEXT_7_5, 
                ANY_8_0,
                    TEXT_8_0_0_0, 
                        BANG_8_0, RANGE_8_2, STRING_8_3, FUNC_8_4, TEXT_8_5, TEXT_8_6, 
                ANY_9_0,
                    TEXT_9_0_0_0, 
                        BANG_9_0, RANGE_9_2, UINT_9_3, FUNC_9_4, TEXT_9_5, TEXT_9_6, 
                RANGE_10_0, RANGE_10_1, TEXT_10_2, TEXT_10_3, 
                TEXT_11_0, TEXT_11_1, CASES_11_2,
                    IF_12_0, DATA_12_1, RET_12_2, 
                    RET_13_0, 
                 // catch:
                RANGE_14_0, TEXT_14_1, 
        NO_STATE
    };
    struct state_t
    {
        const char * data = nullptr;
        const char * end = nullptr;
        uint64_t consumed = 0;
        node_t node = node_t::LOOP_1_0;
        unsigned retStackCount = 0;
        std::array<node_t, 2> retStack;

        unsigned remainDataLen() const { return (unsigned)(end - data); }
        const char * name() const;
    };
    state_t mainState;
    std::vector<state_t> prlState;

    void parse(state_t & state);
    bool loop_1_0(state_t & state);
    bool any_1_0(state_t & state);
    bool text_1_0_0_0(state_t & state) const;
    bool text_1_0_1_0(state_t & state) const;
    bool text_1_0_2_0(state_t & state) const;
    bool text_1_0_3_0(state_t & state) const;
    bool text_1_0_4_0(state_t & state) const;
    bool text_1_0_5_0(state_t & state) const;
    bool text_1_0_6_0(state_t & state) const;
    bool text_1_0_7_0(state_t & state) const;
    bool text_1_0_8_0(state_t & state) const;
    bool text_1_0_9_0(state_t & state) const;
    bool text_1_0_10_0(state_t & state) const;
    bool bang_1_0(state_t & state);
    bool call_1_2(state_t & state) const;
    bool call_1_3(state_t & state) const;
    bool reset_1_4(state_t & state);
    bool loop_3_0(state_t & state) const;
    bool label_3_0(state_t & state) const;
    bool loop_3_1(state_t & state) const;
    bool range_4_0(state_t & state) const;
    bool string_4_1(state_t & state);
    void _string_4_1(const char * data, unsigned len, uint64_t consumed);
    bool range_4_2(state_t & state) const;
    bool func_4_3(state_t & state);
    bool _func_4_3();
    bool text_4_4(state_t & state) const;
    bool range_4_5(state_t & state) const;
    bool text_4_6(state_t & state) const;
    bool range_4_7(state_t & state) const;
    bool text_4_8(state_t & state) const;
    bool text_4_9(state_t & state) const;
    bool ret_4_10(state_t & state) const;
    bool loop_6_0(state_t & state) const;
    bool label_6_0(state_t & state) const;
    bool loop_6_1(state_t & state);
    bool text_7_0(state_t & state, bool isCaseCall) const;
    bool range_7_1(state_t & state) const;
    bool string_7_2(state_t & state);
    void _string_7_2(const char * data, unsigned len, uint64_t consumed);
    bool func_7_3(state_t & state);
    bool _func_7_3();
    bool text_7_4(state_t & state) const;
    bool text_7_5(state_t & state) const;
    bool any_8_0(state_t & state);
    bool text_8_0_0_0(state_t & state) const;
    bool bang_8_0(state_t & state);
    bool range_8_2(state_t & state) const;
    bool string_8_3(state_t & state);
    void _string_8_3(const char * data, unsigned len, uint64_t consumed);
    bool func_8_4(state_t & state);
    bool _func_8_4();
    bool text_8_5(state_t & state) const;
    bool text_8_6(state_t & state) const;
    bool any_9_0(state_t & state);
    bool text_9_0_0_0(state_t & state) const;
    bool bang_9_0(state_t & state);
    bool range_9_2(state_t & state) const;
    bool uint_9_3(state_t & state);
    void _uint_9_3(const char * data, unsigned len, uint64_t consumed);
    bool func_9_4(state_t & state);
    bool _func_9_4();
    bool text_9_5(state_t & state) const;
    bool text_9_6(state_t & state) const;
    bool range_10_0(state_t & state) const;
    bool range_10_1(state_t & state) const;
    bool text_10_2(state_t & state) const;
    bool text_10_3(state_t & state) const;
    bool text_11_0(state_t & state) const;
    bool text_11_1(state_t & state) const;
    bool cases_11_2(state_t & state) const;
    bool if_12_0(state_t & state) const;
    bool data_12_1(state_t & state);
    bool ret_12_2(state_t & state) const;
    bool ret_13_0(state_t & state) const;
    bool range_14_0(state_t & state) const;
    bool text_14_1(state_t & state) const;
};
#endif
