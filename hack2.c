/**
 * Author: James Kyle Janvrin & Jake Wilson
 *
 *
 *
 *
 */
#include<stdlib.h>
#include<stdio.h>
#include<math.h>


int main(int argc,char** argv){
  double latitudeA;
  double latitudeB;
  double longitudeA;
  double longitudeB;
  double distance;
  double latitudeAInRadians;
  double latitudeBInRadians;
  double longitudeAInRadians;
  double longitudeBInRadians;
  double changeInLongitude;
  printf("Please enter the latitude of location A:\n");

  scanf("%lf", &latitudeA);

  printf("Please enter the longitude of location A:\n");

  scanf("%lf", &longitudeA);

  printf("Please enter the latitude of location B:\n");

  scanf("%lf", &latitudeB);

  printf("Please enter the longitude of location B:\n");

  scanf("%lf", &longitudeB);

  latitudeAInRadians =  latitudeA / 180  * M_PI;
  latitudeBInRadians = latitudeB / 180 * M_PI;
  longitudeAInRadians = longitudeA / 180 * M_PI;
  longitudeBInRadians = longitudeB / 180 * M_PI;
  changeInLongitude = longitudeBInRadians - longitudeAInRadians;

  distance = acos(sin(latitudeAInRadians)*sin(latitudeBInRadians) + cos(latitudeAInRadians)*cos(latitudeBInRadians)*cos(changeInLongitude))*6371;

  printf("Location Distance: \n");
  printf("=============\n");
  printf("Origin: (%f, %f)\n" , latitudeA, longitudeA);
  printf("Destination: (%f, %f)\n" , latitudeB, longitudeB);
  printf("Air distance is %f kms.\n" , distance);

}
