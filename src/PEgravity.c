#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "PErigidbody.h"
#include "PEmath.h"


float calculateGravity(object* mass)
{
    float gravity = 9.81;
    float dropSpeed = 0.0;
    dropSpeed += gravity;
    mass->pos.y += dropSpeed;
    return  mass->pos.y;
}

void main()
{   
    object* ball;
    ball = (object*)malloc(sizeof(object));

    float position =0;
    while (1)
    {
        position = calculateGravity(ball);

        printf("position y = %0.8f",position);
        sleep(1);
    }

}