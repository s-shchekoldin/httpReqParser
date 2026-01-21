// ==============================================================
// Date: 2026-01-21 18:12:37 GMT
// Generated using vProto(2026.01.21)        https://www.cgen.dev
// Author: Sergey V. Shchekoldin     Email: shchekoldin@gmail.com
// autoSSE: 1 cpp98: 0 (SSE4.2: 0 AVX2: 1 SSE2: 1)
// ==============================================================

// To enable AVX2 use: -mavx2
// To enable SSE2 use: -msse2
// Or: -march=native (may break compatibility)
#include "httpReq.h"
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

inline void httpReq::parse(StateT & state)
{
    while(true)
    {
#ifdef DEBUG_MODE
        printf("State%s: %s data: [%x, %x, %x, %x, %x]=%.*s\n", &state == &mstate ? "" : "*", state.name(),
            uint8_t(&state.data[0] < state.end ? state.data[0] : 0),
            uint8_t(&state.data[1] < state.end ? state.data[1] : 0),
            uint8_t(&state.data[2] < state.end ? state.data[2] : 0),
            uint8_t(&state.data[3] < state.end ? state.data[3] : 0),
            uint8_t(&state.data[4] < state.end ? state.data[4] : 0),
            10, state.data);
#endif
        NodeT n = state.node;
        const char * d = state.data;
        switch(state.node)
        {
            case NodeT::Loop1_0: loop1_0(state); break;
            case NodeT::Any1_0: any1_0(state); break;
            case NodeT::Text1_0_0_0: text1_0_0_0(state); break;
            case NodeT::Text1_0_1_0: text1_0_1_0(state); break;
            case NodeT::Text1_0_2_0: text1_0_2_0(state); break;
            case NodeT::Text1_0_3_0: text1_0_3_0(state); break;
            case NodeT::Text1_0_4_0: text1_0_4_0(state); break;
            case NodeT::Text1_0_5_0: text1_0_5_0(state); break;
            case NodeT::Text1_0_6_0: text1_0_6_0(state); break;
            case NodeT::Text1_0_7_0: text1_0_7_0(state); break;
            case NodeT::Text1_0_8_0: text1_0_8_0(state); break;
            case NodeT::Text1_0_9_0: text1_0_9_0(state); break;
            case NodeT::Text1_0_10_0: if (!text1_0_10_0(state) || state.node != NodeT::Bang1_0) break; [[fallthrough]];
            case NodeT::Bang1_0: if (!bang1_0(state) || state.node != NodeT::Call1_2) break; [[fallthrough]];
            case NodeT::Call1_2: if (!call1_2(state) || state.node != NodeT::Call1_3) break; [[fallthrough]];
            case NodeT::Call1_3: if (!call1_3(state) || state.node != NodeT::Reset1_4) break; [[fallthrough]];
            case NodeT::Reset1_4: reset1_4(state); break;
            case NodeT::Loop3_0: loop3_0(state); break;
            case NodeT::Label3_0: if (!label3_0(state) || state.node != NodeT::Loop3_1) break; [[fallthrough]];
            case NodeT::Loop3_1: loop3_1(state); break;
            case NodeT::Range4_0: if (!range4_0(state) || state.node != NodeT::String4_1) break; [[fallthrough]];
            case NodeT::String4_1: if (!string4_1(state) || state.node != NodeT::Range4_2) break; [[fallthrough]];
            case NodeT::Range4_2: if (!range4_2(state) || state.node != NodeT::Func4_3) break; [[fallthrough]];
            case NodeT::Func4_3: if (!func4_3(state) || state.node != NodeT::Text4_4) break; [[fallthrough]];
            case NodeT::Text4_4: if (!text4_4(state) || state.node != NodeT::Range4_5) break; [[fallthrough]];
            case NodeT::Range4_5: if (!range4_5(state) || state.node != NodeT::Text4_6) break; [[fallthrough]];
            case NodeT::Text4_6: if (!text4_6(state) || state.node != NodeT::Range4_7) break; [[fallthrough]];
            case NodeT::Range4_7: if (!range4_7(state) || state.node != NodeT::Text4_8) break; [[fallthrough]];
            case NodeT::Text4_8: if (!text4_8(state) || state.node != NodeT::Text4_9) break; [[fallthrough]];
            case NodeT::Text4_9: if (!text4_9(state) || state.node != NodeT::Ret4_10) break; [[fallthrough]];
            case NodeT::Ret4_10: ret4_10(state); break;
            case NodeT::Loop6_0: loop6_0(state); break;
            case NodeT::Label6_0: if (!label6_0(state) || state.node != NodeT::Loop6_1) break; [[fallthrough]];
            case NodeT::Loop6_1: loop6_1(state); break;
            case NodeT::Text7_0: if (!text7_0(state, false) || state.node != NodeT::Range7_1) break; [[fallthrough]];
            case NodeT::Range7_1: if (!range7_1(state) || state.node != NodeT::String7_2) break; [[fallthrough]];
            case NodeT::String7_2: if (!string7_2(state) || state.node != NodeT::Func7_3) break; [[fallthrough]];
            case NodeT::Func7_3: if (!func7_3(state) || state.node != NodeT::Text7_4) break; [[fallthrough]];
            case NodeT::Text7_4: if (!text7_4(state) || state.node != NodeT::Text7_5) break; [[fallthrough]];
            case NodeT::Text7_5: text7_5(state); break;
            case NodeT::Any8_0: any8_0(state); break;
            case NodeT::Text8_0_0_0: if (!text8_0_0_0(state) || state.node != NodeT::Bang8_0) break; [[fallthrough]];
            case NodeT::Bang8_0: if (!bang8_0(state) || state.node != NodeT::Range8_2) break; [[fallthrough]];
            case NodeT::Range8_2: if (!range8_2(state) || state.node != NodeT::String8_3) break; [[fallthrough]];
            case NodeT::String8_3: if (!string8_3(state) || state.node != NodeT::Func8_4) break; [[fallthrough]];
            case NodeT::Func8_4: if (!func8_4(state) || state.node != NodeT::Text8_5) break; [[fallthrough]];
            case NodeT::Text8_5: if (!text8_5(state) || state.node != NodeT::Text8_6) break; [[fallthrough]];
            case NodeT::Text8_6: text8_6(state); break;
            case NodeT::Any9_0: any9_0(state); break;
            case NodeT::Text9_0_0_0: if (!text9_0_0_0(state) || state.node != NodeT::Bang9_0) break; [[fallthrough]];
            case NodeT::Bang9_0: if (!bang9_0(state) || state.node != NodeT::Range9_2) break; [[fallthrough]];
            case NodeT::Range9_2: if (!range9_2(state) || state.node != NodeT::Uint9_3) break; [[fallthrough]];
            case NodeT::Uint9_3: if (!uint9_3(state) || state.node != NodeT::Func9_4) break; [[fallthrough]];
            case NodeT::Func9_4: if (!func9_4(state) || state.node != NodeT::Text9_5) break; [[fallthrough]];
            case NodeT::Text9_5: if (!text9_5(state) || state.node != NodeT::Text9_6) break; [[fallthrough]];
            case NodeT::Text9_6: text9_6(state); break;
            case NodeT::Range10_0: if (!range10_0(state) || state.node != NodeT::Range10_1) break; [[fallthrough]];
            case NodeT::Range10_1: if (!range10_1(state) || state.node != NodeT::Text10_2) break; [[fallthrough]];
            case NodeT::Text10_2: if (!text10_2(state) || state.node != NodeT::Text10_3) break; [[fallthrough]];
            case NodeT::Text10_3: text10_3(state); break;
            case NodeT::Text11_0: if (!text11_0(state) || state.node != NodeT::Text11_1) break; [[fallthrough]];
            case NodeT::Text11_1: if (!text11_1(state) || state.node != NodeT::Cases11_2) break; [[fallthrough]];
            case NodeT::Cases11_2: cases11_2(state); break;
            case NodeT::If12_0: if (!if12_0(state) || state.node != NodeT::Data12_1) break; [[fallthrough]];
            case NodeT::Data12_1: if (!data12_1(state) || state.node != NodeT::Ret12_2) break; [[fallthrough]];
            case NodeT::Ret12_2: ret12_2(state); break;
            case NodeT::Ret13_0: ret13_0(state); break;
            case NodeT::Range14_0: if (!range14_0(state) || state.node != NodeT::Text14_1) break; [[fallthrough]];
            case NodeT::Text14_1: text14_1(state); break;
            case NodeT::NoState:
            default: return;
        }; // switch
        if (d == state.data && n == state.node) [[unlikely]]
            break;
    }
}

