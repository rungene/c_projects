#ifndef _CAR_H_
#define _CAR_H_

/**
* struct car - info about my car
* @name: Name of the car
* @class: Class of the car
* @model: Model of the car
*/
struct car
{
	char *name;
	char *class;
	int model;
};

/**
* car_t - Typedef for struct car
*/
typedef struct car car_t;
#endif /* _CAR_H_ */
