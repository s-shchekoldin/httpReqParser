// ==============================================================
// Date: 2025-09-04 06:13:49 GMT
// Generated using vProto(2025.09.04)        https://www.cgen.dev
// Author: Sergey V. Shchekoldin     Email: shchekoldin@gmail.com
// autoSSE: 1 cpp98: 0 (SSE4.2: 0 AVX2: 1 SSE2: 1)
// ==============================================================

// To enable AVX2 use: -mavx2
// To enable SSE2 use: -msse2
// Or: -march=native (may break compatibility)
#include "perfHttpReq.h"
#if defined(__SSE4_2__) || defined(__AVX2__)
#include <immintrin.h>
#endif
#if defined(__SSE2__)
#include <emmintrin.h>
#endif

#if defined(_MSC_VER)
#include <intrin.h>
inline unsigned __ctz32(uint32_t x) { return _tzcnt_u32(x); }
#else
inline unsigned __ctz32(uint32_t x) { return __builtin_ctz(x); }
#endif

inline void perfHttpReq::parse(state_t & state)
{
    while(true)
    {
#ifdef DEBUG_MODE
        printf("State%s: %s data: [%x, %x, %x, %x, %x]=%.*s\n", &state == &mainState ? "" : "*", state.name(),
            uint8_t(&state.data[0] < state.end ? state.data[0] : 0),
            uint8_t(&state.data[1] < state.end ? state.data[1] : 0),
            uint8_t(&state.data[2] < state.end ? state.data[2] : 0),
            uint8_t(&state.data[3] < state.end ? state.data[3] : 0),
            uint8_t(&state.data[4] < state.end ? state.data[4] : 0),
            10, state.data);
#endif
        node_t n = state.node;
        const char * d = state.data;
        switch(state.node)
        {
            case node_t::LOOP_1_0: loop_1_0(state); break;
            case node_t::TEXT_1_0: if (!text_1_0(state, false) || state.node != node_t::GOTO_1_1) break; [[fallthrough]];
            case node_t::GOTO_1_1: if (!goto_1_1(state) || state.node != node_t::GOTO_1_2) break; [[fallthrough]];
            case node_t::GOTO_1_2: goto_1_2(state); break;
            case node_t::TEXT_2_0: if (!text_2_0(state, false) || state.node != node_t::GOTO_2_1) break; [[fallthrough]];
            case node_t::GOTO_2_1: if (!goto_2_1(state) || state.node != node_t::GOTO_2_2) break; [[fallthrough]];
            case node_t::GOTO_2_2: goto_2_2(state); break;
            case node_t::TEXT_3_0: if (!text_3_0(state) || state.node != node_t::CASES_3_1) break; [[fallthrough]];
            case node_t::CASES_3_1: cases_3_1(state); break;
            case node_t::TEXT_4_0: if (!text_4_0(state, false) || state.node != node_t::GOTO_4_1) break; [[fallthrough]];
            case node_t::GOTO_4_1: if (!goto_4_1(state) || state.node != node_t::GOTO_4_2) break; [[fallthrough]];
            case node_t::GOTO_4_2: goto_4_2(state); break;
            case node_t::TEXT_5_0: if (!text_5_0(state, false) || state.node != node_t::GOTO_5_1) break; [[fallthrough]];
            case node_t::GOTO_5_1: if (!goto_5_1(state) || state.node != node_t::GOTO_5_2) break; [[fallthrough]];
            case node_t::GOTO_5_2: goto_5_2(state); break;
            case node_t::TEXT_6_0: if (!text_6_0(state, false) || state.node != node_t::GOTO_6_1) break; [[fallthrough]];
            case node_t::GOTO_6_1: if (!goto_6_1(state) || state.node != node_t::GOTO_6_2) break; [[fallthrough]];
            case node_t::GOTO_6_2: goto_6_2(state); break;
            case node_t::TEXT_7_0: if (!text_7_0(state, false) || state.node != node_t::GOTO_7_1) break; [[fallthrough]];
            case node_t::GOTO_7_1: if (!goto_7_1(state) || state.node != node_t::GOTO_7_2) break; [[fallthrough]];
            case node_t::GOTO_7_2: goto_7_2(state); break;
            case node_t::TEXT_8_0: if (!text_8_0(state, false) || state.node != node_t::GOTO_8_1) break; [[fallthrough]];
            case node_t::GOTO_8_1: if (!goto_8_1(state) || state.node != node_t::GOTO_8_2) break; [[fallthrough]];
            case node_t::GOTO_8_2: goto_8_2(state); break;
            case node_t::TEXT_9_0: if (!text_9_0(state, false) || state.node != node_t::GOTO_9_1) break; [[fallthrough]];
            case node_t::GOTO_9_1: if (!goto_9_1(state) || state.node != node_t::GOTO_9_2) break; [[fallthrough]];
            case node_t::GOTO_9_2: goto_9_2(state); break;
            case node_t::TEXT_10_0: if (!text_10_0(state, false) || state.node != node_t::GOTO_10_1) break; [[fallthrough]];
            case node_t::GOTO_10_1: if (!goto_10_1(state) || state.node != node_t::GOTO_10_2) break; [[fallthrough]];
            case node_t::GOTO_10_2: goto_10_2(state); break;
            case node_t::TEXT_11_0: if (!text_11_0(state, false) || state.node != node_t::GOTO_11_1) break; [[fallthrough]];
            case node_t::GOTO_11_1: if (!goto_11_1(state) || state.node != node_t::GOTO_11_2) break; [[fallthrough]];
            case node_t::GOTO_11_2: goto_11_2(state); break;
            case node_t::TEXT_12_0: if (!text_12_0(state, false) || state.node != node_t::GOTO_12_1) break; [[fallthrough]];
            case node_t::GOTO_12_1: if (!goto_12_1(state) || state.node != node_t::GOTO_12_2) break; [[fallthrough]];
            case node_t::GOTO_12_2: goto_12_2(state); break;
            case node_t::TEXT_13_0: if (!text_13_0(state) || state.node != node_t::TEXT_13_1) break; [[fallthrough]];
            case node_t::TEXT_13_1: text_13_1(state); break;
            case node_t::LOOP_15_0: loop_15_0(state); break;
            case node_t::LABEL_15_0: if (!label_15_0(state) || state.node != node_t::RANGE_15_1) break; [[fallthrough]];
            case node_t::RANGE_15_1: if (!range_15_1(state) || state.node != node_t::STRING_15_2) break; [[fallthrough]];
            case node_t::STRING_15_2: if (!string_15_2(state) || state.node != node_t::RANGE_15_3) break; [[fallthrough]];
            case node_t::RANGE_15_3: if (!range_15_3(state) || state.node != node_t::TEXT_15_4) break; [[fallthrough]];
            case node_t::TEXT_15_4: if (!text_15_4(state) || state.node != node_t::RANGE_15_5) break; [[fallthrough]];
            case node_t::RANGE_15_5: if (!range_15_5(state) || state.node != node_t::TEXT_15_6) break; [[fallthrough]];
            case node_t::TEXT_15_6: if (!text_15_6(state) || state.node != node_t::RANGE_15_7) break; [[fallthrough]];
            case node_t::RANGE_15_7: if (!range_15_7(state) || state.node != node_t::TEXT_15_8) break; [[fallthrough]];
            case node_t::TEXT_15_8: if (!text_15_8(state) || state.node != node_t::TEXT_15_9) break; [[fallthrough]];
            case node_t::TEXT_15_9: if (!text_15_9(state) || state.node != node_t::RET_15_10) break; [[fallthrough]];
            case node_t::RET_15_10: ret_15_10(state); break;
            case node_t::LOOP_17_0: loop_17_0(state); break;
            case node_t::LABEL_17_0: if (!label_17_0(state) || state.node != node_t::LOOP_17_1) break; [[fallthrough]];
            case node_t::LOOP_17_1: loop_17_1(state); break;
            case node_t::TEXT_18_0: if (!text_18_0(state, false) || state.node != node_t::RANGE_18_1) break; [[fallthrough]];
            case node_t::RANGE_18_1: if (!range_18_1(state) || state.node != node_t::STRING_18_2) break; [[fallthrough]];
            case node_t::STRING_18_2: if (!string_18_2(state) || state.node != node_t::TEXT_18_3) break; [[fallthrough]];
            case node_t::TEXT_18_3: if (!text_18_3(state) || state.node != node_t::TEXT_18_4) break; [[fallthrough]];
            case node_t::TEXT_18_4: text_18_4(state); break;
            case node_t::TEXT_19_0: if (!text_19_0(state, false) || state.node != node_t::RANGE_19_1) break; [[fallthrough]];
            case node_t::RANGE_19_1: if (!range_19_1(state) || state.node != node_t::UINT_19_2) break; [[fallthrough]];
            case node_t::UINT_19_2: if (!uint_19_2(state) || state.node != node_t::TEXT_19_3) break; [[fallthrough]];
            case node_t::TEXT_19_3: if (!text_19_3(state) || state.node != node_t::TEXT_19_4) break; [[fallthrough]];
            case node_t::TEXT_19_4: text_19_4(state); break;
            case node_t::RANGE_20_0: if (!range_20_0(state) || state.node != node_t::RANGE_20_1) break; [[fallthrough]];
            case node_t::RANGE_20_1: if (!range_20_1(state) || state.node != node_t::TEXT_20_2) break; [[fallthrough]];
            case node_t::TEXT_20_2: if (!text_20_2(state) || state.node != node_t::TEXT_20_3) break; [[fallthrough]];
            case node_t::TEXT_20_3: text_20_3(state); break;
            case node_t::TEXT_21_0: if (!text_21_0(state) || state.node != node_t::TEXT_21_1) break; [[fallthrough]];
            case node_t::TEXT_21_1: if (!text_21_1(state) || state.node != node_t::CASES_21_2) break; [[fallthrough]];
            case node_t::CASES_21_2: cases_21_2(state); break;
            case node_t::FUNC_22_0: if (!func_22_0(state) || state.node != node_t::DATA_22_1) break; [[fallthrough]];
            case node_t::DATA_22_1: if (!data_22_1(state) || state.node != node_t::FUNC_22_2) break; [[fallthrough]];
            case node_t::FUNC_22_2: if (!func_22_2(state) || state.node != node_t::RET_22_3) break; [[fallthrough]];
            case node_t::RET_22_3: ret_22_3(state); break;
            case node_t::RET_23_0: ret_23_0(state); break;
            case node_t::RANGE_24_0: if (!range_24_0(state) || state.node != node_t::TEXT_24_1) break; [[fallthrough]];
            case node_t::TEXT_24_1: if (!text_24_1(state) || state.node != node_t::TEXT_24_2) break; [[fallthrough]];
            case node_t::TEXT_24_2: text_24_2(state); break;
            case node_t::NO_STATE:
            default: return;
        }; // switch
        if (d == state.data && n == state.node) [[unlikely]]
            break;
    }
}

