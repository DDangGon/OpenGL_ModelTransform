//
//  Camera.hpp
//  OpenGL_ModelTransform
//
//  Created by 오영곤 on 2019. 2. 27..
//  Copyright © 2019년 fivezerogon. All rights reserved.
//

#ifndef Camera_hpp
#define Camera_hpp

#include <stdio.h>
#include <OpenGL/gl.h>
#include <OpenGl/glu.h>
#include <GLUT/glut.h>
#include <GLKit/GLKMatrix4.h>

class Camera{
private:
    Camera();
    ~Camera();
    
    GLKMatrix4 viewMatrix;
    GLKMatrix4 projMatrix;
public:

};

#endif /* Camera_hpp */
