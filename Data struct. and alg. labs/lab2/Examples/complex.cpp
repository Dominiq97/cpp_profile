#include <iostream>
class complex {

	public:
		double re;
	    double im;

	    public:
		complex();

		complex(double param_re, double param_im);

		//methods: getters
		double getRe();
		double getIm();

		complex complex_conjugate();

        void adunare (complex c1);

	   	 void inmultire (complex c1);

	   	 void impartire (complex c1);
};

complex::complex()
{

}

complex complex::complex_conjugate()
{
    complex conjugate(re,-im);
   	return conjugate;
}

complex::complex(double param_re, double param_im)
{
    this->re=param_re;//re=param_re;
    this->im=param_im;//im=param_im;

}

void complex::adunare(complex c1)
{

    //code for addition
}


int main()
{
    complex number(2,3);
    complex number2(3,4);
    std::cout<<number.complex_conjugate().im; //function call
    return 0;
}
