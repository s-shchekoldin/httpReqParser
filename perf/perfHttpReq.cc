// ==============================================================
// Date: 2026-01-28 20:26:22 GMT
// Generated using vProto(2026.01.28)        https://www.cgen.dev
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

inline void perfHttpReq::parse(StateT & state)
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
            case NodeT::Text1_0: if (!text1_0(state, false) || state.node != NodeT::Call1_1) break; [[fallthrough]];
            case NodeT::Call1_1: if (!call1_1(state) || state.node != NodeT::Call1_2) break; [[fallthrough]];
            case NodeT::Call1_2: call1_2(state); break;
            case NodeT::Text2_0: if (!text2_0(state, false) || state.node != NodeT::Call2_1) break; [[fallthrough]];
            case NodeT::Call2_1: if (!call2_1(state) || state.node != NodeT::Call2_2) break; [[fallthrough]];
            case NodeT::Call2_2: call2_2(state); break;
            case NodeT::Text3_0: if (!text3_0(state) || state.node != NodeT::Cases3_1) break; [[fallthrough]];
            case NodeT::Cases3_1: cases3_1(state); break;
            case NodeT::Text4_0: if (!text4_0(state, false) || state.node != NodeT::Call4_1) break; [[fallthrough]];
            case NodeT::Call4_1: if (!call4_1(state) || state.node != NodeT::Call4_2) break; [[fallthrough]];
            case NodeT::Call4_2: call4_2(state); break;
            case NodeT::Text5_0: if (!text5_0(state, false) || state.node != NodeT::Call5_1) break; [[fallthrough]];
            case NodeT::Call5_1: if (!call5_1(state) || state.node != NodeT::Call5_2) break; [[fallthrough]];
            case NodeT::Call5_2: call5_2(state); break;
            case NodeT::Text6_0: if (!text6_0(state, false) || state.node != NodeT::Call6_1) break; [[fallthrough]];
            case NodeT::Call6_1: if (!call6_1(state) || state.node != NodeT::Call6_2) break; [[fallthrough]];
            case NodeT::Call6_2: call6_2(state); break;
            case NodeT::Text7_0: if (!text7_0(state, false) || state.node != NodeT::Call7_1) break; [[fallthrough]];
            case NodeT::Call7_1: if (!call7_1(state) || state.node != NodeT::Call7_2) break; [[fallthrough]];
            case NodeT::Call7_2: call7_2(state); break;
            case NodeT::Text8_0: if (!text8_0(state, false) || state.node != NodeT::Call8_1) break; [[fallthrough]];
            case NodeT::Call8_1: if (!call8_1(state) || state.node != NodeT::Call8_2) break; [[fallthrough]];
            case NodeT::Call8_2: call8_2(state); break;
            case NodeT::Text9_0: if (!text9_0(state, false) || state.node != NodeT::Call9_1) break; [[fallthrough]];
            case NodeT::Call9_1: if (!call9_1(state) || state.node != NodeT::Call9_2) break; [[fallthrough]];
            case NodeT::Call9_2: call9_2(state); break;
            case NodeT::Text10_0: if (!text10_0(state, false) || state.node != NodeT::Call10_1) break; [[fallthrough]];
            case NodeT::Call10_1: if (!call10_1(state) || state.node != NodeT::Call10_2) break; [[fallthrough]];
            case NodeT::Call10_2: call10_2(state); break;
            case NodeT::Text11_0: if (!text11_0(state, false) || state.node != NodeT::Call11_1) break; [[fallthrough]];
            case NodeT::Call11_1: if (!call11_1(state) || state.node != NodeT::Call11_2) break; [[fallthrough]];
            case NodeT::Call11_2: call11_2(state); break;
            case NodeT::Text12_0: if (!text12_0(state, false) || state.node != NodeT::Call12_1) break; [[fallthrough]];
            case NodeT::Call12_1: if (!call12_1(state) || state.node != NodeT::Call12_2) break; [[fallthrough]];
            case NodeT::Call12_2: call12_2(state); break;
            case NodeT::Text13_0: if (!text13_0(state) || state.node != NodeT::Text13_1) break; [[fallthrough]];
            case NodeT::Text13_1: text13_1(state); break;
            case NodeT::Loop15_0: loop15_0(state); break;
            case NodeT::Label15_0: if (!label15_0(state) || state.node != NodeT::Range15_1) break; [[fallthrough]];
            case NodeT::Range15_1: if (!range15_1(state) || state.node != NodeT::String15_2) break; [[fallthrough]];
            case NodeT::String15_2: if (!string15_2(state) || state.node != NodeT::Range15_3) break; [[fallthrough]];
            case NodeT::Range15_3: if (!range15_3(state) || state.node != NodeT::Text15_4) break; [[fallthrough]];
            case NodeT::Text15_4: if (!text15_4(state) || state.node != NodeT::Range15_5) break; [[fallthrough]];
            case NodeT::Range15_5: if (!range15_5(state) || state.node != NodeT::Text15_6) break; [[fallthrough]];
            case NodeT::Text15_6: if (!text15_6(state) || state.node != NodeT::Range15_7) break; [[fallthrough]];
            case NodeT::Range15_7: if (!range15_7(state) || state.node != NodeT::Text15_8) break; [[fallthrough]];
            case NodeT::Text15_8: if (!text15_8(state) || state.node != NodeT::Text15_9) break; [[fallthrough]];
            case NodeT::Text15_9: if (!text15_9(state) || state.node != NodeT::Ret15_10) break; [[fallthrough]];
            case NodeT::Ret15_10: ret15_10(state); break;
            case NodeT::Loop17_0: loop17_0(state); break;
            case NodeT::Label17_0: if (!label17_0(state) || state.node != NodeT::Loop17_1) break; [[fallthrough]];
            case NodeT::Loop17_1: loop17_1(state); break;
            case NodeT::Text18_0: if (!text18_0(state, false) || state.node != NodeT::Range18_1) break; [[fallthrough]];
            case NodeT::Range18_1: if (!range18_1(state) || state.node != NodeT::String18_2) break; [[fallthrough]];
            case NodeT::String18_2: if (!string18_2(state) || state.node != NodeT::Text18_3) break; [[fallthrough]];
            case NodeT::Text18_3: if (!text18_3(state) || state.node != NodeT::Text18_4) break; [[fallthrough]];
            case NodeT::Text18_4: text18_4(state); break;
            case NodeT::Text19_0: if (!text19_0(state, false) || state.node != NodeT::Range19_1) break; [[fallthrough]];
            case NodeT::Range19_1: if (!range19_1(state) || state.node != NodeT::Uint19_2) break; [[fallthrough]];
            case NodeT::Uint19_2: if (!uint19_2(state) || state.node != NodeT::Text19_3) break; [[fallthrough]];
            case NodeT::Text19_3: if (!text19_3(state) || state.node != NodeT::Text19_4) break; [[fallthrough]];
            case NodeT::Text19_4: text19_4(state); break;
            case NodeT::Range20_0: if (!range20_0(state) || state.node != NodeT::Range20_1) break; [[fallthrough]];
            case NodeT::Range20_1: if (!range20_1(state) || state.node != NodeT::Text20_2) break; [[fallthrough]];
            case NodeT::Text20_2: if (!text20_2(state) || state.node != NodeT::Text20_3) break; [[fallthrough]];
            case NodeT::Text20_3: text20_3(state); break;
            case NodeT::Text21_0: if (!text21_0(state) || state.node != NodeT::Text21_1) break; [[fallthrough]];
            case NodeT::Text21_1: if (!text21_1(state) || state.node != NodeT::Cases21_2) break; [[fallthrough]];
            case NodeT::Cases21_2: cases21_2(state); break;
            case NodeT::Func22_0: if (!func22_0(state) || state.node != NodeT::Data22_1) break; [[fallthrough]];
            case NodeT::Data22_1: if (!data22_1(state) || state.node != NodeT::Func22_2) break; [[fallthrough]];
            case NodeT::Func22_2: if (!func22_2(state) || state.node != NodeT::Ret22_3) break; [[fallthrough]];
            case NodeT::Ret22_3: ret22_3(state); break;
            case NodeT::Ret23_0: ret23_0(state); break;
            case NodeT::Range24_0: if (!range24_0(state) || state.node != NodeT::Text24_1) break; [[fallthrough]];
            case NodeT::Text24_1: if (!text24_1(state) || state.node != NodeT::Text24_2) break; [[fallthrough]];
            case NodeT::Text24_2: text24_2(state); break;
            case NodeT::NoState:
            default: return;
        }; // switch
        if (d == state.data && n == state.node) [[unlikely]]
            break;
    }
}

