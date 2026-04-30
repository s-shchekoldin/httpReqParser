// ==============================================================
// Date: 2026-04-30 17:15:32 GMT
// Generated using vProto(2026.04.30)        https://www.cgen.dev
// Author: Sergey Shchekoldin        Email: shchekoldin@gmail.com
// ==============================================================

// Example usage:
// let mut m = crate::HttpReqRust::HttpReqRust::<HttpReqRust::HttpReqRustExample>::new();
// m.parse(&byte_slice);
// Also, you can redefine HttpReqRustTrait implementation for interacting with the HttpReqRust module.


#[cfg(target_arch = "x86_64")]
use std::arch::x86_64::*;

#[derive(Debug, PartialEq, Eq, Copy, Clone)]
#[allow(dead_code)]
enum NodeT {
    Loop1_0, // line_1
        Any1_0,
                Text1_0_0_0,
                Text1_0_1_0,
                Text1_0_2_0,
                Text1_0_3_0,
                Text1_0_4_0,
                Text1_0_5_0,
                Text1_0_6_0,
                Text1_0_7_0,
                Text1_0_8_0,
                Text1_0_9_0,
                Text1_0_10_0,
                    Bang1_0, Call1_2, Call1_3, Reset1_4,
    Loop3_0, // line_3
        Label3_0, Loop3_1,
            Range4_0, String4_1, Range4_2, Func4_3, Text4_4, Range4_5, Text4_6, Range4_7, Text4_8, Text4_9, Ret4_10,
    Loop6_0, // line_6
        Label6_0, Loop6_1,
            Text7_0, Range7_1, String7_2, Func7_3, Text7_4, Text7_5,
            Any8_0,
                Text8_0_0_0,
                        Bang8_0, Range8_2, String8_3, Func8_4, Text8_5, Text8_6,
            Any9_0,
                Text9_0_0_0,
                        Bang9_0, Range9_2, Uint9_3, Func9_4, Text9_5, Text9_6,
            Range10_0, Range10_1, Text10_2, Text10_3,
            Text11_0, Text11_1, Cases11_2,
                If12_0, Data12_1, Ret12_2,
                Ret13_0,
             // catch:
            Range14_0, Text14_1,
    Loop16_0, // line_16
    NoState
}
impl std::fmt::Display for NodeT {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "{:?}", self)
    }
}

#[derive(Debug, Copy, Clone)]
pub struct StateT {
    pos: usize,
    consumed: usize,
    rcount: usize,
    node: NodeT,
    rstack: [NodeT; 2]
}
impl StateT {
    pub fn new() -> Self { Self{ pos: 0, consumed: 0, rcount: 0,  node: NodeT::Loop1_0, rstack: [NodeT::NoState; 2] } }
}
impl std::fmt::Display for StateT {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "{} pos:{} consumed:{}", self.node, self.pos, self.consumed)
    }
}

#[allow(unreachable_code)]
pub trait HttpReqRustTrait {
    fn new() -> Self;

    // field accessors:
    fn clength(&mut self) -> &mut u64;
    fn ctype(&mut self) -> &mut String;
    fn host(&mut self) -> &mut String;
    fn url(&mut self) -> &mut String;

    // callbacks to be implemented by the user:
    fn payload(&mut self, data: &[u8], is_first: bool, is_last: bool) { println!("payload({}:{})={:X?}", is_first, is_last, data); }

    // private functions:
    fn _func4_3(&mut self) -> bool {  println!("URL: {}", self.url());  return true; }
    fn _func7_3(&mut self) -> bool {  println!("HOST: {}",   self.host());  return true; }
    fn _func8_4(&mut self) -> bool {  println!("TYPE: {}\n", self.ctype());  return true; }
    fn _func9_4(&mut self) -> bool {  println!("LENGTH: {}", self.clength());  return true; }
    fn _if12_0(&mut self) -> bool { *self.clength() > 0 }
    fn _max_data12_1(&mut self) -> usize { ( *self.clength() ) as usize }
}

pub struct HttpReqRustExample
{
    ctype: String,
    host: String,
    url: String,
    clength: u64
}
#[allow(dead_code)]
impl HttpReqRustTrait for HttpReqRustExample {
    fn new() -> Self { Self{ctype: String::new(), host: String::new(), url: String::new(), clength: 0} }
    fn clength(&mut self) -> &mut u64 { &mut self.clength }
    fn ctype(&mut self) -> &mut String { &mut self.ctype }
    fn host(&mut self) -> &mut String { &mut self.host }
    fn url(&mut self) -> &mut String { &mut self.url }
}

