# PRODUCT VISION DOCUMENT

Proyecto: MiniWeb — HTTP Server Profesional en C

## Overview

Nombre del producto: MiniWeb
Tipo: Servidor HTTP minimalista y profesional en C
Propósito: Construir un servidor web modular, extensible y eficiente para aprender fundamentos de networking y arquitectura de sistemas a bajo nivel.

MiniWeb no es un framework comercial.
Es un laboratorio profesional de ingeniería.

# Problema que Resuelve

En el desarrollo moderno:

- Los frameworks abstraen networking.

- No se entiende cómo funciona realmente un servidor.

- Los conceptos de sockets, I/O, concurrencia y protocolo quedan ocultos.

MiniWeb resuelve esto permitiendo:

- Entender el ciclo completo de una request HTTP.

- Controlar explícitamente memoria, buffers y conexiones.

- Diseñar arquitectura modular en C.

- Implementar progresivamente modelos de concurrencia.

## Objetivos Estratégicos

### Objetivo principal

Desarrollar comprensión profunda de:

- Networking TCP/IP

- Protocolos HTTP

- Manejo de memoria

- Arquitectura modular en C

- Modelos de concurrencia

- Diseño de APIs de bajo nivel

### Objetivos secundarios

- Adoptar disciplina profesional de software.

- Trabajar con Makefiles.

- Usar gdb y valgrind.

- Diseñar código mantenible.

- Aplicar separación de responsabilidades.

## Non-Goals (Muy importante)

MiniWeb NO busca:

- Competir con Nginx

- Soporte TLS (al inicio)

- HTTP/2

- CGI

- Features enterprise

- Ser framework full-stack

- Esto es un proyecto de fundamentos, no de mercado.

## Público Objetivo

- Principal:

Un desarrollador con experiencia en alto nivel (Python, Spark, ML) que quiere entender sistemas desde abajo.

## Principios de Ingeniería

Este proyecto seguirá principios formales:

### 1. Modularidad estricta

Cada módulo tendrá:

Header público (.h)

Implementación privada (.c)

Responsabilidad única

### 2. Ownership explícito de memoria

Toda función que aloca memoria:

Documenta quién libera

Tiene reglas claras

### 3. Manejo explícito de errores

Nada de ignorar return values.

### 4. Interfaces claras

No exponer detalles internos.


### 5. Evolución incremental

No escribir arquitectura futura prematuramente.

## Arquitectura Objetivo (High Level)

Fase inicial:

+------------------+
|      main        |
+------------------+
         |
         v
+------------------+
|    server        |
| (socket layer)   |
+------------------+
         |
         v
+------------------+
|   http parser    |
+------------------+
         |
         v
+------------------+
|    router        |
+------------------+
         |
         v
+------------------+
|   response       |
+------------------+

Separación clara:

- Networking

- HTTP parsing

- Routing

- Response building

## Roadmap del Producto

### Fase 1 — TCP Server básico

socket()

bind()

listen()

accept()

Echo response

### Fase 2 — HTTP 1.1 mínimo

Parse request line

Parse headers

Enviar respuesta válida

### Fase 3 — Routing

Múltiples endpoints

Separación en módulos

### Fase 4 — Logging estructurado
### Fase 5 — select() y multiplexación
### Fase 6 — Non-blocking + event loop
### Fase 7 — Benchmarking

## Criterios de Calidad

Compila sin warnings (-Wall -Wextra)

No memory leaks (valgrind clean)

Código legible

Headers bien definidos

No global state innecesario

## Métricas de Éxito

Puedes explicar cómo funciona HTTP sobre TCP.

Puedes explicar qué pasa cuando una conexión se cierra.

Puedes diseñar APIs en C con claridad.

Puedes razonar sobre performance de red.

Puedes depurar con gdb con confianza.