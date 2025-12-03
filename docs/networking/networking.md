## Introduction

- [Introduction](#introduction)
- [OSI Model](#osi-model)
- [Ports](#ports)
- [IP Addresses](#ip-addresses)
- [Sockets](#sockets)

## Architecture

## Introduction

- Hakikisha unajua baadhi ya basic za newtorking kama OSI model na kwa namna gani inafanya kazi, IP Adress, Port.

- Connection always inakuwa kati ya devices mbili(vifaa viwili), na kila pande inatumia portnumber yake na IP yake.Always upande mmoja huwa unaitwa **client** na upande mwingine huwa unaitwa **server**.Kwenye upande wa server ninaweza nikasema wamba na kama central kwamba maombi au request zako zote zikitumwa server ndio inarudisha majibu kwenda wa client ambaye ndio wewe baada ya kurequest kitu fulani na pia kwenye upande wa kurudisha majibu tunweza tukasema kwamba ni resposne ya response inaweza ikawa ya aina mbambali kwamba majibu yamerudishwa au majibu hayajarudishwa kwako(client).

<!-- Illustration about client and server in networking in C++ -->

- Kazi ya server ni kusikiliza na kusubilia connection zinazokuja.Hiki kitendo kinaitwa **listening** ambacho mara nyingi kinafanwa katika IP na namba ya port.

## IP Addresses

- Server pamoja na client zinatumia IP pamoja na port number,IP address ya server pamoja na client zinakuwa configured wakati wa network setup unless imekuwa allocated dynamically.
- Machine inaweza ikawa na interface card(NIC) zaidi ya moja, na katika situation kama hiyo basi machine inakuwa na IP Address zaidi ya moja.
- Wakati wa kutengeneza network program port number ya server mara nyingi huwa inakuwa specified ndani ya code ila client port number inakuwa allocated na O/S.
- Loopback address `127.0.0.1` refers to the current machine.Hii inaweza ikatumika wakati wa kuetengeneza test ya client na server kwenye machine moja(single machine).
- Ports zinakuwa idemtified na namba na kila TCP au UDP packet zinakuwa na source port na destination port.

## Ports

- Port numbers(16 bit address) inakuwa integer kati ya 1 na 65.535, Ports 1.1023 zinakuwa described kama know ports zinakuwa reserved kwa ajili ya specific applications(port 21 FTP).
- Ni vizuri na pia unashauriwa kuchagua number zaidi ya 1024.Ili kuwa na uhakika kabisa kwamba port yako haipo kwenye kutumika.

## Sockets

- Socket ni software abstraction ambayo inatumika kwa ajili ya kutuma na kupokea data kati ya endpoints over a network.Katika C++, sockets zinakuwa created kwa kutumia networking libraries kama `Boost.Asio` au standard `<netinet/in.h>` libraray kwa ajili ya POSIX systems.
- Sockets zinaweza zikawa na aina mabambali kama TCP sockests(stream oriented) au UDP sockets(datagram oriented), depending on the underlying protocol.
- Bomba mbili kati ya computer katika newtork ambazo data zinapita ndio tunaita **Sockets** (Mulholland 2004), karibia kila Winsock(window sockets) zinafanya kazi katika socket,pande zote za connection zinatumia socket.Pia sockets ni two way kwamba data zinaweza zikatumwa na pia zinaweza zikapokelewa katika socket.Kuna aina mbili za socket

    1. Streaming Socket(SOCK_STREAM)TCP
    2. Datagram Socket(SOCK_DGRAM)UDP

- Katika C++, sockets zinatumika kwa ajili ya kutengeneza connections, kutuma na kupokea data na kumanage network communication.

## OSI Model

![](/assets/networking.PNG)
