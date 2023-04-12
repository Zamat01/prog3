#include <string>
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

class Calculadora
{
	public:
		Calculadora();
		void displayMenu();
		void setMem(double _mem);
		double getMem();
		double add(double a, double b);
		double sub(double a, double b);
		double mul(double a, double b);
		double div(double a, double b);
	private:
		double mem;
};

int main()
{
	double num1, num2, res;
	char op;
	Calculadora calc;
	
	calc.displayMenu();
	
	cin >> op;
	while(op != 'S' && op != 's')
	{
		switch(op)
		{
			case 'C':
				calc.setMem(0);
				break;
			case 'c':
				calc.setMem(0);
				break;
			case '+':
				if(calc.getMem() == 0)
				{
					cout << "Digite o primeiro numero: ";
					cin >> num1;
				}
				else
				{
					num1 = calc.getMem();
				}
				cout << "Digite o segundo numero: ";
				cin >> num2;
				res = calc.add(num1, num2);
				cout << num1 << " + " << num2 << " = " << res << endl;
				calc.setMem(res);
				break;
			case '-':
				if(calc.getMem() == 0)
				{
					cout << "Digite o primeiro numero: ";
					cin >> num1;
				}
				else
				{
					num1 = calc.getMem();
				}
				cout << "Digite o segundo numero: ";
				cin >> num2;
				res = calc.sub(num1, num2);
				cout << num1 << " - " << num2 << " = " << res << endl;
				calc.setMem(res);
				break;
			case '*':
				if(calc.getMem() == 0)
				{
					cout << "Digite o primeiro numero: ";
					cin >> num1;
				}
				else
				{
					num1 = calc.getMem();
				}
				cout << "Digite o segundo numero: ";
				cin >> num2;
				res = calc.mul(num1, num2);
				cout << num1 << " * " << num2 << " = " << res << endl;
				calc.setMem(res);
				break;
			case '/':
				if(calc.getMem() == 0)
				{
					cout << "Digite o primeiro numero: ";
					cin >> num1;
				}
				else
				{
					num1 = calc.getMem();
				}
				cout << "Digite o segundo numero: ";
				cin >> num2;
				if(num2 == 0)
				{
					cout << "Erro - Divisao por zero" << endl;
				}
				else
				{
					res = calc.div(num1, num2);
					cout << num1 << " / " << num2 << " = " << res << endl;
					calc.setMem(res);
				}  
				break;					
			default:
				std::string s="Meu nome é Yoshikage Kira. Tenho 33 anos. Minha casa fica na parte nordeste de Morioh, onde todas as casas estão, e eu não sou casado. Eu trabalho como funcionário das lojas de departamentos Kame Yu e chego em casa todos os dias às oito da noite, no máximo. Eu não fumo, mas ocasionalmente bebo. Estou na cama às 23 horas e me certifico de ter oito horas de sono, não importa o que aconteça. Depois de tomar um copo de leite morno e fazer cerca de vinte minutos de alongamentos antes de ir para a cama, geralmente não tenho problemas para dormir até de manhã. Assim como um bebê, eu acordo sem nenhum cansaço ou estresse pela manhã. Foi-me dito que não houve problemas no meu último check-up. Estou tentando explicar que sou uma pessoa que deseja viver uma vida muito tranquila. Eu cuido para não me incomodar com inimigos, como ganhar e perder, isso me faria perder o sono à noite. É assim que eu lido com a sociedade e sei que é isso que me traz felicidade. Embora, se eu fosse lutar, não perderia para ninguém.";
				for(char c: s)
				{
					std::this_thread::sleep_for(std::chrono::milliseconds(100));
					std::cout << c << std::flush;
				}
				break;
		}
		
		cout << endl;
		
		calc.displayMenu();
		
		cin >> op;
	}
	
	return 0;
}

Calculadora::Calculadora()
{
	mem = 0;
}

void Calculadora::displayMenu()
{
	cout << "----------------------------------------------" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "Valor Memoria Atual = " << getMem() << endl;
	cout << "----------------------------------------------" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "Digite a operacao desejada [+] [-] [*] [/] [C]" << endl;
	cout << "                [S para sair]" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "----------------------------------------------" << endl;
}

void Calculadora::setMem(double _mem)
{
	mem = _mem;
}

double Calculadora::getMem()
{
	return mem;
}

double Calculadora::add(double a, double b)
{
	return a+b;
}

double Calculadora::sub(double a, double b)
{
	return a-b;
}

double Calculadora::mul(double a, double b)
{
	return a*b;
}

double Calculadora::div(double a, double b)
{
	return a/b;
}