bool httpReq::parse(const char * data, unsigned len)
{
    mstate.data = data;
    mstate.end = &data[len];
    for(auto & p : pstate)
    {
        p.data = data;
        p.end = &data[len];
    }
    for(bool reparse = true; reparse; )
    {
        reparse = false;
        unsigned outflow = 0;;
        for(unsigned i = 0; i < pstate.size(); i++)
        {
            if (pstate[i].remain())
            {
                StateT state = pstate[i];
                parse(state);
                if (state.node == NodeT::NoState)
                    continue;
                reparse = true;
                pstate[outflow] = state;
            }
            else if (i != outflow)
                pstate[outflow] = pstate[i];
            outflow++;
        }
        pstate.resize(outflow);
        parse(mstate);
        if (mstate.node != NodeT::NoState && mstate.remain())
            reparse = true;
    }
    return mstate.node != NodeT::NoState || !pstate.empty();
}

inline bool httpReq::loop1_0(StateT & state)
{
    return any1_0(state);
}

inline bool httpReq::any1_0(StateT & state)
{
    if (state.data == state.end)
        return true;
    StateT istate = state;
    // case_1: Text1_0_0_0
    if (text1_0_0_0(state) && state.node == NodeT::Bang1_0)
        return true;
    else if (state.node != NodeT::NoState)
        pstate.push_back(state);
    state = istate;
    // case_2: Text1_0_1_0
    if (text1_0_1_0(state) && state.node == NodeT::Bang1_0)
        return true;
    else if (state.node != NodeT::NoState)
        pstate.push_back(state);
    state = istate;
    // case_3: Text1_0_2_0
    if (text1_0_2_0(state) && state.node == NodeT::Bang1_0)
        return true;
    else if (state.node != NodeT::NoState)
        pstate.push_back(state);
    state = istate;
    // case_4: Text1_0_3_0
    if (text1_0_3_0(state) && state.node == NodeT::Bang1_0)
        return true;
    else if (state.node != NodeT::NoState)
        pstate.push_back(state);
    state = istate;
    // case_5: Text1_0_4_0
    if (text1_0_4_0(state) && state.node == NodeT::Bang1_0)
        return true;
    else if (state.node != NodeT::NoState)
        pstate.push_back(state);
    state = istate;
    // case_6: Text1_0_5_0
    if (text1_0_5_0(state) && state.node == NodeT::Bang1_0)
        return true;
    else if (state.node != NodeT::NoState)
        pstate.push_back(state);
    state = istate;
    // case_7: Text1_0_6_0
    if (text1_0_6_0(state) && state.node == NodeT::Bang1_0)
        return true;
    else if (state.node != NodeT::NoState)
        pstate.push_back(state);
    state = istate;
    // case_8: Text1_0_7_0
    if (text1_0_7_0(state) && state.node == NodeT::Bang1_0)
        return true;
    else if (state.node != NodeT::NoState)
        pstate.push_back(state);
    state = istate;
    // case_9: Text1_0_8_0
    if (text1_0_8_0(state) && state.node == NodeT::Bang1_0)
        return true;
    else if (state.node != NodeT::NoState)
        pstate.push_back(state);
    state = istate;
    // case_10: Text1_0_9_0
    if (text1_0_9_0(state) && state.node == NodeT::Bang1_0)
        return true;
    else if (state.node != NodeT::NoState)
        pstate.push_back(state);
    state = istate;
    // case_11: Text1_0_10_0
    if (text1_0_10_0(state) && state.node == NodeT::Bang1_0)
        return true;
    else if (state.node != NodeT::NoState)
        pstate.push_back(state);
    state.node = NodeT::NoState;
    return false;
}

