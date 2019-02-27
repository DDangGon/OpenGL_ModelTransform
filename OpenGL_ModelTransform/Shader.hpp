//
//  Shader.hpp
//  OpenGL_ModelTransform
//
//  Created by 오영곤 on 2019. 2. 27..
//  Copyright © 2019년 fivezerogon. All rights reserved.
//

#ifndef Shader_hpp
#define Shader_hpp

#include <stdio.h>

class Shader{
private:
    Shader();
    ~Shader();
    
    int program;
    int* attributes;
    int* uniforms;
    int aLen;
    int uLen;
    
public:
    
};

#endif /* Shader_hpp */
