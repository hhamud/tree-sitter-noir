#[deprecated("use fast_area")]
pub(crate) fn slow_area<T: Area>(shape: T) -> Field
where
    T: Area
{
    shape.area()
}

trait Area {
    fn area(self) -> Field;
}

trait ShapeOps<T> = Area where T: Area;

struct Rectangle {
    width: Field,
    height: Field,
}

impl Area for Rectangle {
    fn area(self) -> Field {
        self.width * self.height
    }
}

impl<T> Rectangle where T: Area {
    fn compare(self, other: T) -> bool {
        self.area() == other.area()
    }
}

unconstrained fn control_flow(mut i: u32) {
    while i < 10 {
        i += 1;
    }

    loop {
        if i == 12 {
            break;
        } else {
            continue;
        }
    }
}

fn destructure(rect: Rectangle) -> Field {
    let Rectangle { width, height: h } = rect;
    width + h
}
