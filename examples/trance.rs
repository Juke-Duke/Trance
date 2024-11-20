// Lock into the zone.

use std::f32;

struct Vector2 {
  x: f32,
  y: f32,
}

impl Vector2 {
  fn new(x: f32, y: f32) -> Self {
    Vector2 { x, y }
  }

  fn magnitude(&self) -> f32 {
    (self.x * self.x + self.y * self.y).sqrt()
  }
}

fn main() {
  let v = Vector2::new(3.0, 4.0);
  let magnitude = v.magnitude();
  println!("Magnitude: {}", magnitude);
}
