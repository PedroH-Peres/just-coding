#include <vector>
#include <iostream>
#include <string>

/*
- Pedro H. Peres
- Binary Search Code
- This code was created for study purposes.
- This code was compiled using the g++ compiler.
*/

int binary_search(const std::vector<std::string>& array, std::string& name ){
    int inicio = 0;
    int final = array.size() - 1;

    while(inicio <= final) {
        int meio = (inicio + final) / 2;

        if(array[meio] == name){
            return meio;
        }

        if(array[meio] < name){
            inicio = meio + 1;
        }else if(array[meio] > name){
            final = meio - 1;
        }
    }

    return -1;
}

int main(){
    std::vector<std::string> nomes = {
        "Abigail", "Adalberto", "Adriana", "Afonso", "Agatha", "Alan", "Alberto", "Alessandro",
        "Alex", "Alexandre", "Alice", "Aline", "Amanda", "Ana", "André", "Andrea",
        "Anita", "Antônio", "Arthur", "Augusto", "Aurora", "Bárbara", "Beatriz", "Benedito",
        "Benjamin", "Bento", "Bernardo", "Bianca", "Breno", "Bruna", "Bruno", "Caio",
        "Camila", "Carla", "Carlos", "Carolina", "Catarina", "Cecília", "Célia", "César",
        "Charles", "Clara", "Clarice", "Cláudio", "Cleber", "Cristiane", "Cristiano", "Daniel",
        "Daniela", "Danilo", "Davi", "David", "Débora", "Denis", "Denise", "Diego",
        "Diogo", "Douglas", "Eduardo", "Elaine", "Eliane", "Elias", "Elisa", "Eliza",
        "Emanuel", "Emerson", "Emily", "Enzo", "Eric", "Erica", "Estela", "Ester",
        "Eva", "Evandro", "Evelyn", "Fabiana", "Fabiano", "Fábio", "Fabrício", "Fátima",
        "Felipe", "Felix", "Fernanda", "Fernando", "Filipe", "Flávia", "Flávio", "Francisco",
        "Gabriel", "Gabriela", "Geraldo", "Gilberto", "Giovana", "Giovanni", "Gisele", "Guilherme",
        "Gustavo", "Heitor", "Helena", "Heloísa", "Henrique", "Hugo", "Iago", "Ian",
        "Igor", "Inês", "Ingrid", "Isabel", "Isabela", "Isadora", "Ismael", "Israel",
        "Ítalo", "Ivan", "Ivana", "Jacqueline", "Jaime", "Jair", "Janaína", "Jandira",
        "Jane", "Jaqueline", "Jean", "Jefferson", "Jenifer", "Jéssica", "Joana", "João"
    };

    std::string nome;
    std::cout << "Digite um nome para buscar: ";
    std::cin >> nome;

    if (!nome.empty()) nome[0] = toupper(nome[0]);

    int result = binary_search(nomes, nome);

    if(result != -1){
        std::cout << "Nome procurado: " << nome << " - Indice encontrado: " << result << std::endl;
    }else{
        std::cout << "Nome não encontrado na lista!";
    }

    return 0;
}