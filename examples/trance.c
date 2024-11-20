// Lock into the zone.

#include <math.h>
#include <stdio.h>

typedef struct Vector2 {
  float x;
  float y;
} Vector2;

Vector2 Vector2_Create(float x, float y) {
  return (Vector2){
    .x = x,
    .y = y,
  };
}

float Vector2_Magnitude(Vector2 const* v) {
  return sqrtf(v->x * v->x + v->y * v->y);
}

int main() {
  Vector2 v = Vector2_Create(3.0f, 4.0f);

  float magnitude = Vector2_Magnitude(&v);

  printf("Magnitude: %f\n", magnitude);

  return 0;
}
