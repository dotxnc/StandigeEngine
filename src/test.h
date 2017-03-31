
#ifndef TEST_H
#define TEST_H

#include <GL/glew.h>

class Test
{
private:
	GLuint VBO;
	GLuint VAO;
public:
	Test();
	~Test()=default;
	
	void render();
	
};

#endif