inline bool httpReq::text1_0_0_0(StateT & state) const
{
    const static std::array<uint8_t, 3> text = {0x47, 0x45, 0x54}; // get
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Bang1_0;
            return true;
        }
    }
    state.node = NodeT::Text1_0_0_0;
    return true;
}

inline bool httpReq::text1_0_1_0(StateT & state) const
{
    const static std::array<uint8_t, 4> text = {0x48, 0x45, 0x41, 0x44}; // head
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Bang1_0;
            return true;
        }
    }
    state.node = NodeT::Text1_0_1_0;
    return true;
}

inline bool httpReq::text1_0_2_0(StateT & state) const
{
    const static std::array<uint8_t, 3> text = {0x50, 0x55, 0x54}; // put
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Bang1_0;
            return true;
        }
    }
    state.node = NodeT::Text1_0_2_0;
    return true;
}

inline bool httpReq::text1_0_3_0(StateT & state) const
{
    const static std::array<uint8_t, 5> text = {0x50, 0x41, 0x54, 0x43, 0x48}; // patch
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Bang1_0;
            return true;
        }
    }
    state.node = NodeT::Text1_0_3_0;
    return true;
}

inline bool httpReq::text1_0_4_0(StateT & state) const
{
    const static std::array<uint8_t, 6> text = {0x44, 0x45, 0x4c, 0x45, 0x54, 0x45}; // delete
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Bang1_0;
            return true;
        }
    }
    state.node = NodeT::Text1_0_4_0;
    return true;
}

inline bool httpReq::text1_0_5_0(StateT & state) const
{
    const static std::array<uint8_t, 7> text = {0x4f, 0x50, 0x54, 0x49, 0x4f, 0x4e, 0x53}; // options
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Bang1_0;
            return true;
        }
    }
    state.node = NodeT::Text1_0_5_0;
    return true;
}

inline bool httpReq::text1_0_6_0(StateT & state) const
{
    const static std::array<uint8_t, 7> text = {0x43, 0x4f, 0x4e, 0x4e, 0x45, 0x43, 0x54}; // connect
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Bang1_0;
            return true;
        }
    }
    state.node = NodeT::Text1_0_6_0;
    return true;
}

inline bool httpReq::text1_0_7_0(StateT & state) const
{
    const static std::array<uint8_t, 4> text = {0x4c, 0x49, 0x4e, 0x4b}; // link
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Bang1_0;
            return true;
        }
    }
    state.node = NodeT::Text1_0_7_0;
    return true;
}

