//
//  Model.hpp
//  OpenGL_ModelTransform
//
//  Created by 오영곤 on 2019. 2. 27..
//  Copyright © 2019년 fivezerogon. All rights reserved.
//

#ifndef Model_hpp
#define Model_hpp

#include <stdio.h>
#include <GLKit/GLKVector3.h>

class Model{
private:
    Model();
    ~Model();
    
    GLKVector3 translate;
    GLKVector3 rotation;
    GLKVector3 scale;

public:
    
};

#endif /* Model_hpp */
