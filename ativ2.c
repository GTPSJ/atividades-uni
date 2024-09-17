#include <stdio.h>

// Função para calcular o desconto com base no valor total da compra
void cal_desconto(float val_total, float *val_final, float *desconto) {
    // Verifica em qual faixa de desconto o valor total se enquadra
    if (val_total > 100) {
        *desconto = val_total * 0.10;  // 10% de desconto
    } else if (val_total > 50) {
        *desconto = val_total * 0.05;  // 5% de desconto
    } else {
        *desconto = 0;  // Sem desconto
    }
    
    // Calcula o valor final após aplicar o desconto
    *val_final = val_total - *desconto;
}

int main() {
    float val_total, val_final, desconto;

    // Solicita ao usuário que insira o valor total da compra
    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &val_total);

    // Chama a função para calcular o desconto
    cal_desconto(val_total, &val_final, &desconto);

    // Exibe o valor total, o desconto e o valor final
    printf("Valor total da compra: R$ %.2f\n", val_total);
    printf("Desconto aplicado: R$ %.2f\n", desconto);
    printf("Valor final após desconto: R$ %.2f\n", val_final);

    return 0;
}
