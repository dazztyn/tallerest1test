# Taller 1 Estructuras de Datos
comando compilacion: g++ -o programa Evento.cpp Conferencia.cpp Concierto.cpp Fiesta.cpp EventoDeportivo.cpp Asistente.cpp Adolescente.cpp Adulto.cpp main.cpp
comando ejecucion: ./programa

Eventos: 
Concierto{duracion: 3, ubicacion: "coquimbo", fecha: "15/10/2024", tipoEvento: "concierto", id: 10001, capacidad: 10000, tipoConcierto = "festival"}
Conferencia{duracion: 1, ubicacion: "Santiago", fecha: "16/04/2024", tipoEvento: "conferencia", id: 10002, tipoConferencia: "prensa"}
Fiesta{duracion: 6, ubicacion: "La Serena", fecha: "05/05/2024", tipoEvento: "fiesta", id: 10003, tematica: "ucn vs uls", invitadoEspecial: "FloyyMenor"}
EventoDeportivo{duracion: 2, ubicacion: "Iquique", fecha: "17/07/2024", tipoEvento: "evento deportivo", id: 10004, deporte: "futbol" , hayApuestas: "s"}

Asistentes:
Asistente{nombre: "Carlos Peña", edad: 19, tipoAsistente: "mayor", ocupacion = "estudiante", id1: 10003,id2: 10004}
Asistente{nombre: "Javier Catalan", edad: 20, tipoAsistente: "mayor",ocupacion: "estudiante", id1: 10001, id2: 10003}
Asistente{nombre: "David Ramos", edad: 21, tipoAsistente: "mayor", ocupacion: "estudiante", id1: 10004}
Asistente{nombre: "Benjamin Miranda", edad: 22, tipoAsistente: "mayor", ocupacion: "estudiante", id1: 10003}
Asistente{nombre: "Luis Maturana" , edad: 50, tipoAsistente: "mayor", ocupacion: "profesor", id1: 10002}
Asistente{nombre: "Pepe Tapia", edad: 12, tipoAsistente: "menor", ocupacion: "estudiante", id1: 10004}
Asistente{nombre: "Alonso Sepulveda", edad: 16, tipoAsistente: "menor", ocupacion: "estudiante", id1: 10001}
Asistente{nombre: "Maximiliano Pasten", edad: 30, tipoAsistente: "mayor", ocupacion: "estudiante",id1: 10001, id2: 10003, id3: 10004}

Taller realizado en parejas por:
Vicente Alonso Ruiz Escobar - 21464046-5 - vicente.ruiz@alumnos.ucn.cl
David Andrés Ramos Guerra - 21073916-5 - david.ramos@alumnos.ucn.cl
