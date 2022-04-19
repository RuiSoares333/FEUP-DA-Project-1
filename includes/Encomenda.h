//
// Created by goncalo on 04/04/22.
//

#ifndef PROJETO_DA_ENCOMENDA_H
#define PROJETO_DA_ENCOMENDA_H


class Encomenda {
//TODO: adicionar remetente e destinario
private:
    unsigned int duration, recompensa, volume, peso;

    //escrevi duration pra n escrever duracao (sounds stupid)
public:
    Encomenda(unsigned int duration, unsigned int recompensa, unsigned int volume, unsigned int peso);


    /**
     *
     * @return duration of Encomenda
     */
    unsigned int getDuration() const;

    /**
     *
     * @return recompensa of Encomenda
     */
    unsigned int getRecompensa() const;

    /**
     *
     * @return volume of Encomenda
     */
    unsigned int getVolume() const;

    /**
     *
     * @return peso of Encomenda
     */
    unsigned int getPeso() const;

};


#endif //PROJETO_DA_ENCOMENDA_H
