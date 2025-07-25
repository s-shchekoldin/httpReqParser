// ==============================================================
// Date: 2025-07-20 10:34:01 GMT
// Generated using vProto(2025.07.20)        https://www.cgen.dev
// Author: Sergey V. Shchekoldin     Email: shchekoldin@gmail.com
// ==============================================================

#include "httpReq.h"
// To enable SSE4.2, use the compiler flag '-msse4.2' or '-march=native' (if the CPU supports it)
#ifdef __SSE4_2__
#include <immintrin.h>
#endif

inline void httpReq::parse(state_t & state)
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
            case node_t::ANY_1_0: any_1_0(state); break;
            case node_t::TEXT_1_0_0_0: text_1_0_0_0(state); break;
            case node_t::TEXT_1_0_1_0: text_1_0_1_0(state); break;
            case node_t::TEXT_1_0_2_0: text_1_0_2_0(state); break;
            case node_t::TEXT_1_0_3_0: text_1_0_3_0(state); break;
            case node_t::TEXT_1_0_4_0: text_1_0_4_0(state); break;
            case node_t::TEXT_1_0_5_0: text_1_0_5_0(state); break;
            case node_t::TEXT_1_0_6_0: text_1_0_6_0(state); break;
            case node_t::TEXT_1_0_7_0: text_1_0_7_0(state); break;
            case node_t::TEXT_1_0_8_0: text_1_0_8_0(state); break;
            case node_t::TEXT_1_0_9_0: text_1_0_9_0(state); break;
            case node_t::TEXT_1_0_10_0: if (!text_1_0_10_0(state) || state.node != node_t::BANG_1_0) break; [[fallthrough]];
            case node_t::BANG_1_0: if (!bang_1_0(state) || state.node != node_t::GOTO_1_2) break; [[fallthrough]];
            case node_t::GOTO_1_2: if (!goto_1_2(state) || state.node != node_t::GOTO_1_3) break; [[fallthrough]];
            case node_t::GOTO_1_3: goto_1_3(state); break;
            case node_t::TEXT_2_0: if (!text_2_0(state) || state.node != node_t::TEXT_2_1) break; [[fallthrough]];
            case node_t::TEXT_2_1: text_2_1(state); break;
            case node_t::LOOP_4_0: loop_4_0(state); break;
            case node_t::LABEL_4_0: if (!label_4_0(state) || state.node != node_t::LOOP_4_1) break; [[fallthrough]];
            case node_t::LOOP_4_1: loop_4_1(state); break;
            case node_t::RANGE_5_0: if (!range_5_0(state) || state.node != node_t::STRING_5_1) break; [[fallthrough]];
            case node_t::STRING_5_1: if (!string_5_1(state) || state.node != node_t::RANGE_5_2) break; [[fallthrough]];
            case node_t::RANGE_5_2: if (!range_5_2(state) || state.node != node_t::FUNC_5_3) break; [[fallthrough]];
            case node_t::FUNC_5_3: if (!func_5_3(state) || state.node != node_t::TEXT_5_4) break; [[fallthrough]];
            case node_t::TEXT_5_4: if (!text_5_4(state) || state.node != node_t::RANGE_5_5) break; [[fallthrough]];
            case node_t::RANGE_5_5: if (!range_5_5(state) || state.node != node_t::TEXT_5_6) break; [[fallthrough]];
            case node_t::TEXT_5_6: if (!text_5_6(state) || state.node != node_t::RANGE_5_7) break; [[fallthrough]];
            case node_t::RANGE_5_7: if (!range_5_7(state) || state.node != node_t::TEXT_5_8) break; [[fallthrough]];
            case node_t::TEXT_5_8: if (!text_5_8(state) || state.node != node_t::TEXT_5_9) break; [[fallthrough]];
            case node_t::TEXT_5_9: if (!text_5_9(state) || state.node != node_t::RET_5_10) break; [[fallthrough]];
            case node_t::RET_5_10: ret_5_10(state); break;
            case node_t::LOOP_7_0: loop_7_0(state); break;
            case node_t::LABEL_7_0: if (!label_7_0(state) || state.node != node_t::LOOP_7_1) break; [[fallthrough]];
            case node_t::LOOP_7_1: loop_7_1(state); break;
            case node_t::TEXT_8_0: if (!text_8_0(state, false) || state.node != node_t::RANGE_8_1) break; [[fallthrough]];
            case node_t::RANGE_8_1: if (!range_8_1(state) || state.node != node_t::STRING_8_2) break; [[fallthrough]];
            case node_t::STRING_8_2: if (!string_8_2(state) || state.node != node_t::FUNC_8_3) break; [[fallthrough]];
            case node_t::FUNC_8_3: if (!func_8_3(state) || state.node != node_t::RANGE_8_4) break; [[fallthrough]];
            case node_t::RANGE_8_4: if (!range_8_4(state) || state.node != node_t::TEXT_8_5) break; [[fallthrough]];
            case node_t::TEXT_8_5: if (!text_8_5(state) || state.node != node_t::TEXT_8_6) break; [[fallthrough]];
            case node_t::TEXT_8_6: text_8_6(state); break;
            case node_t::ANY_9_0: any_9_0(state); break;
            case node_t::TEXT_9_0_0_0: if (!text_9_0_0_0(state) || state.node != node_t::BANG_9_0) break; [[fallthrough]];
            case node_t::BANG_9_0: if (!bang_9_0(state) || state.node != node_t::RANGE_9_2) break; [[fallthrough]];
            case node_t::RANGE_9_2: if (!range_9_2(state) || state.node != node_t::STRING_9_3) break; [[fallthrough]];
            case node_t::STRING_9_3: if (!string_9_3(state) || state.node != node_t::FUNC_9_4) break; [[fallthrough]];
            case node_t::FUNC_9_4: if (!func_9_4(state) || state.node != node_t::TEXT_9_5) break; [[fallthrough]];
            case node_t::TEXT_9_5: if (!text_9_5(state) || state.node != node_t::TEXT_9_6) break; [[fallthrough]];
            case node_t::TEXT_9_6: text_9_6(state); break;
            case node_t::ANY_10_0: any_10_0(state); break;
            case node_t::TEXT_10_0_0_0: if (!text_10_0_0_0(state) || state.node != node_t::BANG_10_0) break; [[fallthrough]];
            case node_t::BANG_10_0: if (!bang_10_0(state) || state.node != node_t::RANGE_10_2) break; [[fallthrough]];
            case node_t::RANGE_10_2: if (!range_10_2(state) || state.node != node_t::UINT_10_3) break; [[fallthrough]];
            case node_t::UINT_10_3: if (!uint_10_3(state) || state.node != node_t::FUNC_10_4) break; [[fallthrough]];
            case node_t::FUNC_10_4: if (!func_10_4(state) || state.node != node_t::TEXT_10_5) break; [[fallthrough]];
            case node_t::TEXT_10_5: if (!text_10_5(state) || state.node != node_t::TEXT_10_6) break; [[fallthrough]];
            case node_t::TEXT_10_6: text_10_6(state); break;
            case node_t::RANGE_11_0: if (!range_11_0(state) || state.node != node_t::RANGE_11_1) break; [[fallthrough]];
            case node_t::RANGE_11_1: if (!range_11_1(state) || state.node != node_t::TEXT_11_2) break; [[fallthrough]];
            case node_t::TEXT_11_2: if (!text_11_2(state) || state.node != node_t::TEXT_11_3) break; [[fallthrough]];
            case node_t::TEXT_11_3: text_11_3(state); break;
            case node_t::TEXT_12_0: if (!text_12_0(state) || state.node != node_t::TEXT_12_1) break; [[fallthrough]];
            case node_t::TEXT_12_1: if (!text_12_1(state) || state.node != node_t::CASES_12_2) break; [[fallthrough]];
            case node_t::CASES_12_2: cases_12_2(state); break;
            case node_t::FUNC_13_0: if (!func_13_0(state) || state.node != node_t::DATA_13_1) break; [[fallthrough]];
            case node_t::DATA_13_1: if (!data_13_1(state) || state.node != node_t::FUNC_13_2) break; [[fallthrough]];
            case node_t::FUNC_13_2: if (!func_13_2(state) || state.node != node_t::RET_13_3) break; [[fallthrough]];
            case node_t::RET_13_3: ret_13_3(state); break;
            case node_t::RET_14_0: ret_14_0(state); break;
            case node_t::RANGE_15_0: if (!range_15_0(state) || state.node != node_t::TEXT_15_1) break; [[fallthrough]];
            case node_t::TEXT_15_1: if (!text_15_1(state) || state.node != node_t::TEXT_15_2) break; [[fallthrough]];
            case node_t::TEXT_15_2: text_15_2(state); break;
            case node_t::NO_STATE:
            default: return;
        }; // switch
        if (d == state.data && n == state.node) [[unlikely]]
            break;
    }
}

