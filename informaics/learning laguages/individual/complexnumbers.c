#include <stdio.h>

typedef struct {
    double real;      
    double imaginary; 
    } ComplexNumber;

ComplexNumber summ(ComplexNumber n1, ComplexNumber n2) {
    ComplexNumber result;
    result.real = n1.real + n2.real;
    result.imaginary = n1.imaginary + n2.imaginary;
    return result;
}

ComplexNumber composition(ComplexNumber n1, ComplexNumber n2){
    ComplexNumber result;
    result.real = (n1.real * n2.real) - (n1.imaginary * n2.imaginary);
    result.imaginary = n1.imaginary * n2.real + n2.imaginary * n1.real;
    return result;
}

int main() {
    ComplexNumber num1, num2, sum, proiz;

    printf("Введите действительную и мнимую части первого комплексного числа:\n");
    scanf("%lf %lf", &num1.real, &num1.imaginary);

    printf("Введите действительную и мнимую части второго комплексного числа:\n");
    scanf("%lf %lf", &num2.real, &num2.imaginary);

    sum = summ(num1, num2);
    printf("Сумма чисел: %.2lf + %.2lfi\n", sum.real, sum.imaginary);

    proiz = composition(num1, num2);
    printf("Произведение чисел: %.2lf + %.2lfi\n", proiz.real, proiz.imaginary);

}