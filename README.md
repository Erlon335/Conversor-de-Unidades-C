
<h1 align="center"><img align="center" style="border-radius: 50%;" src="https://moodle.embarcatech.cepedi.org.br/pluginfile.php/1/theme_moove/logo/1733422525/Group%20658.png" width="200px;" alt=""><br/>Conversor de Unidades C</h1>

<h3 align="center">
    Conversor de Unidades em Linguagem C
</h3>

<h4 align="center">
	🚧  Projeto Finalizado 🚧
</h4>

---

Tabela de conteúdos
=================
<!--ts-->
   * [Sobre o projeto](#-sobre-o-projeto)
   * [Layout Repositorio Github](#-layout-repositorio-github)
   * [Funcionalidades](#-Funcionalidades)
   * [Como executar o projeto](#-como-executar-o-projeto)
     * [Pré-requisitos](#-pré-requisitos)
   * [Tecnologias](#-tecnologias)
     * [Websites](#-websites)
     * [Utilitários](#user-content-server--nodejs----typescript)
   * [Contribuidores](#-contribuidores)
   * [Licença](#-licença)
<!--te-->

---

## 💻 Sobre o projeto

O Conversor de Unidades feito em Linguagem C, é um sistema teste desenvolvido para fixação e experimentação do conteúdo proposto pelo curso.

O sistema utiliza a conversão de uma unidade de medida em outras através de interação com Usuários.

Projeto desenvolvido durante o curso de Formação Básica em Software Embarcado oferecido pela [Embarcatech](https://embarcatech.softex.br).
A Formação Básica em Software Embarcado da Embarcatech é um programa de capacitação profissional técnica destinado a alunos de nível superior e técnico em Tecnologias da Informação e Comunicação (TIC) e áreas correlatas, focado em tecnologias de Sistemas Embarcados.

---

## 🎨 Layout Repositorio Github

/Conversor-de-Unidades-C
- main.c&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Ponto de entrada do programa
- src/ &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Diretório para o código fonte
  - features/&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Diretório para os arquivos de conversão
    - area.c&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Implementação de conversões de área
    - comprimento.c&emsp;&emsp;&emsp;&emsp;&emsp;# Implementação de conversões de comprimento
    - dados.c&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Implementação de conversões de dados
    - massa.c&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Implementação de conversões de massa
    - potencia.c&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Implementação de conversões de potência
    - temperatura.c&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Implementação de conversões de temperatura
    - tempo.c&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Implementação de conversões de tempo
    - velocidade.c&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Implementação de conversões de velocidade
    - volume.c&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Implementação de conversões de volume

  - include/&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Diretório para os arquivos de cabeçalho
    - area.h&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Declarações de funções para conversões de área
    - comprimento.h&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Declarações de funções para conversões de comprimento
    - dados.h&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Declarações de funções para conversões de dados
    - massa.h&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Declarações de funções para conversões de massa
    - potencia.h&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Declarações de funções para conversões de potência
    - temperatura.h&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Declarações de funções para conversões de temperatura
    - tempo.h&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Declarações de funções para conversões de tempo
    - velocidade.h&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Declarações de funções para conversões de velocidade
    - volume.h&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Declarações de funções para conversões de volume

- build/&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Diretório para arquivos gerados na compilação com Make
  - *.o&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Arquivos objeto gerados na compilação com Make
  - conversor&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Arquivo binário executável gerados na compilação com Make

- output/&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Arquivo executável gerado pela compilação no terminal
  - Makefile&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Automação da compilação (caso use o Makefile)
  - README.md&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Readme do projeto
  - License.md&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;# Licensa de uso
---

## ⚙️ Funcionalidades

- [x] Interação com Usuário
- [x] Conversão de Unidades de Medidas em:
    - Área (metros, centímetros)
    - Comprimento (milimetros, centímetros ,metros, quilometros)
    - Dados (valor, bits, bytes, kilobytes, gigabytes, terabytes, megabytes)
    - Massa (gramas, kilogramas, Toneladas)
    - Potência (watt)
    - Temperatura (celsius, fahrenheit, kelvin)
    - Tempo (segundos, minutos, horas)
    - Velocidade (metrosPorSegundo)
    - Volume (milimetros, litros, metros Cubicos)

---

## 🚀 Como executar o projeto

💡Siga as instruções abaixo para configurar, compilar e executar o programa.

### Pré-requisitos

Antes de começar, você vai precisar ter instalado em sua máquina as seguintes ferramentas:
  - Sistema operacional Linux, macOS ou Windows (com suporte a Makefile).
  - [Git](https://git-scm.com) (Opcional, mas recomendado),
  - [GCC compilador](https://gcc.gnu.org).

Além disto é bom ter um editor para trabalhar com o código como [VSCode](https://code.visualstudio.com/)

#### 🎲 Rodando o Conversor

```bash

# Caso o projeto esteja em um repositório Git, você pode cloná-lo com o comando:
$ git clone https://github.com/ferreiramateusalencar/Conversor-de-Unidades-C.git
cd Conversor-de-Unidades-C

# Compile o projeto executando o comando a partir do diretório raiz:
$ make

# Ou (se não tiver suporte makefile):
$ gcc -Wall -Wextra -g3 main.c src/features/area.c src/features/comprimento.c src/features/dados.c src/features/massa.c src/features/potencia.c src/features/temperatura.c src/features/tempo.c src/features/velocidade.c src/features/volume.c -Iinclude -o output/conversor.exe    

# Executa o Programa
$ Após a compilação, execute o programa conversor.exe.
```

---

## 🛠 Tecnologias

As seguintes ferramentas foram usadas na construção do projeto:

#### **Websites**
-   **[Visual Studio code](https://code.visualstudio.com)**
-   **[Github](https://github.com)**


#### **Utilitários**

-   Editor:  **[Visual Studio Code](https://code.visualstudio.com/)**  → Extensions:  **[C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) e [C/C++ Compile Run](https://marketplace.visualstudio.com/items?itemName=danielpinto8zz6.c-cpp-compile-run)**
-   **[Git](https://git-scm.com)**
-   **[GCC compilador](https://gcc.gnu.org)**


---

## 👨‍💻 Contribuidores

GRUPO 1, SUBGRUPO 3 da Embarcatech <br/>
Mentor: MANOEL MESSIAS DA SILVA JUNIOR

<table>
  <tr>
    <td align="center"><img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/86336670?v=4" width="100px;"/><br/><a href="https://github.com/ferreiramateusalencar">Mateus A. Ferreira<a/><br/><sub>Contribuição: Interface de usuário<sub/><br/><a href="https://github.com/ferreiramateusalencar/Conversor-de-Unidades-C" title="Lider do Projeto">👨‍🚀</a></td>
    <td align="center"><img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/180613216?v=4" width="100px;"/><br/><a href="https://github.com/Erlon335">Érlon S. Alves Neto<a/><br/><sub>Contribuição: readme.md e Testes de Sis.<sub/><br/><a href="https://github.com/ferreiramateusalencar/Conversor-de-Unidades-C" title="Integrante">🌐</a></td>
    <td align="center"><img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/113399464?v=4" width="100px;"/><br/><a href="https://github.com/Leo-Luz-code">Leornado R. Luz<a/><br/><sub>Contribuição: Unidades de Veloc. e Dados <sub/><br/><a href="https://github.com/ferreiramateusalencar/Conversor-de-Unidades-C" title="Integrante">🌐</a></td>
    <td align="center"><img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/112970376?v=4" width="100px;"/><br/><a href="https://github.com/Dyeorn">João Pedro Jacó<a/><br/><sub>Contribuição: Unidade de Comprimento<sub/><br/><a href="https://github.com/ferreiramateusalencar/Conversor-de-Unidades-C" title="Integrante">🌐</a></td>
    <td align="center"><img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/128985376?v=4" width="100px;"/><br/><a href="https://github.com/jotave8">João Victor O. de Lima<a/><br/><sub>Contribuição: Unidade de Tempo<sub/><br/><a href="https://github.com/ferreiramateusalencar/Conversor-de-Unidades-C" title="Integrante">🌐</a></td>
  </tr>
  <tr>
     <td align="center"><img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/178435161?v=4" width="100px;"/><br/><a href="https://github.com/lauracruzz">Laura B. da Cruz<a/><br/><sub>Contribuição: Unidade de área<sub/><br/><a href="https://github.com/ferreiramateusalencar/Conversor-de-Unidades-C" title="Integrante">🌐</a></td>
     <td align="center"><img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/89869851?v=4" width="100px;"/><br/><a href="https://github.com/GabrielFOV">Gabriel F. O. Viana<a/><br/><sub>Contribuição: Unidades de Massa e Volume<sub/><br/><a href="https://github.com/ferreiramateusalencar/Conversor-de-Unidades-C" title="Integrante">🌐</a></td>
     <td align="center"><img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/165080675?v=4" width="100px;"/><br/><a href="https://github.com/2024Nat">Natalia C. Marques <a/><br/><sub>Contribuição: Unidade de Temperatura<sub/><br/><a href="https://github.com/ferreiramateusalencar/Conversor-de-Unidades-C" title="Integrante">🌐</a></td>
     <td align="center"><img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/64041493?v=4" width="100px;"/><br/><a href="https://github.com/jonathanmachado141">Jonathan M. da Silva<a/><br/><sub>Contribuição: Unidade de Potência<sub/><br/><a href="https://github.com/ferreiramateusalencar/Conversor-de-Unidades-C" title="Integrante">🌐</a></td>
  </tr>
</table>

      
---

## 📄 Licença

Este projeto está sob a licença do SUBGRUPO 3 e seu Lider de Projeto da Formação Básica em Software Embarcado da Embarcatech - Veja o arquivo <a href="https://github.com/ferreiramateusalencar/Conversor-de-Unidades-C/blob/main/License.md">License.md<a/>

---
