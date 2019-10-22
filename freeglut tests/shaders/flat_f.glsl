#version 430 core
layout(location = 0) out vec4 FragCol;

in vec3 normal;
in vec3 fragPos;
in vec2 texCoord;
uniform sampler2D tex;
uniform vec3 col;

void main()
{
	//vec3 objColor = (texture2D(tex, texCoord).rgb);
	vec3 objColor = col;
    FragCol = vec4(objColor, 1.);
} 