// POO.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

class Animal {
protected:
	string nombre;
	int edad;
public:
	Animal(string n, int e) : nombre(n), edad(e) {}
	virtual void hacerSonido() {
		cout << nombre << " hace un sonido desconocido." << endl;
	}
};

class Perro : public Animal {
public:
	Perro(string n, int e) : Animal(n, e) {}
	void hacerSonido() override {
		cout << nombre << " dice: Guau!", cout << " anios de edad" << edad << endl;

	}
};

class Automovil {
private:
	string marca;
	int velocidad;
public:
	Automovil(string m, int v) : marca(m), velocidad(v) {}
	void acelerar() {
		velocidad += 10;
		cout << "El automovil " << marca << " ahora va a " << velocidad << " km/h." << endl;
	}
};

class Persona {
private:
	string nombre;
	int edad;
public:
	Persona(string n, int e) : nombre(n), edad(e) {}
	void saludar() {
		cout << "Hola, mi nombre es " << nombre << " y tengo " << edad << " años." << endl;
	}
};

int main() {
	Perro miPerro("Rex", 5);
	miPerro.hacerSonido();
	Automovil miCoche("Toyota", 60);
	miCoche.acelerar();
	Persona persona1("Carlos", 30);
	persona1.saludar();
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
