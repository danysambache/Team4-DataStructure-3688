/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALEXANDER MAILA - jamaila@espe.edu.ec
				JIMMY SIMBA�A - jasimbana14@espe.edu.ec
				DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)
	
	ENUNCIADO:  SE DESEA SUMAR, RESTAR, MULTIPLICAR Y DIVIDIR DOS NUMEROS UTILIZANDO TEMPLATES, BASADOS EN CLASES.				
				
	FECHA DE CREACION:        19-05-21 
	FECHA DE MODIFICACION:    -------*/
	
#include"Functions.h"
#include<iostream>

using namespace std;

template <typename function>
function Functions <function>::add(Operations<function> ope){
	return ope.getValue_1()+ope.getValue_2();
}
template <typename function>
function Functions <function>::subtract(Operations<function> ope){
	return ope.getValue_1()-ope.getValue_2();
}
template <typename function>
function Functions <function>::multiply(Operations<function> ope){
	return ope.getValue_1()*ope.getValue_2();
}
template <typename function>
function Functions <function>::divide(Operations<function> ope){
	if(ope.getValue_2()==0){
		cout<<"You can�t divide !!!"<<endl;
	}else
	return ope.getValue_1()/ope.getValue_2();
}