bool httpReq::parse(const char * data, unsigned len)
{
    mainState.data = data;
    mainState.end = &data[len];
    for(unsigned i = 0; i < prlState.size(); i++)
    {
        prlState[i].data = data;
        prlState[i].end = &data[len];
    }
    for(bool repeatParse = true; repeatParse; )
    {
        repeatParse = false;
        for(unsigned i = 0; i <= prlState.size(); i++)
        {
            state_t & state = i < prlState.size() ? prlState[i] : mainState;
            if (state.node == node_t::NO_STATE || !state.remainDataLen())
                continue;
            repeatParse = true;
            parse(state);
        }
        for(auto it = prlState.begin(); it != prlState.end(); )
            it = (it->node == node_t::NO_STATE) ? prlState.erase(it) : ++it;
    }
    return mainState.node != node_t::NO_STATE || !prlState.empty();
}

inline bool httpReq::loop_1_0(state_t & state)
{
    if (state.data == state.end)
        return true;
    state_t startState = state;
    if (any_1_0(state) && state.node == node_t::BANG_1_0 && bang_1_0(state) && state.node == node_t::GOTO_1_2) // case_1
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_2_0(state)) // case_2
        return true;
    state = startState;
    state.node = node_t::NO_STATE;
    if (&mainState == &state && prlState.size() == 1)
    {
        mainState = prlState[0];
        prlState.clear();
    }
    return true;
}