inline bool httpReq::text1_0_8_0(StateT & state) const
{
    const static std::array<uint8_t, 6> text = {0x55, 0x4e, 0x4c, 0x49, 0x4e, 0x4b}; // unlink
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Bang1_0;
            return true;
        }
    }
    state.node = NodeT::Text1_0_8_0;
    return true;
}

inline bool httpReq::text1_0_9_0(StateT & state) const
{
    const static std::array<uint8_t, 5> text = {0x54, 0x52, 0x41, 0x43, 0x45}; // trace
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Bang1_0;
            return true;
        }
    }
    state.node = NodeT::Text1_0_9_0;
    return true;
}

inline bool httpReq::text1_0_10_0(StateT & state) const
{
    const static std::array<uint8_t, 4> text = {0x50, 0x4f, 0x53, 0x54}; // post
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Bang1_0;
            return true;
        }
    }
    state.node = NodeT::Text1_0_10_0;
    return true;
}

inline bool httpReq::bang1_0(StateT & state)
{
    state.node = NodeT::Call1_2;
    if (&mstate != &state)
    {
        mstate = state;
        state.node = NodeT::NoState;
    }
    pstate.clear();
    return true;
}

inline bool httpReq::call1_2(StateT & state) const
{
    state.node = NodeT::Label3_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Call1_3;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Call1_3;
    }
    return true;
}

inline bool httpReq::call1_3(StateT & state) const
{
    state.node = NodeT::Label6_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Reset1_4;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Reset1_4;
    }
    return true;
}

inline bool httpReq::reset1_4(StateT & state)
{
    const char * d = state.data;
    const char * e = state.end;
    if (&mstate != &state)
        state.node = NodeT::NoState;
    httpReq::reset();
    mstate.data = d;
    mstate.end = e;
    return true;
}

inline bool httpReq::loop3_0(StateT & state) const
{
    return label3_0(state);
}

inline bool httpReq::label3_0(StateT & state) const
{
    state.node = NodeT::Loop3_1;
    return true;
}

inline bool httpReq::loop3_1(StateT & state) const
{
    return range4_0(state);
}

inline bool httpReq::range4_0(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end)
    {
        if (terminator[uint8_t(state.data[0])]) [[unlikely]]
        {
            state.consumed += unsigned(state.data - datastart);
            state.node = (state.consumed >= 1) ? NodeT::String4_1 : NodeT::NoState;
            bool ret = (state.node == NodeT::String4_1);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = NodeT::String4_1;
        return true;
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range4_0;
    return true;
}

void httpReq::string4_1(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        httpReqResult::url.clear();
    if ((httpReqResult::url.length() + len) > 128)
        len = 128 - httpReqResult::url.length();
    httpReqResult::url.append(data, len);
}

inline bool httpReq::string4_1(StateT & state)
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
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
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        string4_1(datastart, unsigned(state.data - datastart), state.consumed);
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Range4_2;
            return true;
        } else {
            state.node = NodeT::NoState;
            return false;
        }
    }
    if (datastart < state.data)
        string4_1(datastart, unsigned(state.data - datastart), state.consumed);
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::String4_1;
    return true;
}

inline bool httpReq::range4_2(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end)
    {
        if (terminator[uint8_t(state.data[0])]) [[unlikely]]
        {
            state.consumed += unsigned(state.data - datastart);
            state.node = (state.consumed >= 1) ? NodeT::Func4_3 : NodeT::NoState;
            bool ret = (state.node == NodeT::Func4_3);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = NodeT::Func4_3;
        return true;
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range4_2;
    return true;
}

inline bool httpReq::func4_3()
{
     printf("URL: %s\n", url.c_str()); 
    return true;
}
inline bool httpReq::func4_3(StateT & state)
{
    if (func4_3())
    {
        state.node = NodeT::Text4_4;
        return true;
    }
    state.node = NodeT::NoState;
    return false;
}

inline bool httpReq::text4_4(StateT & state) const
{
    const static std::array<uint8_t, 5> text = {0x48, 0x54, 0x54, 0x50, 0x2f}; // http/
    for(; state.data < state.end; state.data++)
    {
        if (text[state.consumed] != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Range4_5;
            return true;
        }
    }
    state.node = NodeT::Text4_4;
    return true;
}

inline bool httpReq::range4_5(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end)
    {
        if (terminator[uint8_t(state.data[0])]) [[unlikely]]
        {
            state.consumed += unsigned(state.data - datastart);
            state.node = (state.consumed >= 1) ? NodeT::Text4_6 : NodeT::NoState;
            bool ret = (state.node == NodeT::Text4_6);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = NodeT::Text4_6;
        return true;
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range4_5;
    return true;
}

inline bool httpReq::text4_6(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x2E) != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Range4_7;
            return true;
        }
    }
    state.node = NodeT::Text4_6;
    return true;
}

