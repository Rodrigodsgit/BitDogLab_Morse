# Projeto SOS em Código Morse - BitDogLab

## Descrição

Este projeto implementa a transmissão da mensagem **SOS** em código Morse utilizando a linguagem C e a placa de desenvolvimento **BitDogLab**. O LED verde integrado à GPIO 11 da placa é utilizado para emitir os sinais luminosos correspondentes aos pontos e traços do código Morse.

A simulação foi realizada no **Wokwi**, podendo ser acessada pelo link (https://wokwi.com/projects/419909259575220225) e integrada ao **Visual Studio Code**, garantindo consistência entre os testes simulados e a execução física na BitDogLab.

---

## Funcionalidades

- Controle de LED utilizando a GPIO 11 da BitDogLab.
- Emissão da mensagem SOS em código Morse:
  - **Ponto (.)**: LED aceso por 200 ms.
  - **Traço (-)**: LED aceso por 800 ms.
  - Intervalos:
    - 125 ms entre sinais.
    - 250 ms entre letras.
    - 3 segundos entre mensagens completas.

---

## Estrutura do Código

- **`pico_led_init`**: Inicializa a GPIO 11 como saída.
- **`pico_set_led`**: Liga ou desliga o LED.
- **`dot` e `dash`**: Representam os sinais do código Morse (ponto e traço).
- **`sos`**: Organiza a sequência da mensagem SOS.

---

## Configuração do Ambiente

1. **Simulação no Wokwi**:
   - LED conectado à GPIO 11.
   - Configuração consistente com o circuito físico.

2. **Ambiente de Desenvolvimento**:
   - **Visual Studio Code** com extensão **Raspberry Pi Pico**.
   - Código desenvolvido em C, com estrutura baseada no modelo blink padrão.

---

## Referências

Todas as informações e recursos utilizados foram retirados do Moodle do **EmbarcaTech** e complementados por dúvidas esclarecidas durante mentorias.

---

## Resultados

O projeto foi testado com sucesso, tanto na simulação quanto na execução física na BitDogLab, atendendo plenamente aos requisitos propostos.

---

## Como Executar

1. Clone o repositório:
   ```bash
   git clone https://github.com/seu-usuario/projeto-sos-bitdoglab.git