inline bool httpReq::any_1_0(state_t & state)
{
    if (state.data == state.end)
        return true;
    state_t startState = state;
    if (text_1_0_0_0(state) && state.node == node_t::BANG_1_0) // case_1
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_1_0_1_0(state) && state.node == node_t::BANG_1_0) // case_2
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_1_0_2_0(state) && state.node == node_t::BANG_1_0) // case_3
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_1_0_3_0(state) && state.node == node_t::BANG_1_0) // case_4
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_1_0_4_0(state) && state.node == node_t::BANG_1_0) // case_5
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_1_0_5_0(state) && state.node == node_t::BANG_1_0) // case_6
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_1_0_6_0(state) && state.node == node_t::BANG_1_0) // case_7
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_1_0_7_0(state) && state.node == node_t::BANG_1_0) // case_8
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_1_0_8_0(state) && state.node == node_t::BANG_1_0) // case_9
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_1_0_9_0(state) && state.node == node_t::BANG_1_0) // case_10
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_1_0_10_0(state) && state.node == node_t::BANG_1_0) // case_11
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    state.node = node_t::NO_STATE;
    if (&mainState == &state && prlState.size() == 1)
    {
        mainState = prlState[0];
        prlState.clear();
    }
    return true;
}

inline bool httpReq::text_1_0_0_0(state_t & state)
{
    const static uint8_t text[] = { 0x47, 0x45, 0x54}; // get
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
            state.node = node_t::BANG_1_0;
            return true;
        }
    }
    state.node = node_t::TEXT_1_0_0_0;
    return true;
}

inline bool httpReq::text_1_0_1_0(state_t & state)
{
    const static uint8_t text[] = { 0x48, 0x45, 0x41, 0x44}; // head
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
            state.node = node_t::BANG_1_0;
            return true;
        }
    }
    state.node = node_t::TEXT_1_0_1_0;
    return true;
}

inline bool httpReq::text_1_0_2_0(state_t & state)
{
    const static uint8_t text[] = { 0x50, 0x55, 0x54}; // put
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
            state.node = node_t::BANG_1_0;
            return true;
        }
    }
    state.node = node_t::TEXT_1_0_2_0;
    return true;
}

inline bool httpReq::text_1_0_3_0(state_t & state)
{
    const static uint8_t text[] = { 0x50, 0x41, 0x54, 0x43, 0x48}; // patch
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
            state.node = node_t::BANG_1_0;
            return true;
        }
    }
    state.node = node_t::TEXT_1_0_3_0;
    return true;
}

inline bool httpReq::text_1_0_4_0(state_t & state)
{
    const static uint8_t text[] = { 0x44, 0x45, 0x4c, 0x45, 0x54, 0x45}; // delete
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
            state.node = node_t::BANG_1_0;
            return true;
        }
    }
    state.node = node_t::TEXT_1_0_4_0;
    return true;
}

inline bool httpReq::text_1_0_5_0(state_t & state)
{
    const static uint8_t text[] = { 0x4f, 0x50, 0x54, 0x49, 0x4f, 0x4e, 0x53}; // options
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
            state.node = node_t::BANG_1_0;
            return true;
        }
    }
    state.node = node_t::TEXT_1_0_5_0;
    return true;
}

inline bool httpReq::text_1_0_6_0(state_t & state)
{
    const static uint8_t text[] = { 0x43, 0x4f, 0x4e, 0x4e, 0x45, 0x43, 0x54}; // connect
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
            state.node = node_t::BANG_1_0;
            return true;
        }
    }
    state.node = node_t::TEXT_1_0_6_0;
    return true;
}

inline bool httpReq::text_1_0_7_0(state_t & state)
{
    const static uint8_t text[] = { 0x4c, 0x49, 0x4e, 0x4b}; // link
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
            state.node = node_t::BANG_1_0;
            return true;
        }
    }
    state.node = node_t::TEXT_1_0_7_0;
    return true;
}

inline bool httpReq::text_1_0_8_0(state_t & state)
{
    const static uint8_t text[] = { 0x55, 0x4e, 0x4c, 0x49, 0x4e, 0x4b}; // unlink
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
            state.node = node_t::BANG_1_0;
            return true;
        }
    }
    state.node = node_t::TEXT_1_0_8_0;
    return true;
}

inline bool httpReq::text_1_0_9_0(state_t & state)
{
    const static uint8_t text[] = { 0x54, 0x52, 0x41, 0x43, 0x45}; // trace
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
            state.node = node_t::BANG_1_0;
            return true;
        }
    }
    state.node = node_t::TEXT_1_0_9_0;
    return true;
}

inline bool httpReq::text_1_0_10_0(state_t & state)
{
    const static uint8_t text[] = { 0x50, 0x4f, 0x53, 0x54}; // post
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
            state.node = node_t::BANG_1_0;
            return true;
        }
    }
    state.node = node_t::TEXT_1_0_10_0;
    return true;
}

inline bool httpReq::bang_1_0(state_t & state)
{
    state.node = node_t::GOTO_1_2;
    if (&mainState != &state)
        mainState = state;
    for(auto it = prlState.begin(); it != prlState.end(); it++)
        it->node = node_t::NO_STATE;
    return true;
}

inline bool httpReq::goto_1_2(state_t & state)
{
    state.node = node_t::LABEL_4_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::GOTO_1_3;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::GOTO_1_3;
    }
    return true;
}

inline bool httpReq::goto_1_3(state_t & state)
{
    state.node = node_t::LABEL_7_0;
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

inline bool httpReq::text_2_0(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_2_1;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_2_1;
            return true;
        }
    }
    state.node = node_t::TEXT_2_0;
    return true;
}

inline bool httpReq::text_2_1(state_t & state)
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
    state.node = node_t::TEXT_2_1;
    return true;
}

