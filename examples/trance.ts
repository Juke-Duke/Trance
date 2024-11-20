// Lock into the zone.

class Vector2 {
  x: number;
  y: number;

  constructor(x: number, y: number) {
    this.x = x;
    this.y = y;
  }

  magnitude(): number {
    return Math.sqrt(this.x * this.x + this.y * this.y);
  }
}

const v = new Vector2(3.0, 4.0);

const magnitude = v.magnitude();

console.log(`Magnitude: ${magnitude}`);
