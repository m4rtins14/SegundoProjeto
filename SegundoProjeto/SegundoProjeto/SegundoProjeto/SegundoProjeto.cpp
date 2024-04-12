//ATVD1//

/*#include <iostream>

using namespace std;

int main() {
    const double precoAte25 = 1.50;
    const double precoAcima25 = 1.25;

    int quantidadeSorvetes;

    cout << "Quantidade de sorvetes comprados: ";
    cin >> quantidadeSorvetes;

    double valorTotal;
    if (quantidadeSorvetes <= 25) {
        valorTotal = quantidadeSorvetes * precoAte25;
    }
    else {
        valorTotal = quantidadeSorvetes * precoAcima25;
    }

    cout << "O cliente deverá pagar: R$" << valorTotal << endl;

    return 0;
}
*/

//ATIVIDADE2//
/*#include <iostream>

using namespace std;

int main() {
    int numero = 15;

    if (numero > 10) {
        numero = numero + 10 * 2;
    }
    else {
        numero = numero + 9 * 3 - 8;
    }

    cout << "O resultado do calculo e: " << numero << endl;

    return 0;
}
*/

//ATIVIDADE3//

/*#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Insira um numero: ";
    cin >> numero;

    if (numero > 0) {
        cout << "O numero inserido e positivo." << endl;
    }
    else if (numero < 0) {
        cout << "O numero inserido e negativo." << endl;
    }
    else {
        cout << "O numero inserido e zero." << endl;
    }

    return 0;
}
*/

//ATIVIDADE 4//

/*#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Insira o primeiro numero: ";
    cin >> num1;
    cout << "Insira o segundo numero: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "O primeiro numero (" << num1 << ") e maior que o segundo numero (" << num2 << ")." << endl;
    }
    else if (num2 > num1) {
        cout << "O segundo numero (" << num2 << ") e maior que o primeiro numero (" << num1 << ")." << endl;
    }
    else {
        cout << "Os numeros sao iguais." << endl;
    }

    return 0;
}*/

//ATIVIDADE 5//

#include <iostream>

using namespace std;

int main() {
    double nota1, nota2;

    cout << "Insira a primeira nota: ";
    cin >> nota1;
    cout << "Insira a segunda nota: ";
    cin >> nota2;

    double media = (nota1 + nota2) / 2;

    if (media >= 7.0) {
        cout << "Aprovado" << endl;
    }
    else {
        cout << "Reprovado" << endl;
    }

    return 0;
}

