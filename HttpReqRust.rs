// ==============================================================
// Date: 2026-02-21 15:24:22 GMT
// Generated using vProto(2026.02.21)        https://www.cgen.dev
// Author: Sergey V. Shchekoldin     Email: shchekoldin@gmail.com
// ==============================================================

// Example usage:
// let mut m = crate::HttpReqRust::HttpReqRust::<HttpReqRust::HttpReqRustResult>::new();
// m.parse(&byte_slice);
// If necessary, override HttpReqRust::HttpReqRustResult and its trait as well


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
                Func12_0, Data12_1, Ret12_2,
                Ret13_0,
             // catch:
            Range14_0, Text14_1,
    Loop16_0, // line_16
    NoState
}
#[derive(Debug, Copy, Clone)]
pub struct StateT {
    left: usize,
    right: usize,
    consumed: usize,
    rcount: usize,
    rstack: [NodeT; 2],
    node: NodeT
}
impl StateT {
    pub fn new() -> Self { Self{ left: 0, right: 0, consumed: 0, rcount: 0, rstack: [NodeT::NoState; 2], node: NodeT::Loop1_0 } }
    pub fn remain(&self) -> usize { self.right - self.left }
    pub fn name(&self) -> String {
        match self.node {
            NodeT::Loop1_0 => { return "Loop1_0".to_string(); }
            NodeT::Any1_0 => { return "Any1_0".to_string(); }
            NodeT::Text1_0_0_0 => { return "Text1_0_0_0".to_string(); }
            NodeT::Text1_0_1_0 => { return "Text1_0_1_0".to_string(); }
            NodeT::Text1_0_2_0 => { return "Text1_0_2_0".to_string(); }
            NodeT::Text1_0_3_0 => { return "Text1_0_3_0".to_string(); }
            NodeT::Text1_0_4_0 => { return "Text1_0_4_0".to_string(); }
            NodeT::Text1_0_5_0 => { return "Text1_0_5_0".to_string(); }
            NodeT::Text1_0_6_0 => { return "Text1_0_6_0".to_string(); }
            NodeT::Text1_0_7_0 => { return "Text1_0_7_0".to_string(); }
            NodeT::Text1_0_8_0 => { return "Text1_0_8_0".to_string(); }
            NodeT::Text1_0_9_0 => { return "Text1_0_9_0".to_string(); }
            NodeT::Text1_0_10_0 => { return "Text1_0_10_0".to_string(); }
            NodeT::Bang1_0 => { return "Bang1_0".to_string(); }
            NodeT::Call1_2 => { return "Call1_2".to_string(); }
            NodeT::Call1_3 => { return "Call1_3".to_string(); }
            NodeT::Reset1_4 => { return "Reset1_4".to_string(); }
            NodeT::Loop3_0 => { return "Loop3_0".to_string(); }
            NodeT::Label3_0 => { return "Label3_0".to_string(); }
            NodeT::Loop3_1 => { return "Loop3_1".to_string(); }
            NodeT::Range4_0 => { return "Range4_0".to_string(); }
            NodeT::String4_1 => { return "String4_1".to_string(); }
            NodeT::Range4_2 => { return "Range4_2".to_string(); }
            NodeT::Func4_3 => { return "Func4_3".to_string(); }
            NodeT::Text4_4 => { return "Text4_4".to_string(); }
            NodeT::Range4_5 => { return "Range4_5".to_string(); }
            NodeT::Text4_6 => { return "Text4_6".to_string(); }
            NodeT::Range4_7 => { return "Range4_7".to_string(); }
            NodeT::Text4_8 => { return "Text4_8".to_string(); }
            NodeT::Text4_9 => { return "Text4_9".to_string(); }
            NodeT::Ret4_10 => { return "Ret4_10".to_string(); }
            NodeT::Loop6_0 => { return "Loop6_0".to_string(); }
            NodeT::Label6_0 => { return "Label6_0".to_string(); }
            NodeT::Loop6_1 => { return "Loop6_1".to_string(); }
            NodeT::Text7_0 => { return "Text7_0".to_string(); }
            NodeT::Range7_1 => { return "Range7_1".to_string(); }
            NodeT::String7_2 => { return "String7_2".to_string(); }
            NodeT::Func7_3 => { return "Func7_3".to_string(); }
            NodeT::Text7_4 => { return "Text7_4".to_string(); }
            NodeT::Text7_5 => { return "Text7_5".to_string(); }
            NodeT::Any8_0 => { return "Any8_0".to_string(); }
            NodeT::Text8_0_0_0 => { return "Text8_0_0_0".to_string(); }
            NodeT::Bang8_0 => { return "Bang8_0".to_string(); }
            NodeT::Range8_2 => { return "Range8_2".to_string(); }
            NodeT::String8_3 => { return "String8_3".to_string(); }
            NodeT::Func8_4 => { return "Func8_4".to_string(); }
            NodeT::Text8_5 => { return "Text8_5".to_string(); }
            NodeT::Text8_6 => { return "Text8_6".to_string(); }
            NodeT::Any9_0 => { return "Any9_0".to_string(); }
            NodeT::Text9_0_0_0 => { return "Text9_0_0_0".to_string(); }
            NodeT::Bang9_0 => { return "Bang9_0".to_string(); }
            NodeT::Range9_2 => { return "Range9_2".to_string(); }
            NodeT::Uint9_3 => { return "Uint9_3".to_string(); }
            NodeT::Func9_4 => { return "Func9_4".to_string(); }
            NodeT::Text9_5 => { return "Text9_5".to_string(); }
            NodeT::Text9_6 => { return "Text9_6".to_string(); }
            NodeT::Range10_0 => { return "Range10_0".to_string(); }
            NodeT::Range10_1 => { return "Range10_1".to_string(); }
            NodeT::Text10_2 => { return "Text10_2".to_string(); }
            NodeT::Text10_3 => { return "Text10_3".to_string(); }
            NodeT::Text11_0 => { return "Text11_0".to_string(); }
            NodeT::Text11_1 => { return "Text11_1".to_string(); }
            NodeT::Cases11_2 => { return "Cases11_2".to_string(); }
            NodeT::Func12_0 => { return "Func12_0".to_string(); }
            NodeT::Data12_1 => { return "Data12_1".to_string(); }
            NodeT::Ret12_2 => { return "Ret12_2".to_string(); }
            NodeT::Ret13_0 => { return "Ret13_0".to_string(); }
            NodeT::Range14_0 => { return "Range14_0".to_string(); }
            NodeT::Text14_1 => { return "Text14_1".to_string(); }
            NodeT::Loop16_0 => { return "Loop16_0".to_string(); }
            _ => { return "NoState".to_string(); }
        }; // match
    }
}