inline bool httpReq::loop_4_0(state_t & state)
{
    return label_4_0(state);
}

inline bool httpReq::label_4_0(state_t & state)
{
    state.node = node_t::LOOP_4_1;
    return true;
}

inline bool httpReq::loop_4_1(state_t & state)
{
    return range_5_0(state);
}

inline bool httpReq::range_5_0(state_t & state)
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
            state.node = (state.consumed >= 1) ? node_t::STRING_5_1 : node_t::NO_STATE;
            bool ret = (state.node == node_t::STRING_5_1);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = node_t::STRING_5_1;
        return true;
    }
    state.node = node_t::RANGE_5_0;
    return true;
}

void httpReq::_string_5_1(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        httpReqResult::url.clear();
    if ((httpReqResult::url.length() + len) > 128)
        len = 128 - httpReqResult::url.length();
    httpReqResult::url.append(data, len);
}

inline bool httpReq::string_5_1(state_t & state)
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
#ifdef __SSE4_2__
        if(&state.data[16] <= state.end)
        {
            const __m128i s = _mm_set_epi8(0x09, 0x20, 0x09, 0x20, 0x09, 0x20, 0x09, 0x20, 0x09, 0x20, 0x09, 0x20, 0x09, 0x20, 0x09, 0x20);
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            int r =  _mm_cmpistri(s, d, _SIDD_UBYTE_OPS | _SIDD_CMP_EQUAL_ANY | _SIDD_LEAST_SIGNIFICANT);
            if (r < 16)
                state.data += r;
            else
            {
                state.data += 16;
                continue;
            }
        }
#else // __SSE4_2__
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
#endif // __SSE4_2__
        else if (!exitSym[uint8_t(state.data[0])]) [[unlikely]]
        {
            state.data++;
            continue;
        }
        _string_5_1(beginData, unsigned(state.data - beginData), state.consumed);
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::RANGE_5_2;
            return true;
        } else {
            state.node = node_t::NO_STATE;
            return false;
        }
    }
    if (beginData < state.data)
        _string_5_1(beginData, unsigned(state.data - beginData), state.consumed);
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::STRING_5_1;
    return true;
}

inline bool httpReq::range_5_2(state_t & state)
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
            state.node = (state.consumed >= 1) ? node_t::FUNC_5_3 : node_t::NO_STATE;
            bool ret = (state.node == node_t::FUNC_5_3);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = node_t::FUNC_5_3;
        return true;
    }
    state.node = node_t::RANGE_5_2;
    return true;
}

inline bool httpReq::_func_5_3()
{
     printf("URL(%lu): %s\n", url.length(), url.c_str()); 
    return true;
}
inline bool httpReq::func_5_3(state_t & state)
{
    bool ret = _func_5_3();
    state.node = ret ? node_t::TEXT_5_4 : node_t::NO_STATE;
    return ret;
}

inline bool httpReq::text_5_4(state_t & state)
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
            state.node = node_t::RANGE_5_5;
            return true;
        }
    }
    state.node = node_t::TEXT_5_4;
    return true;
}

inline bool httpReq::range_5_5(state_t & state)
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
            state.node = (state.consumed >= 1) ? node_t::TEXT_5_6 : node_t::NO_STATE;
            bool ret = (state.node == node_t::TEXT_5_6);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = node_t::TEXT_5_6;
        return true;
    }
    state.node = node_t::RANGE_5_5;
    return true;
}

inline bool httpReq::text_5_6(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x2E) != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            return false;
        } else {
            state.data++;
            state.node = node_t::RANGE_5_7;
            return true;
        }
    }
    state.node = node_t::TEXT_5_6;
    return true;
}

inline bool httpReq::range_5_7(state_t & state)
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
            state.node = (state.consumed >= 1) ? node_t::TEXT_5_8 : node_t::NO_STATE;
            bool ret = (state.node == node_t::TEXT_5_8);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = node_t::TEXT_5_8;
        return true;
    }
    state.node = node_t::RANGE_5_7;
    return true;
}

inline bool httpReq::text_5_8(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_5_9;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_5_9;
            return true;
        }
    }
    state.node = node_t::TEXT_5_8;
    return true;
}

inline bool httpReq::text_5_9(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            return false;
        } else {
            state.data++;
            state.node = node_t::RET_5_10;
            return true;
        }
    }
    state.node = node_t::TEXT_5_9;
    return true;
}

inline bool httpReq::ret_5_10(state_t & state)
{
    state.node = state.retStackCount ? state.retStack[--state.retStackCount] : node_t::NO_STATE;
    return state.node != node_t::NO_STATE;
}

inline bool httpReq::loop_7_0(state_t & state)
{
    return label_7_0(state);
}

inline bool httpReq::label_7_0(state_t & state)
{
    state.node = node_t::LOOP_7_1;
    return true;
}

inline bool httpReq::loop_7_1(state_t & state)
{
    if (state.data == state.end)
        return true;
    state_t startState = state;
    if (text_8_0(state, true)) // case_1
        return true;
    state = startState;
    if (any_9_0(state) && state.node == node_t::BANG_9_0 && bang_9_0(state) && state.node == node_t::RANGE_9_2) // case_2
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (any_10_0(state) && state.node == node_t::BANG_10_0 && bang_10_0(state) && state.node == node_t::RANGE_10_2) // case_3
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (range_11_0(state)) // case_4
        return true;
    state = startState;
    if (text_12_0(state)) // case_5
        return true;
    state = startState;
    state.node = node_t::RANGE_15_0;
    return true;
}

