#include <string>
#include "Empregado.hpp"

using namespace std;

class Vendedor : public Empregado {

    private:
        double quotaMensalVendas;

  	public:
        Vendedor(string nome, double salarioHora, double quotaMensalVendas);
        double quotaTotalAnual();
        void imprimeVendedor(double valor);
        double getQuotaMensalVendas();
        void setQuotaMensalVendas(double quotaMensalVendas);
	
};

