/*	UNIVERSITY OF THE ARMED FORCES ESPE
	COMPUTER SCIENCE DEPARTMENT
    SOFTWARE ENGINEER
                
	AUTHORS:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALEXANDER MAILA - jamaila@espe.edu.ec
				JIMMY SIMBANA - jasimbana14@espe.edu.ec
				DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)
	
	STATEMENT: It is required to overload 3 methods for each member of the group.				
				
	CREATION DATE:        27-05-21 	
	MODIFICATION DATE:    27-05-21*/
#include "Operations.h"
#include <iostream>
using namespace std;
/**
 * @brief Construct a new Operations:: Operations object
 * 
 * @param data_D 
 */
Operations::Operations(Data data_D)
{
	this->data=data_D;
}
/**
 * @brief Construct a new Operations:: Operations object
 * 
 */
Operations::Operations(){	
}
/**
 * @brief Destroy the Operations:: Operations object
 * 
 */
Operations::~Operations()
{
   // TODO : implement
}
/**
 * @brief This function add three numbers
 * 
 * @param val_1 
 * @param val_2 
 * @param val_3 
 * @return float 
 */
float Operations::add(float val_1,int val_2,float  val_3){
	return (int)val_1+val_2+(int)val_3;
}
/**
 * @brief This function add two numbers
 * 
 * @param val_1 
 * @param val_2 
 * @return int 
 */
int Operations::add(int val_1,int val_2){
	return val_1+val_2;
}
/**
 * @brief This function add four numbers
 * 
 * @param val_1 
 * @param val_2 
 * @param val_3 
 * @param val_4 
 * @return int 
 */
int Operations::add(int val_1,float val_2,int val_3,float val_4){
	return val_1+(int)val_2+val_3+(int)val_4;
}
/**
 * @brief This function subtract one number
 * 
 * @param data 
 * @return int 
 */
int Operations::subtract(int data){
   return data-20;
}
/**
 * @brief This function subtract two numbers
 * 
 * @param val_1 
 * @param val_2 
 * @return float 
 */
float Operations::subtract(int val_1,float val_2){
   return float(val_1)-val_2;
}
/**
 * @brief This function subtract three numbers
 * 
 * @param value_1 
 * @param value_2 
 * @param value_3 
 * @return float 
 */
float Operations::subtract(float value_1,int value_2,float value_3){
	return value_1-float(value_2)-value_3;
}
/**
 * @brief This function multiply one number
 * 
 * @param value_1 
 * @return int 
 */
int Operations::multiply(int value_1){
   return value_1*5;
}
/**
 * @brief This function multiply two numbers
 * 
 * @param value_1 
 * @param value_2 
 * @return float 
 */
float Operations::multiply(int value_1,float value_2){
   return float(value_1)*value_2;
}
/**
 * @brief This function multiply three numbers
 * 
 * @param value_1 
 * @param value_2 
 * @param value_3 
 * @return float 
 */
float Operations::multiply(float value_1,int value_2,float value_3){
	return value_1*float(value_2)*value_3;
}
/**
 * @brief This function calculates the greater of two numbers
 * 
 * @param val_1 
 * @param val_2 
 * @return int 
 */
int Operations::higher(int val_1, int val_2){
	int temporary=0;
	int vector[2]={val_1,val_2};
	for (int i = 0;i < 2; i++){
		for (int j = 0; j< 2-1; j++){
			if (vector[j] < vector[j+1]){ 
			temporary = vector[j]; 
			vector[j] = vector[j+1]; 
			vector[j+1] = temporary;
			}
		}
	}
	return vector[0];
}
/**
 * @brief this function calculates the greater of three numbers
 * 
 * @param val_1 
 * @param val_2 
 * @param val_3 
 * @return int 
 */
int Operations::higher(int val_1, int val_2, int val_3){
	int temporary=0;
	int vector[3]={val_1,val_2,val_3};
	for (int i = 0;i < 3; i++){
		for (int j = 0; j< 3-1; j++){
			if (vector[j] < vector[j+1]){
			temporary = vector[j]; 
			vector[j] = vector[j+1]; 
			vector[j+1] = temporary;
			}
		}
	}
	return vector[0];
}
/**
 * @brief this function calculates the greater of four numbers
 * 
 * @param val_1 
 * @param val_2 
 * @param val_3 
 * @param val_4 
 * @return int 
 */
int Operations::higher(int val_1, int val_2, int val_3, int val_4){
	int temporary=0;
	int vector[4]={val_1,val_2,val_3,val_4};
	for (int i = 0;i < 4; i++){
		for (int j = 0; j< 4-1; j++){
			if (vector[j] < vector[j+1]){
			temporary= vector[j]; 
			vector[j] = vector[j+1]; 
			vector[j+1] = temporary;
			}
		}
	}
	return vector[0];
}
/**
 * @brief this function calculates the lesser of two numbers
 * 
 * @param val_1 
 * @param val_2 
 * @return int 
 */
int Operations::minor(int val_1, int val_2){
	int temporary=0;
	int vector[2]={val_1,val_2};
	for (int i = 0;i < 2; i++){
		for (int j = 0; j< 2-1; j++){
			if (vector[j] < vector[j+1]){ 
			temporary = vector[j]; 
			vector[j] = vector[j+1]; 
			vector[j+1] = temporary;
			}
		}
	}
	return vector[1];
}
/**
 * @brief this function calculates the lesser of three numbers
 * 
 * @param val_1 
 * @param val_2 
 * @param val_3 
 * @return int 
 */
int Operations::minor(int val_1, int val_2, int val_3){
	int temporary=0;
	int vector[3]={val_1,val_2,val_3};
	for (int i = 0;i < 3; i++){
		for (int j = 0; j< 3-1; j++){
			if (vector[j] < vector[j+1]){
			temporary = vector[j]; 
			vector[j] = vector[j+1]; 
			vector[j+1] = temporary;
			}
		}
	}
	return vector[2];
}
/**
 * @brief this function calculates the lesser of four numbers
 * 
 * @param val_1 
 * @param val_2 
 * @param val_3 
 * @param val_4 
 * @return int 
 */
int Operations::minor(int val_1, int val_2, int val_3, int val_4){
	int temporary=0;
	int vector[4]={val_1,val_2,val_3,val_4};
	for (int i = 0;i < 4; i++){
		for (int j = 0; j< 4-1; j++){
			if (vector[j] < vector[j+1]){
			temporary= vector[j]; 
			vector[j] = vector[j+1]; 
			vector[j+1] = temporary;
			}
		}
	}
	return vector[3];
}