bool perfHttpReq::parse(const char * data, unsigned len)
{
    mstate.data = data;
    mstate.end = &data[len];
    parse(mstate);
    return mstate.node != NodeT::NoState;
}

inline bool perfHttpReq::loop1_0(StateT & state) const
{
    if (state.data == state.end)
        return true;
    if (text1_0(state, true)) // case_1
        return true;
    if (text2_0(state, true)) // case_2
        return true;
    if (text3_0(state)) // case_3
        return true;
    if (text7_0(state, true)) // case_4
        return true;
    if (text8_0(state, true)) // case_5
        return true;
    if (text9_0(state, true)) // case_6
        return true;
    if (text10_0(state, true)) // case_7
        return true;
    if (text11_0(state, true)) // case_8
        return true;
    if (text12_0(state, true)) // case_9
        return true;
    if (text13_0(state)) // case_10
        return true;
    state.node = NodeT::NoState;
    return true;
}

inline bool perfHttpReq::text1_0(StateT & state, bool is_branch) const
{
    const static std::array<uint8_t, 3> text = {0x67, 0x65, 0x74}; // get
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::NoState;
            bool ret = is_branch && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Call1_1;
            return true;
        }
    }
    state.node = NodeT::Text1_0;
    return true;
}

inline bool perfHttpReq::call1_1(StateT & state) const
{
    state.node = NodeT::Label15_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Call1_2;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Call1_2;
    }
    return true;
}