inline bool httpReq::range4_7(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end)
    {
        if (terminator[uint8_t(state.data[0])]) [[unlikely]]
        {
            state.consumed += unsigned(state.data - datastart);
            state.node = (state.consumed >= 1) ? NodeT::Text4_8 : NodeT::NoState;
            bool ret = (state.node == NodeT::Text4_8);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = NodeT::Text4_8;
        return true;
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range4_7;
    return true;
}

inline bool httpReq::text4_8(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text4_9;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text4_9;
            return true;
        }
    }
    state.node = NodeT::Text4_8;
    return true;
}

inline bool httpReq::text4_9(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Ret4_10;
            return true;
        }
    }
    state.node = NodeT::Text4_9;
    return true;
}

inline bool httpReq::ret4_10(StateT & state) const
{
    state.node = state.rcount ? state.rstack[--state.rcount] : NodeT::NoState;
    return state.node != NodeT::NoState;
}

inline bool httpReq::loop6_0(StateT & state) const
{
    return label6_0(state);
}

inline bool httpReq::label6_0(StateT & state) const
{
    state.node = NodeT::Loop6_1;
    return true;
}

inline bool httpReq::loop6_1(StateT & state)
{
    if (state.data == state.end)
        return true;
    if (text7_0(state, true)) // case_1
        return true;
    StateT istate = state;
    if (any8_0(state)) // case_2
        return true;
    state = istate;
    if (any9_0(state)) // case_3
        return true;
    state = istate;
    if (range10_0(state)) // case_4
        return true;
    if (text11_0(state)) // case_5
        return true;
    state.node = NodeT::Range14_0;
    return true;
}

inline bool httpReq::text7_0(StateT & state, bool is_branch) const
{
    const static std::array<uint8_t, 5> text = {0x68, 0x6f, 0x73, 0x74, 0x3a}; // host:
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::Range14_0;
            bool ret = is_branch && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Range7_1;
            return true;
        }
    }
    state.node = NodeT::Text7_0;
    return true;
}

inline bool httpReq::range7_1(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
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
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::String7_2;
            return true;
        } else {
            state.node = NodeT::Range14_0;
            return false;
        }
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range7_1;
    return true;
}

void httpReq::string7_2(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        httpReqResult::host.clear();
    if ((httpReqResult::host.length() + len) > 64)
        len = 64 - httpReqResult::host.length();
    httpReqResult::host.append(data, len);
}

inline bool httpReq::string7_2(StateT & state)
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
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
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        string7_2(datastart, unsigned(state.data - datastart), state.consumed);
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Func7_3;
            return true;
        } else {
            state.node = NodeT::Range14_0;
            return false;
        }
    }
    if (datastart < state.data)
        string7_2(datastart, unsigned(state.data - datastart), state.consumed);
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::String7_2;
    return true;
}

inline bool httpReq::func7_3()
{
     printf("HOST: %s\n", host.c_str());     
    return true;
}
inline bool httpReq::func7_3(StateT & state)
{
    if (func7_3())
    {
        state.node = NodeT::Text7_4;
        return true;
    }
    state.node = NodeT::Range14_0;
    return false;
}

inline bool httpReq::text7_4(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text7_5;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text7_5;
            return true;
        }
    }
    state.node = NodeT::Text7_4;
    return true;
}

inline bool httpReq::text7_5(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Range14_0;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Loop6_1;
            return true;
        }
    }
    state.node = NodeT::Text7_5;
    return true;
}

inline bool httpReq::any8_0(StateT & state)
{
    if (state.data == state.end)
        return true;
    // case_1: Text8_0_0_0
    if (text8_0_0_0(state) && state.node == NodeT::Bang8_0)
        return true;
    else if (state.node != NodeT::NoState)
        pstate.push_back(state);
    state.node = NodeT::Range14_0;
    return false;
}

inline bool httpReq::text8_0_0_0(StateT & state) const
{
    const static std::array<uint8_t, 13> text = {0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a}; // content-type:
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::NoState;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Bang8_0;
            return true;
        }
    }
    state.node = NodeT::Text8_0_0_0;
    return true;
}

inline bool httpReq::bang8_0(StateT & state)
{
    state.node = NodeT::Range8_2;
    if (&mstate != &state)
    {
        mstate = state;
        state.node = NodeT::NoState;
    }
    pstate.clear();
    return true;
}

inline bool httpReq::range8_2(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
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
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::String8_3;
            return true;
        } else {
            state.node = NodeT::Range14_0;
            return false;
        }
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range8_2;
    return true;
}

void httpReq::string8_3(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        httpReqResult::type.clear();
    if ((httpReqResult::type.length() + len) > 64)
        len = 64 - httpReqResult::type.length();
    httpReqResult::type.append(data, len);
}

inline bool httpReq::string8_3(StateT & state)
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
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
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        string8_3(datastart, unsigned(state.data - datastart), state.consumed);
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Func8_4;
            return true;
        } else {
            state.node = NodeT::Range14_0;
            return false;
        }
    }
    if (datastart < state.data)
        string8_3(datastart, unsigned(state.data - datastart), state.consumed);
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::String8_3;
    return true;
}

