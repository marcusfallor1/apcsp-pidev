#include <stdio.h>

float areaOfCircle(float r) {
  float a = 3.14 * r * r;
  return a;
}

int main(int argc, char* argv[]){
  int arg = 1;
  while(arg < argc){
    printf("Radius %d : %s\n", arg, argv[arg]);
    arg++;
  }
  float arg1;
  int found = sscanf(argv[1], "%f", &arg1);
  if (argc == 3){

  if (found != 1){
    printf("First arg is not a number\n");
    return 1;
  }

  float arg2;
  found = sscanf(argv[2], "%f", &arg2);
  if (found != 1){
    printf("second arg is not a number\n");
    return 1;
  }
    for (float r = arg1; r <= arg2; r++){
      float area = areaOfCircle(r);
      printf("Radius = %f - Area: %f\n", r, area);
    }
  }else{
  float l;
  float u;
  int c = 1;

  while ( c == 1){
    printf("Lower Bound: ");
    scanf("%f", &l);
    if (l < 0 ){
      printf("Not a valid bound\n");
    }else{
      c = 0;
    }
  }

  while (c == 0){
    printf("Upper Bound: ");
    scanf("%f", &u);
    if ( u < 0 ){
      printf("Not a valid bound\n");
      }else if( u <= 1 ){
         printf("not a valid bound\n");
    }else{
      c = 2;
    }
  }

  for (float r = l; r <= u; r++){
    float area = areaOfCircle(r);
    printf("Radius = %f - Area: %f\n", r, area);
  }
}
}

