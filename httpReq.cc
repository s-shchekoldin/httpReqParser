// ==============================================================
// Generated using https://www.vsyn.ru/
// Author: Sergey V. Shchekoldin     Email: shchekoldin@gmail.com
// ==============================================================

#include "httpReq.h"

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
            case node_t::LABEL_1_0: label_1_0(state); break;
            case node_t::LOOP_1_1: loop_1_1(state); break;
            case node_t::ANY_2_0: any_2_0(state); break;
            case node_t::TEXT_2_0_0_0: text_2_0_0_0(state); break;
            case node_t::TEXT_2_0_1_0: text_2_0_1_0(state); break;
            case node_t::TEXT_2_0_2_0: text_2_0_2_0(state); break;
            case node_t::TEXT_2_0_3_0: text_2_0_3_0(state); break;
            case node_t::TEXT_2_0_4_0: text_2_0_4_0(state); break;
            case node_t::TEXT_2_0_5_0: text_2_0_5_0(state); break;
            case node_t::TEXT_2_0_6_0: text_2_0_6_0(state); break;
            case node_t::TEXT_2_0_7_0: text_2_0_7_0(state); break;
            case node_t::TEXT_2_0_8_0: text_2_0_8_0(state); break;
            case node_t::TEXT_2_0_9_0: text_2_0_9_0(state); break;
            case node_t::TEXT_2_0_10_0: text_2_0_10_0(state); break;
            case node_t::BANG_2_0: bang_2_0(state); break;
            case node_t::GOTO_2_2: goto_2_2(state); break;
            case node_t::GOTO_2_3: goto_2_3(state); break;
            case node_t::TEXT_3_0: text_3_0(state); break;
            case node_t::TEXT_3_1: text_3_1(state); break;
            case node_t::LOOP_5_0: loop_5_0(state); break;
            case node_t::LABEL_5_0: label_5_0(state); break;
            case node_t::LOOP_5_1: loop_5_1(state); break;
            case node_t::RANGE_6_0: range_6_0(state); break;
            case node_t::STRING_6_1: string_6_1(state); break;
            case node_t::RANGE_6_2: range_6_2(state); break;
            case node_t::FUNC_6_3: func_6_3(state); break;
            case node_t::TEXT_6_4: text_6_4(state); break;
            case node_t::RANGE_6_5: range_6_5(state); break;
            case node_t::TEXT_6_6: text_6_6(state); break;
            case node_t::RANGE_6_7: range_6_7(state); break;
            case node_t::TEXT_6_8: text_6_8(state); break;
            case node_t::TEXT_6_9: text_6_9(state); break;
            case node_t::RET_6_10: ret_6_10(state); break;
            case node_t::LOOP_8_0: loop_8_0(state); break;
            case node_t::LABEL_8_0: label_8_0(state); break;
            case node_t::LOOP_8_1: loop_8_1(state); break;
            case node_t::TEXT_9_0: text_9_0(state, false); break;
            case node_t::RANGE_9_1: range_9_1(state); break;
            case node_t::STRING_9_2: string_9_2(state); break;
            case node_t::FUNC_9_3: func_9_3(state); break;
            case node_t::RANGE_9_4: range_9_4(state); break;
            case node_t::TEXT_9_5: text_9_5(state); break;
            case node_t::TEXT_9_6: text_9_6(state); break;
            case node_t::ANY_10_0: any_10_0(state); break;
            case node_t::TEXT_10_0_0_0: text_10_0_0_0(state); break;
            case node_t::BANG_10_0: bang_10_0(state); break;
            case node_t::RANGE_10_2: range_10_2(state); break;
            case node_t::STRING_10_3: string_10_3(state); break;
            case node_t::FUNC_10_4: func_10_4(state); break;
            case node_t::TEXT_10_5: text_10_5(state); break;
            case node_t::TEXT_10_6: text_10_6(state); break;
            case node_t::ANY_11_0: any_11_0(state); break;
            case node_t::TEXT_11_0_0_0: text_11_0_0_0(state); break;
            case node_t::BANG_11_0: bang_11_0(state); break;
            case node_t::RANGE_11_2: range_11_2(state); break;
            case node_t::UINT_11_3: uint_11_3(state); break;
            case node_t::FUNC_11_4: func_11_4(state); break;
            case node_t::TEXT_11_5: text_11_5(state); break;
            case node_t::TEXT_11_6: text_11_6(state); break;
            case node_t::RANGE_12_0: range_12_0(state); break;
            case node_t::RANGE_12_1: range_12_1(state); break;
            case node_t::TEXT_12_2: text_12_2(state); break;
            case node_t::TEXT_12_3: text_12_3(state); break;
            case node_t::TEXT_13_0: text_13_0(state); break;
            case node_t::TEXT_13_1: text_13_1(state); break;
            case node_t::FUNC_13_2: func_13_2(state); break;
            case node_t::CASES_13_3: cases_13_3(state); break;
            case node_t::FUNC_14_0: func_14_0(state); break;
            case node_t::DATA_14_1: data_14_1(state); break;
            case node_t::FUNC_14_2: func_14_2(state); break;
            case node_t::RET_14_3: ret_14_3(state); break;
            case node_t::RET_15_0: ret_15_0(state); break;
            case node_t::RANGE_16_0: range_16_0(state); break;
            case node_t::TEXT_16_1: text_16_1(state); break;
            case node_t::TEXT_16_2: text_16_2(state); break;
            case node_t::NO_STATE:
            default: return;
        }; // switch
        if (n == state.node && d == state.data)
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
    return label_1_0(state);
}

inline bool httpReq::label_1_0(state_t & state)
{
    state.node = node_t::LOOP_1_1;
    return true;
}

