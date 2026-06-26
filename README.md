# ColonySim

> Simulador de colônia medieval em C — gerencie recursos, habitantes e sobreviva aos eventos do destino.

---

## Sobre

Projeto de aprendizado em C com tema de estratégia histórica. O jogador gerencia uma colônia medieval, tomando decisões a cada turno sobre coleta de recursos, recrutamento de habitantes e construções — enquanto lida com eventos aleatórios como pragas, ataques e colheitas.

Desenvolvido como projeto prático para aprender os fundamentos de C:
- Structs e funções
- Ponteiros
- Memória dinâmica (`malloc`, `realloc`, `free`)
- Manipulação de arquivos (salvar/carregar partida)
- Organização em múltiplos arquivos `.c` e `.h`

---

## Estrutura do Projeto

```
colonia/
├── main.c          # Loop principal e menu
├── colonia.h       # Declaração das structs e funções da colônia
├── colonia.c       # Implementação da lógica da colônia
├── habitante.h     # Struct e funções de habitante
├── habitante.c     # Implementação dos habitantes
├── arquivo.h       # Funções de salvar/carregar
├── arquivo.c       # Implementação do sistema de arquivos
└── Makefile        # Build do projeto
```

---

## Como compilar e rodar

### Com Makefile
```bash
make
./colonia
```

### Manualmente
```bash
gcc main.c colonia.c habitante.c arquivo.c -o colonia
./colonia
```

---

## Como jogar

A cada turno você escolhe uma ação:
- **Coletar recursos** — comida, madeira ou ouro
- **Recrutar habitantes** — aumenta sua força de trabalho
- **Construir** — melhora a colônia
- **Salvar/Carregar** — persiste o progresso em arquivo

Ao final de cada turno, a colônia consome comida. Se não houver suprimentos, habitantes morrem. Eventos aleatórios podem mudar tudo a qualquer momento.

---

## Requisitos

- GCC ou Clang
- Make (opcional)
- Linux / macOS / Windows (WSL recomendado)

---

## Licença

Projeto pessoal para fins de aprendizado.