inline bool perfHttpReq::call1_2(StateT & state) const
{
    state.node = NodeT::Label17_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Loop1_0;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Loop1_0;
    }
    return true;
}

inline bool perfHttpReq::text2_0(StateT & state, bool is_branch) const
{
    const static std::array<uint8_t, 4> text = {0x68, 0x65, 0x61, 0x64}; // head
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::NoState;
            bool ret = is_branch && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Call2_1;
            return true;
        }
    }
    state.node = NodeT::Text2_0;
    return true;
}

inline bool perfHttpReq::call2_1(StateT & state) const
{
    state.node = NodeT::Label15_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Call2_2;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Call2_2;
    }
    return true;
}

inline bool perfHttpReq::call2_2(StateT & state) const
{
    state.node = NodeT::Label17_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Loop1_0;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Loop1_0;
    }
    return true;
}

inline bool perfHttpReq::text3_0(StateT & state) const
{
    if(state.data < state.end)
    {
        if (((uint8_t(0x50) ^ uint8_t(state.data[0]))) & 0xDF)
        {
            state.node = NodeT::NoState;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Cases3_1;
            return true;
        }
    }
    state.node = NodeT::Text3_0;
    return true;
}

inline bool perfHttpReq::cases3_1(StateT & state) const
{
    if (state.data == state.end)
        return true;
    if (text4_0(state, true)) // case_1
        return true;
    if (text5_0(state, true)) // case_2
        return true;
    if (text6_0(state, true)) // case_3
        return true;
    state.node = NodeT::NoState;
    return true;
}

inline bool perfHttpReq::text4_0(StateT & state, bool is_branch) const
{
    const static std::array<uint8_t, 3> text = {0x6f, 0x73, 0x74}; // ost
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::NoState;
            bool ret = is_branch && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Call4_1;
            return true;
        }
    }
    state.node = NodeT::Text4_0;
    return true;
}

inline bool perfHttpReq::call4_1(StateT & state) const
{
    state.node = NodeT::Label15_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Call4_2;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Call4_2;
    }
    return true;
}

inline bool perfHttpReq::call4_2(StateT & state) const
{
    state.node = NodeT::Label17_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Loop1_0;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Loop1_0;
    }
    return true;
}

inline bool perfHttpReq::text5_0(StateT & state, bool is_branch) const
{
    const static std::array<uint8_t, 2> text = {0x75, 0x74}; // ut
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::NoState;
            bool ret = is_branch && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Call5_1;
            return true;
        }
    }
    state.node = NodeT::Text5_0;
    return true;
}

inline bool perfHttpReq::call5_1(StateT & state) const
{
    state.node = NodeT::Label15_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Call5_2;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Call5_2;
    }
    return true;
}

inline bool perfHttpReq::call5_2(StateT & state) const
{
    state.node = NodeT::Label17_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Loop1_0;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Loop1_0;
    }
    return true;
}

