//
// Created by mauri on 1/10/2019.
//

#ifndef SORTMETHODS_ARCHIVO_H
#define SORTMETHODS_ARCHIVO_H

template <typename S, typename N>
class Archivo {
private:
    vector<S> country;
    vector<S> year;
    vector<S> comm_code;
    vector<S> commodity;
    vector<S> flow;
    vector<N> trade_usd;
    vector<N> weight_kg;
    vector<S> quantity_name;
    vector<N> quantity;
    vector<S> category;

public:
    Archivo() {}

    void Lectura(string Nombre){
        ifstream archivo;
        archivo.open(Nombre, ios::in);
    }

};


#endif //SORTMETHODS_ARCHIVO_H
