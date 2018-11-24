#ifndef DATA_H
#define DATA_H

#include <string>

using std::string;

class Data{
private:
    int dia;
    int mes;
    int ano;

public:
    Data();
    //Sobrecarga de Operador
    bool operator> (const Data &other1); //Verifico se a minha data � maior que
    bool operator< (const Data &other1); //Verifico se a minha data � menor que
    bool operator==(const Data &other1); //Verifico se a minha data � igual
    int operator-(Data &other1);         //Realizo a diferenca entres as datas
    Data & operator=(const Data &l);     //Construtor de c�pia

    //M�todos adjacentes para sobrecarga de operador
    int total_de_dias()const; //Utilizo essa fun��o para encontrar a quantidade de dias entre as duas datas
    void dat_agora();
    string Datastring();

    //M�todos Get e set para hora
    void SetDia(int d);
    void SetMes(int m);
    void SetAno(int a);
    int GetDia()const;
    int GetMes()const;
    int GetAno()const;

    ~Data();

};

#endif // DATA_H
