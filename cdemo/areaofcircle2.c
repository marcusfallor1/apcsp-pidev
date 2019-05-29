#include <stdio.h>
#include <math.h>

float areaOfCircle(float r){
  float area = r * r * 3.14;
  return area;
}

float BottomRadius(){
  float rBot;
  char input[256];
  int check = 0;

  while (check == 0) {
    printf("Enter the lower value for the range of radiuses: \n");
    fgets(input, 256, stdin);
    check = sscanf(input, "%f", &rBot);

      if (check != 1) {
        printf("Only enter numerical values please\n");
      }
  }
return rBot;
}

float TopRadius(){
  float rTop;
  char input[256];
  int check = 0;

  while (check == 0) {
    printf("Enter the upper value for the range of radiuses: \n");
    fgets(input, 256, stdin);
    check = sscanf(input, "%f", &rTop);

      if (check != 1) {
        printf("Only enter numerical values please\n");
      }
  }
return rTop;
}


int main(){

  float rBottom;
  float rTop;

  rBottom = BottomRadius();
  rTop = TopRadius();




  while (rBottom >= rTop) {
    printf("Lowest radius must be lower than the highest radius\n");
 printf("Input lowest radius: ");
    scanf("%f", &rBottom);

    printf("Input highest radius: ");
    scanf("%f", &rTop);
  }

  for (float i = rBottom; i <= rTop; i++){
    float a = areaOfCircle(i);
    printf("%f\n",a);
  }
}