bool perfHttpReq::parse(const char * data, unsigned len)
{
    mainState.data = data;
    mainState.end = &data[len];
    parse(mainState);
    return mainState.node != node_t::NO_STATE;
}

inline bool perfHttpReq::loop_1_0(state_t & state)
{
    if (state.data == state.end)
        return true;
    if (text_1_0(state, true)) // case_1
        return true;
    if (text_2_0(state, true)) // case_2
        return true;
    if (text_3_0(state)) // case_3
        return true;
    if (text_7_0(state, true)) // case_4
        return true;
    if (text_8_0(state, true)) // case_5
        return true;
    if (text_9_0(state, true)) // case_6
        return true;
    if (text_10_0(state, true)) // case_7
        return true;
    if (text_11_0(state, true)) // case_8
        return true;
    if (text_12_0(state, true)) // case_9
        return true;
    if (text_13_0(state)) // case_10
        return true;
    state.node = node_t::NO_STATE;
    return true;
}

inline bool perfHttpReq::text_1_0(state_t & state, bool isCaseCall)
{
    const static uint8_t text[] = { 0x67, 0x65, 0x74}; // get
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::NO_STATE;
            bool ret = isCaseCall && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::GOTO_1_1;
            return true;
        }
    }
    state.node = node_t::TEXT_1_0;
    return true;
}

