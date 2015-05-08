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
	${OBJECTDIR}/Datos/Jzon.o \
	${OBJECTDIR}/Datos/Xml.o \
	${OBJECTDIR}/Datos/jsonReader.o \
	${OBJECTDIR}/Datos/jsonWriter.o \
	${OBJECTDIR}/Edda.o \
	${OBJECTDIR}/Elves.o \
	${OBJECTDIR}/Estructuras/Arbol_Genealogico.o \
	${OBJECTDIR}/Estructuras/BitVector.o \
	${OBJECTDIR}/Estructuras/Nodo_Arbol.o \
	${OBJECTDIR}/Individuo.o \
	${OBJECTDIR}/Mundo.o \
	${OBJECTDIR}/Pueblo.o \
	${OBJECTDIR}/TinyXmlLib/tinystr.o \
	${OBJECTDIR}/TinyXmlLib/tinyxml.o \
	${OBJECTDIR}/TinyXmlLib/tinyxmlerror.o \
	${OBJECTDIR}/TinyXmlLib/tinyxmlparser.o \
	${OBJECTDIR}/jsonReader.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/reproduccion.o


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

${OBJECTDIR}/Datos/Jzon.o: Datos/Jzon.cpp 
	${MKDIR} -p ${OBJECTDIR}/Datos
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Datos/Jzon.o Datos/Jzon.cpp

${OBJECTDIR}/Datos/Xml.o: Datos/Xml.cpp 
	${MKDIR} -p ${OBJECTDIR}/Datos
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Datos/Xml.o Datos/Xml.cpp

${OBJECTDIR}/Datos/jsonReader.o: Datos/jsonReader.cpp 
	${MKDIR} -p ${OBJECTDIR}/Datos
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Datos/jsonReader.o Datos/jsonReader.cpp

${OBJECTDIR}/Datos/jsonWriter.o: Datos/jsonWriter.cpp 
	${MKDIR} -p ${OBJECTDIR}/Datos
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Datos/jsonWriter.o Datos/jsonWriter.cpp

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

${OBJECTDIR}/TinyXmlLib/tinystr.o: TinyXmlLib/tinystr.cpp 
	${MKDIR} -p ${OBJECTDIR}/TinyXmlLib
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TinyXmlLib/tinystr.o TinyXmlLib/tinystr.cpp

${OBJECTDIR}/TinyXmlLib/tinyxml.o: TinyXmlLib/tinyxml.cpp 
	${MKDIR} -p ${OBJECTDIR}/TinyXmlLib
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TinyXmlLib/tinyxml.o TinyXmlLib/tinyxml.cpp

${OBJECTDIR}/TinyXmlLib/tinyxmlerror.o: TinyXmlLib/tinyxmlerror.cpp 
	${MKDIR} -p ${OBJECTDIR}/TinyXmlLib
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TinyXmlLib/tinyxmlerror.o TinyXmlLib/tinyxmlerror.cpp

${OBJECTDIR}/TinyXmlLib/tinyxmlparser.o: TinyXmlLib/tinyxmlparser.cpp 
	${MKDIR} -p ${OBJECTDIR}/TinyXmlLib
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TinyXmlLib/tinyxmlparser.o TinyXmlLib/tinyxmlparser.cpp

${OBJECTDIR}/jsonReader.o: jsonReader.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonReader.o jsonReader.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/reproduccion.o: reproduccion.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/reproduccion.o reproduccion.cpp

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