inline bool httpReq::text_8_0(state_t & state, bool isCaseCall)
{
    const static uint8_t text[] = { 0x68, 0x6f, 0x73, 0x74, 0x3a}; // host:
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::RANGE_15_0;
            bool ret = isCaseCall && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::RANGE_8_1;
            return true;
        }
    }
    state.node = node_t::TEXT_8_0;
    return true;
}

inline bool httpReq::range_8_1(state_t & state)
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
#ifdef __SSE4_2__
        if(&state.data[16] <= state.end)
        {
            const __m128i s = _mm_set_epi8(0x09, 0x20, 0x09, 0x20, 0x09, 0x20, 0x09, 0x20, 0x09, 0x20, 0x09, 0x20, 0x09, 0x20, 0x09, 0x20);
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            int r =  _mm_cmpistri(s, d, _SIDD_UBYTE_OPS | _SIDD_CMP_EQUAL_ANY | _SIDD_LEAST_SIGNIFICANT | _SIDD_NEGATIVE_POLARITY);
            if (r < 16)
                state.data += r;
            else
            {
                state.data += 16;
                continue;
            }
        }
#else // __SSE4_2__
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
#endif // __SSE4_2__
        else if (!exitSym[uint8_t(state.data[0])]) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::STRING_8_2;
            return true;
        } else {
            state.node = node_t::RANGE_15_0;
            return false;
        }
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_8_1;
    return true;
}

void httpReq::_string_8_2(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        httpReqResult::host.clear();
    if ((httpReqResult::host.length() + len) > 64)
        len = 64 - httpReqResult::host.length();
    httpReqResult::host.append(data, len);
}

inline bool httpReq::string_8_2(state_t & state)
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
#ifdef __SSE4_2__
        if(&state.data[16] <= state.end)
        {
            const __m128i s = _mm_set_epi8(0x0A, 0x0D, 0x0A, 0x0D, 0x0A, 0x0D, 0x0A, 0x0D, 0x0A, 0x0D, 0x0A, 0x0D, 0x0A, 0x0D, 0x0A, 0x0D);
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            int r =  _mm_cmpistri(s, d, _SIDD_UBYTE_OPS | _SIDD_CMP_EQUAL_ANY | _SIDD_LEAST_SIGNIFICANT);
            if (r < 16)
                state.data += r;
            else
            {
                state.data += 16;
                continue;
            }
        }
#else // __SSE4_2__
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
#endif // __SSE4_2__
        else if (!exitSym[uint8_t(state.data[0])]) [[unlikely]]
        {
            state.data++;
            continue;
        }
        _string_8_2(beginData, unsigned(state.data - beginData), state.consumed);
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::FUNC_8_3;
            return true;
        } else {
            state.node = node_t::RANGE_15_0;
            return false;
        }
    }
    if (beginData < state.data)
        _string_8_2(beginData, unsigned(state.data - beginData), state.consumed);
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::STRING_8_2;
    return true;
}

inline bool httpReq::_func_8_3()
{
     printf("HOST: %s\n", host.c_str()); 
    return true;
}
inline bool httpReq::func_8_3(state_t & state)
{
    bool ret = _func_8_3();
    state.node = ret ? node_t::RANGE_8_4 : node_t::RANGE_15_0;
    return ret;
}

inline bool httpReq::range_8_4(state_t & state)
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
        else if (!exitSym[uint8_t(state.data[0])]) [[unlikely]]
        {
            state.data++;
            continue;
        }
        state.consumed = 0;
        state.node = node_t::TEXT_8_5;
        return true;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_8_4;
    return true;
}

inline bool httpReq::text_8_5(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_8_6;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_8_6;
            return true;
        }
    }
    state.node = node_t::TEXT_8_5;
    return true;
}

inline bool httpReq::text_8_6(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_15_0;
            return false;
        } else {
            state.data++;
            state.node = node_t::LOOP_7_1;
            return true;
        }
    }
    state.node = node_t::TEXT_8_6;
    return true;
}

inline bool httpReq::any_9_0(state_t & state)
{
    if (state.data == state.end)
        return true;
    state_t startState = state;
    if (text_9_0_0_0(state) && state.node == node_t::BANG_9_0) // case_1
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    state.node = node_t::NO_STATE;
    if (&mainState == &state && prlState.size() == 1)
    {
        mainState = prlState[0];
        prlState.clear();
    }
    return true;
}

inline bool httpReq::text_9_0_0_0(state_t & state)
{
    const static uint8_t text[] = { 0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a}; // content-type:
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::NO_STATE;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::BANG_9_0;
            return true;
        }
    }
    state.node = node_t::TEXT_9_0_0_0;
    return true;
}

inline bool httpReq::bang_9_0(state_t & state)
{
    state.node = node_t::RANGE_9_2;
    if (&mainState != &state)
        mainState = state;
    for(auto it = prlState.begin(); it != prlState.end(); it++)
        it->node = node_t::NO_STATE;
    return true;
}

inline bool httpReq::range_9_2(state_t & state)
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
            state.node = (state.consumed >= 1) ? node_t::STRING_9_3 : node_t::RANGE_15_0;
            bool ret = (state.node == node_t::STRING_9_3);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = node_t::STRING_9_3;
        return true;
    }
    state.node = node_t::RANGE_9_2;
    return true;
}

