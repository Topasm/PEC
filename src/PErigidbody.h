#include <stdbool.h>
#include <stdio.h>
#include "PEmath.h"




//물체의 물질 특성 밀도 마찰 등
struct material
{
    float restitution;  //반발 계수
    float density;      //밀도
    float us;           //정지 마찰계수
    float uk;           //운동 마찰계수
};
typedef struct material Material;


//물체의 형태에 관한 구조체
struct shape
{
    //size and normal vectors com ,edges
    int vertex_num;
    float **vertex;
    int *vertex_contact_index;
    bool *vertex_contact;
    float **normal;
    float volume;
    float inertia_constant;
    int number;
    int layer;
    float max_distance;
};typedef struct shape Shape;

//물체 선언 완료

//강체의 물리량을 나타내는 구조체체

typedef struct object
{
    Shape * shape;

    Vector2a pos;  //좌표xy
    Vector2a v;  //속도xy
    Vector2a a;  //가속도xy

    float th;   //각도
    float w;    //각속도
    float alp;  //각가속도

    Vector2a F;  //힘 2방향

    float inv_mass;   //mass 인버스
    float inv_inertia;   //inertia 인버스

    float delw;   //각속도 변화량
    Vector2a delv;   //속도 변화량

    bool stable;     //안정성 유무
    Material material;
}object;

