#include<string>

const char* VEC_SHADER_SRC = R"V0G0N(
#version 310 es

uniform mat4 transform;
attribute vec4 a_Position;

void main()
{
  gl_Position = transform * a_Position;
}

)V0G0N";


const char* FRAG_SHADER_SRC = R"V0G0N(
#version 310 es

precision mediump float;
uniform vec4 color;
void main()
{
  gl_FragColor = color;
}

)V0G0N";