inline bool httpReq::func8_4()
{
     printf("TYPE: %s\n", type.c_str());     
    return true;
}
inline bool httpReq::func8_4(StateT & state)
{
    if (func8_4())
    {
        state.node = NodeT::Text8_5;
        return true;
    }
    state.node = NodeT::Range14_0;
    return false;
}

inline bool httpReq::text8_5(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text8_6;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text8_6;
            return true;
        }
    }
    state.node = NodeT::Text8_5;
    return true;
}

inline bool httpReq::text8_6(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Range14_0;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Loop6_1;
            return true;
        }
    }
    state.node = NodeT::Text8_6;
    return true;
}

inline bool httpReq::any9_0(StateT & state)
{
    if (state.data == state.end)
        return true;
    // case_1: Text9_0_0_0
    if (text9_0_0_0(state) && state.node == NodeT::Bang9_0)
        return true;
    else if (state.node != NodeT::NoState)
        pstate.push_back(state);
    state.node = NodeT::Range14_0;
    return false;
}

inline bool httpReq::text9_0_0_0(StateT & state) const
{
    const static std::array<uint8_t, 15> text = {0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x6c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x3a}; // content-length:
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::NoState;
            state.consumed = 0;
            return false;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Bang9_0;
            return true;
        }
    }
    state.node = NodeT::Text9_0_0_0;
    return true;
}

inline bool httpReq::bang9_0(StateT & state)
{
    state.node = NodeT::Range9_2;
    if (&mstate != &state)
    {
        mstate = state;
        state.node = NodeT::NoState;
    }
    pstate.clear();
    return true;
}

inline bool httpReq::range9_2(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
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
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Uint9_3;
            return true;
        } else {
            state.node = NodeT::Range14_0;
            return false;
        }
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range9_2;
    return true;
}

void httpReq::uint9_3(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        httpReqResult::contentLength = 0;
    for(const char * end = &data[len]; data < end; data++)
        httpReqResult::contentLength = httpReqResult::contentLength*10 + *data - '0';
}

inline bool httpReq::uint9_3(StateT & state)
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
        if(&state.data[16] <= state.end)
        {
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint9_3(datastart, unsigned(state.data - datastart), state.consumed);
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Func9_4;
            return true;
        } else {
            state.node = NodeT::Range14_0;
            return false;
        }
    }
    if (datastart < state.data)
        uint9_3(datastart, unsigned(state.data - datastart), state.consumed);
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Uint9_3;
    return true;
}

inline bool httpReq::func9_4()
{
     printf("LENGTH: %zu\n", contentLength); 
    return true;
}
inline bool httpReq::func9_4(StateT & state)
{
    if (func9_4())
    {
        state.node = NodeT::Text9_5;
        return true;
    }
    state.node = NodeT::Range14_0;
    return false;
}

inline bool httpReq::text9_5(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text9_6;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text9_6;
            return true;
        }
    }
    state.node = NodeT::Text9_5;
    return true;
}

inline bool httpReq::text9_6(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Range14_0;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Loop6_1;
            return true;
        }
    }
    state.node = NodeT::Text9_6;
    return true;
}

inline bool httpReq::range10_0(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end)
    {
        if (terminator[uint8_t(state.data[0])]) [[unlikely]]
        {
            state.consumed += unsigned(state.data - datastart);
            state.node = (state.consumed >= 1) ? NodeT::Range10_1 : NodeT::Range14_0;
            bool ret = (state.node == NodeT::Range10_1);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = NodeT::Range10_1;
        return true;
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range10_0;
    return true;
}

inline bool httpReq::range10_1(StateT & state) const
{
    const static std::array<bool, 256> terminator = {
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
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
        if(&state.data[16] <= state.end)
        {
            if (terminator[uint8_t(state.data[0])]) [[unlikely]]
                state.data += 0;
            else if (terminator[uint8_t(state.data[1])]) [[unlikely]]
                state.data += 1;
            else if (terminator[uint8_t(state.data[2])]) [[unlikely]]
                state.data += 2;
            else if (terminator[uint8_t(state.data[3])]) [[unlikely]]
                state.data += 3;
            else if (terminator[uint8_t(state.data[4])]) [[unlikely]]
                state.data += 4;
            else if (terminator[uint8_t(state.data[5])]) [[unlikely]]
                state.data += 5;
            else if (terminator[uint8_t(state.data[6])]) [[unlikely]]
                state.data += 6;
            else if (terminator[uint8_t(state.data[7])]) [[unlikely]]
                state.data += 7;
            else if (terminator[uint8_t(state.data[8])]) [[unlikely]]
                state.data += 8;
            else if (terminator[uint8_t(state.data[9])]) [[unlikely]]
                state.data += 9;
            else if (terminator[uint8_t(state.data[10])]) [[unlikely]]
                state.data += 10;
            else if (terminator[uint8_t(state.data[11])]) [[unlikely]]
                state.data += 11;
            else if (terminator[uint8_t(state.data[12])]) [[unlikely]]
                state.data += 12;
            else if (terminator[uint8_t(state.data[13])]) [[unlikely]]
                state.data += 13;
            else if (terminator[uint8_t(state.data[14])]) [[unlikely]]
                state.data += 14;
            else if (terminator[uint8_t(state.data[15])]) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
        else if (!(terminator[uint8_t(state.data[0])])) [[unlikely]]
        {
            state.data++;
            continue;
        }
        state.consumed = 0;
        state.node = NodeT::Text10_2;
        return true;
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range10_1;
    return true;
}

inline bool httpReq::text10_2(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text10_3;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text10_3;
            return true;
        }
    }
    state.node = NodeT::Text10_2;
    return true;
}

inline bool httpReq::text10_3(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Range14_0;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Loop6_1;
            return true;
        }
    }
    state.node = NodeT::Text10_3;
    return true;
}

