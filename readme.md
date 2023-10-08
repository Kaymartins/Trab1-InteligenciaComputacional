# Descrição do Problema:
Considere um grafo completo G=(V, E), no qual V é o conjunto de vértices e E é o conjunto de
arestas. O conjunto de vértices inclui h hotéis e n nós. Uma pontuação específica é atribuída a cada nó,
representada por for si; a visitação a um hotel, porém, não tem pontuação. Existem dois tipos de caminhos
no OPHS: trip e tour. Um tour é um caminho que consiste em um número fixo de trips contíguas. A
primeira trip de um tour deve começar em H0, e a origem de qualquer outra viagem deve ser o final da
anterior. Uma trip visita vários nós dentro de um limite de tempo específico a partir do seu hotel inicial. A
última viagem deverá terminar em H1, e os hotéis intermediários de um passeio poderão ser qualquer um dos
hotéis disponíveis.

Embora um tour deva visitar cada nó no máximo uma vez, não há nenhuma restrição quanto ao
número de vezes que os hotéis podem ser visitados. O objetivo é encontrar um tour com pontuação máxima
contendo um número fixo de trips. Neste trabalho, a distância euclidiana entre cada par de vértices será
considerada como o tempo necessário para viajar entre eles.