pub trait HttpReqRustResultTrait {
    fn new() -> Self;
    fn c_length(&mut self) -> &mut u64;
    fn c_type(&mut self) -> &mut String;
    fn host(&mut self) -> &mut String;
    fn payload(&mut self, data: &[u8], is_first: bool, is_last: bool); // user-defined function required
    fn url(&mut self) -> &mut String;
}

pub struct HttpReqRustResult
{
    c_type: String,
    host: String,
    url: String,
    c_length: u64
}
#[allow(dead_code)]
impl HttpReqRustResultTrait for HttpReqRustResult {
    fn new() -> Self { Self{c_type: String::new(), host: String::new(), url: String::new(), c_length: 0} }
    fn c_length(&mut self) -> &mut u64 { &mut self.c_length }
    fn c_type(&mut self) -> &mut String { &mut self.c_type }
    fn host(&mut self) -> &mut String { &mut self.host }
    fn payload(&mut self, data: &[u8], is_first: bool, is_last: bool) { println!("payload({}:{})={:X?}", is_first, is_last, data); }
    fn url(&mut self) -> &mut String { &mut self.url }
}

pub struct HttpReqRust <T> {
    output: T,
    vstate: Vec<StateT>
}
#[allow(dead_code)]
#[allow(unused_variables)]
impl <T: HttpReqRustResultTrait> HttpReqRust<T> {
    pub fn new() -> Self { Self{ output: T::new(), vstate: vec![StateT::new()] } }
    pub fn empty(&self) -> bool { self.vstate.is_empty() }
    pub fn reset(&mut self) {
        self.reset_output();
        self.vstate = vec![StateT::new()];
    }
    pub fn reset_output(&mut self) {
        *self.output.c_length() = 0;
        *self.output.c_type()= String::new();
        *self.output.host()= String::new();
        *self.output.url()= String::new();
    }
    pub fn parse(&mut self, data : &[u8]) -> bool {
        for v in & mut self.vstate {
            v.left = 0;
            v.right = data.len();
        }
        let mut reparse = true;
        while reparse {
            reparse = false;
            let mut d_flow = 0;
            let mut s_flow = 0;
            while s_flow < self.vstate.len() {
                if self.vstate[s_flow].node == NodeT::NoState {
                    s_flow += 1;
                } else if self.vstate[s_flow].remain() == 0 {
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
                println!("State: {} data: [{:#04X}, {:#04X}, {:#04X}, {:#04X}, {:#04X}]", state.name(),
                    if state.remain() > 0 { data[state.left+0] } else { 0 },
                    if state.remain() > 1 { data[state.left+1] } else { 0 },
                    if state.remain() > 2 { data[state.left+2] } else { 0 },
                    if state.remain() > 3 { data[state.left+3] } else { 0 },
                    if state.remain() > 4 { data[state.left+4] } else { 0 });
            }
            let n = state.node;
            let d = state.left;
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
                NodeT::Func12_0 => { self.func12_0(state, data); }
                NodeT::Data12_1 => { self.data12_1(state, data); }
                NodeT::Ret12_2 => { self.ret12_2(state, data); }
                NodeT::Ret13_0 => { self.ret13_0(state, data); }
                NodeT::Range14_0 => { self.range14_0(state, data); }
                NodeT::Text14_1 => { self.text14_1(state, data); }
                NodeT::Loop16_0 => { self.loop16_0(state, data); }
                NodeT::NoState => { break; }
            }; // match
            if d == state.left && n == state.node {
                break;
            }
        } // loop
    }
    fn loop1_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        return self.any1_0(state, data);
    }
    fn any1_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left == state.right {
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
        while state.left < state.right {
            if TEXT[state.consumed] != data[state.left] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.left += 1;
        }
        state.node = NodeT::Text1_0_0_0;
        return true;
    }
    fn text1_0_1_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;4] = [0x48, 0x45, 0x41, 0x44]; // head
        while state.left < state.right {
            if TEXT[state.consumed] != data[state.left] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.left += 1;
        }
        state.node = NodeT::Text1_0_1_0;
        return true;
    }
    fn text1_0_2_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;3] = [0x50, 0x55, 0x54]; // put
        while state.left < state.right {
            if TEXT[state.consumed] != data[state.left] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.left += 1;
        }
        state.node = NodeT::Text1_0_2_0;
        return true;
    }
    fn text1_0_3_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;5] = [0x50, 0x41, 0x54, 0x43, 0x48]; // patch
        while state.left < state.right {
            if TEXT[state.consumed] != data[state.left] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.left += 1;
        }
        state.node = NodeT::Text1_0_3_0;
        return true;
    }
    fn text1_0_4_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;6] = [0x44, 0x45, 0x4c, 0x45, 0x54, 0x45]; // delete
        while state.left < state.right {
            if TEXT[state.consumed] != data[state.left] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.left += 1;
        }
        state.node = NodeT::Text1_0_4_0;
        return true;
    }
    fn text1_0_5_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;7] = [0x4f, 0x50, 0x54, 0x49, 0x4f, 0x4e, 0x53]; // options
        while state.left < state.right {
            if TEXT[state.consumed] != data[state.left] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.left += 1;
        }
        state.node = NodeT::Text1_0_5_0;
        return true;
    }
    fn text1_0_6_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;7] = [0x43, 0x4f, 0x4e, 0x4e, 0x45, 0x43, 0x54]; // connect
        while state.left < state.right {
            if TEXT[state.consumed] != data[state.left] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.left += 1;
        }
        state.node = NodeT::Text1_0_6_0;
        return true;
    }
    fn text1_0_7_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;4] = [0x4c, 0x49, 0x4e, 0x4b]; // link
        while state.left < state.right {
            if TEXT[state.consumed] != data[state.left] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.left += 1;
        }
        state.node = NodeT::Text1_0_7_0;
        return true;
    }
    fn text1_0_8_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;6] = [0x55, 0x4e, 0x4c, 0x49, 0x4e, 0x4b]; // unlink
        while state.left < state.right {
            if TEXT[state.consumed] != data[state.left] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.left += 1;
        }
        state.node = NodeT::Text1_0_8_0;
        return true;
    }
    fn text1_0_9_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;5] = [0x54, 0x52, 0x41, 0x43, 0x45]; // trace
        while state.left < state.right {
            if TEXT[state.consumed] != data[state.left] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.left += 1;
        }
        state.node = NodeT::Text1_0_9_0;
        return true;
    }
    fn text1_0_10_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;4] = [0x50, 0x4f, 0x53, 0x54]; // post
        while state.left < state.right {
            if TEXT[state.consumed] != data[state.left] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Bang1_0;
                return true;
            }
            state.left += 1;
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
        self.reset_output();
        for v in & mut self.vstate {
            v.node = NodeT::NoState;
        }
        state.node = NodeT::NoState;
        let c = self.vstate.len();
        self.vstate.push(StateT::new());
        self.vstate[c].left = state.left;
        self.vstate[c].right = state.right;
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
        let datastart = state.left;
        while state.left < state.right {
            if TERMINATOR[usize::from(data[state.left + 0])] {
                state.consumed += state.left - datastart;
                state.node = if state.consumed >= 1 { NodeT::String4_1 } else { NodeT::NoState };
                let ret = state.node == NodeT::String4_1;
                state.consumed = 0;
                return ret;
            }
            state.left += 1;
            state.node = NodeT::String4_1;
            return true;
        }
        state.consumed += state.left - datastart;
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
        let datastart = state.left;
        while state.left < state.right {
            if (state.left + 4) <= state.right {
                if TERMINATOR[usize::from(data[state.left + 0])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else
                {
                    state.left += 4;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left + 0])]) {
                state.left += 1;
                continue;
            }
            let left = state.left;
            self._string4_1(state, &data[datastart .. left]);
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Range4_2;
                return true;
            } else {
                state.node = NodeT::NoState;
                return false;
            }
        }
        if datastart < state.left {
            let left = state.left;
            self._string4_1(state, &data[datastart .. left]);
        }
        state.consumed += state.left - datastart;
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
        let datastart = state.left;
        while state.left < state.right {
            if TERMINATOR[usize::from(data[state.left + 0])] {
                state.consumed += state.left - datastart;
                state.node = if state.consumed >= 1 { NodeT::Func4_3 } else { NodeT::NoState };
                let ret = state.node == NodeT::Func4_3;
                state.consumed = 0;
                return ret;
            }
            state.left += 1;
            state.node = NodeT::Func4_3;
            return true;
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Range4_2;
        return true;
    }
    #[allow(unused_variables)]
    #[allow(unreachable_code)]
    fn _func4_3(this : &mut T) -> bool {
         println!("URL: {}", this.url()); 
        return true;
    }
    fn func4_3(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if Self::_func4_3(&mut self.output) {
            state.node = NodeT::Text4_4;
            return true;
        }
        state.node = NodeT::NoState;
        return false;
    }
    fn text4_4(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        static TEXT:[u8;5] = [0x48, 0x54, 0x54, 0x50, 0x2f]; // http/
        while state.left < state.right {
            if TEXT[state.consumed] != data[state.left] {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Range4_5;
                return true;
            }
            state.left += 1;
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
        let datastart = state.left;
        while state.left < state.right {
            if TERMINATOR[usize::from(data[state.left + 0])] {
                state.consumed += state.left - datastart;
                state.node = if state.consumed >= 1 { NodeT::Text4_6 } else { NodeT::NoState };
                let ret = state.node == NodeT::Text4_6;
                state.consumed = 0;
                return ret;
            }
            state.left += 1;
            state.node = NodeT::Text4_6;
            return true;
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Range4_5;
        return true;
    }
    fn text4_6(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x2E != data[state.left] {
                state.node = NodeT::NoState;
                return false;
            } else {
                state.left += 1;
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
        let datastart = state.left;
        while state.left < state.right {
            if TERMINATOR[usize::from(data[state.left + 0])] {
                state.consumed += state.left - datastart;
                state.node = if state.consumed >= 1 { NodeT::Text4_8 } else { NodeT::NoState };
                let ret = state.node == NodeT::Text4_8;
                state.consumed = 0;
                return ret;
            }
            state.left += 1;
            state.node = NodeT::Text4_8;
            return true;
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Range4_7;
        return true;
    }
    fn text4_8(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0D != data[state.left] {
                state.node = NodeT::Text4_9;
                return true;
            } else {
                state.left += 1;
                state.node = NodeT::Text4_9;
                return true;
            }
        }
        state.node = NodeT::Text4_8;
        return true;
    }
    fn text4_9(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0A != data[state.left] {
                state.node = NodeT::NoState;
                return false;
            } else {
                state.left += 1;
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
        if state.left == state.right {
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
        while state.left < state.right {
            if ((TEXT[state.consumed] ^ data[state.left]) & 0xDF) != 0 {
                state.node = NodeT::Range14_0;
                let ret = is_branch && state.consumed != 0;
                state.consumed = 0;
                return ret;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Range7_1;
                return true;
            }
            state.left += 1;
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
        let datastart = state.left;
        while state.left < state.right {
            if (state.left + 4) <= state.right {
                if TERMINATOR[usize::from(data[state.left + 0])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else
                {
                    state.left += 4;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left + 0])]) {
                state.left += 1;
                continue;
            }
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::String7_2;
                return true;
            } else {
                state.node = NodeT::Range14_0;
                return false;
            }
        }
        state.consumed += state.left - datastart;
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
        let datastart = state.left;
        while state.left < state.right {
            if (state.left + 4) <= state.right {
                if TERMINATOR[usize::from(data[state.left + 0])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else
                {
                    state.left += 4;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left + 0])]) {
                state.left += 1;
                continue;
            }
            let left = state.left;
            self._string7_2(state, &data[datastart .. left]);
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Func7_3;
                return true;
            } else {
                state.node = NodeT::Range14_0;
                return false;
            }
        }
        if datastart < state.left {
            let left = state.left;
            self._string7_2(state, &data[datastart .. left]);
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::String7_2;
        return true;
    }
    #[allow(unused_variables)]
    #[allow(unreachable_code)]
    fn _func7_3(this : &mut T) -> bool {
         println!("HOST: {}",   this.host()); 
        return true;
    }
    fn func7_3(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if Self::_func7_3(&mut self.output) {
            state.node = NodeT::Text7_4;
            return true;
        }
        state.node = NodeT::Range14_0;
        return false;
    }
    fn text7_4(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0D != data[state.left] {
                state.node = NodeT::Text7_5;
                return true;
            } else {
                state.left += 1;
                state.node = NodeT::Text7_5;
                return true;
            }
        }
        state.node = NodeT::Text7_4;
        return true;
    }
    fn text7_5(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0A != data[state.left] {
                state.node = NodeT::Range14_0;
                return false;
            } else {
                state.left += 1;
                state.node = NodeT::Loop6_1;
                return true;
            }
        }
        state.node = NodeT::Text7_5;
        return true;
    }
    fn any8_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left == state.right {
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
        while state.left < state.right {
            if ((TEXT[state.consumed] ^ data[state.left]) & 0xDF) != 0 {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Bang8_0;
                return true;
            }
            state.left += 1;
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
        let datastart = state.left;
        while state.left < state.right {
            if (state.left + 4) <= state.right {
                if TERMINATOR[usize::from(data[state.left + 0])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else
                {
                    state.left += 4;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left + 0])]) {
                state.left += 1;
                continue;
            }
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::String8_3;
                return true;
            } else {
                state.node = NodeT::Range14_0;
                return false;
            }
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Range8_2;
        return true;
    }
    fn _string8_3(&mut self, state: &mut StateT, data: &[u8]) {
        if state.consumed == 0 {
            self.output.c_type().clear();
        }
        let len = if (self.output.c_type().len() + data.len()) > 64 { 64 - self.output.c_type().len() } else { data.len() };
        self.output.c_type().push_str(&String::from_utf8_lossy(&data[0 .. len]));
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
        let datastart = state.left;
        while state.left < state.right {
            if (state.left + 4) <= state.right {
                if TERMINATOR[usize::from(data[state.left + 0])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else
                {
                    state.left += 4;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left + 0])]) {
                state.left += 1;
                continue;
            }
            let left = state.left;
            self._string8_3(state, &data[datastart .. left]);
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Func8_4;
                return true;
            } else {
                state.node = NodeT::Range14_0;
                return false;
            }
        }
        if datastart < state.left {
            let left = state.left;
            self._string8_3(state, &data[datastart .. left]);
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::String8_3;
        return true;
    }
    #[allow(unused_variables)]
    #[allow(unreachable_code)]
    fn _func8_4(this : &mut T) -> bool {
         println!("TYPE: {}\n", this.c_type()); 
        return true;
    }
    fn func8_4(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if Self::_func8_4(&mut self.output) {
            state.node = NodeT::Text8_5;
            return true;
        }
        state.node = NodeT::Range14_0;
        return false;
    }
    fn text8_5(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0D != data[state.left] {
                state.node = NodeT::Text8_6;
                return true;
            } else {
                state.left += 1;
                state.node = NodeT::Text8_6;
                return true;
            }
        }
        state.node = NodeT::Text8_5;
        return true;
    }
    fn text8_6(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0A != data[state.left] {
                state.node = NodeT::Range14_0;
                return false;
            } else {
                state.left += 1;
                state.node = NodeT::Loop6_1;
                return true;
            }
        }
        state.node = NodeT::Text8_6;
        return true;
    }
    fn any9_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left == state.right {
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
        while state.left < state.right {
            if ((TEXT[state.consumed] ^ data[state.left]) & 0xDF) != 0 {
                state.node = NodeT::NoState;
                state.consumed = 0;
                return false;
            }
            else if {state.consumed += 1; state.consumed >= TEXT.len()} {
                state.left += 1;
                state.consumed = 0;
                state.node = NodeT::Bang9_0;
                return true;
            }
            state.left += 1;
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
        let datastart = state.left;
        while state.left < state.right {
            if (state.left + 4) <= state.right {
                if TERMINATOR[usize::from(data[state.left + 0])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else
                {
                    state.left += 4;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left + 0])]) {
                state.left += 1;
                continue;
            }
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Uint9_3;
                return true;
            } else {
                state.node = NodeT::Range14_0;
                return false;
            }
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Range9_2;
        return true;
    }
    fn _uint9_3(&mut self, state: &mut StateT, data: &[u8]) {
        if state.consumed == 0 {
            *self.output.c_length() = 0;
        }
        for x in data {
            *self.output.c_length() = *self.output.c_length()*10 + u64::from(*x - b'0');
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
        let datastart = state.left;
        while state.left < state.right {
            if (state.left + 4) <= state.right {
                if TERMINATOR[usize::from(data[state.left + 0])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else
                {
                    state.left += 4;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left + 0])]) {
                state.left += 1;
                continue;
            }
            let left = state.left;
            self._uint9_3(state, &data[datastart .. left]);
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Func9_4;
                return true;
            } else {
                state.node = NodeT::Range14_0;
                return false;
            }
        }
        if datastart < state.left {
            let left = state.left;
            self._uint9_3(state, &data[datastart .. left]);
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Uint9_3;
        return true;
    }
    #[allow(unused_variables)]
    #[allow(unreachable_code)]
    fn _func9_4(this : &mut T) -> bool {
         println!("LENGTH: {}", this.c_length()); 
        return true;
    }
    fn func9_4(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if Self::_func9_4(&mut self.output) {
            state.node = NodeT::Text9_5;
            return true;
        }
        state.node = NodeT::Range14_0;
        return false;
    }
    fn text9_5(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0D != data[state.left] {
                state.node = NodeT::Text9_6;
                return true;
            } else {
                state.left += 1;
                state.node = NodeT::Text9_6;
                return true;
            }
        }
        state.node = NodeT::Text9_5;
        return true;
    }
    fn text9_6(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0A != data[state.left] {
                state.node = NodeT::Range14_0;
                return false;
            } else {
                state.left += 1;
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
        let datastart = state.left;
        while state.left < state.right {
            if TERMINATOR[usize::from(data[state.left + 0])] {
                state.consumed += state.left - datastart;
                state.node = if state.consumed >= 1 { NodeT::Range10_1 } else { NodeT::Range14_0 };
                let ret = state.node == NodeT::Range10_1;
                state.consumed = 0;
                return ret;
            }
            state.left += 1;
            state.node = NodeT::Range10_1;
            return true;
        }
        state.consumed += state.left - datastart;
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
        let datastart = state.left;
        while state.left < state.right {
            if (state.left + 4) <= state.right {
                if TERMINATOR[usize::from(data[state.left + 0])] {
                    state.left += 0;
                }
                else if TERMINATOR[usize::from(data[state.left + 1])] {
                    state.left += 1;
                }
                else if TERMINATOR[usize::from(data[state.left + 2])] {
                    state.left += 2;
                }
                else if TERMINATOR[usize::from(data[state.left + 3])] {
                    state.left += 3;
                }
                else
                {
                    state.left += 4;
                    continue;
                }
            }
            else if !(TERMINATOR[usize::from(data[state.left + 0])]) {
                state.left += 1;
                continue;
            }
            state.consumed = 0;
            state.node = NodeT::Text10_2;
            return true;
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Range10_1;
        return true;
    }
    fn text10_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0D != data[state.left] {
                state.node = NodeT::Text10_3;
                return true;
            } else {
                state.left += 1;
                state.node = NodeT::Text10_3;
                return true;
            }
        }
        state.node = NodeT::Text10_2;
        return true;
    }
    fn text10_3(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0A != data[state.left] {
                state.node = NodeT::Range14_0;
                return false;
            } else {
                state.left += 1;
                state.node = NodeT::Loop6_1;
                return true;
            }
        }
        state.node = NodeT::Text10_3;
        return true;
    }
    fn text11_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0D != data[state.left] {
                state.node = NodeT::Text11_1;
                return true;
            } else {
                state.left += 1;
                state.node = NodeT::Text11_1;
                return true;
            }
        }
        state.node = NodeT::Text11_0;
        return true;
    }
    fn text11_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0A != data[state.left] {
                state.node = NodeT::Range14_0;
                return false;
            } else {
                state.left += 1;
                state.node = NodeT::Cases11_2;
                return true;
            }
        }
        state.node = NodeT::Text11_1;
        return true;
    }
    fn cases11_2(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if self.func12_0(state, data) { // case_1
            return true;
        }
        if self.ret13_0(state, data) { // case_2
            return true;
        }
        state.node = NodeT::Range14_0;
        return true;
    }
    #[allow(unused_variables)]
    #[allow(unreachable_code)]
    fn _func12_0(this : &mut T) -> bool {
         return *this.c_length() > 0; 
        return true;
    }
    fn func12_0(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if Self::_func12_0(&mut self.output) {
            state.node = NodeT::Data12_1;
            return true;
        }
        state.node = NodeT::Range14_0;
        return false;
    }
    #[allow(unused_variables)]
    #[allow(unreachable_code)]
    fn max_data12_1(this : &mut T) -> usize { let x =  *this.c_length() ; x as usize }
    fn data12_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        let datastart = state.left;
        if state.consumed == 0 {
            state.node = NodeT::Data12_1;
        }
        if state.left == state.right {
            return true;
        }
        else if (state.consumed + state.remain()) >= Self::max_data12_1(&mut self.output) {
            state.left += Self::max_data12_1(&mut self.output) - state.consumed;
            let left = state.left;
            self.output.payload(&data[datastart .. left], state.consumed == 0, true);
            state.consumed = 0;
            state.node = NodeT::Ret12_2;
        } else {
            state.left = state.right;
            let left = state.left;
            self.output.payload(&data[datastart .. left], state.consumed == 0, false);
            state.consumed += state.left - datastart;
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
        let datastart = state.left;
        while state.left < state.right {
            if (state.left + 4) <= state.right {
                if data[state.left + 0] == 0x0a {
                    state.left += 0;
                }
                else if data[state.left + 1] == 0x0a {
                    state.left += 1;
                }
                else if data[state.left + 2] == 0x0a {
                    state.left += 2;
                }
                else if data[state.left + 3] == 0x0a {
                    state.left += 3;
                }
                else
                {
                    state.left += 4;
                    continue;
                }
            }
            else if !(data[state.left + 0] == 0x0a) {
                state.left += 1;
                continue;
            }
            let total = state.consumed + state.left - datastart;
            state.consumed = 0;
            if total >= 1 {
                state.node = NodeT::Text14_1;
                return true;
            } else {
                state.node = NodeT::NoState;
                return false;
            }
        }
        state.consumed += state.left - datastart;
        state.node = NodeT::Range14_0;
        return true;
    }
    fn text14_1(&mut self, state: &mut StateT, data: &[u8]) -> bool {
        if state.left < state.right {
            if 0x0A != data[state.left] {
                state.node = NodeT::NoState;
                return false;
            } else {
                state.left += 1;
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