inline bool perfHttpReq::text6_0(StateT & state, bool is_branch) const
{
    const static std::array<uint8_t, 4> text = {0x61, 0x74, 0x63, 0x68}; // atch
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::NoState;
            bool ret = is_branch && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Call6_1;
            return true;
        }
    }
    state.node = NodeT::Text6_0;
    return true;
}

inline bool perfHttpReq::call6_1(StateT & state) const
{
    state.node = NodeT::Label15_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Call6_2;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Call6_2;
    }
    return true;
}

inline bool perfHttpReq::call6_2(StateT & state) const
{
    state.node = NodeT::Label17_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Loop1_0;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Loop1_0;
    }
    return true;
}

inline bool perfHttpReq::text7_0(StateT & state, bool is_branch) const
{
    const static std::array<uint8_t, 6> text = {0x64, 0x65, 0x6c, 0x65, 0x74, 0x65}; // delete
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::NoState;
            bool ret = is_branch && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Call7_1;
            return true;
        }
    }
    state.node = NodeT::Text7_0;
    return true;
}

inline bool perfHttpReq::call7_1(StateT & state) const
{
    state.node = NodeT::Label15_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Call7_2;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Call7_2;
    }
    return true;
}

inline bool perfHttpReq::call7_2(StateT & state) const
{
    state.node = NodeT::Label17_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Loop1_0;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Loop1_0;
    }
    return true;
}

inline bool perfHttpReq::text8_0(StateT & state, bool is_branch) const
{
    const static std::array<uint8_t, 7> text = {0x6f, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x73}; // options
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::NoState;
            bool ret = is_branch && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Call8_1;
            return true;
        }
    }
    state.node = NodeT::Text8_0;
    return true;
}

inline bool perfHttpReq::call8_1(StateT & state) const
{
    state.node = NodeT::Label15_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Call8_2;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Call8_2;
    }
    return true;
}

inline bool perfHttpReq::call8_2(StateT & state) const
{
    state.node = NodeT::Label17_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Loop1_0;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Loop1_0;
    }
    return true;
}

inline bool perfHttpReq::text9_0(StateT & state, bool is_branch) const
{
    const static std::array<uint8_t, 7> text = {0x63, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74}; // connect
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::NoState;
            bool ret = is_branch && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Call9_1;
            return true;
        }
    }
    state.node = NodeT::Text9_0;
    return true;
}

inline bool perfHttpReq::call9_1(StateT & state) const
{
    state.node = NodeT::Label15_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Call9_2;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Call9_2;
    }
    return true;
}

inline bool perfHttpReq::call9_2(StateT & state) const
{
    state.node = NodeT::Label17_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Loop1_0;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Loop1_0;
    }
    return true;
}

inline bool perfHttpReq::text10_0(StateT & state, bool is_branch) const
{
    const static std::array<uint8_t, 4> text = {0x6c, 0x69, 0x6e, 0x6b}; // link
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::NoState;
            bool ret = is_branch && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Call10_1;
            return true;
        }
    }
    state.node = NodeT::Text10_0;
    return true;
}

inline bool perfHttpReq::call10_1(StateT & state) const
{
    state.node = NodeT::Label15_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Call10_2;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Call10_2;
    }
    return true;
}

inline bool perfHttpReq::call10_2(StateT & state) const
{
    state.node = NodeT::Label17_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Loop1_0;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Loop1_0;
    }
    return true;
}

inline bool perfHttpReq::text11_0(StateT & state, bool is_branch) const
{
    const static std::array<uint8_t, 6> text = {0x75, 0x6e, 0x6c, 0x69, 0x6e, 0x6b}; // unlink
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::NoState;
            bool ret = is_branch && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Call11_1;
            return true;
        }
    }
    state.node = NodeT::Text11_0;
    return true;
}

inline bool perfHttpReq::call11_1(StateT & state) const
{
    state.node = NodeT::Label15_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Call11_2;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Call11_2;
    }
    return true;
}

inline bool perfHttpReq::call11_2(StateT & state) const
{
    state.node = NodeT::Label17_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Loop1_0;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Loop1_0;
    }
    return true;
}

inline bool perfHttpReq::text12_0(StateT & state, bool is_branch) const
{
    const static std::array<uint8_t, 5> text = {0x74, 0x72, 0x61, 0x63, 0x65}; // trace
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::NoState;
            bool ret = is_branch && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Call12_1;
            return true;
        }
    }
    state.node = NodeT::Text12_0;
    return true;
}