inline bool perfHttpReq::goto_1_1(state_t & state)
{
    state.node = node_t::LABEL_15_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::GOTO_1_2;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::GOTO_1_2;
    }
    return true;
}

inline bool perfHttpReq::goto_1_2(state_t & state)
{
    state.node = node_t::LABEL_17_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::LOOP_1_0;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::LOOP_1_0;
    }
    return true;
}

inline bool perfHttpReq::text_2_0(state_t & state, bool isCaseCall)
{
    const static uint8_t text[] = { 0x68, 0x65, 0x61, 0x64}; // head
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::NO_STATE;
            bool ret = isCaseCall && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::GOTO_2_1;
            return true;
        }
    }
    state.node = node_t::TEXT_2_0;
    return true;
}

inline bool perfHttpReq::goto_2_1(state_t & state)
{
    state.node = node_t::LABEL_15_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::GOTO_2_2;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::GOTO_2_2;
    }
    return true;
}

inline bool perfHttpReq::goto_2_2(state_t & state)
{
    state.node = node_t::LABEL_17_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::LOOP_1_0;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::LOOP_1_0;
    }
    return true;
}

inline bool perfHttpReq::text_3_0(state_t & state)
{
    if(state.data < state.end)
    {
        if (((uint8_t(0x50) ^ uint8_t(state.data[0]))) & 0xDF)
        {
            state.node = node_t::NO_STATE;
            return false;
        } else {
            state.data++;
            state.node = node_t::CASES_3_1;
            return true;
        }
    }
    state.node = node_t::TEXT_3_0;
    return true;
}

inline bool perfHttpReq::cases_3_1(state_t & state)
{
    if (state.data == state.end)
        return true;
    if (text_4_0(state, true)) // case_1
        return true;
    if (text_5_0(state, true)) // case_2
        return true;
    if (text_6_0(state, true)) // case_3
        return true;
    state.node = node_t::NO_STATE;
    return true;
}

inline bool perfHttpReq::text_4_0(state_t & state, bool isCaseCall)
{
    const static uint8_t text[] = { 0x6f, 0x73, 0x74}; // ost
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::NO_STATE;
            bool ret = isCaseCall && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::GOTO_4_1;
            return true;
        }
    }
    state.node = node_t::TEXT_4_0;
    return true;
}

inline bool perfHttpReq::goto_4_1(state_t & state)
{
    state.node = node_t::LABEL_15_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::GOTO_4_2;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::GOTO_4_2;
    }
    return true;
}

inline bool perfHttpReq::goto_4_2(state_t & state)
{
    state.node = node_t::LABEL_17_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::LOOP_1_0;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::LOOP_1_0;
    }
    return true;
}

inline bool perfHttpReq::text_5_0(state_t & state, bool isCaseCall)
{
    const static uint8_t text[] = { 0x75, 0x74}; // ut
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::NO_STATE;
            bool ret = isCaseCall && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::GOTO_5_1;
            return true;
        }
    }
    state.node = node_t::TEXT_5_0;
    return true;
}

inline bool perfHttpReq::goto_5_1(state_t & state)
{
    state.node = node_t::LABEL_15_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::GOTO_5_2;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::GOTO_5_2;
    }
    return true;
}

inline bool perfHttpReq::goto_5_2(state_t & state)
{
    state.node = node_t::LABEL_17_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::LOOP_1_0;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::LOOP_1_0;
    }
    return true;
}

inline bool perfHttpReq::text_6_0(state_t & state, bool isCaseCall)
{
    const static uint8_t text[] = { 0x61, 0x74, 0x63, 0x68}; // atch
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::NO_STATE;
            bool ret = isCaseCall && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::GOTO_6_1;
            return true;
        }
    }
    state.node = node_t::TEXT_6_0;
    return true;
}

inline bool perfHttpReq::goto_6_1(state_t & state)
{
    state.node = node_t::LABEL_15_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::GOTO_6_2;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::GOTO_6_2;
    }
    return true;
}

inline bool perfHttpReq::goto_6_2(state_t & state)
{
    state.node = node_t::LABEL_17_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::LOOP_1_0;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::LOOP_1_0;
    }
    return true;
}

