// Lock into the zone.

using System;

Vector2 v = new Vector2(3.0f, 4.0f);

float magnitude = v.Magnitude();

Console.WriteLine($"Magnitude: {magnitude}");

struct Vector2
{
	public float X;
	public float Y;

	public Vector2(float x, float y)
	{
		X = x;
		Y = y;
	}

	public float Magnitude()
		=> MathF.Sqrt(X * X + Y * Y);
}
