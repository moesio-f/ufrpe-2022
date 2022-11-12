- [Introdução](#introdução)

---

# Introdução

> *A distributed system is one in which components located at networked computers communicate and coordinate their actions only by passing messages. This definition leads to the following especially significant characteristics of distributed systems: concurrency of components, lack of a global clock and independent failures of components.* (Coulouris)

- Exemplo da sociedade como um grande sistema distribuído;
- O principal objetivo de SDs é utilizar os recursos da melhor forma possível;
- Distribuímos as tarefas, o *software*;
- Passagem histórica:
  - ENIAC: primeiro computador, precisava fazer tudo;
  - SOs surgem para gerenciar os recursos das máquinas de forma eficiente;
  - UNIX: primeiro sistema operacional;
  - Novos dispositivos para compactação das máquinas: microprocessadores;
  - Redes de computadores permitindo que as máquinas se comuniquem entre si;

> *Um sistema distribuído é um conjunto de elementos de computação (nós) independentes que se apresente a seus usuários como um sistema único e coerente.* (Tanenbaum)

Consequências:

- Concorrência
- Inexistência de relógio global
- Falhas independentes

Motivação: compartilhamento de recursos;

- SD como uma sub-área de redes, todavia pode ser enxergado mais próximo da área de engenharia: queremos projetar *software*.

Desafios:

- Heterogeneidade: diferenças em *hardware*, *software* e arquiteturas;
- Sistemas abertos: diversos sistemas distintos podem se comunicar através de *padrões e protocolos abertos*;
- Segurança: como garantir a segurança de sistemas distribuídos;
- Escalabilidade: capacidade de aumentar/diminuir o poder de processamento do sistema de acordo com a necessidade;
- Tolerância a Falhas;
- Concorrência: mesmo recurso para múltiplos usuários;
- Qualidade do serviço: segurança, disponibilidade, falhas, incoerência, etc;
- Transparência: acesso, concorrência, falhas, localização, tecnologia; O objetivo é tornar o sistema transparente para o usuário ou desenvolvedor (i.e., não perceptível/não importante)
