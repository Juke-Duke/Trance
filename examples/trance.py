# Lock into the zone.

import math

class Vector2:
  def __init__(self, x: float, y: float):
    self.x = x
    self.y = y

  def magnitude(self) -> float:
    return math.sqrt(self.x * self.x + self.y * self.y)

v = Vector2(3.0, 4.0)

magnitude = v.magnitude()

print(f"Magnitude: {magnitude}")