inline bool perfHttpReq::call12_1(StateT & state) const
{
    state.node = NodeT::Label15_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Call12_2;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Call12_2;
    }
    return true;
}

inline bool perfHttpReq::call12_2(StateT & state) const
{
    state.node = NodeT::Label17_0;
    if (state.rcount < state.rstack.size())
        state.rstack[state.rcount++] = NodeT::Loop1_0;
    else
    {
        for(unsigned i = 1; i < state.rstack.size(); i++)
            state.rstack[i - 1] = state.rstack[i];
        state.rstack[state.rstack.size() - 1] = NodeT::Loop1_0;
    }
    return true;
}

inline bool perfHttpReq::text13_0(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text13_1;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text13_1;
            return true;
        }
    }
    state.node = NodeT::Text13_0;
    return true;
}

inline bool perfHttpReq::text13_1(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Loop1_0;
            return true;
        }
    }
    state.node = NodeT::Text13_1;
    return true;
}

inline bool perfHttpReq::loop15_0(StateT & state) const
{
    return label15_0(state);
}

inline bool perfHttpReq::label15_0(StateT & state) const
{
    state.node = NodeT::Range15_1;
    return true;
}

inline bool perfHttpReq::range15_1(StateT & state) const
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
            state.node = (state.consumed >= 1) ? NodeT::String15_2 : NodeT::NoState;
            bool ret = (state.node == NodeT::String15_2);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = NodeT::String15_2;
        return true;
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range15_1;
    return true;
}

void perfHttpReq::string15_2(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        perfHttpReqResult::url.clear();
    if ((perfHttpReqResult::url.length() + len) > 1024)
        len = 1024 - perfHttpReqResult::url.length();
    perfHttpReqResult::url.append(data, len);
}

inline bool perfHttpReq::string15_2(StateT & state)
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
        string15_2(datastart, unsigned(state.data - datastart), state.consumed);
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Range15_3;
            return true;
        } else {
            state.node = NodeT::NoState;
            return false;
        }
    }
    if (datastart < state.data)
        string15_2(datastart, unsigned(state.data - datastart), state.consumed);
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::String15_2;
    return true;
}

inline bool perfHttpReq::range15_3(StateT & state) const
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
            state.node = (state.consumed >= 1) ? NodeT::Text15_4 : NodeT::NoState;
            bool ret = (state.node == NodeT::Text15_4);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = NodeT::Text15_4;
        return true;
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range15_3;
    return true;
}

inline bool perfHttpReq::text15_4(StateT & state) const
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
            state.node = NodeT::Range15_5;
            return true;
        }
    }
    state.node = NodeT::Text15_4;
    return true;
}

inline bool perfHttpReq::range15_5(StateT & state) const
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
            state.node = (state.consumed >= 1) ? NodeT::Text15_6 : NodeT::NoState;
            bool ret = (state.node == NodeT::Text15_6);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = NodeT::Text15_6;
        return true;
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range15_5;
    return true;
}

inline bool perfHttpReq::text15_6(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x2E) != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Range15_7;
            return true;
        }
    }
    state.node = NodeT::Text15_6;
    return true;
}

inline bool perfHttpReq::range15_7(StateT & state) const
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
            state.node = (state.consumed >= 1) ? NodeT::Text15_8 : NodeT::NoState;
            bool ret = (state.node == NodeT::Text15_8);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = NodeT::Text15_8;
        return true;
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range15_7;
    return true;
}

inline bool perfHttpReq::text15_8(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text15_9;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text15_9;
            return true;
        }
    }
    state.node = NodeT::Text15_8;
    return true;
}

inline bool perfHttpReq::text15_9(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Ret15_10;
            return true;
        }
    }
    state.node = NodeT::Text15_9;
    return true;
}

inline bool perfHttpReq::ret15_10(StateT & state) const
{
    state.node = state.rcount ? state.rstack[--state.rcount] : NodeT::NoState;
    return state.node != NodeT::NoState;
}

inline bool perfHttpReq::loop17_0(StateT & state) const
{
    return label17_0(state);
}

inline bool perfHttpReq::label17_0(StateT & state) const
{
    state.node = NodeT::Loop17_1;
    return true;
}