inline bool httpReq::loop_1_1(state_t & state)
{
    if (state.data == state.end)
        return true;
    state_t startState = state;
    if (any_2_0(state) && state.node == node_t::BANG_2_0 && bang_2_0(state) && state.node == node_t::GOTO_2_2) // case_1
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_3_0(state)) // case_2
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

inline bool httpReq::any_2_0(state_t & state)
{
    if (state.data == state.end)
        return true;
    state_t startState = state;
    if (text_2_0_0_0(state) && state.node == node_t::BANG_2_0) // case_1
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_2_0_1_0(state) && state.node == node_t::BANG_2_0) // case_2
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_2_0_2_0(state) && state.node == node_t::BANG_2_0) // case_3
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_2_0_3_0(state) && state.node == node_t::BANG_2_0) // case_4
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_2_0_4_0(state) && state.node == node_t::BANG_2_0) // case_5
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_2_0_5_0(state) && state.node == node_t::BANG_2_0) // case_6
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_2_0_6_0(state) && state.node == node_t::BANG_2_0) // case_7
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_2_0_7_0(state) && state.node == node_t::BANG_2_0) // case_8
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_2_0_8_0(state) && state.node == node_t::BANG_2_0) // case_9
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_2_0_9_0(state) && state.node == node_t::BANG_2_0) // case_10
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (text_2_0_10_0(state) && state.node == node_t::BANG_2_0) // case_11
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

inline bool httpReq::text_2_0_0_0(state_t & state)
{
    static uint8_t text[] = { 0x47, 0x45, 0x54 }; // GET
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::NO_STATE;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::BANG_2_0;
            return true;
        }
    }
    state.node = node_t::TEXT_2_0_0_0;
    return true;
}

inline bool httpReq::text_2_0_1_0(state_t & state)
{
    static uint8_t text[] = { 0x48, 0x45, 0x41, 0x44 }; // HEAD
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::NO_STATE;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::BANG_2_0;
            return true;
        }
    }
    state.node = node_t::TEXT_2_0_1_0;
    return true;
}

inline bool httpReq::text_2_0_2_0(state_t & state)
{
    static uint8_t text[] = { 0x50, 0x55, 0x54 }; // PUT
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::NO_STATE;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::BANG_2_0;
            return true;
        }
    }
    state.node = node_t::TEXT_2_0_2_0;
    return true;
}

inline bool httpReq::text_2_0_3_0(state_t & state)
{
    static uint8_t text[] = { 0x50, 0x41, 0x54, 0x43, 0x48 }; // PATCH
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::NO_STATE;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::BANG_2_0;
            return true;
        }
    }
    state.node = node_t::TEXT_2_0_3_0;
    return true;
}

inline bool httpReq::text_2_0_4_0(state_t & state)
{
    static uint8_t text[] = { 0x44, 0x45, 0x4c, 0x45, 0x54, 0x45 }; // DELETE
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::NO_STATE;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::BANG_2_0;
            return true;
        }
    }
    state.node = node_t::TEXT_2_0_4_0;
    return true;
}

inline bool httpReq::text_2_0_5_0(state_t & state)
{
    static uint8_t text[] = { 0x4f, 0x50, 0x54, 0x49, 0x4f, 0x4e, 0x53 }; // OPTIONS
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::NO_STATE;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::BANG_2_0;
            return true;
        }
    }
    state.node = node_t::TEXT_2_0_5_0;
    return true;
}

inline bool httpReq::text_2_0_6_0(state_t & state)
{
    static uint8_t text[] = { 0x43, 0x4f, 0x4e, 0x4e, 0x45, 0x43, 0x54 }; // CONNECT
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::NO_STATE;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::BANG_2_0;
            return true;
        }
    }
    state.node = node_t::TEXT_2_0_6_0;
    return true;
}

inline bool httpReq::text_2_0_7_0(state_t & state)
{
    static uint8_t text[] = { 0x4c, 0x49, 0x4e, 0x4b }; // LINK
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::NO_STATE;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::BANG_2_0;
            return true;
        }
    }
    state.node = node_t::TEXT_2_0_7_0;
    return true;
}

inline bool httpReq::text_2_0_8_0(state_t & state)
{
    static uint8_t text[] = { 0x55, 0x4e, 0x4c, 0x49, 0x4e, 0x4b }; // UNLINK
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::NO_STATE;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::BANG_2_0;
            return true;
        }
    }
    state.node = node_t::TEXT_2_0_8_0;
    return true;
}

inline bool httpReq::text_2_0_9_0(state_t & state)
{
    static uint8_t text[] = { 0x54, 0x52, 0x41, 0x43, 0x45 }; // TRACE
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::NO_STATE;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::BANG_2_0;
            return true;
        }
    }
    state.node = node_t::TEXT_2_0_9_0;
    return true;
}

inline bool httpReq::text_2_0_10_0(state_t & state)
{
    static uint8_t text[] = { 0x50, 0x4f, 0x53, 0x54 }; // POST
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::NO_STATE;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::BANG_2_0;
            return true;
        }
    }
    state.node = node_t::TEXT_2_0_10_0;
    return true;
}

inline bool httpReq::bang_2_0(state_t & state)
{
    state.node = node_t::GOTO_2_2;
    if (&mainState != &state)
        mainState = state;
    for(auto it = prlState.begin(); it != prlState.end(); it++)
        it->node = node_t::NO_STATE;
    return true;
}

inline bool httpReq::goto_2_2(state_t & state)
{
    state.node = node_t::LABEL_5_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::GOTO_2_3;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::GOTO_2_3;
    }
    return true;
}

