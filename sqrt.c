#include <stdio.h>
float sq(float num){
  float e = 0.000001;
  float guess = 0;
  
  while (guess*guess < num){
    guess += e;
  }
  return guess;
}