inline bool httpReq::text11_0(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text11_1;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text11_1;
            return true;
        }
    }
    state.node = NodeT::Text11_0;
    return true;
}

inline bool httpReq::text11_1(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Range14_0;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Cases11_2;
            return true;
        }
    }
    state.node = NodeT::Text11_1;
    return true;
}

inline bool httpReq::cases11_2(StateT & state) const
{
    if (if12_0(state)) // case_1
        return true;
    if (ret13_0(state)) // case_2
        return true;
    state.node = NodeT::Range14_0;
    return true;
}

inline bool httpReq::if12_0(StateT & state) const
{
    if (contentLength)
    {
        state.node = NodeT::Data12_1;
        return true;
    }
    state.node = NodeT::Range14_0;
    return false;
}

inline bool httpReq::data12_1(StateT & state)
{
    const char * datastart = state.data;
    if (!state.consumed)
        state.node = NodeT::Data12_1;
    if (state.data == state.end)
        return true;
    else if (int64_t(state.consumed + state.remain()) >= int64_t(contentLength))
    {
        state.data += (contentLength - state.consumed);
        httpReqResult::payload(datastart, unsigned(state.data - datastart), !state.consumed, true);
        state.consumed = 0;
        state.node = NodeT::Ret12_2;
    } else {
        state.data = state.end;
        httpReqResult::payload(datastart, unsigned(state.data - datastart), !state.consumed, false);
        state.consumed += unsigned(state.data - datastart);
    }
    return true;
}

inline bool httpReq::ret12_2(StateT & state) const
{
    state.node = state.rcount ? state.rstack[--state.rcount] : NodeT::NoState;
    return state.node != NodeT::NoState;
}

inline bool httpReq::ret13_0(StateT & state) const
{
    state.node = state.rcount ? state.rstack[--state.rcount] : NodeT::NoState;
    return state.node != NodeT::NoState;
}

inline bool httpReq::range14_0(StateT & state) const
{
    const char * datastart = state.data;
    while(state.data < state.end) [[likely]]
    {
#if defined(__AVX2__)
        if(&state.data[32] <= state.end)
        {
            const __m256i d = _mm256_lddqu_si256((const __m256i *)state.data);
            __m256i m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0xa), d);
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
            if (uint8_t(state.data[0]) == uint8_t(0x0a)) [[unlikely]]
                state.data += 0;
            else if (uint8_t(state.data[1]) == uint8_t(0x0a)) [[unlikely]]
                state.data += 1;
            else if (uint8_t(state.data[2]) == uint8_t(0x0a)) [[unlikely]]
                state.data += 2;
            else if (uint8_t(state.data[3]) == uint8_t(0x0a)) [[unlikely]]
                state.data += 3;
            else if (uint8_t(state.data[4]) == uint8_t(0x0a)) [[unlikely]]
                state.data += 4;
            else if (uint8_t(state.data[5]) == uint8_t(0x0a)) [[unlikely]]
                state.data += 5;
            else if (uint8_t(state.data[6]) == uint8_t(0x0a)) [[unlikely]]
                state.data += 6;
            else if (uint8_t(state.data[7]) == uint8_t(0x0a)) [[unlikely]]
                state.data += 7;
            else if (uint8_t(state.data[8]) == uint8_t(0x0a)) [[unlikely]]
                state.data += 8;
            else if (uint8_t(state.data[9]) == uint8_t(0x0a)) [[unlikely]]
                state.data += 9;
            else if (uint8_t(state.data[10]) == uint8_t(0x0a)) [[unlikely]]
                state.data += 10;
            else if (uint8_t(state.data[11]) == uint8_t(0x0a)) [[unlikely]]
                state.data += 11;
            else if (uint8_t(state.data[12]) == uint8_t(0x0a)) [[unlikely]]
                state.data += 12;
            else if (uint8_t(state.data[13]) == uint8_t(0x0a)) [[unlikely]]
                state.data += 13;
            else if (uint8_t(state.data[14]) == uint8_t(0x0a)) [[unlikely]]
                state.data += 14;
            else if (uint8_t(state.data[15]) == uint8_t(0x0a)) [[unlikely]]
                state.data += 15;
            else
            {
                state.data += 16;
                continue;
            }
        }
