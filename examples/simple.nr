use crate::math::{double, SCALE};

pub global N: u32 = 2;

pub struct Point {
    pub x: Field,
    pub y: Field,
}

pub fn main(points: [Point; N]) -> Field {
    let first = points[0];
    double(first.x + SCALE)
}

mod math {
    pub global SCALE: Field = 3;

    pub fn double(x: Field) -> Field {
        x + x
    }
}
