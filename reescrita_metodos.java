class Animal{
    void andar(){
        condicao("Animal andando");
    }
}

class Mamifero extends Animal {
    void andar(){
        condicao("Mamifero andando");
    }
}

class Homem extends Mamifero {
    void andar() {
        condicao("Homem andando");
    }
}