inline bool perfHttpReq::text_7_0(state_t & state, bool isCaseCall)
{
    const static uint8_t text[] = { 0x64, 0x65, 0x6c, 0x65, 0x74, 0x65}; // delete
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::NO_STATE;
            bool ret = isCaseCall && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::GOTO_7_1;
            return true;
        }
    }
    state.node = node_t::TEXT_7_0;
    return true;
}

inline bool perfHttpReq::goto_7_1(state_t & state)
{
    state.node = node_t::LABEL_15_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::GOTO_7_2;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::GOTO_7_2;
    }
    return true;
}

inline bool perfHttpReq::goto_7_2(state_t & state)
{
    state.node = node_t::LABEL_17_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::LOOP_1_0;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::LOOP_1_0;
    }
    return true;
}

inline bool perfHttpReq::text_8_0(state_t & state, bool isCaseCall)
{
    const static uint8_t text[] = { 0x6f, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x73}; // options
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::NO_STATE;
            bool ret = isCaseCall && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::GOTO_8_1;
            return true;
        }
    }
    state.node = node_t::TEXT_8_0;
    return true;
}

inline bool perfHttpReq::goto_8_1(state_t & state)
{
    state.node = node_t::LABEL_15_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::GOTO_8_2;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::GOTO_8_2;
    }
    return true;
}

inline bool perfHttpReq::goto_8_2(state_t & state)
{
    state.node = node_t::LABEL_17_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::LOOP_1_0;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::LOOP_1_0;
    }
    return true;
}

inline bool perfHttpReq::text_9_0(state_t & state, bool isCaseCall)
{
    const static uint8_t text[] = { 0x63, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74}; // connect
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::NO_STATE;
            bool ret = isCaseCall && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::GOTO_9_1;
            return true;
        }
    }
    state.node = node_t::TEXT_9_0;
    return true;
}

inline bool perfHttpReq::goto_9_1(state_t & state)
{
    state.node = node_t::LABEL_15_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::GOTO_9_2;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::GOTO_9_2;
    }
    return true;
}

inline bool perfHttpReq::goto_9_2(state_t & state)
{
    state.node = node_t::LABEL_17_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::LOOP_1_0;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::LOOP_1_0;
    }
    return true;
}

inline bool perfHttpReq::text_10_0(state_t & state, bool isCaseCall)
{
    const static uint8_t text[] = { 0x6c, 0x69, 0x6e, 0x6b}; // link
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::NO_STATE;
            bool ret = isCaseCall && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::GOTO_10_1;
            return true;
        }
    }
    state.node = node_t::TEXT_10_0;
    return true;
}

inline bool perfHttpReq::goto_10_1(state_t & state)
{
    state.node = node_t::LABEL_15_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::GOTO_10_2;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::GOTO_10_2;
    }
    return true;
}

inline bool perfHttpReq::goto_10_2(state_t & state)
{
    state.node = node_t::LABEL_17_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::LOOP_1_0;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::LOOP_1_0;
    }
    return true;
}

inline bool perfHttpReq::text_11_0(state_t & state, bool isCaseCall)
{
    const static uint8_t text[] = { 0x75, 0x6e, 0x6c, 0x69, 0x6e, 0x6b}; // unlink
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::NO_STATE;
            bool ret = isCaseCall && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::GOTO_11_1;
            return true;
        }
    }
    state.node = node_t::TEXT_11_0;
    return true;
}

inline bool perfHttpReq::goto_11_1(state_t & state)
{
    state.node = node_t::LABEL_15_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::GOTO_11_2;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::GOTO_11_2;
    }
    return true;
}

inline bool perfHttpReq::goto_11_2(state_t & state)
{
    state.node = node_t::LABEL_17_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::LOOP_1_0;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::LOOP_1_0;
    }
    return true;
}

inline bool perfHttpReq::text_12_0(state_t & state, bool isCaseCall)
{
    const static uint8_t text[] = { 0x74, 0x72, 0x61, 0x63, 0x65}; // trace
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::NO_STATE;
            bool ret = isCaseCall && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::GOTO_12_1;
            return true;
        }
    }
    state.node = node_t::TEXT_12_0;
    return true;
}

inline bool perfHttpReq::goto_12_1(state_t & state)
{
    state.node = node_t::LABEL_15_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::GOTO_12_2;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::GOTO_12_2;
    }
    return true;
}

inline bool perfHttpReq::goto_12_2(state_t & state)
{
    state.node = node_t::LABEL_17_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::LOOP_1_0;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::LOOP_1_0;
    }
    return true;
}

inline bool perfHttpReq::text_13_0(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_13_1;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_13_1;
            return true;
        }
    }
    state.node = node_t::TEXT_13_0;
    return true;
}

inline bool perfHttpReq::text_13_1(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            return false;
        } else {
            state.data++;
            state.node = node_t::LOOP_1_0;
            return true;
        }
    }
    state.node = node_t::TEXT_13_1;
    return true;
}

inline bool perfHttpReq::loop_15_0(state_t & state)
{
    return label_15_0(state);
}

inline bool perfHttpReq::label_15_0(state_t & state)
{
    state.node = node_t::RANGE_15_1;
    return true;
}

inline bool perfHttpReq::range_15_1(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0x9][0x20]
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
        {
            state.consumed += unsigned(state.data - beginData);
            state.node = (state.consumed >= 1) ? node_t::STRING_15_2 : node_t::NO_STATE;
            bool ret = (state.node == node_t::STRING_15_2);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = node_t::STRING_15_2;
        return true;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_15_1;
    return true;
}

