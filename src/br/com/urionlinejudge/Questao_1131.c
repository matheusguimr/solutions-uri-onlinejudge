#include <stdio.h>

void flush_in() {
    int ch;
    do {
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}

void contar_vencedor(int time_1, int time_2) {
    if (time_1 > time_2) {
        printf("Inter venceu mais\n");
    } else if (time_1 < time_2) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Não houve vencedor\n");
    }
}

int main() {
    int g_inter = 0;
    int g_gremio = 0;
    int v_inter = 0;
    int v_gremio = 0;
    int empates = 0;
    int qtd_jogos = 0;
    int novo_jogo = 0;
    do {
        qtd_jogos++;
        scanf("%d %d", &g_inter,&g_gremio);
        flush_in();
        if (g_inter > g_gremio) {
            v_inter++;
        } else if (g_inter < g_gremio) {
            v_gremio++;
        } else {
            empates++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &novo_jogo);
        flush_in();
    } while (novo_jogo != 2);

    printf("%d grenais\n", qtd_jogos);
    printf("Inter:%d\n", v_inter);
    printf("Gremio:%d\n", v_gremio);
    printf("Empates:%d\n", empates);
    contar_vencedor(v_inter, v_gremio);

    return 0;
}