inline bool perfHttpReq::loop17_1(StateT & state) const
{
    if (state.data == state.end)
        return true;
    if (text18_0(state, true)) // case_1
        return true;
    if (text19_0(state, true)) // case_2
        return true;
    if (range20_0(state)) // case_3
        return true;
    if (text21_0(state)) // case_4
        return true;
    state.node = NodeT::Range24_0;
    return true;
}

inline bool perfHttpReq::text18_0(StateT & state, bool is_branch) const
{
    const static std::array<uint8_t, 5> text = {0x68, 0x6f, 0x73, 0x74, 0x3a}; // host:
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::Range24_0;
            bool ret = is_branch && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Range18_1;
            return true;
        }
    }
    state.node = NodeT::Text18_0;
    return true;
}

inline bool perfHttpReq::range18_1(StateT & state) const
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
            state.node = NodeT::String18_2;
            return true;
        } else {
            state.node = NodeT::Range24_0;
            return false;
        }
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range18_1;
    return true;
}

void perfHttpReq::string18_2(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        perfHttpReqResult::host.clear();
    if ((perfHttpReqResult::host.length() + len) > 64)
        len = 64 - perfHttpReqResult::host.length();
    perfHttpReqResult::host.append(data, len);
}

inline bool perfHttpReq::string18_2(StateT & state)
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
        string18_2(datastart, unsigned(state.data - datastart), state.consumed);
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Text18_3;
            return true;
        } else {
            state.node = NodeT::Range24_0;
            return false;
        }
    }
    if (datastart < state.data)
        string18_2(datastart, unsigned(state.data - datastart), state.consumed);
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::String18_2;
    return true;
}

inline bool perfHttpReq::text18_3(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text18_4;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text18_4;
            return true;
        }
    }
    state.node = NodeT::Text18_3;
    return true;
}

inline bool perfHttpReq::text18_4(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Range24_0;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Loop17_1;
            return true;
        }
    }
    state.node = NodeT::Text18_4;
    return true;
}

inline bool perfHttpReq::text19_0(StateT & state, bool is_branch) const
{
    const static std::array<uint8_t, 15> text = {0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x6c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x3a}; // content-length:
    for(; state.data < state.end; state.data++)
    {
        if ((text[state.consumed] ^ uint8_t(state.data[0])) & 0xDF)
        {
            state.node = NodeT::Range24_0;
            bool ret = is_branch && state.consumed;
            state.consumed = 0;
            return ret;
        }
        else if (++state.consumed >= text.size())
        {
            state.data++;
            state.consumed = 0;
            state.node = NodeT::Range19_1;
            return true;
        }
    }
    state.node = NodeT::Text19_0;
    return true;
}

inline bool perfHttpReq::range19_1(StateT & state) const
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
            state.node = NodeT::Uint19_2;
            return true;
        } else {
            state.node = NodeT::Range24_0;
            return false;
        }
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range19_1;
    return true;
}

void perfHttpReq::uint19_2(const char * data, unsigned len, uint64_t consumed)
{
    if (!consumed)
        perfHttpReqResult::content_length = 0;
    for(const char * end = &data[len]; data < end; data++)
        perfHttpReqResult::content_length = perfHttpReqResult::content_length*10 + *data - '0';
}

inline bool perfHttpReq::uint19_2(StateT & state)
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
        uint19_2(datastart, unsigned(state.data - datastart), state.consumed);
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Text19_3;
            return true;
        } else {
            state.node = NodeT::Range24_0;
            return false;
        }
    }
    if (datastart < state.data)
        uint19_2(datastart, unsigned(state.data - datastart), state.consumed);
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Uint19_2;
    return true;
}

inline bool perfHttpReq::text19_3(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text19_4;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text19_4;
            return true;
        }
    }
    state.node = NodeT::Text19_3;
    return true;
}

inline bool perfHttpReq::text19_4(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Range24_0;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Loop17_1;
            return true;
        }
    }
    state.node = NodeT::Text19_4;
    return true;
}

inline bool perfHttpReq::range20_0(StateT & state) const
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
            state.node = (state.consumed >= 1) ? NodeT::Range20_1 : NodeT::Range24_0;
            bool ret = (state.node == NodeT::Range20_1);
            state.consumed = 0;
            return ret;
        }
        state.data++;
        state.node = NodeT::Range20_1;
        return true;
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range20_0;
    return true;
}