#endif
        else if (!(uint8_t(state.data[0]) == uint8_t(0x0a))) [[unlikely]]
        {
            state.data++;
            continue;
        }
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Text14_1;
            return true;
        } else {
            state.node = NodeT::NoState;
            return false;
        }
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range14_0;
    return true;
}

inline bool httpReq::text14_1(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Loop6_1;
            return true;
        }
    }
    state.node = NodeT::Text14_1;
    return true;
}

void httpReq::reset()
{
    httpReqResult::contentLength = 0;
    httpReqResult::host.clear();
    httpReqResult::type.clear();
    httpReqResult::url.clear();
    httpReq::mstate = httpReq::StateT();
    httpReq::pstate.clear();
}

const char * httpReq::StateT::name() const
{
    switch(node)
    {
        case NodeT::Loop1_0: return "Loop1_0";
        case NodeT::Any1_0: return "Any1_0";
        case NodeT::Text1_0_0_0: return "Text1_0_0_0";
        case NodeT::Text1_0_1_0: return "Text1_0_1_0";
        case NodeT::Text1_0_2_0: return "Text1_0_2_0";
        case NodeT::Text1_0_3_0: return "Text1_0_3_0";
        case NodeT::Text1_0_4_0: return "Text1_0_4_0";
        case NodeT::Text1_0_5_0: return "Text1_0_5_0";
        case NodeT::Text1_0_6_0: return "Text1_0_6_0";
        case NodeT::Text1_0_7_0: return "Text1_0_7_0";
        case NodeT::Text1_0_8_0: return "Text1_0_8_0";
        case NodeT::Text1_0_9_0: return "Text1_0_9_0";
        case NodeT::Text1_0_10_0: return "Text1_0_10_0";
        case NodeT::Bang1_0: return "Bang1_0";
        case NodeT::Call1_2: return "Call1_2";
        case NodeT::Call1_3: return "Call1_3";
        case NodeT::Reset1_4: return "Reset1_4";
        case NodeT::Loop3_0: return "Loop3_0";
        case NodeT::Label3_0: return "Label3_0";
        case NodeT::Loop3_1: return "Loop3_1";
        case NodeT::Range4_0: return "Range4_0";
        case NodeT::String4_1: return "String4_1";
        case NodeT::Range4_2: return "Range4_2";
        case NodeT::Func4_3: return "Func4_3";
        case NodeT::Text4_4: return "Text4_4";
        case NodeT::Range4_5: return "Range4_5";
        case NodeT::Text4_6: return "Text4_6";
        case NodeT::Range4_7: return "Range4_7";
        case NodeT::Text4_8: return "Text4_8";
        case NodeT::Text4_9: return "Text4_9";
        case NodeT::Ret4_10: return "Ret4_10";
        case NodeT::Loop6_0: return "Loop6_0";
        case NodeT::Label6_0: return "Label6_0";
        case NodeT::Loop6_1: return "Loop6_1";
        case NodeT::Text7_0: return "Text7_0";
        case NodeT::Range7_1: return "Range7_1";
        case NodeT::String7_2: return "String7_2";
        case NodeT::Func7_3: return "Func7_3";
        case NodeT::Text7_4: return "Text7_4";
        case NodeT::Text7_5: return "Text7_5";
        case NodeT::Any8_0: return "Any8_0";
        case NodeT::Text8_0_0_0: return "Text8_0_0_0";
        case NodeT::Bang8_0: return "Bang8_0";
        case NodeT::Range8_2: return "Range8_2";
        case NodeT::String8_3: return "String8_3";
        case NodeT::Func8_4: return "Func8_4";
        case NodeT::Text8_5: return "Text8_5";
        case NodeT::Text8_6: return "Text8_6";
        case NodeT::Any9_0: return "Any9_0";
        case NodeT::Text9_0_0_0: return "Text9_0_0_0";
        case NodeT::Bang9_0: return "Bang9_0";
        case NodeT::Range9_2: return "Range9_2";
        case NodeT::Uint9_3: return "Uint9_3";
        case NodeT::Func9_4: return "Func9_4";
        case NodeT::Text9_5: return "Text9_5";
        case NodeT::Text9_6: return "Text9_6";
        case NodeT::Range10_0: return "Range10_0";
        case NodeT::Range10_1: return "Range10_1";
        case NodeT::Text10_2: return "Text10_2";
        case NodeT::Text10_3: return "Text10_3";
        case NodeT::Text11_0: return "Text11_0";
        case NodeT::Text11_1: return "Text11_1";
        case NodeT::Cases11_2: return "Cases11_2";
        case NodeT::If12_0: return "If12_0";
        case NodeT::Data12_1: return "Data12_1";
        case NodeT::Ret12_2: return "Ret12_2";
        case NodeT::Ret13_0: return "Ret13_0";
        case NodeT::Range14_0: return "Range14_0";
        case NodeT::Text14_1: return "Text14_1";
        case NodeT::NoState: return "NoState";
        default: return "unknown";
    };
}