void perfHttpReq::_string_15_2(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        perfHttpReqResult::url.clear();
    if ((perfHttpReqResult::url.length() + len) > 1024)
        len = 1024 - perfHttpReqResult::url.length();
    perfHttpReqResult::url.append(data, len);
}

inline bool perfHttpReq::string_15_2(state_t & state)
{
    const static bool exitSym[256] = {
        false, false, false, false, false, false, false, false, false,  true, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
         true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false}; // ^[0x9][0x20]
    const char * beginData = state.data;
    while(state.data < state.end) [[likely]]
    {
#if defined(__AVX2__)
        if(&state.data[32] <= state.end)
        {
            const __m256i d = _mm256_lddqu_si256((const __m256i *)state.data);
            __m256i m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0x9), d);
            m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0x20), d));
            uint32_t r = _mm256_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 32;
                continue;
            }
        }
#elif defined(__SSE2__)
        if(&state.data[16] <= state.end)
        {
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            __m128i m = _mm_cmpeq_epi8(_mm_set1_epi8(0x9), d);
            m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0x20), d));
            uint16_t r = _mm_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 16;
                continue;
            }
        }
#else
        if(&state.data[16] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        _string_15_2(beginData, unsigned(state.data - beginData), state.consumed);
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::RANGE_15_3;
            return true;
        } else {
            state.node = node_t::NO_STATE;
            return false;
        }
    }
    if (beginData < state.data)
        _string_15_2(beginData, unsigned(state.data - beginData), state.consumed);
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::STRING_15_2;
    return true;
}

inline bool perfHttpReq::range_15_3(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0x9][0x20]
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
        {
            state.consumed += unsigned(state.data - beginData);
            state.node = (state.consumed >= 1) ? node_t::TEXT_15_4 : node_t::NO_STATE;
            bool ret = (state.node == node_t::TEXT_15_4);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = node_t::TEXT_15_4;
        return true;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_15_3;
    return true;
}

inline bool perfHttpReq::text_15_4(state_t & state)
{
    const static uint8_t text[] = { 0x48, 0x54, 0x54, 0x50, 0x2f}; // http/
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::RANGE_15_5;
            return true;
        }
    }
    state.node = node_t::TEXT_15_4;
    return true;
}

inline bool perfHttpReq::range_15_5(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false, false, false, false, false, false, false, false, false, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0-9]
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
        {
            state.consumed += unsigned(state.data - beginData);
            state.node = (state.consumed >= 1) ? node_t::TEXT_15_6 : node_t::NO_STATE;
            bool ret = (state.node == node_t::TEXT_15_6);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = node_t::TEXT_15_6;
        return true;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_15_5;
    return true;
}

inline bool perfHttpReq::text_15_6(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x2E) != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            return false;
        } else {
            state.data++;
            state.node = node_t::RANGE_15_7;
            return true;
        }
    }
    state.node = node_t::TEXT_15_6;
    return true;
}

inline bool perfHttpReq::range_15_7(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false, false, false, false, false, false, false, false, false, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0-9]
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
        {
            state.consumed += unsigned(state.data - beginData);
            state.node = (state.consumed >= 1) ? node_t::TEXT_15_8 : node_t::NO_STATE;
            bool ret = (state.node == node_t::TEXT_15_8);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = node_t::TEXT_15_8;
        return true;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_15_7;
    return true;
}

inline bool perfHttpReq::text_15_8(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_15_9;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_15_9;
            return true;
        }
    }
    state.node = node_t::TEXT_15_8;
    return true;
}

inline bool perfHttpReq::text_15_9(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            return false;
        } else {
            state.data++;
            state.node = node_t::RET_15_10;
            return true;
        }
    }
    state.node = node_t::TEXT_15_9;
    return true;
}

inline bool perfHttpReq::ret_15_10(state_t & state)
{
    state.node = state.retStackCount ? state.retStack[--state.retStackCount] : node_t::NO_STATE;
    return state.node != node_t::NO_STATE;
}

inline bool perfHttpReq::loop_17_0(state_t & state)
{
    return label_17_0(state);
}

inline bool perfHttpReq::label_17_0(state_t & state)
{
    state.node = node_t::LOOP_17_1;
    return true;
}

inline bool perfHttpReq::loop_17_1(state_t & state)
{
    if (state.data == state.end)
        return true;
    if (text_18_0(state, true)) // case_1
        return true;
    if (text_19_0(state, true)) // case_2
        return true;
    if (range_20_0(state)) // case_3
        return true;
    if (text_21_0(state)) // case_4
        return true;
    state.node = node_t::RANGE_24_0;
    return true;
}

inline bool perfHttpReq::text_18_0(state_t & state, bool isCaseCall)
{
    const static uint8_t text[] = { 0x68, 0x6f, 0x73, 0x74, 0x3a}; // host:
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::RANGE_24_0;
            bool ret = isCaseCall && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::RANGE_18_1;
            return true;
        }
    }
    state.node = node_t::TEXT_18_0;
    return true;
}

inline bool perfHttpReq::range_18_1(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0x9][0x20]
    const char * beginData = state.data;
    while(state.data < state.end) [[likely]]
    {
#if defined(__AVX2__)
        if(&state.data[32] <= state.end)
        {
            const __m256i d = _mm256_lddqu_si256((const __m256i *)state.data);
            __m256i m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0x9), d);
            m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0x20), d));
            uint32_t r = ~_mm256_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 32;
                continue;
            }
        }