inline bool httpReq::goto_2_3(state_t & state)
{
    state.node = node_t::LABEL_8_0;
    if (state.retStackCount < sizeof(state.retStack)/sizeof(state.retStack[0]))
        state.retStack[state.retStackCount++] = node_t::LOOP_1_1;
    else
    {
        for(unsigned i = 1; i < sizeof(state.retStack)/sizeof(state.retStack[0]); i++)
            state.retStack[i - 1] = state.retStack[i];
        state.retStack[sizeof(state.retStack)/sizeof(state.retStack[0]) - 1] = node_t::LOOP_1_1;
    }
    return true;
}

inline bool httpReq::text_3_0(state_t & state)
{
    static uint8_t text[] = { 0xd }; // \xd
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::TEXT_3_1;
            state.eatSymCount = 0;
            return true;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::TEXT_3_1;
            return true;
        }
    }
    state.node = node_t::TEXT_3_0;
    return true;
}

inline bool httpReq::text_3_1(state_t & state)
{
    static uint8_t text[] = { 0xa }; // \xa
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::NO_STATE;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::LOOP_1_1;
            return true;
        }
    }
    state.node = node_t::TEXT_3_1;
    return true;
}

inline bool httpReq::loop_5_0(state_t & state)
{
    return label_5_0(state);
}

inline bool httpReq::label_5_0(state_t & state)
{
    state.node = node_t::LOOP_5_1;
    return true;
}

inline bool httpReq::loop_5_1(state_t & state)
{
    return range_6_0(state);
}

inline bool httpReq::range_6_0(state_t & state)
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
    while(state.data < state.end)
    {
        unsigned stateDataCount = 1;
        for(unsigned i = 0; i < stateDataCount; i++)
            if (exitSym[uint8_t(state.data[i])])
            {
                state.data += i;
                state.eatSymCount += i;
                state.node = (state.eatSymCount >= 1) ? node_t::STRING_6_1 : node_t::NO_STATE;
                bool ret = (state.node == node_t::STRING_6_1);
                state.eatSymCount = 0;
                return ret;
            }
        state.data += stateDataCount;
        state.node = node_t::STRING_6_1;
        return true;
    }
    state.node = node_t::RANGE_6_0;
    return true;
}

inline void httpReq::_string_6_1(const char * data, unsigned len, bool isFirst)
{
    if (isFirst)
        httpReqResult::url.clear();
    else if ((httpReqResult::url.length() + len) > 128)
        len = 128 - httpReqResult::url.length();
    httpReqResult::url.append(data, len);
}

inline bool httpReq::string_6_1(state_t & state)
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
    bool isFirstData = !state.eatSymCount;
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        unsigned exitCount = 0;
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                exitCount = 0;
            else if (exitSym[uint8_t(state.data[1])])
                exitCount = 1;
            else if (exitSym[uint8_t(state.data[2])])
                exitCount = 2;
            else if (exitSym[uint8_t(state.data[3])])
                exitCount = 3;
            else if (exitSym[uint8_t(state.data[4])])
                exitCount = 4;
            else if (exitSym[uint8_t(state.data[5])])
                exitCount = 5;
            else if (exitSym[uint8_t(state.data[6])])
                exitCount = 6;
            else if (exitSym[uint8_t(state.data[7])])
                exitCount = 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.data += exitCount;
        _string_6_1(beginData, unsigned(state.data - beginData), isFirstData);
        state.eatSymCount += unsigned(state.data - beginData);
        state.node = (state.eatSymCount >= 1) ? node_t::RANGE_6_2 : node_t::NO_STATE;
        bool ret = (state.node == node_t::RANGE_6_2);
        state.eatSymCount = 0;
        return ret;
    }
    state.eatSymCount += unsigned(state.data - beginData);
    if (beginData < state.data)
        _string_6_1(beginData, unsigned(state.data - beginData), isFirstData);
    state.node = node_t::STRING_6_1;
    return true;
}

inline bool httpReq::range_6_2(state_t & state)
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
    while(state.data < state.end)
    {
        unsigned stateDataCount = 1;
        for(unsigned i = 0; i < stateDataCount; i++)
            if (exitSym[uint8_t(state.data[i])])
            {
                state.data += i;
                state.eatSymCount += i;
                state.node = (state.eatSymCount >= 1) ? node_t::FUNC_6_3 : node_t::NO_STATE;
                bool ret = (state.node == node_t::FUNC_6_3);
                state.eatSymCount = 0;
                return ret;
            }
        state.data += stateDataCount;
        state.node = node_t::FUNC_6_3;
        return true;
    }
    state.node = node_t::RANGE_6_2;
    return true;
}

inline bool httpReq::_func_6_3()
{
     printf("URL(%lu): %s\n", url.length(), url.c_str()); 
    return true;
}
inline bool httpReq::func_6_3(state_t & state)
{
    bool ret = _func_6_3();
    state.node = ret ? node_t::TEXT_6_4 : node_t::NO_STATE;
    return ret;
}

inline bool httpReq::text_6_4(state_t & state)
{
    static uint8_t text[] = { 0x48, 0x54, 0x54, 0x50, 0x2f }; // HTTP/
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::NO_STATE;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::RANGE_6_5;
            return true;
        }
    }
    state.node = node_t::TEXT_6_4;
    return true;
}

inline bool httpReq::range_6_5(state_t & state)
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
    while(state.data < state.end)
    {
        unsigned stateDataCount = 1;
        for(unsigned i = 0; i < stateDataCount; i++)
            if (exitSym[uint8_t(state.data[i])])
            {
                state.data += i;
                state.eatSymCount += i;
                state.node = (state.eatSymCount >= 1) ? node_t::TEXT_6_6 : node_t::NO_STATE;
                bool ret = (state.node == node_t::TEXT_6_6);
                state.eatSymCount = 0;
                return ret;
            }
        state.data += stateDataCount;
        state.node = node_t::TEXT_6_6;
        return true;
    }
    state.node = node_t::RANGE_6_5;
    return true;
}

