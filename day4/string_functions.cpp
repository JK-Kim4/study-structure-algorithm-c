class Complex
{
	private: 
		double m_real, m_imag;

	public:
		Complex() {m_real = m_imag = 0.0};
		Complex operator+(Complex c);
		friend Complex operator-(Complex c1, Complex c2);
    
    Complex Complex::operator+(Complex x)
  {
    Complex temp_c;
    temp_c.m_real = m_real + c.m_real;
    temp_c.m_real = m_imag + c.m_imag;
    return temp_c;
  }

  Complex operator-(Complex c1, Complex c2)
  {
    Complex temp_c;
    temp_c.m_real = c1.m_real - c2.m_real;
    temp_c.m_imag = c1.m_imag - c2.m_imag;
    return temp_c;
  }
}

Complex Complex::operator+(Complex x)
{
	Complex temp_c;
	temp_c.m_real = m_real + c.m_real;
	temp_c.m_real = m_imag + c.m_imag;
	return temp_c;
}

Complex operator-(Complex c1, Complex c2)
{
	Complex temp_c;
	temp_c.m_real = c1.m_real - c2.m_real;
	temp_c.m_imag = c1.m_imag - c2.m_imag;
	return temp_c;
}