#elif defined(__SSE2__)
        if(&state.data[16] <= state.end)
        {
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            __m128i m = _mm_cmpeq_epi8(_mm_set1_epi8(0x9), d);
            m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0x20), d));
            uint16_t r = ~_mm_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 16;
                continue;
            }
        }
#else
        if(&state.data[16] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::STRING_18_2;
            return true;
        } else {
            state.node = node_t::RANGE_24_0;
            return false;
        }
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_18_1;
    return true;
}

void perfHttpReq::_string_18_2(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        perfHttpReqResult::host.clear();
    if ((perfHttpReqResult::host.length() + len) > 64)
        len = 64 - perfHttpReqResult::host.length();
    perfHttpReqResult::host.append(data, len);
}

inline bool perfHttpReq::string_18_2(state_t & state)
{
    const static bool exitSym[256] = {
        false, false, false, false, false, false, false, false, false, false,  true, false, false,  true, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false}; // ^[0xa][0xd]
    const char * beginData = state.data;
    while(state.data < state.end) [[likely]]
    {
#if defined(__AVX2__)
        if(&state.data[32] <= state.end)
        {
            const __m256i d = _mm256_lddqu_si256((const __m256i *)state.data);
            __m256i m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0xa), d);
            m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0xd), d));
            uint32_t r = _mm256_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 32;
                continue;
            }
        }
#elif defined(__SSE2__)
        if(&state.data[16] <= state.end)
        {
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            __m128i m = _mm_cmpeq_epi8(_mm_set1_epi8(0xa), d);
            m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0xd), d));
            uint16_t r = _mm_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 16;
                continue;
            }
        }
#else
        if(&state.data[16] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        _string_18_2(beginData, unsigned(state.data - beginData), state.consumed);
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::TEXT_18_3;
            return true;
        } else {
            state.node = node_t::RANGE_24_0;
            return false;
        }
    }
    if (beginData < state.data)
        _string_18_2(beginData, unsigned(state.data - beginData), state.consumed);
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::STRING_18_2;
    return true;
}

inline bool perfHttpReq::text_18_3(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_18_4;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_18_4;
            return true;
        }
    }
    state.node = node_t::TEXT_18_3;
    return true;
}

inline bool perfHttpReq::text_18_4(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_24_0;
            return false;
        } else {
            state.data++;
            state.node = node_t::LOOP_17_1;
            return true;
        }
    }
    state.node = node_t::TEXT_18_4;
    return true;
}

inline bool perfHttpReq::text_19_0(state_t & state, bool isCaseCall)
{
    const static uint8_t text[] = { 0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x6c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x3a}; // content-length:
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::RANGE_24_0;
            bool ret = isCaseCall && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::RANGE_19_1;
            return true;
        }
    }
    state.node = node_t::TEXT_19_0;
    return true;
}

inline bool perfHttpReq::range_19_1(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0x9][0x20]
    const char * beginData = state.data;
    while(state.data < state.end) [[likely]]
    {
#if defined(__AVX2__)
        if(&state.data[32] <= state.end)
        {
            const __m256i d = _mm256_lddqu_si256((const __m256i *)state.data);
            __m256i m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0x9), d);
            m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0x20), d));
            uint32_t r = ~_mm256_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 32;
                continue;
            }
        }
#elif defined(__SSE2__)
        if(&state.data[16] <= state.end)
        {
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            __m128i m = _mm_cmpeq_epi8(_mm_set1_epi8(0x9), d);
            m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0x20), d));
            uint16_t r = ~_mm_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 16;
                continue;
            }
        }
#else
        if(&state.data[16] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::UINT_19_2;
            return true;
        } else {
            state.node = node_t::RANGE_24_0;
            return false;
        }
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_19_1;
    return true;
}

void perfHttpReq::_uint_19_2(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        perfHttpReqResult::content_length = 0;
    for(const char * end = &data[len]; data < end; data++)
        perfHttpReqResult::content_length = perfHttpReqResult::content_length*10 + *data - '0';
}

inline bool perfHttpReq::uint_19_2(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false, false, false, false, false, false, false, false, false, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0-9]
    const char * beginData = state.data;
    while(state.data < state.end) [[likely]]
    {
        if(&state.data[16] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        _uint_19_2(beginData, unsigned(state.data - beginData), state.consumed);
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::TEXT_19_3;
            return true;
        } else {
            state.node = node_t::RANGE_24_0;
            return false;
        }
    }
    if (beginData < state.data)
        _uint_19_2(beginData, unsigned(state.data - beginData), state.consumed);
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::UINT_19_2;
    return true;
}

inline bool perfHttpReq::text_19_3(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_19_4;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_19_4;
            return true;
        }
    }
    state.node = node_t::TEXT_19_3;
    return true;
}

inline bool perfHttpReq::text_19_4(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_24_0;
            return false;
        } else {
            state.data++;
            state.node = node_t::LOOP_17_1;
            return true;
        }
    }
    state.node = node_t::TEXT_19_4;
    return true;
}

