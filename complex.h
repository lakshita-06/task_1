#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H
 
 class complex
 { 
 	float r;
 	float i;

    public:
    	complex(float real=0.0 , float imag=0.0);
    	{
    		r=real;
    		i=imag;
    	}
        friend std::ostream &operator<<(std::ostream &output ,complex &t);
        
        complex operator+(complex);
        complex operator-(complex);
        complex operator*(complex);

 };