void httpReq::_string_9_3(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        httpReqResult::type.clear();
    if ((httpReqResult::type.length() + len) > 256)
        len = 256 - httpReqResult::type.length();
    httpReqResult::type.append(data, len);
}

inline bool httpReq::string_9_3(state_t & state)
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
#ifdef __SSE4_2__
        if(&state.data[16] <= state.end)
        {
            const __m128i s = _mm_set_epi8(0x0A, 0x0D, 0x0A, 0x0D, 0x0A, 0x0D, 0x0A, 0x0D, 0x0A, 0x0D, 0x0A, 0x0D, 0x0A, 0x0D, 0x0A, 0x0D);
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            int r =  _mm_cmpistri(s, d, _SIDD_UBYTE_OPS | _SIDD_CMP_EQUAL_ANY | _SIDD_LEAST_SIGNIFICANT);
            if (r < 16)
                state.data += r;
            else
            {
                state.data += 16;
                continue;
            }
        }
#else // __SSE4_2__
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
#endif // __SSE4_2__
        else if (!exitSym[uint8_t(state.data[0])]) [[unlikely]]
        {
            state.data++;
            continue;
        }
        _string_9_3(beginData, unsigned(state.data - beginData), state.consumed);
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::FUNC_9_4;
            return true;
        } else {
            state.node = node_t::RANGE_15_0;
            return false;
        }
    }
    if (beginData < state.data)
        _string_9_3(beginData, unsigned(state.data - beginData), state.consumed);
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::STRING_9_3;
    return true;
}

inline bool httpReq::_func_9_4()
{
     printf("GOT TYPE: %s\n", type.c_str()); 
    return true;
}
inline bool httpReq::func_9_4(state_t & state)
{
    bool ret = _func_9_4();
    state.node = ret ? node_t::TEXT_9_5 : node_t::RANGE_15_0;
    return ret;
}

inline bool httpReq::text_9_5(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_9_6;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_9_6;
            return true;
        }
    }
    state.node = node_t::TEXT_9_5;
    return true;
}

inline bool httpReq::text_9_6(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_15_0;
            return false;
        } else {
            state.data++;
            state.node = node_t::LOOP_7_1;
            return true;
        }
    }
    state.node = node_t::TEXT_9_6;
    return true;
}

inline bool httpReq::any_10_0(state_t & state)
{
    if (state.data == state.end)
        return true;
    state_t startState = state;
    if (text_10_0_0_0(state) && state.node == node_t::BANG_10_0) // case_1
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    state.node = node_t::NO_STATE;
    if (&mainState == &state && prlState.size() == 1)
    {
        mainState = prlState[0];
        prlState.clear();
    }
    return true;
}

inline bool httpReq::text_10_0_0_0(state_t & state)
{
    const static uint8_t text[] = { 0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x6c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x3a}; // content-length:
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = node_t::NO_STATE;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= sizeof(text))
        {
            state.data++;
            state.consumed = 0;
            state.node = node_t::BANG_10_0;
            return true;
        }
    }
    state.node = node_t::TEXT_10_0_0_0;
    return true;
}

inline bool httpReq::bang_10_0(state_t & state)
{
    state.node = node_t::RANGE_10_2;
    if (&mainState != &state)
        mainState = state;
    for(auto it = prlState.begin(); it != prlState.end(); it++)
        it->node = node_t::NO_STATE;
    return true;
}

inline bool httpReq::range_10_2(state_t & state)
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
            state.node = (state.consumed >= 1) ? node_t::UINT_10_3 : node_t::RANGE_15_0;
            bool ret = (state.node == node_t::UINT_10_3);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = node_t::UINT_10_3;
        return true;
    }
    state.node = node_t::RANGE_10_2;
    return true;
}

void httpReq::_uint_10_3(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        httpReqResult::contentLength = 0;
    for(const char * end = &data[len]; data < end; data++)
        httpReqResult::contentLength = httpReqResult::contentLength*10 + *data - '0';
}

inline bool httpReq::uint_10_3(state_t & state)
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
#ifdef __SSE4_2__
        if(&state.data[16] <= state.end)
        {
            const __m128i s = _mm_set_epi8(0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35);
            const __m128i d = _mm_loadu_si128((const __m128i *)state.data);
            int r =  _mm_cmpistri(s, d, _SIDD_UBYTE_OPS | _SIDD_CMP_EQUAL_ANY | _SIDD_LEAST_SIGNIFICANT | _SIDD_NEGATIVE_POLARITY);
            if (r < 16)
                state.data += r;
            else
            {
                state.data += 16;
                continue;
            }
        }
#else // __SSE4_2__
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
#endif // __SSE4_2__
        else if (!exitSym[uint8_t(state.data[0])]) [[unlikely]]
        {
            state.data++;
            continue;
        }
        _uint_10_3(beginData, unsigned(state.data - beginData), state.consumed);
        uint64_t totalConsumed = state.consumed + unsigned(state.data - beginData);
        state.consumed = 0;
        if (totalConsumed >= 1)
        {
            state.node = node_t::FUNC_10_4;
            return true;
        } else {
            state.node = node_t::RANGE_15_0;
            return false;
        }
    }
    if (beginData < state.data)
        _uint_10_3(beginData, unsigned(state.data - beginData), state.consumed);
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::UINT_10_3;
    return true;
}

