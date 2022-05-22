# Projeto de Objetos Inteligentes Conectados em ADS
## Sistema Automatizado de Irrigação
 
Status do Projeto: :heavy_check_mark: Concluído

<p align="center">
  <img src="https://img.shields.io/static/v1?label=ARDUINO&message=IoT&color=blue&style=for-the-badge&logo=ARDUINO"/>
</p>


### Tópicos 

:small_blue_diamond: [Descrição do projeto](#descrição-do-projeto)

:small_blue_diamond: [Pré-requisitos para criar o ambiente de Desenvolvimento](#pré-requisitos-para-criar-o-ambiente-de-desenvolvimento)

:small_blue_diamond: [Criação do Ambiente de Desenvolvimento](#criação-do-ambiente-de-desenvolvimento)

:small_blue_diamond: [Como rodar a aplicação em Desenvolvimento](#como-rodar-a-aplicação-em-desenvolvimento-arrowforward)

## Descrição do projeto 

<p align="justify">
  O projeto tem como objetivo a solução para automatizar a irrigação em vasos de planta. A implementação conta com sensores para identificar se o solo está seco ou úmido, em caso de seco então é acionado um atuador para efetuar a irrigação do solo e enviar as informações de data e hora ao Broker MQTT, onde tem um serviço que lê esse topic no Broker e envia as informações por e-mail. 
</p>

## Softwares utilizados

<p align="justify">
  As ferramentas abaixo auxiliam no desenvolvimento do código, compilação, testes e execução do sistema.
</p>

:warning: [Arduino](https://www.arduino.cc/en/software)
:warning: [Node.js](https://nodejs.org/en/download/)
:warning: [Node-RED](https://nodered.org/docs/getting-started/windows)

<p align="justify">
  * Caso não saiba efetuar a instalação das ferramentas acima é possível encontrar o tutorial no próprio site do provedor (sites relacionados nos links das ferramentas), além de encontrar tutoriais em sites de busca.
</p>

## Hardware utilizado 

<p align="justify">
  Hardwares utilizado para a montagem do projeto.
</p>


:heavy_check_mark: Sensor de Umidade do Solo Higrômetro; 

:heavy_check_mark: Módulo Relé 1 Canal (5v/10a);

:heavy_check_mark: Microbomba d’água Submersível - Motor Dc 1201/h; 

:heavy_check_mark: Arduíno Uno R3;

:heavy_check_mark: Protoboard;

## MQTT Broker

:warning: [Broker](http://www.hivemq.com/demos/websocket-client/)


## Licença 

Copyright :copyright: 2022 - César
