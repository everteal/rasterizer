#include <raylib.h> // Provides canvas and DrawPixel

const int screen_height = 450;
const int screen_width = 800;

int main() {
  InitWindow(screen_width, screen_height, "raylib - rasterizer");

  while(!WindowShouldClose()) {
    BeginDrawing();
      ClearBackground(RAYWHITE);
    EndDrawing();    
  }
  
  CloseWindow();
  return 0;  
}  
