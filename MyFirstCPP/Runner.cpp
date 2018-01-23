//
//  Runner.cpp
//  MyFirstCPP
//
//  Created by Woolsey, Adam on 1/23/18.
//  Copyright © 2018 Woolsey, Adam. All rights reserved.
//

#include "Controller.hpp"
int main()
{
    Controller app;
    app.start();
    
    Controller * appPointer = new Controller();
    appPointer->start();
    (*appPointer).start();
    return 0;
}