inline bool httpReq::text_6_6(state_t & state)
{
    static uint8_t text[] = { 0x2e }; // .
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::NO_STATE;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::RANGE_6_7;
            return true;
        }
    }
    state.node = node_t::TEXT_6_6;
    return true;
}

inline bool httpReq::range_6_7(state_t & state)
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
    while(state.data < state.end)
    {
        unsigned stateDataCount = 1;
        for(unsigned i = 0; i < stateDataCount; i++)
            if (exitSym[uint8_t(state.data[i])])
            {
                state.data += i;
                state.eatSymCount += i;
                state.node = (state.eatSymCount >= 1) ? node_t::TEXT_6_8 : node_t::NO_STATE;
                bool ret = (state.node == node_t::TEXT_6_8);
                state.eatSymCount = 0;
                return ret;
            }
        state.data += stateDataCount;
        state.node = node_t::TEXT_6_8;
        return true;
    }
    state.node = node_t::RANGE_6_7;
    return true;
}

inline bool httpReq::text_6_8(state_t & state)
{
    static uint8_t text[] = { 0xd }; // \xd
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::TEXT_6_9;
            state.eatSymCount = 0;
            return true;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::TEXT_6_9;
            return true;
        }
    }
    state.node = node_t::TEXT_6_8;
    return true;
}

inline bool httpReq::text_6_9(state_t & state)
{
    static uint8_t text[] = { 0xa }; // \xa
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::NO_STATE;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::RET_6_10;
            return true;
        }
    }
    state.node = node_t::TEXT_6_9;
    return true;
}

inline bool httpReq::ret_6_10(state_t & state)
{
    state.node = state.retStackCount ? state.retStack[--state.retStackCount] : node_t::NO_STATE;
    return state.node != node_t::NO_STATE;
}

inline bool httpReq::loop_8_0(state_t & state)
{
    return label_8_0(state);
}

inline bool httpReq::label_8_0(state_t & state)
{
    state.node = node_t::LOOP_8_1;
    return true;
}

inline bool httpReq::loop_8_1(state_t & state)
{
    if (state.data == state.end)
        return true;
    state_t startState = state;
    if (text_9_0(state, true)) // case_1
        return true;
    state = startState;
    if (any_10_0(state) && state.node == node_t::BANG_10_0 && bang_10_0(state) && state.node == node_t::RANGE_10_2) // case_2
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (any_11_0(state) && state.node == node_t::BANG_11_0 && bang_11_0(state) && state.node == node_t::RANGE_11_2) // case_3
        return true;
    else if (state.node != node_t::NO_STATE)
        prlState.push_back(state);
    state = startState;
    if (range_12_0(state)) // case_4
        return true;
    state = startState;
    if (text_13_0(state)) // case_5
        return true;
    state = startState;
    state.node = node_t::RANGE_16_0;
    return true;
}

inline bool httpReq::text_9_0(state_t & state, bool isCaseCall)
{
    static uint8_t text[] = { 0x68, 0x6f, 0x73, 0x74, 0x3a }; // Host:
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (sym >= 'A' && sym <= 'Z')
            sym |= 0x20;
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::RANGE_16_0;
            bool ret = isCaseCall && state.eatSymCount > 1;
            state.eatSymCount = 0;
            return ret;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::RANGE_9_1;
            return true;
        }
    }
    state.node = node_t::TEXT_9_0;
    return true;
}

inline bool httpReq::range_9_1(state_t & state)
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
        unsigned exitCount = 0;
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                exitCount = 0;
            else if (exitSym[uint8_t(state.data[1])])
                exitCount = 1;
            else if (exitSym[uint8_t(state.data[2])])
                exitCount = 2;
            else if (exitSym[uint8_t(state.data[3])])
                exitCount = 3;
            else if (exitSym[uint8_t(state.data[4])])
                exitCount = 4;
            else if (exitSym[uint8_t(state.data[5])])
                exitCount = 5;
            else if (exitSym[uint8_t(state.data[6])])
                exitCount = 6;
            else if (exitSym[uint8_t(state.data[7])])
                exitCount = 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.data += exitCount;
        state.eatSymCount += unsigned(state.data - beginData);
        state.node = (state.eatSymCount >= 1) ? node_t::STRING_9_2 : node_t::RANGE_16_0;
        bool ret = (state.node == node_t::STRING_9_2);
        state.eatSymCount = 0;
        return ret;
    }
    state.eatSymCount += unsigned(state.data - beginData);
    state.node = node_t::RANGE_9_1;
    return true;
}

inline void httpReq::_string_9_2(const char * data, unsigned len, bool isFirst)
{
    if (isFirst)
        httpReqResult::host.clear();
    else if ((httpReqResult::host.length() + len) > 64)
        len = 64 - httpReqResult::host.length();
    httpReqResult::host.append(data, len);
}

inline bool httpReq::string_9_2(state_t & state)
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
    bool isFirstData = !state.eatSymCount;
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        unsigned exitCount = 0;
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                exitCount = 0;
            else if (exitSym[uint8_t(state.data[1])])
                exitCount = 1;
            else if (exitSym[uint8_t(state.data[2])])
                exitCount = 2;
            else if (exitSym[uint8_t(state.data[3])])
                exitCount = 3;
            else if (exitSym[uint8_t(state.data[4])])
                exitCount = 4;
            else if (exitSym[uint8_t(state.data[5])])
                exitCount = 5;
            else if (exitSym[uint8_t(state.data[6])])
                exitCount = 6;
            else if (exitSym[uint8_t(state.data[7])])
                exitCount = 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.data += exitCount;
        _string_9_2(beginData, unsigned(state.data - beginData), isFirstData);
        state.eatSymCount += unsigned(state.data - beginData);
        state.node = (state.eatSymCount >= 1) ? node_t::FUNC_9_3 : node_t::RANGE_16_0;
        bool ret = (state.node == node_t::FUNC_9_3);
        state.eatSymCount = 0;
        return ret;
    }
    state.eatSymCount += unsigned(state.data - beginData);
    if (beginData < state.data)
        _string_9_2(beginData, unsigned(state.data - beginData), isFirstData);
    state.node = node_t::STRING_9_2;
    return true;
}