inline bool httpReq::_func_10_4()
{
     printf("LENGTH: %lu\n", contentLength); 
    return true;
}
inline bool httpReq::func_10_4(state_t & state)
{
    bool ret = _func_10_4();
    state.node = ret ? node_t::TEXT_10_5 : node_t::RANGE_15_0;
    return ret;
}

inline bool httpReq::text_10_5(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_10_6;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_10_6;
            return true;
        }
    }
    state.node = node_t::TEXT_10_5;
    return true;
}

inline bool httpReq::text_10_6(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_15_0;
            return false;
        } else {
            state.data++;
            state.node = node_t::LOOP_7_1;
            return true;
        }
    }
    state.node = node_t::TEXT_10_6;
    return true;
}

inline bool httpReq::range_11_0(state_t & state)
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
            state.node = (state.consumed >= 1) ? node_t::RANGE_11_1 : node_t::RANGE_15_0;
            bool ret = (state.node == node_t::RANGE_11_1);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = node_t::RANGE_11_1;
        return true;
    }
    state.node = node_t::RANGE_11_0;
    return true;
}

inline bool httpReq::range_11_1(state_t & state)
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
        else if (!exitSym[uint8_t(state.data[0])]) [[unlikely]]
        {
            state.data++;
            continue;
        }
        state.consumed = 0;
        state.node = node_t::TEXT_11_2;
        return true;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_11_1;
    return true;
}

inline bool httpReq::text_11_2(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_11_3;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_11_3;
            return true;
        }
    }
    state.node = node_t::TEXT_11_2;
    return true;
}

inline bool httpReq::text_11_3(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_15_0;
            return false;
        } else {
            state.data++;
            state.node = node_t::LOOP_7_1;
            return true;
        }
    }
    state.node = node_t::TEXT_11_3;
    return true;
}

inline bool httpReq::text_12_0(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_12_1;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_12_1;
            return true;
        }
    }
    state.node = node_t::TEXT_12_0;
    return true;
}

inline bool httpReq::text_12_1(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::RANGE_15_0;
            return false;
        } else {
            state.data++;
            state.node = node_t::CASES_12_2;
            return true;
        }
    }
    state.node = node_t::TEXT_12_1;
    return true;
}

inline bool httpReq::cases_12_2(state_t & state)
{
    if (func_13_0(state)) // case_1
        return true;
    if (ret_14_0(state)) // case_2
        return true;
    state.node = node_t::RANGE_15_0;
    return true;
}

inline bool httpReq::_func_13_0()
{
     return contentLength; 
    return true;
}
inline bool httpReq::func_13_0(state_t & state)
{
    bool ret = _func_13_0();
    state.node = ret ? node_t::DATA_13_1 : node_t::RANGE_15_0;
    return ret;
}

inline bool httpReq::data_13_1(state_t & state)
{
    const char * beginData = state.data;
    if (!state.consumed)
        state.node = node_t::DATA_13_1;
    if (state.data == state.end)
        return true;
    else if (int64_t(state.consumed + state.remainDataLen()) >= int64_t(contentLength))
    {
        state.data += (contentLength - state.consumed);
        httpReqResult::payload(beginData, unsigned(state.data - beginData), !state.consumed, true);
        state.consumed = 0;
        state.node = node_t::FUNC_13_2;
    } else {
        state.data = state.end;
        httpReqResult::payload(beginData, unsigned(state.data - beginData), !state.consumed, false);
        state.consumed += unsigned(state.data - beginData);
    }
    return true;
}

inline bool httpReq::_func_13_2()
{
     contentLength = 0; 
    return true;
}
inline bool httpReq::func_13_2(state_t & state)
{
    bool ret = _func_13_2();
    state.node = ret ? node_t::RET_13_3 : node_t::RANGE_15_0;
    return ret;
}

inline bool httpReq::ret_13_3(state_t & state)
{
    state.node = state.retStackCount ? state.retStack[--state.retStackCount] : node_t::NO_STATE;
    return state.node != node_t::NO_STATE;
}

inline bool httpReq::ret_14_0(state_t & state)
{
    state.node = state.retStackCount ? state.retStack[--state.retStackCount] : node_t::NO_STATE;
    return state.node != node_t::NO_STATE;
}

inline bool httpReq::range_15_0(state_t & state)
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
        else if (!exitSym[uint8_t(state.data[0])]) [[unlikely]]
        {
            state.data++;
            continue;
        }
        state.consumed = 0;
        state.node = node_t::TEXT_15_1;
        return true;
    }
    state.consumed += unsigned(state.data - beginData);
    state.node = node_t::RANGE_15_0;
    return true;
}

inline bool httpReq::text_15_1(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = node_t::TEXT_15_2;
            return true;
        } else {
            state.data++;
            state.node = node_t::TEXT_15_2;
            return true;
        }
    }
    state.node = node_t::TEXT_15_1;
    return true;
}

inline bool httpReq::text_15_2(state_t & state)
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = node_t::NO_STATE;
            return false;
        } else {
            state.data++;
            state.node = node_t::LOOP_7_1;
            return true;
        }
    }
    state.node = node_t::TEXT_15_2;
    return true;
}

void httpReq::reset()
{
    httpReqResult::contentLength = 0;
    httpReqResult::host.clear();
    httpReqResult::type.clear();
    httpReqResult::url.clear();
    httpReq::mainState = httpReq::state_t();
    httpReq::prlState.clear();
}

