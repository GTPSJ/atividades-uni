#include <stdio.h>  // biblioteca padrão de entrada e saída

// Função para calcular o imposto de renda com base na renda fornecida
float cal_imp_renda(float renda) {
    float imposto;  // Variável para armazenar o valor do imposto
    
    // Condições para determinar o valor do imposto
    if (renda <= 2000) {  // Se a renda for até 2000, o imposto é zero
        imposto = 0;
    } else if (renda <= 5000) {  // Se a renda for entre 2000 e 5000, o imposto é 10%
        imposto = renda * 0.10;
    } else {  // Se a renda for maior que 5000, o imposto é 20%
        imposto = renda * 0.20;
    }
    
    return imposto;  // Retorna o valor calculado do imposto
}

int main() {
    float renda, imposto;  // Variáveis para armazenar a renda e o imposto
    
    // Solicita ao usuário que insira sua renda
    printf("Digite sua renda: ");
    scanf("%f", &renda);  // Lê o valor da renda fornecido pelo usuário
    
    // Chama a função cal_imp_renda para calcular o imposto com base na renda inserida
    imposto = cal_imp_renda(renda);
    
    // Exibe o valor do imposto de renda calculado
    printf("O imposto de renda é: R$ %.2f\n", imposto);
    
    return 0;  // Finaliza o programa com sucesso
}
