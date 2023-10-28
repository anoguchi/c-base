#include<math.h>
#include<stdio.h>

// Distance Between two Points

int main()
{
  float distance;

  struct point
  {
    int x;
    int y;
  };

  struct line
  {
    struct point p1;
    struct point p2;    
  };

  struct line l;
  
  printf("Enter p1(x and y)\n");
  scanf("%d%d", &l.p1.x,&l.p1.y);

  printf("Enter p2(x and y)\n");
  scanf("%d%d", &l.p2.x,&l.p2.y);
  
  distance = sqrt(pow((l.p2.x - l.p1.x),2)+ pow((l.p2.y - l.p1.y),2));

  printf("Distance = %f\n", distance);

  return 0;
}