inline bool perfHttpReq::range20_1(StateT & state) const
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
        state.node = NodeT::Text20_2;
        return true;
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range20_1;
    return true;
}

inline bool perfHttpReq::text20_2(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text20_3;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text20_3;
            return true;
        }
    }
    state.node = NodeT::Text20_2;
    return true;
}

inline bool perfHttpReq::text20_3(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Range24_0;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Loop17_1;
            return true;
        }
    }
    state.node = NodeT::Text20_3;
    return true;
}

inline bool perfHttpReq::text21_0(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text21_1;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text21_1;
            return true;
        }
    }
    state.node = NodeT::Text21_0;
    return true;
}

inline bool perfHttpReq::text21_1(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Range24_0;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Cases21_2;
            return true;
        }
    }
    state.node = NodeT::Text21_1;
    return true;
}

inline bool perfHttpReq::cases21_2(StateT & state)
{
    if (func22_0(state)) // case_1
        return true;
    if (ret23_0(state)) // case_2
        return true;
    state.node = NodeT::Range24_0;
    return true;
}

inline bool perfHttpReq::func22_0()
{
     return content_length; 
    return true;
}
inline bool perfHttpReq::func22_0(StateT & state)
{
    if (func22_0())
    {
        state.node = NodeT::Data22_1;
        return true;
    }
    state.node = NodeT::Range24_0;
    return false;
}

inline bool perfHttpReq::data22_1(StateT & state)
{
    const char * datastart = state.data;
    if (!state.consumed)
        state.node = NodeT::Data22_1;
    if (state.data == state.end)
        return true;
    else if (int64_t(state.consumed + state.remain()) >= int64_t(content_length))
    {
        state.data += (content_length - state.consumed);
        perfHttpReqResult::payload(datastart, unsigned(state.data - datastart), !state.consumed, true);
        state.consumed = 0;
        state.node = NodeT::Func22_2;
    } else {
        state.data = state.end;
        perfHttpReqResult::payload(datastart, unsigned(state.data - datastart), !state.consumed, false);
        state.consumed += unsigned(state.data - datastart);
    }
    return true;
}

inline bool perfHttpReq::func22_2()
{
     content_length = 0; 
    return true;
}
inline bool perfHttpReq::func22_2(StateT & state)
{
    if (func22_2())
    {
        state.node = NodeT::Ret22_3;
        return true;
    }
    state.node = NodeT::Range24_0;
    return false;
}

inline bool perfHttpReq::ret22_3(StateT & state) const
{
    state.node = state.rcount ? state.rstack[--state.rcount] : NodeT::NoState;
    return state.node != NodeT::NoState;
}

inline bool perfHttpReq::ret23_0(StateT & state) const
{
    state.node = state.rcount ? state.rstack[--state.rcount] : NodeT::NoState;
    return state.node != NodeT::NoState;
}

inline bool perfHttpReq::range24_0(StateT & state) const
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
        uint64_t total = state.consumed + unsigned(state.data - datastart);
        state.consumed = 0;
        if (total >= 1)
        {
            state.node = NodeT::Text24_1;
            return true;
        } else {
            state.node = NodeT::NoState;
            return false;
        }
    }
    state.consumed += unsigned(state.data - datastart);
    state.node = NodeT::Range24_0;
    return true;
}

inline bool perfHttpReq::text24_1(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0D) != uint8_t(state.data[0]))
        {
            state.node = NodeT::Text24_2;
            return true;
        } else {
            state.data++;
            state.node = NodeT::Text24_2;
            return true;
        }
    }
    state.node = NodeT::Text24_1;
    return true;
}

inline bool perfHttpReq::text24_2(StateT & state) const
{
    if(state.data < state.end)
    {
        if (uint8_t(0x0A) != uint8_t(state.data[0]))
        {
            state.node = NodeT::NoState;
            return false;
        } else {
            state.data++;
            state.node = NodeT::Loop17_1;
            return true;
        }
    }
    state.node = NodeT::Text24_2;
    return true;
}

void perfHttpReq::reset()
{
    perfHttpReqResult::content_length = 0;
    perfHttpReqResult::host.clear();
    perfHttpReqResult::url.clear();
    perfHttpReq::mstate = perfHttpReq::StateT();
}