inline bool httpReq::_func_9_3()
{
     printf("HOST: %s\n", host.c_str()); 
    return true;
}
inline bool httpReq::func_9_3(state_t & state)
{
    bool ret = _func_9_3();
    state.node = ret ? node_t::RANGE_9_4 : node_t::RANGE_16_0;
    return ret;
}

inline bool httpReq::range_9_4(state_t & state)
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
    while(state.data < state.end)
    {
        unsigned exitCount = 0;
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                exitCount = 0;
            else if (exitSym[uint8_t(state.data[1])])
                exitCount = 1;
            else if (exitSym[uint8_t(state.data[2])])
                exitCount = 2;
            else if (exitSym[uint8_t(state.data[3])])
                exitCount = 3;
            else if (exitSym[uint8_t(state.data[4])])
                exitCount = 4;
            else if (exitSym[uint8_t(state.data[5])])
                exitCount = 5;
            else if (exitSym[uint8_t(state.data[6])])
                exitCount = 6;
            else if (exitSym[uint8_t(state.data[7])])
                exitCount = 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.data += exitCount;
        state.node = node_t::TEXT_9_5;
        bool ret = (state.node == node_t::TEXT_9_5);
        state.eatSymCount = 0;
        return ret;
    }
    state.eatSymCount += unsigned(state.data - beginData);
    state.node = node_t::RANGE_9_4;
    return true;
}

inline bool httpReq::text_9_5(state_t & state)
{
    static uint8_t text[] = { 0xd }; // \xd
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::TEXT_9_6;
            state.eatSymCount = 0;
            return true;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::TEXT_9_6;
            return true;
        }
    }
    state.node = node_t::TEXT_9_5;
    return true;
}

inline bool httpReq::text_9_6(state_t & state)
{
    static uint8_t text[] = { 0xa }; // \xa
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::RANGE_16_0;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::LOOP_8_1;
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
    static uint8_t text[] = { 0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a }; // Content-Type:
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (sym >= 'A' && sym <= 'Z')
            sym |= 0x20;
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::NO_STATE;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
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
    while(state.data < state.end)
    {
        unsigned stateDataCount = 1;
        for(unsigned i = 0; i < stateDataCount; i++)
            if (exitSym[uint8_t(state.data[i])])
            {
                state.data += i;
                state.eatSymCount += i;
                state.node = (state.eatSymCount >= 1) ? node_t::STRING_10_3 : node_t::RANGE_16_0;
                bool ret = (state.node == node_t::STRING_10_3);
                state.eatSymCount = 0;
                return ret;
            }
        state.data += stateDataCount;
        state.node = node_t::STRING_10_3;
        return true;
    }
    state.node = node_t::RANGE_10_2;
    return true;
}

inline void httpReq::_string_10_3(const char * data, unsigned len, bool isFirst)
{
    if (isFirst)
        httpReqResult::type.clear();
    else if ((httpReqResult::type.length() + len) > 256)
        len = 256 - httpReqResult::type.length();
    httpReqResult::type.append(data, len);
}

inline bool httpReq::string_10_3(state_t & state)
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
    bool isFirstData = !state.eatSymCount;
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        unsigned exitCount = 0;
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                exitCount = 0;
            else if (exitSym[uint8_t(state.data[1])])
                exitCount = 1;
            else if (exitSym[uint8_t(state.data[2])])
                exitCount = 2;
            else if (exitSym[uint8_t(state.data[3])])
                exitCount = 3;
            else if (exitSym[uint8_t(state.data[4])])
                exitCount = 4;
            else if (exitSym[uint8_t(state.data[5])])
                exitCount = 5;
            else if (exitSym[uint8_t(state.data[6])])
                exitCount = 6;
            else if (exitSym[uint8_t(state.data[7])])
                exitCount = 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.data += exitCount;
        _string_10_3(beginData, unsigned(state.data - beginData), isFirstData);
        state.eatSymCount += unsigned(state.data - beginData);
        state.node = (state.eatSymCount >= 1) ? node_t::FUNC_10_4 : node_t::RANGE_16_0;
        bool ret = (state.node == node_t::FUNC_10_4);
        state.eatSymCount = 0;
        return ret;
    }
    state.eatSymCount += unsigned(state.data - beginData);
    if (beginData < state.data)
        _string_10_3(beginData, unsigned(state.data - beginData), isFirstData);
    state.node = node_t::STRING_10_3;
    return true;
}

inline bool httpReq::_func_10_4()
{
     printf("GOT TYPE: %s\n", type.c_str()); 
    return true;
}
inline bool httpReq::func_10_4(state_t & state)
{
    bool ret = _func_10_4();
    state.node = ret ? node_t::TEXT_10_5 : node_t::RANGE_16_0;
    return ret;
}

inline bool httpReq::text_10_5(state_t & state)
{
    static uint8_t text[] = { 0xd }; // \xd
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::TEXT_10_6;
            state.eatSymCount = 0;
            return true;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::TEXT_10_6;
            return true;
        }
    }
    state.node = node_t::TEXT_10_5;
    return true;
}

inline bool httpReq::text_10_6(state_t & state)
{
    static uint8_t text[] = { 0xa }; // \xa
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::RANGE_16_0;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::LOOP_8_1;
            return true;
        }
    }
    state.node = node_t::TEXT_10_6;
    return true;
}