pub struct HttpReqRust <T> {
    output: T,
    vstate: Vec<StateT>
}
#[allow(dead_code)]
#[allow(unused_variables)]
impl <T: HttpReqRustTrait> HttpReqRust<T> {
    pub fn new() -> Self { Self{ output: T::new(), vstate: vec![StateT::new()] } }
    pub fn empty(&self) -> bool { self.vstate.is_empty() }
    pub fn reset(&mut self) {
        *self.output.clength() = 0;
        *self.output.ctype()= String::new();
        *self.output.host()= String::new();
        *self.output.url()= String::new();
        for v in & mut self.vstate {
            v.node = NodeT::NoState;
        }
        self.vstate.push(StateT::new());
    }
    pub fn parse(&mut self, data : &[u8]) -> bool {
        for v in & mut self.vstate {
            v.pos = 0;
        }
        let mut reparse = true;
        while reparse {
            reparse = false;
            let mut d_flow = 0;
            let mut s_flow = 0;
            while s_flow < self.vstate.len() {
                if self.vstate[s_flow].node == NodeT::NoState {
                    s_flow += 1;
                } else if self.vstate[s_flow].pos == data.len() {
                    if s_flow != d_flow {
                        self.vstate[d_flow] = self.vstate[s_flow];
                    }
                    d_flow += 1;
                    s_flow += 1;
                } else {
                    reparse = true;
                    let mut state = self.vstate[s_flow];
                    self.parse_s(&mut state, data);
                    if state.node != NodeT::NoState {
                        self.vstate[d_flow] = state;
                        d_flow += 1;
                    }
                    s_flow += 1;
                }
            } // while
            if d_flow < self.vstate.len() {
                self.vstate.resize(d_flow, StateT::new());
            }
        }
        return !self.empty();
    }
    fn parse_s(&mut self, state: &mut StateT, data: &[u8]) {
        loop {
            if cfg!(debug_assertions) {
                println!("State: {} data: [{:#04X}, {:#04X}, {:#04X}, {:#04X}, {:#04X}]", state.node,
                    if state.pos+0 < data.len() { data[state.pos+0] } else { 0 },
                    if state.pos+1 < data.len() { data[state.pos+1] } else { 0 },
                    if state.pos+2 < data.len() { data[state.pos+2] } else { 0 },
                    if state.pos+3 < data.len() { data[state.pos+3] } else { 0 },
                    if state.pos+4 < data.len() { data[state.pos+4] } else { 0 });
            }
            let n = state.node;
            let d = state.pos;
            match state.node {
                NodeT::Loop1_0 => { self.loop1_0(state, data); }
                NodeT::Any1_0 => { self.any1_0(state, data); }
                NodeT::Text1_0_0_0 => { self.text1_0_0_0(state, data); }
                NodeT::Text1_0_1_0 => { self.text1_0_1_0(state, data); }
                NodeT::Text1_0_2_0 => { self.text1_0_2_0(state, data); }
                NodeT::Text1_0_3_0 => { self.text1_0_3_0(state, data); }
                NodeT::Text1_0_4_0 => { self.text1_0_4_0(state, data); }
                NodeT::Text1_0_5_0 => { self.text1_0_5_0(state, data); }
                NodeT::Text1_0_6_0 => { self.text1_0_6_0(state, data); }
                NodeT::Text1_0_7_0 => { self.text1_0_7_0(state, data); }
                NodeT::Text1_0_8_0 => { self.text1_0_8_0(state, data); }
                NodeT::Text1_0_9_0 => { self.text1_0_9_0(state, data); }
                NodeT::Text1_0_10_0 => { self.text1_0_10_0(state, data); }
                NodeT::Bang1_0 => { self.bang1_0(state, data); }
                NodeT::Call1_2 => { self.call1_2(state, data); }
                NodeT::Call1_3 => { self.call1_3(state, data); }
                NodeT::Reset1_4 => { self.reset1_4(state, data); }
                NodeT::Loop3_0 => { self.loop3_0(state, data); }
                NodeT::Label3_0 => { self.label3_0(state, data); }
                NodeT::Loop3_1 => { self.loop3_1(state, data); }
                NodeT::Range4_0 => { self.range4_0(state, data); }
                NodeT::String4_1 => { self.string4_1(state, data); }
                NodeT::Range4_2 => { self.range4_2(state, data); }
                NodeT::Func4_3 => { self.func4_3(state, data); }
                NodeT::Text4_4 => { self.text4_4(state, data); }
                NodeT::Range4_5 => { self.range4_5(state, data); }
                NodeT::Text4_6 => { self.text4_6(state, data); }
                NodeT::Range4_7 => { self.range4_7(state, data); }
                NodeT::Text4_8 => { self.text4_8(state, data); }
                NodeT::Text4_9 => { self.text4_9(state, data); }
                NodeT::Ret4_10 => { self.ret4_10(state, data); }
                NodeT::Loop6_0 => { self.loop6_0(state, data); }
                NodeT::Label6_0 => { self.label6_0(state, data); }
                NodeT::Loop6_1 => { self.loop6_1(state, data); }
                NodeT::Text7_0 => { self.text7_0(state, data, false); }
                NodeT::Range7_1 => { self.range7_1(state, data); }
                NodeT::String7_2 => { self.string7_2(state, data); }
                NodeT::Func7_3 => { self.func7_3(state, data); }
                NodeT::Text7_4 => { self.text7_4(state, data); }
                NodeT::Text7_5 => { self.text7_5(state, data); }
                NodeT::Any8_0 => { self.any8_0(state, data); }
                NodeT::Text8_0_0_0 => { self.text8_0_0_0(state, data); }
                NodeT::Bang8_0 => { self.bang8_0(state, data); }
                NodeT::Range8_2 => { self.range8_2(state, data); }
                NodeT::String8_3 => { self.string8_3(state, data); }
                NodeT::Func8_4 => { self.func8_4(state, data); }
                NodeT::Text8_5 => { self.text8_5(state, data); }
                NodeT::Text8_6 => { self.text8_6(state, data); }
                NodeT::Any9_0 => { self.any9_0(state, data); }
                NodeT::Text9_0_0_0 => { self.text9_0_0_0(state, data); }
                NodeT::Bang9_0 => { self.bang9_0(state, data); }
                NodeT::Range9_2 => { self.range9_2(state, data); }
                NodeT::Uint9_3 => { self.uint9_3(state, data); }
                NodeT::Func9_4 => { self.func9_4(state, data); }
                NodeT::Text9_5 => { self.text9_5(state, data); }
                NodeT::Text9_6 => { self.text9_6(state, data); }
                NodeT::Range10_0 => { self.range10_0(state, data); }
                NodeT::Range10_1 => { self.range10_1(state, data); }
                NodeT::Text10_2 => { self.text10_2(state, data); }
                NodeT::Text10_3 => { self.text10_3(state, data); }
                NodeT::Text11_0 => { self.text11_0(state, data); }
                NodeT::Text11_1 => { self.text11_1(state, data); }
                NodeT::Cases11_2 => { self.cases11_2(state, data); }
                NodeT::If12_0 => { self.if12_0(state, data); }
                NodeT::Data12_1 => { self.data12_1(state, data); }
                NodeT::Ret12_2 => { self.ret12_2(state, data); }
                NodeT::Ret13_0 => { self.ret13_0(state, data); }
                NodeT::Range14_0 => { self.range14_0(state, data); }
                NodeT::Text14_1 => { self.text14_1(state, data); }
                NodeT::Loop16_0 => { self.loop16_0(state, data); }
                NodeT::NoState => { break; }
            }; // match
            if d == state.pos && n == state.node {
                break;
            }
        } // loop
    }
    fn loop1_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        return self.any1_0(state, data);
    }
    fn any1_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.pos == data.len() {
            return true;
        }
        let istate = *state;
        // case_1: Text1_0_0_0
        if self.text1_0_0_0(state, data) && state.node == NodeT::Bang1_0 {
            return true;
        }
        else if state.node != NodeT::NoState {
            self.vstate.push(*state);
        }
        *state = istate;
        // case_2: Text1_0_1_0
        if self.text1_0_1_0(state, data) && state.node == NodeT::Bang1_0 {
            return true;
        }
        else if state.node != NodeT::NoState {
            self.vstate.push(*state);
        }
        *state = istate;
        // case_3: Text1_0_2_0
        if self.text1_0_2_0(state, data) && state.node == NodeT::Bang1_0 {
            return true;
        }
        else if state.node != NodeT::NoState {
            self.vstate.push(*state);
        }
        *state = istate;
        // case_4: Text1_0_3_0
        if self.text1_0_3_0(state, data) && state.node == NodeT::Bang1_0 {
            return true;
        }
        else if state.node != NodeT::NoState {
            self.vstate.push(*state);
        }
        *state = istate;
        // case_5: Text1_0_4_0
        if self.text1_0_4_0(state, data) && state.node == NodeT::Bang1_0 {
            return true;
        }
        else if state.node != NodeT::NoState {
            self.vstate.push(*state);
        }
        *state = istate;
        // case_6: Text1_0_5_0
        if self.text1_0_5_0(state, data) && state.node == NodeT::Bang1_0 {
            return true;
        }
        else if state.node != NodeT::NoState {
            self.vstate.push(*state);
        }
        *state = istate;
        // case_7: Text1_0_6_0
        if self.text1_0_6_0(state, data) && state.node == NodeT::Bang1_0 {
            return true;
        }
        else if state.node != NodeT::NoState {
            self.vstate.push(*state);
        }
        *state = istate;
        // case_8: Text1_0_7_0
        if self.text1_0_7_0(state, data) && state.node == NodeT::Bang1_0 {
            return true;
        }
        else if state.node != NodeT::NoState {
            self.vstate.push(*state);
        }
        *state = istate;
        // case_9: Text1_0_8_0
        if self.text1_0_8_0(state, data) && state.node == NodeT::Bang1_0 {
            return true;
        }
        else if state.node != NodeT::NoState {
            self.vstate.push(*state);
        }
        *state = istate;
        // case_10: Text1_0_9_0
        if self.text1_0_9_0(state, data) && state.node == NodeT::Bang1_0 {
            return true;
        }
        else if state.node != NodeT::NoState {
            self.vstate.push(*state);
        }
        *state = istate;
        // case_11: Text1_0_10_0
        if self.text1_0_10_0(state, data) && state.node == NodeT::Bang1_0 {
            return true;
        }
        else if state.node != NodeT::NoState {
            self.vstate.push(*state);
        }
        state.node = NodeT::NoState;
        return false;
    }
    fn text1_0_0_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;3] = [0x47, 0x45, 0x54]; // get
        while state.pos < data.len() {
            if TEXT[state.consumed] != data[state.pos] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.pos += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.pos += 1;
        }
        state.node = NodeT::Text1_0_0_0;
        return true;
    }
    fn text1_0_1_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;4] = [0x48, 0x45, 0x41, 0x44]; // head
        while state.pos < data.len() {
            if TEXT[state.consumed] != data[state.pos] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.pos += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.pos += 1;
        }
        state.node = NodeT::Text1_0_1_0;
        return true;
    }
    fn text1_0_2_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;3] = [0x50, 0x55, 0x54]; // put
        while state.pos < data.len() {
            if TEXT[state.consumed] != data[state.pos] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.pos += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.pos += 1;
        }
        state.node = NodeT::Text1_0_2_0;
        return true;
    }
    fn text1_0_3_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;5] = [0x50, 0x41, 0x54, 0x43, 0x48]; // patch
        while state.pos < data.len() {
            if TEXT[state.consumed] != data[state.pos] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.pos += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.pos += 1;
        }
        state.node = NodeT::Text1_0_3_0;
        return true;
    }
    fn text1_0_4_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;6] = [0x44, 0x45, 0x4c, 0x45, 0x54, 0x45]; // delete
        while state.pos < data.len() {
            if TEXT[state.consumed] != data[state.pos] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.pos += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.pos += 1;
        }
        state.node = NodeT::Text1_0_4_0;
        return true;
    }
    fn text1_0_5_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;7] = [0x4f, 0x50, 0x54, 0x49, 0x4f, 0x4e, 0x53]; // options
        while state.pos < data.len() {
            if TEXT[state.consumed] != data[state.pos] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.pos += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.pos += 1;
        }
        state.node = NodeT::Text1_0_5_0;
        return true;
    }
    fn text1_0_6_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;7] = [0x43, 0x4f, 0x4e, 0x4e, 0x45, 0x43, 0x54]; // connect
        while state.pos < data.len() {
            if TEXT[state.consumed] != data[state.pos] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.pos += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.pos += 1;
        }
        state.node = NodeT::Text1_0_6_0;
        return true;
    }
    fn text1_0_7_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;4] = [0x4c, 0x49, 0x4e, 0x4b]; // link
        while state.pos < data.len() {
            if TEXT[state.consumed] != data[state.pos] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.pos += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.pos += 1;
        }
        state.node = NodeT::Text1_0_7_0;
        return true;
    }
    fn text1_0_8_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;6] = [0x55, 0x4e, 0x4c, 0x49, 0x4e, 0x4b]; // unlink
        while state.pos < data.len() {
            if TEXT[state.consumed] != data[state.pos] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.pos += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.pos += 1;
        }
        state.node = NodeT::Text1_0_8_0;
        return true;
    }
    fn text1_0_9_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;5] = [0x54, 0x52, 0x41, 0x43, 0x45]; // trace
        while state.pos < data.len() {
            if TEXT[state.consumed] != data[state.pos] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.pos += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.pos += 1;
        }
        state.node = NodeT::Text1_0_9_0;
        return true;
    }
    fn text1_0_10_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;4] = [0x50, 0x4f, 0x53, 0x54]; // post
        while state.pos < data.len() {
            if TEXT[state.consumed] != data[state.pos] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.pos += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.pos += 1;
        }
        state.node = NodeT::Text1_0_10_0;
        return true;
    }
    fn bang1_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        state.node = NodeT::Call1_2;
        for v in & mut self.vstate {
            v.node = NodeT::NoState;
        }
        return true;
    }
    fn call1_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        state.node = NodeT::Label3_0;
        let rlen = state.rstack.len();
        if state.rcount < rlen {
            let rcount = state.rcount;
            state.rstack[rcount] = NodeT::Call1_3;
            state.rcount = state.rcount + 1;
        } else {
            for i in 1 .. rlen {
                state.rstack[i - 1] = state.rstack[i];
            }
            state.rstack[rlen - 1] = NodeT::Call1_3;
        }
        return true;
    }
    fn call1_3(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        state.node = NodeT::Label6_0;
        let rlen = state.rstack.len();
        if state.rcount < rlen {
            let rcount = state.rcount;
            state.rstack[rcount] = NodeT::Reset1_4;
            state.rcount = state.rcount + 1;
        } else {
            for i in 1 .. rlen {
                state.rstack[i - 1] = state.rstack[i];
            }
            state.rstack[rlen - 1] = NodeT::Reset1_4;
        }
        return true;
    }
    fn reset1_4(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        state.node = NodeT::NoState;
        self.reset();
        let c = self.vstate.len();
        self.vstate[c-1].pos = state.pos;
        return true;
    }
    fn loop3_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        return self.label3_0(state, data);
    }
    fn label3_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        state.node = NodeT::Loop3_1;
        return true;
    }
    fn loop3_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        return self.range4_0(state, data);
    }
    fn range4_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0x9][0x20]
        let datastart = state.pos;
        while state.pos < data.len() {
            if TERMINATOR[usize::from(data[state.pos])] {
                state.consumed += state.pos - datastart;
                state.node = if state.consumed >= 1 { NodeT::String4_1 } else { NodeT::NoState };
                let ret = state.node == NodeT::String4_1;
                state.consumed = 0;
                return ret;
            }
            state.pos += 1;
            state.node = NodeT::String4_1;
            return true;
        }
        state.consumed += state.pos - datastart;
        state.node = NodeT::Range4_0;
        return true;
    }
    fn _string4_1(&mut self, state: &mut StateT, data: &[u8]) {
        if state.consumed == 0 {
            self.output.url().clear();
        }
        let len = if (self.output.url().len() + data.len()) > 128 { 128 - self.output.url().len() } else { data.len() };
        self.output.url().push_str(&String::from_utf8_lossy(&data[0 .. len]));
    }
    fn string4_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false]; // ^[0x9][0x20]
        let datastart = state.pos;
        let is_avx2 = is_x86_feature_detected!("avx2");
        let is_sse2 = is_x86_feature_detected!("sse2");
        while state.pos < data.len() {
            if is_avx2 && (state.pos + 32) <= data.len() {
                unsafe {
                    let d = _mm256_lddqu_si256(data.as_ptr().add(state.pos) as *const __m256i);
                    let mut m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0x9), d);
                    m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0x20), d));
                    let r: u32 = _mm256_movemask_epi8(m) as u32;
                    if r > 0 {
                        state.pos += r.trailing_zeros() as usize;
                    } else {
                        state.pos += 32;
                        continue;
                    }
                }
            }
            else if is_sse2 && (state.pos + 16) <= data.len() {
                unsafe {
                    let d = _mm_loadu_si128(data.as_ptr().add(state.pos) as *const __m128i);
                    let mut m = _mm_cmpeq_epi8(_mm_set1_epi8(0x9), d);
                    m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0x20), d));
                    let r: u16 = _mm_movemask_epi8(m) as u16;
                    if r > 0 {
                        state.pos += r.trailing_zeros() as usize;
                    } else {
                        state.pos += 16;
                        continue;
                    }
                }
            }
            else if (state.pos + 8) <= data.len() {
                if TERMINATOR[usize::from(data[state.pos])] {
                    state.pos += 0;
                }
                else if TERMINATOR[usize::from(data[state.pos + 1])] {
                    state.pos += 1;
                }
                else if TERMINATOR[usize::from(data[state.pos + 2])] {
                    state.pos += 2;
                }
                else if TERMINATOR[usize::from(data[state.pos + 3])] {
                    state.pos += 3;
                }
                else if TERMINATOR[usize::from(data[state.pos + 4])] {
                    state.pos += 4;
                }
                else if TERMINATOR[usize::from(data[state.pos + 5])] {
                    state.pos += 5;
                }
                else if TERMINATOR[usize::from(data[state.pos + 6])] {
                    state.pos += 6;
                }
                else if TERMINATOR[usize::from(data[state.pos + 7])] {
                    state.pos += 7;
                }
                else
                {
                    state.pos += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.pos])]) {
                state.pos += 1;
                continue;
            }
            let pos = state.pos;
            self._string4_1(state, &data[datastart .. pos]);
            let total = state.consumed + state.pos - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Range4_2;
                return true;
            } else {
                state.node = NodeT::NoState;
                return false;
            }
        }
        if datastart < state.pos {
            let pos = state.pos;
            self._string4_1(state, &data[datastart .. pos]);
        }
        state.consumed += state.pos - datastart;
        state.node = NodeT::String4_1;
        return true;
    }
    fn range4_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0x9][0x20]
        let datastart = state.pos;
        while state.pos < data.len() {
            if TERMINATOR[usize::from(data[state.pos])] {
                state.consumed += state.pos - datastart;
                state.node = if state.consumed >= 1 { NodeT::Func4_3 } else { NodeT::NoState };
                let ret = state.node == NodeT::Func4_3;
                state.consumed = 0;
                return ret;
            }
            state.pos += 1;
            state.node = NodeT::Func4_3;
            return true;
        }
        state.consumed += state.pos - datastart;
        state.node = NodeT::Range4_2;
        return true;
    }
    fn func4_3(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if self.output._func4_3() {
            state.node = NodeT::Text4_4;
            return true;
        }
        state.node = NodeT::NoState;
        return false;
    }
    fn text4_4(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;5] = [0x48, 0x54, 0x54, 0x50, 0x2f]; // http/
        while state.pos < data.len() {
            if TEXT[state.consumed] != data[state.pos] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.pos += 1;
                state.consumed = 0;
                state.node = NodeT::Range4_5;
                return true;
            }
            state.pos += 1;
        }
        state.node = NodeT::Text4_4;
        return true;
    }
    fn range4_5(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0-9]
        let datastart = state.pos;
        while state.pos < data.len() {
            if TERMINATOR[usize::from(data[state.pos])] {
                state.consumed += state.pos - datastart;
                state.node = if state.consumed >= 1 { NodeT::Text4_6 } else { NodeT::NoState };
                let ret = state.node == NodeT::Text4_6;
                state.consumed = 0;
                return ret;
            }
            state.pos += 1;
            state.node = NodeT::Text4_6;
            return true;
        }
        state.consumed += state.pos - datastart;
        state.node = NodeT::Range4_5;
        return true;
    }
    fn text4_6(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.pos < data.len() {
            if 0x2E != data[state.pos] {
                state.node = NodeT::NoState;
                return false;
            } else {
                state.pos += 1;
                state.node = NodeT::Range4_7;
                return true;
            }
        }
        state.node = NodeT::Text4_6;
        return true;
    }
    fn range4_7(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0-9]
        let datastart = state.pos;
        while state.pos < data.len() {
            if TERMINATOR[usize::from(data[state.pos])] {
                state.consumed += state.pos - datastart;
                state.node = if state.consumed >= 1 { NodeT::Text4_8 } else { NodeT::NoState };
                let ret = state.node == NodeT::Text4_8;
                state.consumed = 0;
                return ret;
            }
            state.pos += 1;
            state.node = NodeT::Text4_8;
            return true;
        }
        state.consumed += state.pos - datastart;
        state.node = NodeT::Range4_7;
        return true;
    }
    fn text4_8(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.pos < data.len() {
            if 0x0D != data[state.pos] {
                state.node = NodeT::Text4_9;
                return true;
            } else {
                state.pos += 1;
                state.node = NodeT::Text4_9;
                return true;
            }
        }
        state.node = NodeT::Text4_8;
        return true;
    }
    fn text4_9(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.pos < data.len() {
            if 0x0A != data[state.pos] {
                state.node = NodeT::NoState;
                return false;
            } else {
                state.pos += 1;
                state.node = NodeT::Ret4_10;
                return true;
            }
        }
        state.node = NodeT::Text4_9;
        return true;
    }
    fn ret4_10(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.rcount > 0 {
            state.rcount = state.rcount - 1;
            state.node = state.rstack[state.rcount]
        } else {
            state.node = NodeT::NoState;
        }
        return state.node != NodeT::NoState;
    }
    fn loop6_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        return self.label6_0(state, data);
    }
    fn label6_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        state.node = NodeT::Loop6_1;
        return true;
    }
    fn loop6_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.pos == data.len() {
            return true;
        }
        if self.text7_0(state, data, true) { // case_1
            return true;
        }
        let istate = *state;
        if self.any8_0(state, data) { // case_2
            return true;
        }
        *state = istate;
        if self.any9_0(state, data) { // case_3
            return true;
        }
        *state = istate;
        if self.range10_0(state, data) { // case_4
            return true;
        }
        if self.text11_0(state, data) { // case_5
            return true;
        }
        state.node = NodeT::Range14_0;
        return true;
    }
    fn text7_0(&mut self, state: &mut StateT, data: &[u8], is_branch: bool) -> bool {
        static TEXT:[u8;5] = [0x68, 0x6f, 0x73, 0x74, 0x3a]; // host:
        while state.pos < data.len() {
            if ((TEXT[state.consumed] ^ data[state.pos]) & 0xDF) != 0 {
                state.node = NodeT::Range14_0;
                let ret = is_branch && state.consumed != 0;
                state.consumed = 0;
                return ret;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.pos += 1;
                state.consumed = 0;
                state.node = NodeT::Range7_1;
                return true;
            }
            state.pos += 1;
        }
        state.node = NodeT::Text7_0;
        return true;
    }
    fn range7_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0x9][0x20]
        let datastart = state.pos;
        let is_avx2 = is_x86_feature_detected!("avx2");
        let is_sse2 = is_x86_feature_detected!("sse2");
        while state.pos < data.len() {
            if is_avx2 && (state.pos + 32) <= data.len() {
                unsafe {
                    let d = _mm256_lddqu_si256(data.as_ptr().add(state.pos) as *const __m256i);
                    let mut m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0x9), d);
                    m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0x20), d));
                    let r: u32 = !_mm256_movemask_epi8(m) as u32;
                    if r > 0 {
                        state.pos += r.trailing_zeros() as usize;
                    } else {
                        state.pos += 32;
                        continue;
                    }
                }
            }
            else if is_sse2 && (state.pos + 16) <= data.len() {
                unsafe {
                    let d = _mm_loadu_si128(data.as_ptr().add(state.pos) as *const __m128i);
                    let mut m = _mm_cmpeq_epi8(_mm_set1_epi8(0x9), d);
                    m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0x20), d));
                    let r: u16 = !_mm_movemask_epi8(m) as u16;
                    if r > 0 {
                        state.pos += r.trailing_zeros() as usize;
                    } else {
                        state.pos += 16;
                        continue;
                    }
                }
            }
            else if (state.pos + 8) <= data.len() {
                if TERMINATOR[usize::from(data[state.pos])] {
                    state.pos += 0;
                }
                else if TERMINATOR[usize::from(data[state.pos + 1])] {
                    state.pos += 1;
                }
                else if TERMINATOR[usize::from(data[state.pos + 2])] {
                    state.pos += 2;
                }
                else if TERMINATOR[usize::from(data[state.pos + 3])] {
                    state.pos += 3;
                }
                else if TERMINATOR[usize::from(data[state.pos + 4])] {
                    state.pos += 4;
                }
                else if TERMINATOR[usize::from(data[state.pos + 5])] {
                    state.pos += 5;
                }
                else if TERMINATOR[usize::from(data[state.pos + 6])] {
                    state.pos += 6;
                }
                else if TERMINATOR[usize::from(data[state.pos + 7])] {
                    state.pos += 7;
                }
                else
                {
                    state.pos += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.pos])]) {
                state.pos += 1;
                continue;
            }
            let total = state.consumed + state.pos - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::String7_2;
                return true;
            } else {
                state.node = NodeT::Range14_0;
                return false;
            }
        }
        state.consumed += state.pos - datastart;
        state.node = NodeT::Range7_1;
        return true;
    }
    fn _string7_2(&mut self, state: &mut StateT, data: &[u8]) {
        if state.consumed == 0 {
            self.output.host().clear();
        }
        let len = if (self.output.host().len() + data.len()) > 64 { 64 - self.output.host().len() } else { data.len() };
        self.output.host().push_str(&String::from_utf8_lossy(&data[0 .. len]));
    }
    fn string7_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false]; // ^[0xa][0xd]
        let datastart = state.pos;
        let is_avx2 = is_x86_feature_detected!("avx2");
        let is_sse2 = is_x86_feature_detected!("sse2");
        while state.pos < data.len() {
            if is_avx2 && (state.pos + 32) <= data.len() {
                unsafe {
                    let d = _mm256_lddqu_si256(data.as_ptr().add(state.pos) as *const __m256i);
                    let mut m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0xa), d);
                    m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0xd), d));
                    let r: u32 = _mm256_movemask_epi8(m) as u32;
                    if r > 0 {
                        state.pos += r.trailing_zeros() as usize;
                    } else {
                        state.pos += 32;
                        continue;
                    }
                }
            }
            else if is_sse2 && (state.pos + 16) <= data.len() {
                unsafe {
                    let d = _mm_loadu_si128(data.as_ptr().add(state.pos) as *const __m128i);
                    let mut m = _mm_cmpeq_epi8(_mm_set1_epi8(0xa), d);
                    m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0xd), d));
                    let r: u16 = _mm_movemask_epi8(m) as u16;
                    if r > 0 {
                        state.pos += r.trailing_zeros() as usize;
                    } else {
                        state.pos += 16;
                        continue;
                    }
                }
            }
            else if (state.pos + 8) <= data.len() {
                if TERMINATOR[usize::from(data[state.pos])] {
                    state.pos += 0;
                }
                else if TERMINATOR[usize::from(data[state.pos + 1])] {
                    state.pos += 1;
                }
                else if TERMINATOR[usize::from(data[state.pos + 2])] {
                    state.pos += 2;
                }
                else if TERMINATOR[usize::from(data[state.pos + 3])] {
                    state.pos += 3;
                }
                else if TERMINATOR[usize::from(data[state.pos + 4])] {
                    state.pos += 4;
                }
                else if TERMINATOR[usize::from(data[state.pos + 5])] {
                    state.pos += 5;
                }
                else if TERMINATOR[usize::from(data[state.pos + 6])] {
                    state.pos += 6;
                }
                else if TERMINATOR[usize::from(data[state.pos + 7])] {
                    state.pos += 7;
                }
                else
                {
                    state.pos += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.pos])]) {
                state.pos += 1;
                continue;
            }
            let pos = state.pos;
            self._string7_2(state, &data[datastart .. pos]);
            let total = state.consumed + state.pos - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Func7_3;
                return true;
            } else {
                state.node = NodeT::Range14_0;
                return false;
            }
        }
        if datastart < state.pos {
            let pos = state.pos;
            self._string7_2(state, &data[datastart .. pos]);
        }
        state.consumed += state.pos - datastart;
        state.node = NodeT::String7_2;
        return true;
    }
    fn func7_3(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if self.output._func7_3() {
            state.node = NodeT::Text7_4;
            return true;
        }
        state.node = NodeT::Range14_0;
        return false;
    }
    fn text7_4(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.pos < data.len() {
            if 0x0D != data[state.pos] {
                state.node = NodeT::Text7_5;
                return true;
            } else {
                state.pos += 1;
                state.node = NodeT::Text7_5;
                return true;
            }
        }
        state.node = NodeT::Text7_4;
        return true;
    }
    fn text7_5(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.pos < data.len() {
            if 0x0A != data[state.pos] {
                state.node = NodeT::Range14_0;
                return false;
            } else {
                state.pos += 1;
                state.node = NodeT::Loop6_1;
                return true;
            }
        }
        state.node = NodeT::Text7_5;
        return true;
    }
    fn any8_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.pos == data.len() {
            return true;
        }
        // case_1: Text8_0_0_0
        if self.text8_0_0_0(state, data) && state.node == NodeT::Bang8_0 {
            return true;
        }
        else if state.node != NodeT::NoState {
            self.vstate.push(*state);
        }
        state.node = NodeT::Range14_0;
        return false;
    }
    fn text8_0_0_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;13] = [0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x74, 0x79, 0x70, 0x65, 0x3a]; // content-type:
        while state.pos < data.len() {
            if ((TEXT[state.consumed] ^ data[state.pos]) & 0xDF) != 0 {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.pos += 1;
                state.consumed = 0;
                state.node = NodeT::Bang8_0;
                return true;
            }
            state.pos += 1;
        }
        state.node = NodeT::Text8_0_0_0;
        return true;
    }
    fn bang8_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        state.node = NodeT::Range8_2;
        for v in & mut self.vstate {
            v.node = NodeT::NoState;
        }
        return true;
    }
    fn range8_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0x9][0x20]
        let datastart = state.pos;
        let is_avx2 = is_x86_feature_detected!("avx2");
        let is_sse2 = is_x86_feature_detected!("sse2");
        while state.pos < data.len() {
            if is_avx2 && (state.pos + 32) <= data.len() {
                unsafe {
                    let d = _mm256_lddqu_si256(data.as_ptr().add(state.pos) as *const __m256i);
                    let mut m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0x9), d);
                    m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0x20), d));
                    let r: u32 = !_mm256_movemask_epi8(m) as u32;
                    if r > 0 {
                        state.pos += r.trailing_zeros() as usize;
                    } else {
                        state.pos += 32;
                        continue;
                    }
                }
            }
            else if is_sse2 && (state.pos + 16) <= data.len() {
                unsafe {
                    let d = _mm_loadu_si128(data.as_ptr().add(state.pos) as *const __m128i);
                    let mut m = _mm_cmpeq_epi8(_mm_set1_epi8(0x9), d);
                    m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0x20), d));
                    let r: u16 = !_mm_movemask_epi8(m) as u16;
                    if r > 0 {
                        state.pos += r.trailing_zeros() as usize;
                    } else {
                        state.pos += 16;
                        continue;
                    }
                }
            }
            else if (state.pos + 8) <= data.len() {
                if TERMINATOR[usize::from(data[state.pos])] {
                    state.pos += 0;
                }
                else if TERMINATOR[usize::from(data[state.pos + 1])] {
                    state.pos += 1;
                }
                else if TERMINATOR[usize::from(data[state.pos + 2])] {
                    state.pos += 2;
                }
                else if TERMINATOR[usize::from(data[state.pos + 3])] {
                    state.pos += 3;
                }
                else if TERMINATOR[usize::from(data[state.pos + 4])] {
                    state.pos += 4;
                }
                else if TERMINATOR[usize::from(data[state.pos + 5])] {
                    state.pos += 5;
                }
                else if TERMINATOR[usize::from(data[state.pos + 6])] {
                    state.pos += 6;
                }
                else if TERMINATOR[usize::from(data[state.pos + 7])] {
                    state.pos += 7;
                }
                else
                {
                    state.pos += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.pos])]) {
                state.pos += 1;
                continue;
            }
            let total = state.consumed + state.pos - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::String8_3;
                return true;
            } else {
                state.node = NodeT::Range14_0;
                return false;
            }
        }
        state.consumed += state.pos - datastart;
        state.node = NodeT::Range8_2;
        return true;
    }
    fn _string8_3(&mut self, state: &mut StateT, data: &[u8]) {
        if state.consumed == 0 {
            self.output.ctype().clear();
        }
        let len = if (self.output.ctype().len() + data.len()) > 64 { 64 - self.output.ctype().len() } else { data.len() };
        self.output.ctype().push_str(&String::from_utf8_lossy(&data[0 .. len]));
    }
    fn string8_3(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false]; // ^[0xa][0xd]
        let datastart = state.pos;
        let is_avx2 = is_x86_feature_detected!("avx2");
        let is_sse2 = is_x86_feature_detected!("sse2");
        while state.pos < data.len() {
            if is_avx2 && (state.pos + 32) <= data.len() {
                unsafe {
                    let d = _mm256_lddqu_si256(data.as_ptr().add(state.pos) as *const __m256i);
                    let mut m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0xa), d);
                    m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0xd), d));
                    let r: u32 = _mm256_movemask_epi8(m) as u32;
                    if r > 0 {
                        state.pos += r.trailing_zeros() as usize;
                    } else {
                        state.pos += 32;
                        continue;
                    }
                }
            }
            else if is_sse2 && (state.pos + 16) <= data.len() {
                unsafe {
                    let d = _mm_loadu_si128(data.as_ptr().add(state.pos) as *const __m128i);
                    let mut m = _mm_cmpeq_epi8(_mm_set1_epi8(0xa), d);
                    m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0xd), d));
                    let r: u16 = _mm_movemask_epi8(m) as u16;
                    if r > 0 {
                        state.pos += r.trailing_zeros() as usize;
                    } else {
                        state.pos += 16;
                        continue;
                    }
                }
            }
            else if (state.pos + 8) <= data.len() {
                if TERMINATOR[usize::from(data[state.pos])] {
                    state.pos += 0;
                }
                else if TERMINATOR[usize::from(data[state.pos + 1])] {
                    state.pos += 1;
                }
                else if TERMINATOR[usize::from(data[state.pos + 2])] {
                    state.pos += 2;
                }
                else if TERMINATOR[usize::from(data[state.pos + 3])] {
                    state.pos += 3;
                }
                else if TERMINATOR[usize::from(data[state.pos + 4])] {
                    state.pos += 4;
                }
                else if TERMINATOR[usize::from(data[state.pos + 5])] {
                    state.pos += 5;
                }
                else if TERMINATOR[usize::from(data[state.pos + 6])] {
                    state.pos += 6;
                }
                else if TERMINATOR[usize::from(data[state.pos + 7])] {
                    state.pos += 7;
                }
                else
                {
                    state.pos += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.pos])]) {
                state.pos += 1;
                continue;
            }
            let pos = state.pos;
            self._string8_3(state, &data[datastart .. pos]);
            let total = state.consumed + state.pos - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Func8_4;
                return true;
            } else {
                state.node = NodeT::Range14_0;
                return false;
            }
        }
        if datastart < state.pos {
            let pos = state.pos;
            self._string8_3(state, &data[datastart .. pos]);
        }
        state.consumed += state.pos - datastart;
        state.node = NodeT::String8_3;
        return true;
    }
    fn func8_4(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if self.output._func8_4() {
            state.node = NodeT::Text8_5;
            return true;
        }
        state.node = NodeT::Range14_0;
        return false;
    }
    fn text8_5(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.pos < data.len() {
            if 0x0D != data[state.pos] {
                state.node = NodeT::Text8_6;
                return true;
            } else {
                state.pos += 1;
                state.node = NodeT::Text8_6;
                return true;
            }
        }
        state.node = NodeT::Text8_5;
        return true;
    }
    fn text8_6(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.pos < data.len() {
            if 0x0A != data[state.pos] {
                state.node = NodeT::Range14_0;
                return false;
            } else {
                state.pos += 1;
                state.node = NodeT::Loop6_1;
                return true;
            }
        }
        state.node = NodeT::Text8_6;
        return true;
    }
    fn any9_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.pos == data.len() {
            return true;
        }
        // case_1: Text9_0_0_0
        if self.text9_0_0_0(state, data) && state.node == NodeT::Bang9_0 {
            return true;
        }
        else if state.node != NodeT::NoState {
            self.vstate.push(*state);
        }
        state.node = NodeT::Range14_0;
        return false;
    }
    fn text9_0_0_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;15] = [0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x2d, 0x6c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x3a]; // content-length:
        while state.pos < data.len() {
            if ((TEXT[state.consumed] ^ data[state.pos]) & 0xDF) != 0 {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.pos += 1;
                state.consumed = 0;
                state.node = NodeT::Bang9_0;
                return true;
            }
            state.pos += 1;
        }
        state.node = NodeT::Text9_0_0_0;
        return true;
    }
    fn bang9_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        state.node = NodeT::Range9_2;
        for v in & mut self.vstate {
            v.node = NodeT::NoState;
        }
        return true;
    }
    fn range9_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0x9][0x20]
        let datastart = state.pos;
        let is_avx2 = is_x86_feature_detected!("avx2");
        let is_sse2 = is_x86_feature_detected!("sse2");
        while state.pos < data.len() {
            if is_avx2 && (state.pos + 32) <= data.len() {
                unsafe {
                    let d = _mm256_lddqu_si256(data.as_ptr().add(state.pos) as *const __m256i);
                    let mut m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0x9), d);
                    m = _mm256_or_si256(m, _mm256_cmpeq_epi8(_mm256_set1_epi8(0x20), d));
                    let r: u32 = !_mm256_movemask_epi8(m) as u32;
                    if r > 0 {
                        state.pos += r.trailing_zeros() as usize;
                    } else {
                        state.pos += 32;
                        continue;
                    }
                }
            }
            else if is_sse2 && (state.pos + 16) <= data.len() {
                unsafe {
                    let d = _mm_loadu_si128(data.as_ptr().add(state.pos) as *const __m128i);
                    let mut m = _mm_cmpeq_epi8(_mm_set1_epi8(0x9), d);
                    m = _mm_or_si128(m, _mm_cmpeq_epi8(_mm_set1_epi8(0x20), d));
                    let r: u16 = !_mm_movemask_epi8(m) as u16;
                    if r > 0 {
                        state.pos += r.trailing_zeros() as usize;
                    } else {
                        state.pos += 16;
                        continue;
                    }
                }
            }
            else if (state.pos + 8) <= data.len() {
                if TERMINATOR[usize::from(data[state.pos])] {
                    state.pos += 0;
                }
                else if TERMINATOR[usize::from(data[state.pos + 1])] {
                    state.pos += 1;
                }
                else if TERMINATOR[usize::from(data[state.pos + 2])] {
                    state.pos += 2;
                }
                else if TERMINATOR[usize::from(data[state.pos + 3])] {
                    state.pos += 3;
                }
                else if TERMINATOR[usize::from(data[state.pos + 4])] {
                    state.pos += 4;
                }
                else if TERMINATOR[usize::from(data[state.pos + 5])] {
                    state.pos += 5;
                }
                else if TERMINATOR[usize::from(data[state.pos + 6])] {
                    state.pos += 6;
                }
                else if TERMINATOR[usize::from(data[state.pos + 7])] {
                    state.pos += 7;
                }
                else
                {
                    state.pos += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.pos])]) {
                state.pos += 1;
                continue;
            }
            let total = state.consumed + state.pos - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Uint9_3;
                return true;
            } else {
                state.node = NodeT::Range14_0;
                return false;
            }
        }
        state.consumed += state.pos - datastart;
        state.node = NodeT::Range9_2;
        return true;
    }
    fn _uint9_3(&mut self, state: &mut StateT, data: &[u8]) {
        if state.consumed == 0 {
            *self.output.clength() = 0;
        }
        for x in data {
            *self.output.clength() = *self.output.clength()*10 + u64::from(*x - b'0');
        }
    }
    fn uint9_3(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0-9]
        let datastart = state.pos;
        while state.pos < data.len() {
            if (state.pos + 8) <= data.len() {
                if TERMINATOR[usize::from(data[state.pos])] {
                    state.pos += 0;
                }
                else if TERMINATOR[usize::from(data[state.pos + 1])] {
                    state.pos += 1;
                }
                else if TERMINATOR[usize::from(data[state.pos + 2])] {
                    state.pos += 2;
                }
                else if TERMINATOR[usize::from(data[state.pos + 3])] {
                    state.pos += 3;
                }
                else if TERMINATOR[usize::from(data[state.pos + 4])] {
                    state.pos += 4;
                }
                else if TERMINATOR[usize::from(data[state.pos + 5])] {
                    state.pos += 5;
                }
                else if TERMINATOR[usize::from(data[state.pos + 6])] {
                    state.pos += 6;
                }
                else if TERMINATOR[usize::from(data[state.pos + 7])] {
                    state.pos += 7;
                }
                else
                {
                    state.pos += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.pos])]) {
                state.pos += 1;
                continue;
            }
            let pos = state.pos;
            self._uint9_3(state, &data[datastart .. pos]);
            let total = state.consumed + state.pos - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Func9_4;
                return true;
            } else {
                state.node = NodeT::Range14_0;
                return false;
            }
        }
        if datastart < state.pos {
            let pos = state.pos;
            self._uint9_3(state, &data[datastart .. pos]);
        }
        state.consumed += state.pos - datastart;
        state.node = NodeT::Uint9_3;
        return true;
    }
    fn func9_4(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if self.output._func9_4() {
            state.node = NodeT::Text9_5;
            return true;
        }
        state.node = NodeT::Range14_0;
        return false;
    }
    fn text9_5(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.pos < data.len() {
            if 0x0D != data[state.pos] {
                state.node = NodeT::Text9_6;
                return true;
            } else {
                state.pos += 1;
                state.node = NodeT::Text9_6;
                return true;
            }
        }
        state.node = NodeT::Text9_5;
        return true;
    }
    fn text9_6(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.pos < data.len() {
            if 0x0A != data[state.pos] {
                state.node = NodeT::Range14_0;
                return false;
            } else {
                state.pos += 1;
                state.node = NodeT::Loop6_1;
                return true;
            }
        }
        state.node = NodeT::Text9_6;
        return true;
    }
    fn range10_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
             true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true,  true]; // [0x9][0x20]
        let datastart = state.pos;
        while state.pos < data.len() {
            if TERMINATOR[usize::from(data[state.pos])] {
                state.consumed += state.pos - datastart;
                state.node = if state.consumed >= 1 { NodeT::Range10_1 } else { NodeT::Range14_0 };
                let ret = state.node == NodeT::Range10_1;
                state.consumed = 0;
                return ret;
            }
            state.pos += 1;
            state.node = NodeT::Range10_1;
            return true;
        }
        state.consumed += state.pos - datastart;
        state.node = NodeT::Range10_0;
        return true;
    }
    fn range10_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TERMINATOR:[bool;256] = [
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
            false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false]; // ^[0xa][0xd]
        let datastart = state.pos;
        while state.pos < data.len() {
            if (state.pos + 8) <= data.len() {
                if TERMINATOR[usize::from(data[state.pos])] {
                    state.pos += 0;
                }
                else if TERMINATOR[usize::from(data[state.pos + 1])] {
                    state.pos += 1;
                }
                else if TERMINATOR[usize::from(data[state.pos + 2])] {
                    state.pos += 2;
                }
                else if TERMINATOR[usize::from(data[state.pos + 3])] {
                    state.pos += 3;
                }
                else if TERMINATOR[usize::from(data[state.pos + 4])] {
                    state.pos += 4;
                }
                else if TERMINATOR[usize::from(data[state.pos + 5])] {
                    state.pos += 5;
                }
                else if TERMINATOR[usize::from(data[state.pos + 6])] {
                    state.pos += 6;
                }
                else if TERMINATOR[usize::from(data[state.pos + 7])] {
                    state.pos += 7;
                }
                else
                {
                    state.pos += 8;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.pos])]) {
                state.pos += 1;
                continue;
            }
            state.consumed = 0;
            state.node = NodeT::Text10_2;
            return true;
        }
        state.consumed += state.pos - datastart;
        state.node = NodeT::Range10_1;
        return true;
    }
    fn text10_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.pos < data.len() {
            if 0x0D != data[state.pos] {
                state.node = NodeT::Text10_3;
                return true;
            } else {
                state.pos += 1;
                state.node = NodeT::Text10_3;
                return true;
            }
        }
        state.node = NodeT::Text10_2;
        return true;
    }
    fn text10_3(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.pos < data.len() {
            if 0x0A != data[state.pos] {
                state.node = NodeT::Range14_0;
                return false;
            } else {
                state.pos += 1;
                state.node = NodeT::Loop6_1;
                return true;
            }
        }
        state.node = NodeT::Text10_3;
        return true;
    }
    fn text11_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.pos < data.len() {
            if 0x0D != data[state.pos] {
                state.node = NodeT::Text11_1;
                return true;
            } else {
                state.pos += 1;
                state.node = NodeT::Text11_1;
                return true;
            }
        }
        state.node = NodeT::Text11_0;
        return true;
    }
    fn text11_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.pos < data.len() {
            if 0x0A != data[state.pos] {
                state.node = NodeT::Range14_0;
                return false;
            } else {
                state.pos += 1;
                state.node = NodeT::Cases11_2;
                return true;
            }
        }
        state.node = NodeT::Text11_1;
        return true;
    }
    fn cases11_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if self.if12_0(state, data) { // case_1
            return true;
        }
        if self.ret13_0(state, data) { // case_2
            return true;
        }
        state.node = NodeT::Range14_0;
        return true;
    }
    fn if12_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if self.output._if12_0() {
            state.node = NodeT::Data12_1;
            return true;
        }
        state.node = NodeT::Range14_0;
        return false;
    }
    fn data12_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        let datastart = state.pos;
        if state.consumed == 0 {
            state.node = NodeT::Data12_1;
        }
        if state.pos == data.len() {
            return true;
        }
        else if (state.consumed + data.len() - state.pos) >= self.output._max_data12_1() {
            state.pos += self.output._max_data12_1() - state.consumed;
            let pos = state.pos;
            self.output.payload(&data[datastart .. pos], state.consumed == 0, true);
            state.consumed = 0;
            state.node = NodeT::Ret12_2;
        } else {
            state.pos = data.len();
            let pos = state.pos;
            self.output.payload(&data[datastart .. pos], state.consumed == 0, false);
            state.consumed += state.pos - datastart;
        }
        return true;
    }
    fn ret12_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.rcount > 0 {
            state.rcount = state.rcount - 1;
            state.node = state.rstack[state.rcount]
        } else {
            state.node = NodeT::NoState;
        }
        return state.node != NodeT::NoState;
    }
    fn ret13_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.rcount > 0 {
            state.rcount = state.rcount - 1;
            state.node = state.rstack[state.rcount]
        } else {
            state.node = NodeT::NoState;
        }
        return state.node != NodeT::NoState;
    }
    fn range14_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        let datastart = state.pos;
        let is_avx2 = is_x86_feature_detected!("avx2");
        let is_sse2 = is_x86_feature_detected!("sse2");
        while state.pos < data.len() {
            if is_avx2 && (state.pos + 32) <= data.len() {
                unsafe {
                    let d = _mm256_lddqu_si256(data.as_ptr().add(state.pos) as *const __m256i);
                    let m = _mm256_cmpeq_epi8(_mm256_set1_epi8(0xa), d);
                    let r: u32 = _mm256_movemask_epi8(m) as u32;
                    if r > 0 {
                        state.pos += r.trailing_zeros() as usize;
                    } else {
                        state.pos += 32;
                        continue;
                    }
                }
            }
            else if is_sse2 && (state.pos + 16) <= data.len() {
                unsafe {
                    let d = _mm_loadu_si128(data.as_ptr().add(state.pos) as *const __m128i);
                    let m = _mm_cmpeq_epi8(_mm_set1_epi8(0xa), d);
                    let r: u16 = _mm_movemask_epi8(m) as u16;
                    if r > 0 {
                        state.pos += r.trailing_zeros() as usize;
                    } else {
                        state.pos += 16;
                        continue;
                    }
                }
            }
            else if (state.pos + 8) <= data.len() {
                if data[state.pos] == 0x0a {
                    state.pos += 0;
                }
                else if data[state.pos + 1] == 0x0a {
                    state.pos += 1;
                }
                else if data[state.pos + 2] == 0x0a {
                    state.pos += 2;
                }
                else if data[state.pos + 3] == 0x0a {
                    state.pos += 3;
                }
                else if data[state.pos + 4] == 0x0a {
                    state.pos += 4;
                }
                else if data[state.pos + 5] == 0x0a {
                    state.pos += 5;
                }
                else if data[state.pos + 6] == 0x0a {
                    state.pos += 6;
                }
                else if data[state.pos + 7] == 0x0a {
                    state.pos += 7;
                }
                else
                {
                    state.pos += 8;
                    continue;
                }
            }
            else if !(data[state.pos] == 0x0a) {
                state.pos += 1;
                continue;
            }
            let total = state.consumed + state.pos - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Text14_1;
                return true;
            } else {
                state.node = NodeT::NoState;
                return false;
            }
        }
        state.consumed += state.pos - datastart;
        state.node = NodeT::Range14_0;
        return true;
    }
    fn text14_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.pos < data.len() {
            if 0x0A != data[state.pos] {
                state.node = NodeT::NoState;
                return false;
            } else {
                state.pos += 1;
                state.node = NodeT::Loop6_1;
                return true;
            }
        }
        state.node = NodeT::Text14_1;
        return true;
    }
    fn loop16_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        state.node = NodeT::NoState;
        return true;
    }
} // impl
