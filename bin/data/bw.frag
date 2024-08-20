#version 150 

uniform sampler2DRect tex;     // fbo texture to draw to
in vec2 texCoord;
out vec4 outputColor;

uniform vec4 cor3;

layout(std140) uniform vars {
	vec4 v1;
	vec4 v2;
	vec4 cor;
};

void main (void)
{
	vec4 cor2 = vec4(cor.rgb, 1.0);
	outputColor = cor2;
}