const char * perfHttpReq::StateT::name() const
{
    switch(node)
    {
        case NodeT::Loop1_0: return "Loop1_0";
        case NodeT::Text1_0: return "Text1_0";
        case NodeT::Call1_1: return "Call1_1";
        case NodeT::Call1_2: return "Call1_2";
        case NodeT::Text2_0: return "Text2_0";
        case NodeT::Call2_1: return "Call2_1";
        case NodeT::Call2_2: return "Call2_2";
        case NodeT::Text3_0: return "Text3_0";
        case NodeT::Cases3_1: return "Cases3_1";
        case NodeT::Text4_0: return "Text4_0";
        case NodeT::Call4_1: return "Call4_1";
        case NodeT::Call4_2: return "Call4_2";
        case NodeT::Text5_0: return "Text5_0";
        case NodeT::Call5_1: return "Call5_1";
        case NodeT::Call5_2: return "Call5_2";
        case NodeT::Text6_0: return "Text6_0";
        case NodeT::Call6_1: return "Call6_1";
        case NodeT::Call6_2: return "Call6_2";
        case NodeT::Text7_0: return "Text7_0";
        case NodeT::Call7_1: return "Call7_1";
        case NodeT::Call7_2: return "Call7_2";
        case NodeT::Text8_0: return "Text8_0";
        case NodeT::Call8_1: return "Call8_1";
        case NodeT::Call8_2: return "Call8_2";
        case NodeT::Text9_0: return "Text9_0";
        case NodeT::Call9_1: return "Call9_1";
        case NodeT::Call9_2: return "Call9_2";
        case NodeT::Text10_0: return "Text10_0";
        case NodeT::Call10_1: return "Call10_1";
        case NodeT::Call10_2: return "Call10_2";
        case NodeT::Text11_0: return "Text11_0";
        case NodeT::Call11_1: return "Call11_1";
        case NodeT::Call11_2: return "Call11_2";
        case NodeT::Text12_0: return "Text12_0";
        case NodeT::Call12_1: return "Call12_1";
        case NodeT::Call12_2: return "Call12_2";
        case NodeT::Text13_0: return "Text13_0";
        case NodeT::Text13_1: return "Text13_1";
        case NodeT::Loop15_0: return "Loop15_0";
        case NodeT::Label15_0: return "Label15_0";
        case NodeT::Range15_1: return "Range15_1";
        case NodeT::String15_2: return "String15_2";
        case NodeT::Range15_3: return "Range15_3";
        case NodeT::Text15_4: return "Text15_4";
        case NodeT::Range15_5: return "Range15_5";
        case NodeT::Text15_6: return "Text15_6";
        case NodeT::Range15_7: return "Range15_7";
        case NodeT::Text15_8: return "Text15_8";
        case NodeT::Text15_9: return "Text15_9";
        case NodeT::Ret15_10: return "Ret15_10";
        case NodeT::Loop17_0: return "Loop17_0";
        case NodeT::Label17_0: return "Label17_0";
        case NodeT::Loop17_1: return "Loop17_1";
        case NodeT::Text18_0: return "Text18_0";
        case NodeT::Range18_1: return "Range18_1";
        case NodeT::String18_2: return "String18_2";
        case NodeT::Text18_3: return "Text18_3";
        case NodeT::Text18_4: return "Text18_4";
        case NodeT::Text19_0: return "Text19_0";
        case NodeT::Range19_1: return "Range19_1";
        case NodeT::Uint19_2: return "Uint19_2";
        case NodeT::Text19_3: return "Text19_3";
        case NodeT::Text19_4: return "Text19_4";
        case NodeT::Range20_0: return "Range20_0";
        case NodeT::Range20_1: return "Range20_1";
        case NodeT::Text20_2: return "Text20_2";
        case NodeT::Text20_3: return "Text20_3";
        case NodeT::Text21_0: return "Text21_0";
        case NodeT::Text21_1: return "Text21_1";
        case NodeT::Cases21_2: return "Cases21_2";
        case NodeT::Func22_0: return "Func22_0";
        case NodeT::Data22_1: return "Data22_1";
        case NodeT::Func22_2: return "Func22_2";
        case NodeT::Ret22_3: return "Ret22_3";
        case NodeT::Ret23_0: return "Ret23_0";
        case NodeT::Range24_0: return "Range24_0";
        case NodeT::Text24_1: return "Text24_1";
        case NodeT::Text24_2: return "Text24_2";
        case NodeT::NoState: return "NoState";
        default: return "unknown";
    };
}

