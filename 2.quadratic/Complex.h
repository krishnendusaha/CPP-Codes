#ifndef COMPLEX_H
#define COMPLEX_H
using namespace std;
class Complex{
public:
// CONSTRUCTOR
// -----------
Complex(double = 0.0, double = 0.0);
Complex(const Complex&);
// DESTRUCTOR
// ----------
~Complex();
// BASIC ASSIGNEMENT OPERATOR
// --------------------------
Complex& operator=(const Complex&);//////
// BINARY ARITHMETIC OPERATORS
// ---------------------------
Complex operator+(const Complex&);
Complex operator-(const Complex&);
Complex operator*(const Complex&);
Complex operator/(const Complex&);
Complex operator/(double f);
// UNARY ARITHMETIC OPERATORS
// --------------------------
Complex operator-(); // OPERAND 'THIS' IMPLICIT
Complex operator+();
Complex& operator--(); // DECREMENT REAL PART BY UNITY
Complex& operator++(); // INCREMENT REAL PART BY UNITY
Complex operator--(int); // DECREMENT IMAGINARY PART BY UNITY
Complex operator++(int); // INCREMENT IMAGINARY PART BY UNITY
// BINARY RELATIONAL OPERATORS
// ---------------------------
// COMPARISONS ARE BASED ON THE NORMS OF THE COMPLEX NUMBERS
bool operator==(const Complex&);
bool operator!=(const Complex&);
bool operator<(const Complex&);
bool operator<=(const Complex&);
bool operator>(const Complex&);
bool operator>=(const Complex&);
// ADVANCED ASSIGNEMENT OPERATORS
// ------------------------------
Complex& operator+=(const Complex&);
Complex& operator-=(const Complex&);
Complex& operator*=(const Complex&);
Complex& operator/=(const Complex&);
// ARRAY INDEX OPERATOR
// --------------------
Complex const& operator[](unsigned int) const; // READ-ONLY ACCESS
Complex& operator[](unsigned int); // READ/WRITE ACCESS:
// CONVERSION OPERATORS
// --------------------
double operator*() const; // COMPUTES THE NORM
// SPECIAL OPERATORS
// -----------------
Complex operator!() const; // COMPLEX CONJUGATE
// BASIC I/O USING FRIEND FUNCTIONS
// --------------------------------
friend ostream& operator<<(ostream&, const Complex&);
friend istream& operator>>(istream&, Complex&);
// DYNAMIC MEMORY OPERATORS
// ------------------------
//void *operator new(size_t s);
//void operator delete(void *ptr);
// CONSTANTS OF DATATYPE
// ---------------------
static const Complex sc_cUnityR; // DEFINES 1+j0
static const Complex sc_cUnityI; // DEFINES 0+j1
static const Complex sc_cZero; // DEFINES 0+j0
// COMPONENT FUNCTIONS
//--------------------
double GetReal() { return re_; }
double GetImg() { return im_; }

private:
// DATA MEMBERS
// ------------
double re_; // THE REAL PART
double im_; // THE IMAGINARY PART
};
#endif // COMPLEX_H
