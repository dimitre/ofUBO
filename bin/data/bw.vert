#version 150

uniform mat4 modelViewProjectionMatrix;
in vec4 position;
in vec2 texcoord;
out vec2 texCoord;

void main()
{
	texCoord = texcoord;
    // send the vertices to the fragment shader
	gl_Position = modelViewProjectionMatrix * position;
}