inline bool perfHttpReq::range_20_0(state_t & state)
{
    const static bool exitSym[256] = {
         true,  true,  true,  true,  true,  true,  true,  true,  true, false,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
        false,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true, 
         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true}; // [0x9][0x20]
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
        {
            state.consumed += unsigned(state.data - beginData);
            state.node = (state.consumed >= 1) ? node_t::RANGE_20_1 : node_t::RANGE_24_0;
            bool ret = (state.node == node_t::RANGE_20_1);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = node_t::RANGE_20_1;
        return true;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_20_0;
    return true;
}

inline bool perfHttpReq::range_20_1(state_t & state)
{
    const static bool exitSym[256] = {
        false, false, false, false, false, false, false, false, false, false,  true, false, false,  true, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false}; // ^[0xa][0xd]
    const char * beginData = state.data;
    while(state.data < state.end) [[likely]]
    {
        if(&state.data[16] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        state.consumed = 0;
        state.node = node_t::TEXT_20_2;
        return true;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_20_1;
    return true;
}

inline bool perfHttpReq::text_20_2(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_20_3;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_20_3;
            return true;
        }
    }
    state.node = node_t::TEXT_20_2;
    return true;
}

inline bool perfHttpReq::text_20_3(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_24_0;
            return false;
        } else {
            state.data++;
            state.node = node_t::LOOP_17_1;
            return true;
        }
    }
    state.node = node_t::TEXT_20_3;
    return true;
}

inline bool perfHttpReq::text_21_0(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_21_1;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_21_1;
            return true;
        }
    }
    state.node = node_t::TEXT_21_0;
    return true;
}

inline bool perfHttpReq::text_21_1(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_24_0;
            return false;
        } else {
            state.data++;
            state.node = node_t::CASES_21_2;
            return true;
        }
    }
    state.node = node_t::TEXT_21_1;
    return true;
}

inline bool perfHttpReq::cases_21_2(state_t & state)
{
    if (func_22_0(state)) // case_1
        return true;
    if (ret_23_0(state)) // case_2
        return true;
    state.node = node_t::RANGE_24_0;
    return true;
}

inline bool perfHttpReq::_func_22_0()
{
     return content_length; 
    return true;
}
inline bool perfHttpReq::func_22_0(state_t & state)
{
    bool ret = _func_22_0();
    state.node = ret ? node_t::DATA_22_1 : node_t::RANGE_24_0;
    return ret;
}

inline bool perfHttpReq::data_22_1(state_t & state)
{
    const char * beginData = state.data;
    if (!state.consumed)
        state.node = node_t::DATA_22_1;
    if (state.data == state.end)
        return true;
    else if (int64_t(state.consumed + state.remainDataLen()) >= int64_t(content_length))
    {
        state.data += (content_length - state.consumed);
        perfHttpReqResult::payload(beginData, unsigned(state.data - beginData), !state.consumed, true);
        state.consumed = 0;
        state.node = node_t::FUNC_22_2;
    } else {
        state.data = state.end;
        perfHttpReqResult::payload(beginData, unsigned(state.data - beginData), !state.consumed, false);
        state.consumed += unsigned(state.data - beginData);
    }
    return true;
}

inline bool perfHttpReq::_func_22_2()
{
     content_length = 0; 
    return true;
}
inline bool perfHttpReq::func_22_2(state_t & state)
{
    bool ret = _func_22_2();
    state.node = ret ? node_t::RET_22_3 : node_t::RANGE_24_0;
    return ret;
}

inline bool perfHttpReq::ret_22_3(state_t & state)
{
    state.node = state.retStackCount ? state.retStack[--state.retStackCount] : node_t::NO_STATE;
    return state.node != node_t::NO_STATE;
}

inline bool perfHttpReq::ret_23_0(state_t & state)
{
    state.node = state.retStackCount ? state.retStack[--state.retStackCount] : node_t::NO_STATE;
    return state.node != node_t::NO_STATE;
}

inline bool perfHttpReq::range_24_0(state_t & state)
{
    const static bool exitSym[256] = {
        false, false, false, false, false, false, false, false, false, false,  true, false, false,  true, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, 
        false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false}; // ^[0xa][0xd]
    const char * beginData = state.data;
    while(state.data < state.end) [[likely]]
    {
#if defined(__AVX2__)
        if(&state.data[32] <= state.end)
        {
            const __m256i d = _mm256_lddqu_si256((const __m256i *)state.data);
            __m256i m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0xa), d);
            m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0xd), d));
            uint32_t r = _mm256_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 32;
                continue;
            }
        }
#elif defined(__SSE2__)
        if(&state.data[16] <= state.end)
        {
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            __m128i m = _mm_cmpeq_epi8(_mm_set1_epi8(0xa), d);
            m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0xd), d));
            uint16_t r = _mm_movemask_epi8(m);
            if (r)
                state.data += __ctz32(r);
            else
            {
                state.data += 16;
                continue;
            }
        }
