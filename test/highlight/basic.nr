fn main(x : Field, y : u32) {
// <- function
//    ^ identifier
//          ^ parameter
//              ^ identifier
//                  ^ single_type


    let z = x as u32 + y;

// <- let_declaration
//    ^ binary_expression
//      ^ identifier
//          ^ identifier
//              ^ as_identifier
//                  ^ single_type
}
