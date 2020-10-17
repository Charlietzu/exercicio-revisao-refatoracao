#include <string>
#include "Empregado.hpp"

using namespace std;

class Engenheiro : public Empregado {

    private:
        string nome;  
        int projetos;

    public:
        Engenheiro(string nome, double salarioHora, int projetos);
        void imprimeEngenheiro(double valor);
        void setProjetos(int projetos);
        int getProjetos();
	
};

