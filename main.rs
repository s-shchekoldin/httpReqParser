use std::fs;

#[allow(non_snake_case)]
mod HttpReqRust;

fn main() {
    let contents = fs::read_to_string("input.txt").expect("Should have been able to read the file");

    let byte_slice: &[u8] = contents.as_bytes();
//    println!("contents: {contents}");

    let mut m = crate::HttpReqRust::HttpReqRust::<HttpReqRust::HttpReqRustResult>::new();
    m.parse(&byte_slice);

    println!("-----flow-----");
    for i in 0..byte_slice.len() {
//println!("==========DATA: {:#04X}===========", byte_slice[i]);
        m.parse(&byte_slice[i..i+1]);
    }
}