inline bool httpReq::any_11_0(state_t & state)
{
    if (state.data == state.end)
        return true;
    state_t startState = state;
    if (text_11_0_0_0(state) && state.node == node_t::BANG_11_0) // case_1
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

inline bool httpReq::text_11_0_0_0(state_t & state)
{
    static uint8_t text[] = { 0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x6c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x3a }; // Content-Length:
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (sym >= 'A' && sym <= 'Z')
            sym |= 0x20;
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::NO_STATE;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::BANG_11_0;
            return true;
        }
    }
    state.node = node_t::TEXT_11_0_0_0;
    return true;
}

inline bool httpReq::bang_11_0(state_t & state)
{
    state.node = node_t::RANGE_11_2;
    if (&mainState != &state)
        mainState = state;
    for(auto it = prlState.begin(); it != prlState.end(); it++)
        it->node = node_t::NO_STATE;
    return true;
}

inline bool httpReq::range_11_2(state_t & state)
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
    while(state.data < state.end)
    {
        unsigned stateDataCount = 1;
        for(unsigned i = 0; i < stateDataCount; i++)
            if (exitSym[uint8_t(state.data[i])])
            {
                state.data += i;
                state.eatSymCount += i;
                state.node = (state.eatSymCount >= 1) ? node_t::UINT_11_3 : node_t::RANGE_16_0;
                bool ret = (state.node == node_t::UINT_11_3);
                state.eatSymCount = 0;
                return ret;
            }
        state.data += stateDataCount;
        state.node = node_t::UINT_11_3;
        return true;
    }
    state.node = node_t::RANGE_11_2;
    return true;
}

inline void httpReq::_uint_11_3(const char * data, unsigned len, bool isFirst)
{
    if (isFirst)
        httpReqResult::contentLength = 0;
    for(const char * end = &data[len]; data < end; data++)
        httpReqResult::contentLength = httpReqResult::contentLength*10 + *data - '0';
}

inline bool httpReq::uint_11_3(state_t & state)
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
    bool isFirstData = !state.eatSymCount;
    const char * beginData = state.data;
    while(state.data < state.end)
    {
        unsigned exitCount = 0;
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                exitCount = 0;
            else if (exitSym[uint8_t(state.data[1])])
                exitCount = 1;
            else if (exitSym[uint8_t(state.data[2])])
                exitCount = 2;
            else if (exitSym[uint8_t(state.data[3])])
                exitCount = 3;
            else if (exitSym[uint8_t(state.data[4])])
                exitCount = 4;
            else if (exitSym[uint8_t(state.data[5])])
                exitCount = 5;
            else if (exitSym[uint8_t(state.data[6])])
                exitCount = 6;
            else if (exitSym[uint8_t(state.data[7])])
                exitCount = 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.data += exitCount;
        _uint_11_3(beginData, unsigned(state.data - beginData), isFirstData);
        state.eatSymCount += unsigned(state.data - beginData);
        state.node = (state.eatSymCount >= 1) ? node_t::FUNC_11_4 : node_t::RANGE_16_0;
        bool ret = (state.node == node_t::FUNC_11_4);
        state.eatSymCount = 0;
        return ret;
    }
    state.eatSymCount += unsigned(state.data - beginData);
    if (beginData < state.data)
        _uint_11_3(beginData, unsigned(state.data - beginData), isFirstData);
    state.node = node_t::UINT_11_3;
    return true;
}

inline bool httpReq::_func_11_4()
{
     printf("LENGTH: %lu\n", contentLength); 
    return true;
}
inline bool httpReq::func_11_4(state_t & state)
{
    bool ret = _func_11_4();
    state.node = ret ? node_t::TEXT_11_5 : node_t::RANGE_16_0;
    return ret;
}

inline bool httpReq::text_11_5(state_t & state)
{
    static uint8_t text[] = { 0xd }; // \xd
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::TEXT_11_6;
            state.eatSymCount = 0;
            return true;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::TEXT_11_6;
            return true;
        }
    }
    state.node = node_t::TEXT_11_5;
    return true;
}

inline bool httpReq::text_11_6(state_t & state)
{
    static uint8_t text[] = { 0xa }; // \xa
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::RANGE_16_0;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::LOOP_8_1;
            return true;
        }
    }
    state.node = node_t::TEXT_11_6;
    return true;
}

inline bool httpReq::range_12_0(state_t & state)
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
    while(state.data < state.end)
    {
        unsigned stateDataCount = 1;
        for(unsigned i = 0; i < stateDataCount; i++)
            if (exitSym[uint8_t(state.data[i])])
            {
                state.data += i;
                state.eatSymCount += i;
                state.node = (state.eatSymCount >= 1) ? node_t::RANGE_12_1 : node_t::RANGE_16_0;
                bool ret = (state.node == node_t::RANGE_12_1);
                state.eatSymCount = 0;
                return ret;
            }
        state.data += stateDataCount;
        state.node = node_t::RANGE_12_1;
        return true;
    }
    state.node = node_t::RANGE_12_0;
    return true;
}

inline bool httpReq::range_12_1(state_t & state)
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
    while(state.data < state.end)
    {
        unsigned exitCount = 0;
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                exitCount = 0;
            else if (exitSym[uint8_t(state.data[1])])
                exitCount = 1;
            else if (exitSym[uint8_t(state.data[2])])
                exitCount = 2;
            else if (exitSym[uint8_t(state.data[3])])
                exitCount = 3;
            else if (exitSym[uint8_t(state.data[4])])
                exitCount = 4;
            else if (exitSym[uint8_t(state.data[5])])
                exitCount = 5;
            else if (exitSym[uint8_t(state.data[6])])
                exitCount = 6;
            else if (exitSym[uint8_t(state.data[7])])
                exitCount = 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.data += exitCount;
        state.node = node_t::TEXT_12_2;
        bool ret = (state.node == node_t::TEXT_12_2);
        state.eatSymCount = 0;
        return ret;
    }
    state.eatSymCount += unsigned(state.data - beginData);
    state.node = node_t::RANGE_12_1;
    return true;
}