const char * httpReq::state_t::name() const
{
    switch(node)
    {
        case node_t::LOOP_1_0: return "LOOP_1_0";
        case node_t::ANY_1_0: return "ANY_1_0";
        case node_t::TEXT_1_0_0_0: return "TEXT_1_0_0_0";
        case node_t::TEXT_1_0_1_0: return "TEXT_1_0_1_0";
        case node_t::TEXT_1_0_2_0: return "TEXT_1_0_2_0";
        case node_t::TEXT_1_0_3_0: return "TEXT_1_0_3_0";
        case node_t::TEXT_1_0_4_0: return "TEXT_1_0_4_0";
        case node_t::TEXT_1_0_5_0: return "TEXT_1_0_5_0";
        case node_t::TEXT_1_0_6_0: return "TEXT_1_0_6_0";
        case node_t::TEXT_1_0_7_0: return "TEXT_1_0_7_0";
        case node_t::TEXT_1_0_8_0: return "TEXT_1_0_8_0";
        case node_t::TEXT_1_0_9_0: return "TEXT_1_0_9_0";
        case node_t::TEXT_1_0_10_0: return "TEXT_1_0_10_0";
        case node_t::BANG_1_0: return "BANG_1_0";
        case node_t::GOTO_1_2: return "GOTO_1_2";
        case node_t::GOTO_1_3: return "GOTO_1_3";
        case node_t::TEXT_2_0: return "TEXT_2_0";
        case node_t::TEXT_2_1: return "TEXT_2_1";
        case node_t::LOOP_4_0: return "LOOP_4_0";
        case node_t::LABEL_4_0: return "LABEL_4_0";
        case node_t::LOOP_4_1: return "LOOP_4_1";
        case node_t::RANGE_5_0: return "RANGE_5_0";
        case node_t::STRING_5_1: return "STRING_5_1";
        case node_t::RANGE_5_2: return "RANGE_5_2";
        case node_t::FUNC_5_3: return "FUNC_5_3";
        case node_t::TEXT_5_4: return "TEXT_5_4";
        case node_t::RANGE_5_5: return "RANGE_5_5";
        case node_t::TEXT_5_6: return "TEXT_5_6";
        case node_t::RANGE_5_7: return "RANGE_5_7";
        case node_t::TEXT_5_8: return "TEXT_5_8";
        case node_t::TEXT_5_9: return "TEXT_5_9";
        case node_t::RET_5_10: return "RET_5_10";
        case node_t::LOOP_7_0: return "LOOP_7_0";
        case node_t::LABEL_7_0: return "LABEL_7_0";
        case node_t::LOOP_7_1: return "LOOP_7_1";
        case node_t::TEXT_8_0: return "TEXT_8_0";
        case node_t::RANGE_8_1: return "RANGE_8_1";
        case node_t::STRING_8_2: return "STRING_8_2";
        case node_t::FUNC_8_3: return "FUNC_8_3";
        case node_t::RANGE_8_4: return "RANGE_8_4";
        case node_t::TEXT_8_5: return "TEXT_8_5";
        case node_t::TEXT_8_6: return "TEXT_8_6";
        case node_t::ANY_9_0: return "ANY_9_0";
        case node_t::TEXT_9_0_0_0: return "TEXT_9_0_0_0";
        case node_t::BANG_9_0: return "BANG_9_0";
        case node_t::RANGE_9_2: return "RANGE_9_2";
        case node_t::STRING_9_3: return "STRING_9_3";
        case node_t::FUNC_9_4: return "FUNC_9_4";
        case node_t::TEXT_9_5: return "TEXT_9_5";
        case node_t::TEXT_9_6: return "TEXT_9_6";
        case node_t::ANY_10_0: return "ANY_10_0";
        case node_t::TEXT_10_0_0_0: return "TEXT_10_0_0_0";
        case node_t::BANG_10_0: return "BANG_10_0";
        case node_t::RANGE_10_2: return "RANGE_10_2";
        case node_t::UINT_10_3: return "UINT_10_3";
        case node_t::FUNC_10_4: return "FUNC_10_4";
        case node_t::TEXT_10_5: return "TEXT_10_5";
        case node_t::TEXT_10_6: return "TEXT_10_6";
        case node_t::RANGE_11_0: return "RANGE_11_0";
        case node_t::RANGE_11_1: return "RANGE_11_1";
        case node_t::TEXT_11_2: return "TEXT_11_2";
        case node_t::TEXT_11_3: return "TEXT_11_3";
        case node_t::TEXT_12_0: return "TEXT_12_0";
        case node_t::TEXT_12_1: return "TEXT_12_1";
        case node_t::CASES_12_2: return "CASES_12_2";
        case node_t::FUNC_13_0: return "FUNC_13_0";
        case node_t::DATA_13_1: return "DATA_13_1";
        case node_t::FUNC_13_2: return "FUNC_13_2";
        case node_t::RET_13_3: return "RET_13_3";
        case node_t::RET_14_0: return "RET_14_0";
        case node_t::RANGE_15_0: return "RANGE_15_0";
        case node_t::TEXT_15_1: return "TEXT_15_1";
        case node_t::TEXT_15_2: return "TEXT_15_2";
        case node_t::NO_STATE: return "NO_STATE";
        default: return "unknown";
    };
}

