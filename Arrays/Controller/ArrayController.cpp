//
//  ArrayController.cpp
//  Arrays
//
//  Created by Kunz, Geran on 2/6/17.
//  Copyright © 2017 Kunz, Geran. All rights reserved.
//

#include "ArrayController.hpp"

ArrayController :: ArrayController()
{
    this->doubleValSize = 3;
    this->doubleValues = new double[doubleValSize];
    buildDouble();
    this->intValSize = 3;
    this->intValues = new int[intValSize];
    buildInt();
}
void ArrayController:: buildDouble()
{
    this->doubleValues[0] = 22.123;
    this->doubleValues[1] = 23.123;
    this->doubleValues[2] = 24.123;
    this->doubleValues[3] = 25.123;
}
void ArrayController:: buildInt()
{
    this->intValues[0] = 22;
    this->intValues[1] = 23;
    this->intValues[2] = 24;
    this->intValues[3] = 25;
}