inline bool httpReq::text_12_2(state_t & state)
{
    static uint8_t text[] = { 0xd }; // \xd
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::TEXT_12_3;
            state.eatSymCount = 0;
            return true;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::TEXT_12_3;
            return true;
        }
    }
    state.node = node_t::TEXT_12_2;
    return true;
}

inline bool httpReq::text_12_3(state_t & state)
{
    static uint8_t text[] = { 0xa }; // \xa
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::RANGE_16_0;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::LOOP_8_1;
            return true;
        }
    }
    state.node = node_t::TEXT_12_3;
    return true;
}

inline bool httpReq::text_13_0(state_t & state)
{
    static uint8_t text[] = { 0xd }; // \xd
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::TEXT_13_1;
            state.eatSymCount = 0;
            return true;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::TEXT_13_1;
            return true;
        }
    }
    state.node = node_t::TEXT_13_0;
    return true;
}

inline bool httpReq::text_13_1(state_t & state)
{
    static uint8_t text[] = { 0xa }; // \xa
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::RANGE_16_0;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::FUNC_13_2;
            return true;
        }
    }
    state.node = node_t::TEXT_13_1;
    return true;
}

inline bool httpReq::_func_13_2()
{
      
    return true;
}
inline bool httpReq::func_13_2(state_t & state)
{
    bool ret = _func_13_2();
    state.node = ret ? node_t::CASES_13_3 : node_t::RANGE_16_0;
    return ret;
}

inline bool httpReq::cases_13_3(state_t & state)
{
    state_t startState = state;
    if (func_14_0(state)) // case_1
        return true;
    state = startState;
    if (ret_15_0(state)) // case_2
        return true;
    state = startState;
    state.node = node_t::RANGE_16_0;
    return true;
}

inline bool httpReq::_func_14_0()
{
     return contentLength; 
    return true;
}
inline bool httpReq::func_14_0(state_t & state)
{
    bool ret = _func_14_0();
    state.node = ret ? node_t::DATA_14_1 : node_t::RANGE_16_0;
    return ret;
}

inline bool httpReq::data_14_1(state_t & state)
{
    bool isFirstData = !state.eatSymCount;
    const char * beginData = state.data;
    if (!state.eatSymCount)
        state.node = node_t::DATA_14_1;
    if (state.data == state.end)
        return true;
    else if (state.eatSymCount + state.remainDataLen() >= contentLength)
    {
        state.data += (contentLength - state.eatSymCount);
        state.eatSymCount = 0;
        state.node = node_t::FUNC_14_2;
        httpReqResult::payload(beginData, unsigned(state.data - beginData), isFirstData, true);
    } else {
        state.eatSymCount += state.remainDataLen();
        state.data = state.end;
        httpReqResult::payload(beginData, unsigned(state.data - beginData), isFirstData, false);
    }
    return true;
}

inline bool httpReq::_func_14_2()
{
     contentLength = 0; 
    return true;
}
inline bool httpReq::func_14_2(state_t & state)
{
    bool ret = _func_14_2();
    state.node = ret ? node_t::RET_14_3 : node_t::RANGE_16_0;
    return ret;
}

inline bool httpReq::ret_14_3(state_t & state)
{
    state.node = state.retStackCount ? state.retStack[--state.retStackCount] : node_t::NO_STATE;
    return state.node != node_t::NO_STATE;
}

inline bool httpReq::ret_15_0(state_t & state)
{
    state.node = state.retStackCount ? state.retStack[--state.retStackCount] : node_t::NO_STATE;
    return state.node != node_t::NO_STATE;
}

inline bool httpReq::range_16_0(state_t & state)
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
    while(state.data < state.end)
    {
        unsigned exitCount = 0;
        if(&state.data[8] <= state.end)
        {
            if (exitSym[uint8_t(state.data[0])])
                exitCount = 0;
            else if (exitSym[uint8_t(state.data[1])])
                exitCount = 1;
            else if (exitSym[uint8_t(state.data[2])])
                exitCount = 2;
            else if (exitSym[uint8_t(state.data[3])])
                exitCount = 3;
            else if (exitSym[uint8_t(state.data[4])])
                exitCount = 4;
            else if (exitSym[uint8_t(state.data[5])])
                exitCount = 5;
            else if (exitSym[uint8_t(state.data[6])])
                exitCount = 6;
            else if (exitSym[uint8_t(state.data[7])])
                exitCount = 7;
            else
            {
                state.data += 8;
                continue;
            }
        }
        else if (!exitSym[uint8_t(state.data[0])])
        {
            state.data++;
            continue;
        }
        state.data += exitCount;
        state.node = node_t::TEXT_16_1;
        bool ret = (state.node == node_t::TEXT_16_1);
        state.eatSymCount = 0;
        return ret;
    }
    state.eatSymCount += unsigned(state.data - beginData);
    state.node = node_t::RANGE_16_0;
    return true;
}

inline bool httpReq::text_16_1(state_t & state)
{
    static uint8_t text[] = { 0xd }; // \xd
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::TEXT_16_2;
            state.eatSymCount = 0;
            return true;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::TEXT_16_2;
            return true;
        }
    }
    state.node = node_t::TEXT_16_1;
    return true;
}

