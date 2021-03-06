
#include "graphic.hpp"


void drawRect(const Vec3f& pos, const Vec2f& size, const ColorA& color) {
  std::vector<GLfloat> vtx{
    pos.x - size.x * 0.5f, pos.y + size.y * 0.5f, pos.z,
    pos.x - size.x * 0.5f, pos.y - size.y * 0.5f, pos.z,
    pos.x + size.x * 0.5f, pos.y - size.y * 0.5f, pos.z,
    pos.x + size.x * 0.5f, pos.y + size.y * 0.5f, pos.z
  };

  glVertexPointer(3, GL_FLOAT, 0, &vtx[0]);
  glColor4f(color.r, color.g, color.b, color.a);

  glEnableClientState(GL_VERTEX_ARRAY);

  glDrawArrays(GL_QUADS, 0, 4);

  glDisableClientState(GL_VERTEX_ARRAY);
}

void drawCircle(const Vec3f& center, int vertex_num,
                float radius, float width, const ColorA& color)
{
  std::vector<GLfloat> vtx;
  for (int i = 0; i < vertex_num; i++) {
    vtx.push_back(float(center.x + sin(i * 2 * M_PI / vertex_num) * radius));
    vtx.push_back(float(center.y + cos(i * 2 * M_PI / vertex_num) * radius));
    vtx.push_back(center.z);
  }

  glVertexPointer(3, GL_FLOAT, 0, &vtx[0]);
  glLineWidth(width);
  glColor4f(color.r, color.g, color.b, color.a);

  glEnableClientState(GL_VERTEX_ARRAY);

  glDrawArrays(GL_LINE_LOOP, 0, vertex_num);

  glDisableClientState(GL_VERTEX_ARRAY);
}