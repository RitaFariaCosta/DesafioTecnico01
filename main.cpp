
#include <iostream>
using namespace std;

int main()
{
    int idade;
    float altura = 1.62f;
    string nome = "Inej Ghafa";
    string habilidade = "Inej possui excelentes habilidades de escalada, agilidade e coordenação corporal. Ela também tem o dom da furtividade, nunca fazendo nenhum som enquanto se move. Ela é mortal com suas facas e pode matar e incapacitar conforme necessário.";
    string aparencia = "tem pele morena e olhos castanhos escuros, quase pretos. Ela tem cabelos longos e pretos que geralmente mantém presos em uma trança.";
    string amiga;
    double numero_seguidores = 100.952;
    string nome_usuario_insta = "Inej_Ghafa_Crow";
    int numero_seguindo = 125;
    char letra;
    letra = 'I';
    char sobrenome;
    sobrenome = 'G';
    double num_vizualizacoes_usuario;
    double num_vizualizacoes_medio;
    
    cout << "Digite a idade que Inej tem" << endl;
    cin >> idade;
    cout << "Digite o nome da melhor amiga de Inej" << endl;
    cin >> amiga;
    cout << "Digite o numero de vezes que voce viu os videos do instagram da Inej" << endl;
    cin >> num_vizualizacoes_usuario;
    
    cout<< "Nome da minha personagem: " << nome << endl;
    cout<< "Idade da minha personagem: " << idade << " anos" << endl;
    cout<< "Altura dela: " << altura << endl;
    cout<< "O nome da melhor amiga da minha personagem é: " << amiga << endl;
    cout<< habilidade << endl;
    cout<< "A minha personagem " << aparencia << endl;
    cout << "A primeira letra do nome dela é: " << letra << endl;
    cout << "A primeira letra do sobrenome dela é: " << sobrenome << endl;

    
    cout << "\nInej possui um instagram que tem os seguintes dados: " << endl; 
    cout << "Nome de usuário: " << nome_usuario_insta << endl;
    cout << "Numero de seguindo: " << numero_seguindo << endl;
    cout << "Numero de seguidores: " << numero_seguidores << endl;
    
    if(num_vizualizacoes_usuario >= 0){
     num_vizualizacoes_medio = num_vizualizacoes_usuario/100000;
     cout << "Numero medio de vizualizações dos videos: " << num_vizualizacoes_medio << endl;
    }
    else { 
        cout << "Erro" << endl;
    }
     return 0;
}