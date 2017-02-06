//
//  ArrayController.hpp
//  Arrays
//
//  Created by Kunz, Geran on 2/6/17.
//  Copyright © 2017 Kunz, Geran. All rights reserved.
//

#ifndef ArrayController_hpp
#define ArrayController_hpp

#include <stdio.h>
class ArrayController{
private:
    double * doubleValues;
    int doubleValSize;
    void buildDouble();
    int * intValues;
    int intValSize;
    void buildInt();
public:
    ArrayController();
};
#endif /* ArrayController_hpp */
