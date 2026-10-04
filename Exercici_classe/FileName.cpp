#include <iostream>
#include <string>
using namespace std;

////EXERCICI 1
//
//class Persona
//{
//private:
//	int edat;
//	string nom;
//
//public:
//	Persona (int edatPersona, string nomPersona)
//	{
//		edat = edatPersona;
//		nom = nomPersona;
//	}
//	void mostrarDades()
//	{
//		cout << "edat: " << edat << endl;
//		cout <<"nom: " << nom << endl;
//	}
//	
//	bool comprovarEdat()
//	{
//		if (edat < 18)
//		{
//			return false;
//		}
//		return true;
//	}
//};
//
//int main()
//{
//	Persona persona1(19, "Sara");
//	
//
//
//	if (persona1.comprovarEdat())
//	{
//		cout << "Es major d'edat" << endl;
//
//	}
//	else
//	{
//		cout << "Es menor d'edat" << endl;
//	}
//
//}

////EXERCICI 2
//
//
//class Rectangle
//{
//
//private:
//	float amplada;
//	float alcada;
//
//public:
//
//	Rectangle(float ampladaRectangle, float alcadaRectangle)
//	{
//		amplada = ampladaRectangle;
//		alcada = alcadaRectangle;
//
//	}
//	
//	float calcularArea()
//	{
//		float area = amplada * alcada;
//		return area;
//	}
//
//	float calcularPerimetre()
//	{
//		float perimetre = (amplada * 2) + (alcada * 2);
//		return perimetre;
//	}
//	void mostrarDades()
//	{
//		cout << "Alçada: " << alcada << endl;
//		cout << "Amplada: " << amplada << endl;
//	}
//
//};
//
//int main()
//{
//	Rectangle rectangle1(2.5, 8.4);
//
//	rectangle1.mostrarDades();
//
//	cout << "Area: " << rectangle1.calcularArea() << endl;
//	cout << "Perimetre: " << rectangle1.calcularPerimetre() << endl;
//
//
//
//}

////EXERCICI 3
//
//class Llum
//{
//private:
//	bool encesa; 
//
//public:
//	Llum()
//	{
//		encesa = false;
//	}
//	void encendre()
//	{
//		encesa = true;
//	}
//	void apagar()
//	{
//		encesa = false;
//	}
//
//	bool consultarEncesa()
//	{
//		return encesa;
//	}
//
//};
//
//int main()
//{
//	Llum llum1;
//
//	llum1.encendre();
//
//	llum1.apagar();
//
//	if (llum1.consultarEncesa())
//	{
//		cout << "La llum esta encesa" << endl;
//	}
//	else
//	{
//		cout << "La llum esta apagada" << endl;
//	}
//}
// 
//// EXERCICI 4
//

//class Termometre
//{
//private:
//	float temperatura;
//
//public:
//
//	Termometre(float temperaturaInicial)
//	{
//		temperatura = temperaturaInicial;
//	}
//
//	float consultarTemperatura()
//	{
//		return temperatura;
//	}
//
//	void modificarTemperatura(float novaTemperatura)
//	{
//		if (novaTemperatura <= 60.0 && novaTemperatura >= -50.0)
//		{
//			temperatura = novaTemperatura;
//		}
//		else
//		{
//			cout << "No es pot modificar: La temperatura ha d'estar entre -50 i 60 °C." << endl;
//		}
//	}
//};
//
//int main()
//{
//	Termometre termometre1(36.5);
//
//	cout << "Temperatura inicial:" << termometre1.consultarTemperatura() << endl;
//
//	termometre1.modificarTemperatura(40.7);
//
//	cout << "Temperatura modificada:" << termometre1.consultarTemperatura() << endl;
//
//}


////EXERCICI 5

//class Jugador
//{
//private:
//	string nom;
//	int punts;
//	int vides;
//
//public: 
//	Jugador(string nomJugador)
//	{
//		nom = nomJugador;
//		punts = 0;
//		vides = 10;
//	}
//
//	void afegirPunts(int puntsNous)
//	{
//		punts = punts + puntsNous;
//	}
//
//	void perdreVida()
//	{
//		if (vides > 0)
//		{
//			vides = vides - 1;
//		}
//		else
//		{
//			cout << "el jugador no té més vides" << endl; 
//		}
//
//	}
//
//	void consultarPunts()
//	{
//		cout << "Punts: " << punts << endl;
//	}
//	void consultarVides()
//	{
//		cout << "Vides: " << vides << endl;
//	}
//
//	bool jugadorViu()
//	{
//		if (vides > 0)
//		{
//			return true;
//		}
//		else {
//			return false;
//		}
//
//	}
//};
//
//int main()
//{
//	Jugador jugador1("MAX");
//
//	jugador1.consultarPunts();
//	jugador1.consultarVides();
//
//	jugador1.afegirPunts(100);
//	jugador1.perdreVida();
//
//	jugador1.consultarPunts();
//	jugador1.consultarVides();
//	
//	if (jugador1.jugadorViu())
//	{
//		cout << "El jugador esta viu!" << endl;
//	}
//	else {
//		cout << "El jugador no esta viu!" << endl;
//	}
//}

//// EXERCICI 6
//
//class Producte
//{
//private: 
//	string nom;
//	float preu;
//	int estoc;
//
//public:
//	Producte(string nomProducte, float preuProducte, int estocProducte)
//	{
//		nom = nomProducte;
//		preu = preuProducte;
//		estoc = estocProducte;
//
//	}
//
//	float consultarPreu()
//	{
//		return preu;
//	}
//
//	void canviarPreu(float nouPreu)
//	{
//		preu = nouPreu;
//	}
//
//	void afegirEstoc(int unitats)
//	{
//		estoc = estoc + unitats;
//	}
//
//	void vendreUnitat()
//	{
//		if (estoc > 0)
//		{
//			estoc = estoc - 1; 
//		}
//		else
//		{
//			cout << "NO QUEDEN MES UNITATS" << endl;
//		}
//	}
//
//};
//
//int main()
//{
//	Producte producte1("patates", 1.50, 3);
//
//	cout << "Preu inicial : " << producte1.consultarPreu() << endl;
//	
//	producte1.vendreUnitat();
//	producte1.canviarPreu(1.75);
//
//	
//	cout << "Nou preu: " << producte1.consultarPreu() << endl;
//
//}

//EXERCICI 7

class Reserva
{
private:
	string nom;
	int nits;
	float preu;
	bool activa;

public:
	Reserva(string nomReserva, int nitsReserva, float preuReserva)
	{
		nom = nomReserva;
		nits = nitsReserva;
		preu = preuReserva;
		activa = true;
	}

	string consultarNom()
	{
		return nom;
	}

	void canviarNits(int novesNits)
	{
		if (activa)
		{
			nits = novesNits;
		}
		else
		{
			cout << "No es poden modificar les nits, la reserva esta cancel·lada." << endl;
		}
	}
	float preuTotal()
	{
		return nits * preu;
	}

	void cancelarReserva()
	{
		activa = false;
	}

	bool consultarActiva()
	{
		return activa;
	}
};

int main()
{
	Reserva reserva1("Max", 3, 50.0);

	cout << "Client: " << reserva1.consultarNom() << endl;
	cout << "Preu total inicial: " << reserva1.preuTotal() << endl;

	reserva1.canviarNits(5);
	cout << "Nou preu total (5 nits): " << reserva1.preuTotal() << endl;


	reserva1.cancelarReserva();

	if (!reserva1.consultarActiva())
	{
		cout << "La reserva s'ha cancel·lat correctament." << endl;
	}

	
}
