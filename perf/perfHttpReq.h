// ==============================================================
// Date: 2025-11-16 07:23:23 GMT
// Generated using vProto(2025.11.16)        https://www.cgen.dev
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
    template<class... Args> explicit perfHttpReq(Args ... args) : perfHttpReqResult(args ...) {}
    bool parse(const char * data, unsigned len);
    bool parse(const std::string & data) { return parse(data.data(), data.length()); }
    void reset();
    bool empty() const { return mainState.node == node_t::NO_STATE; }

private:
    enum class node_t
    {
        LOOP_1_0, // line_1
            TEXT_1_0, CALL_1_1, CALL_1_2,
            TEXT_2_0, CALL_2_1, CALL_2_2,
            TEXT_3_0, CASES_3_1,
                TEXT_4_0, CALL_4_1, CALL_4_2,
                TEXT_5_0, CALL_5_1, CALL_5_2,
                TEXT_6_0, CALL_6_1, CALL_6_2,
            TEXT_7_0, CALL_7_1, CALL_7_2,
            TEXT_8_0, CALL_8_1, CALL_8_2,
            TEXT_9_0, CALL_9_1, CALL_9_2,
            TEXT_10_0, CALL_10_1, CALL_10_2,
            TEXT_11_0, CALL_11_1, CALL_11_2,
            TEXT_12_0, CALL_12_1, CALL_12_2,
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
        std::array<node_t, 2> retStack;

        unsigned remainDataLen() const { return (unsigned)(end - data); }
        const char * name() const;
    };
    state_t mainState;

    void parse(state_t & state);
    bool loop_1_0(state_t & state) const;
    bool text_1_0(state_t & state, bool isCaseCall) const;
    bool call_1_1(state_t & state) const;
    bool call_1_2(state_t & state) const;
    bool text_2_0(state_t & state, bool isCaseCall) const;
    bool call_2_1(state_t & state) const;
    bool call_2_2(state_t & state) const;
    bool text_3_0(state_t & state) const;
    bool cases_3_1(state_t & state) const;
    bool text_4_0(state_t & state, bool isCaseCall) const;
    bool call_4_1(state_t & state) const;
    bool call_4_2(state_t & state) const;
    bool text_5_0(state_t & state, bool isCaseCall) const;
    bool call_5_1(state_t & state) const;
    bool call_5_2(state_t & state) const;
    bool text_6_0(state_t & state, bool isCaseCall) const;
    bool call_6_1(state_t & state) const;
    bool call_6_2(state_t & state) const;
    bool text_7_0(state_t & state, bool isCaseCall) const;
    bool call_7_1(state_t & state) const;
    bool call_7_2(state_t & state) const;
    bool text_8_0(state_t & state, bool isCaseCall) const;
    bool call_8_1(state_t & state) const;
    bool call_8_2(state_t & state) const;
    bool text_9_0(state_t & state, bool isCaseCall) const;
    bool call_9_1(state_t & state) const;
    bool call_9_2(state_t & state) const;
    bool text_10_0(state_t & state, bool isCaseCall) const;
    bool call_10_1(state_t & state) const;
    bool call_10_2(state_t & state) const;
    bool text_11_0(state_t & state, bool isCaseCall) const;
    bool call_11_1(state_t & state) const;
    bool call_11_2(state_t & state) const;
    bool text_12_0(state_t & state, bool isCaseCall) const;
    bool call_12_1(state_t & state) const;
    bool call_12_2(state_t & state) const;
    bool text_13_0(state_t & state) const;
    bool text_13_1(state_t & state) const;
    bool loop_15_0(state_t & state) const;
    bool label_15_0(state_t & state) const;
    bool range_15_1(state_t & state) const;
    bool string_15_2(state_t & state);
    void _string_15_2(const char * data, unsigned len, uint64_t consumed);
    bool range_15_3(state_t & state) const;
    bool text_15_4(state_t & state) const;
    bool range_15_5(state_t & state) const;
    bool text_15_6(state_t & state) const;
    bool range_15_7(state_t & state) const;
    bool text_15_8(state_t & state) const;
    bool text_15_9(state_t & state) const;
    bool ret_15_10(state_t & state) const;
    bool loop_17_0(state_t & state) const;
    bool label_17_0(state_t & state) const;
    bool loop_17_1(state_t & state) const;
    bool text_18_0(state_t & state, bool isCaseCall) const;
    bool range_18_1(state_t & state) const;
    bool string_18_2(state_t & state);
    void _string_18_2(const char * data, unsigned len, uint64_t consumed);
    bool text_18_3(state_t & state) const;
    bool text_18_4(state_t & state) const;
    bool text_19_0(state_t & state, bool isCaseCall) const;
    bool range_19_1(state_t & state) const;
    bool uint_19_2(state_t & state);
    void _uint_19_2(const char * data, unsigned len, uint64_t consumed);
    bool text_19_3(state_t & state) const;
    bool text_19_4(state_t & state) const;
    bool range_20_0(state_t & state) const;
    bool range_20_1(state_t & state) const;
    bool text_20_2(state_t & state) const;
    bool text_20_3(state_t & state) const;
    bool text_21_0(state_t & state) const;
    bool text_21_1(state_t & state) const;
    bool cases_21_2(state_t & state);
    bool func_22_0(state_t & state);
    bool _func_22_0();
    bool data_22_1(state_t & state);
    bool func_22_2(state_t & state);
    bool _func_22_2();
    bool ret_22_3(state_t & state) const;
    bool ret_23_0(state_t & state) const;
    bool range_24_0(state_t & state) const;
    bool text_24_1(state_t & state) const;
    bool text_24_2(state_t & state) const;
};
#endif