inline bool httpReq::text_16_2(state_t & state)
{
    static uint8_t text[] = { 0xa }; // \xa
    for(; state.data < state.end; state.data++)
    {
        uint8_t sym = (uint8_t)state.data[0];
        if (text[state.eatSymCount++] != sym)
        {
            state.node = node_t::NO_STATE;
            return false;
        }
        else if (state.eatSymCount >= sizeof(text))
        {
            state.data++;
            state.eatSymCount = 0;
            state.node = node_t::LOOP_8_1;
            return true;
        }
    }
    state.node = node_t::TEXT_16_2;
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
        case node_t::LABEL_1_0: return "LABEL_1_0";
        case node_t::LOOP_1_1: return "LOOP_1_1";
        case node_t::ANY_2_0: return "ANY_2_0";
        case node_t::TEXT_2_0_0_0: return "TEXT_2_0_0_0";
        case node_t::TEXT_2_0_1_0: return "TEXT_2_0_1_0";
        case node_t::TEXT_2_0_2_0: return "TEXT_2_0_2_0";
        case node_t::TEXT_2_0_3_0: return "TEXT_2_0_3_0";
        case node_t::TEXT_2_0_4_0: return "TEXT_2_0_4_0";
        case node_t::TEXT_2_0_5_0: return "TEXT_2_0_5_0";
        case node_t::TEXT_2_0_6_0: return "TEXT_2_0_6_0";
        case node_t::TEXT_2_0_7_0: return "TEXT_2_0_7_0";
        case node_t::TEXT_2_0_8_0: return "TEXT_2_0_8_0";
        case node_t::TEXT_2_0_9_0: return "TEXT_2_0_9_0";
        case node_t::TEXT_2_0_10_0: return "TEXT_2_0_10_0";
        case node_t::BANG_2_0: return "BANG_2_0";
        case node_t::GOTO_2_2: return "GOTO_2_2";
        case node_t::GOTO_2_3: return "GOTO_2_3";
        case node_t::TEXT_3_0: return "TEXT_3_0";
        case node_t::TEXT_3_1: return "TEXT_3_1";
        case node_t::LOOP_5_0: return "LOOP_5_0";
        case node_t::LABEL_5_0: return "LABEL_5_0";
        case node_t::LOOP_5_1: return "LOOP_5_1";
        case node_t::RANGE_6_0: return "RANGE_6_0";
        case node_t::STRING_6_1: return "STRING_6_1";
        case node_t::RANGE_6_2: return "RANGE_6_2";
        case node_t::FUNC_6_3: return "FUNC_6_3";
        case node_t::TEXT_6_4: return "TEXT_6_4";
        case node_t::RANGE_6_5: return "RANGE_6_5";
        case node_t::TEXT_6_6: return "TEXT_6_6";
        case node_t::RANGE_6_7: return "RANGE_6_7";
        case node_t::TEXT_6_8: return "TEXT_6_8";
        case node_t::TEXT_6_9: return "TEXT_6_9";
        case node_t::RET_6_10: return "RET_6_10";
        case node_t::LOOP_8_0: return "LOOP_8_0";
        case node_t::LABEL_8_0: return "LABEL_8_0";
        case node_t::LOOP_8_1: return "LOOP_8_1";
        case node_t::TEXT_9_0: return "TEXT_9_0";
        case node_t::RANGE_9_1: return "RANGE_9_1";
        case node_t::STRING_9_2: return "STRING_9_2";
        case node_t::FUNC_9_3: return "FUNC_9_3";
        case node_t::RANGE_9_4: return "RANGE_9_4";
        case node_t::TEXT_9_5: return "TEXT_9_5";
        case node_t::TEXT_9_6: return "TEXT_9_6";
        case node_t::ANY_10_0: return "ANY_10_0";
        case node_t::TEXT_10_0_0_0: return "TEXT_10_0_0_0";
        case node_t::BANG_10_0: return "BANG_10_0";
        case node_t::RANGE_10_2: return "RANGE_10_2";
        case node_t::STRING_10_3: return "STRING_10_3";
        case node_t::FUNC_10_4: return "FUNC_10_4";
        case node_t::TEXT_10_5: return "TEXT_10_5";
        case node_t::TEXT_10_6: return "TEXT_10_6";
        case node_t::ANY_11_0: return "ANY_11_0";
        case node_t::TEXT_11_0_0_0: return "TEXT_11_0_0_0";
        case node_t::BANG_11_0: return "BANG_11_0";
        case node_t::RANGE_11_2: return "RANGE_11_2";
        case node_t::UINT_11_3: return "UINT_11_3";
        case node_t::FUNC_11_4: return "FUNC_11_4";
        case node_t::TEXT_11_5: return "TEXT_11_5";
        case node_t::TEXT_11_6: return "TEXT_11_6";
        case node_t::RANGE_12_0: return "RANGE_12_0";
        case node_t::RANGE_12_1: return "RANGE_12_1";
        case node_t::TEXT_12_2: return "TEXT_12_2";
        case node_t::TEXT_12_3: return "TEXT_12_3";
        case node_t::TEXT_13_0: return "TEXT_13_0";
        case node_t::TEXT_13_1: return "TEXT_13_1";
        case node_t::FUNC_13_2: return "FUNC_13_2";
        case node_t::CASES_13_3: return "CASES_13_3";
        case node_t::FUNC_14_0: return "FUNC_14_0";
        case node_t::DATA_14_1: return "DATA_14_1";
        case node_t::FUNC_14_2: return "FUNC_14_2";
        case node_t::RET_14_3: return "RET_14_3";
        case node_t::RET_15_0: return "RET_15_0";
        case node_t::RANGE_16_0: return "RANGE_16_0";
        case node_t::TEXT_16_1: return "TEXT_16_1";
        case node_t::TEXT_16_2: return "TEXT_16_2";
        case node_t::NO_STATE: return "NO_STATE";
        default: return "unknown";
    };
}

