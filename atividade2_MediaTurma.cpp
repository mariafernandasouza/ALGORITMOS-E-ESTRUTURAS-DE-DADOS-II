#include <stdio.h>

double mediaTurma(int numbAlunos) {
    double soma = 0.0;
    double nota;

    for (int i = 1; i <= numbAlunos; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%lf", &nota);
        soma += nota;
    }

    return soma / numbAlunos;
}

double mediaEscola(int numbTurmas) {
    double somaMedias = 0.0;

    for (int i = 1; i <= numbTurmas; i++) {
        int numbAlunos;
        printf("Digite o numero de alunos na turma %d: ", i);
        scanf("%d", &numbAlunos);

        double media = mediaTurma(numbAlunos); 
        printf("A media da turma %d e: %.2lf\n", i, media);
        somaMedias += media; 
    }

    return somaMedias / numbTurmas;
}

int main() {
    int numbTurmas;
    
    printf("Digite o numero de turmas: ");
    scanf("%d", &numbTurmas);

    double mediaGeral = mediaEscola(numbTurmas);
    printf("A média geral da escola e: %.2lf\n", mediaGeral);

    return 0;
}
