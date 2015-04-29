#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Calculadora.o \
	${OBJECTDIR}/Datos/Jzon.o \
	${OBJECTDIR}/Edda.o \
	${OBJECTDIR}/Elves.o \
	${OBJECTDIR}/Estructuras/Arbol_Genealogico.o \
	${OBJECTDIR}/Estructuras/BitVector.o \
	${OBJECTDIR}/Estructuras/Nodo_Arbol.o \
	${OBJECTDIR}/Estructuras/grafo.o \
	${OBJECTDIR}/Estructuras/nodoGrafo.o \
	${OBJECTDIR}/Individuo.o \
	${OBJECTDIR}/Mundo.o \
	${OBJECTDIR}/Pueblo.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/midgard

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/midgard: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/midgard ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Calculadora.o: Calculadora.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Calculadora.o Calculadora.cpp

${OBJECTDIR}/Datos/Jzon.o: Datos/Jzon.cpp 
	${MKDIR} -p ${OBJECTDIR}/Datos
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Datos/Jzon.o Datos/Jzon.cpp

${OBJECTDIR}/Edda.o: Edda.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Edda.o Edda.cpp

${OBJECTDIR}/Elves.o: Elves.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Elves.o Elves.cpp

${OBJECTDIR}/Estructuras/Arbol_Genealogico.o: Estructuras/Arbol_Genealogico.cpp 
	${MKDIR} -p ${OBJECTDIR}/Estructuras
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras/Arbol_Genealogico.o Estructuras/Arbol_Genealogico.cpp

${OBJECTDIR}/Estructuras/BitVector.o: Estructuras/BitVector.cpp 
	${MKDIR} -p ${OBJECTDIR}/Estructuras
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras/BitVector.o Estructuras/BitVector.cpp

${OBJECTDIR}/Estructuras/Nodo_Arbol.o: Estructuras/Nodo_Arbol.cpp 
	${MKDIR} -p ${OBJECTDIR}/Estructuras
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras/Nodo_Arbol.o Estructuras/Nodo_Arbol.cpp

${OBJECTDIR}/Estructuras/grafo.o: Estructuras/grafo.cpp 
	${MKDIR} -p ${OBJECTDIR}/Estructuras
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras/grafo.o Estructuras/grafo.cpp

${OBJECTDIR}/Estructuras/nodoGrafo.o: Estructuras/nodoGrafo.cpp 
	${MKDIR} -p ${OBJECTDIR}/Estructuras
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Estructuras/nodoGrafo.o Estructuras/nodoGrafo.cpp

${OBJECTDIR}/Individuo.o: Individuo.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Individuo.o Individuo.cpp

${OBJECTDIR}/Mundo.o: Mundo.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Mundo.o Mundo.cpp

${OBJECTDIR}/Pueblo.o: Pueblo.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Pueblo.o Pueblo.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/midgard

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
