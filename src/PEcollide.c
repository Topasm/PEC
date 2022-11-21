#include <stdbool.h>

typedef struct Ploygon{
	int edgePointVector[10];
	int normalVector[10];
	int numberofPoint;

}Ploygon;

typedef struct Projection{
	float min;
	float max;
}Projection;



bool CollisionCheck(Ploygon *poly1,Ploygon* poly2)
{
	if(poly1 == NULL || poly2 ==NULL) return false;
	printf("non polygon import");

	//다각형의 법선 백터중 1개 선택해서 사용
	for(int i = 0; poly1->numberofPoint; i++){

	}
}
//SAT 충돌 검출 알고리즘 제작

//벡터 형식 구현현
//충돌 방향마다 검출하기