#else
        if(&state.data[16] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (exitSym[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (exitSym[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (exitSym[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (exitSym[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (exitSym[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (exitSym[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (exitSym[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (exitSym[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (exitSym[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (exitSym[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (exitSym[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (exitSym[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (exitSym[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (exitSym[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (exitSym[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(exitSym[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::TEXT_24_1;
            return true;
        } else {
            state.node = node_t::NO_STATE;
            return false;
        }
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_24_0;
    return true;
}

inline bool perfHttpReq::text_24_1(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_24_2;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_24_2;
            return true;
        }
    }
    state.node = node_t::TEXT_24_1;
    return true;
}

inline bool perfHttpReq::text_24_2(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            return false;
        } else {
            state.data++;
            state.node = node_t::LOOP_17_1;
            return true;
        }
    }
    state.node = node_t::TEXT_24_2;
    return true;
}

void perfHttpReq::reset()
{
    perfHttpReqResult::content_length = 0;
    perfHttpReqResult::host.clear();
    perfHttpReqResult::url.clear();
    perfHttpReq::mainState = perfHttpReq::state_t();
}

const char * perfHttpReq::state_t::name() const
{
    switch(node)
    {
        case node_t::LOOP_1_0: return "LOOP_1_0";
        case node_t::TEXT_1_0: return "TEXT_1_0";
        case node_t::GOTO_1_1: return "GOTO_1_1";
        case node_t::GOTO_1_2: return "GOTO_1_2";
        case node_t::TEXT_2_0: return "TEXT_2_0";
        case node_t::GOTO_2_1: return "GOTO_2_1";
        case node_t::GOTO_2_2: return "GOTO_2_2";
        case node_t::TEXT_3_0: return "TEXT_3_0";
        case node_t::CASES_3_1: return "CASES_3_1";
        case node_t::TEXT_4_0: return "TEXT_4_0";
        case node_t::GOTO_4_1: return "GOTO_4_1";
        case node_t::GOTO_4_2: return "GOTO_4_2";
        case node_t::TEXT_5_0: return "TEXT_5_0";
        case node_t::GOTO_5_1: return "GOTO_5_1";
        case node_t::GOTO_5_2: return "GOTO_5_2";
        case node_t::TEXT_6_0: return "TEXT_6_0";
        case node_t::GOTO_6_1: return "GOTO_6_1";
        case node_t::GOTO_6_2: return "GOTO_6_2";
        case node_t::TEXT_7_0: return "TEXT_7_0";
        case node_t::GOTO_7_1: return "GOTO_7_1";
        case node_t::GOTO_7_2: return "GOTO_7_2";
        case node_t::TEXT_8_0: return "TEXT_8_0";
        case node_t::GOTO_8_1: return "GOTO_8_1";
        case node_t::GOTO_8_2: return "GOTO_8_2";
        case node_t::TEXT_9_0: return "TEXT_9_0";
        case node_t::GOTO_9_1: return "GOTO_9_1";
        case node_t::GOTO_9_2: return "GOTO_9_2";
        case node_t::TEXT_10_0: return "TEXT_10_0";
        case node_t::GOTO_10_1: return "GOTO_10_1";
        case node_t::GOTO_10_2: return "GOTO_10_2";
        case node_t::TEXT_11_0: return "TEXT_11_0";
        case node_t::GOTO_11_1: return "GOTO_11_1";
        case node_t::GOTO_11_2: return "GOTO_11_2";
        case node_t::TEXT_12_0: return "TEXT_12_0";
        case node_t::GOTO_12_1: return "GOTO_12_1";
        case node_t::GOTO_12_2: return "GOTO_12_2";
        case node_t::TEXT_13_0: return "TEXT_13_0";
        case node_t::TEXT_13_1: return "TEXT_13_1";
        case node_t::LOOP_15_0: return "LOOP_15_0";
        case node_t::LABEL_15_0: return "LABEL_15_0";
        case node_t::RANGE_15_1: return "RANGE_15_1";
        case node_t::STRING_15_2: return "STRING_15_2";
        case node_t::RANGE_15_3: return "RANGE_15_3";
        case node_t::TEXT_15_4: return "TEXT_15_4";
        case node_t::RANGE_15_5: return "RANGE_15_5";
        case node_t::TEXT_15_6: return "TEXT_15_6";
        case node_t::RANGE_15_7: return "RANGE_15_7";
        case node_t::TEXT_15_8: return "TEXT_15_8";
        case node_t::TEXT_15_9: return "TEXT_15_9";
        case node_t::RET_15_10: return "RET_15_10";
        case node_t::LOOP_17_0: return "LOOP_17_0";
        case node_t::LABEL_17_0: return "LABEL_17_0";
        case node_t::LOOP_17_1: return "LOOP_17_1";
        case node_t::TEXT_18_0: return "TEXT_18_0";
        case node_t::RANGE_18_1: return "RANGE_18_1";
        case node_t::STRING_18_2: return "STRING_18_2";
        case node_t::TEXT_18_3: return "TEXT_18_3";
        case node_t::TEXT_18_4: return "TEXT_18_4";
        case node_t::TEXT_19_0: return "TEXT_19_0";
        case node_t::RANGE_19_1: return "RANGE_19_1";
        case node_t::UINT_19_2: return "UINT_19_2";
        case node_t::TEXT_19_3: return "TEXT_19_3";
        case node_t::TEXT_19_4: return "TEXT_19_4";
        case node_t::RANGE_20_0: return "RANGE_20_0";
        case node_t::RANGE_20_1: return "RANGE_20_1";
        case node_t::TEXT_20_2: return "TEXT_20_2";
        case node_t::TEXT_20_3: return "TEXT_20_3";
        case node_t::TEXT_21_0: return "TEXT_21_0";
        case node_t::TEXT_21_1: return "TEXT_21_1";
        case node_t::CASES_21_2: return "CASES_21_2";
        case node_t::FUNC_22_0: return "FUNC_22_0";
        case node_t::DATA_22_1: return "DATA_22_1";
        case node_t::FUNC_22_2: return "FUNC_22_2";
        case node_t::RET_22_3: return "RET_22_3";
        case node_t::RET_23_0: return "RET_23_0";
        case node_t::RANGE_24_0: return "RANGE_24_0";
        case node_t::TEXT_24_1: return "TEXT_24_1";
        case node_t::TEXT_24_2: return "TEXT_24_2";
        case node_t::NO_STATE: return "NO_STATE";
        default: return "unknown";
    };
}

