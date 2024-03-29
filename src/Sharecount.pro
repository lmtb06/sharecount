# Created by and for Qt Creator This file was created for editing the project sources only.
# You may attempt to use it for building too, by modifying this file here.

#TARGET = Sharecount

QT = core gui xml
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

HEADERS = \
   $$PWD/comptes/CompteDepensesCommunes.hpp \
   $$PWD/comptes/ComptePersonnel.hpp \
   $$PWD/comptes/CompteUtilisateur.hpp \
   $$PWD/exceptions/ExceptionSC.hpp \
   $$PWD/exceptions/ExceptionSauvegardeCompteUtilisateur.hpp \
   $$PWD/gestionnaires/GestionnaireSauvegarde.hpp \
   $$PWD/gestionnaires/GestionnaireSauvegardeFichier.hpp

SOURCES = \
   $$PWD/comptes/CompteDepensesCommunes.cpp \
   $$PWD/comptes/ComptePersonnel.cpp \
   $$PWD/comptes/CompteUtilisateur.cpp \
   $$PWD/exceptions/ExceptionSC.cpp \
   $$PWD/exceptions/ExceptionSauvegardeCompteUtilisateur.cpp \
   $$PWD/gestionnaires/GestionnaireSauvegarde.cpp \
   $$PWD/gestionnaires/GestionnaireSauvegardeFichier.cpp \
   $$PWD/main.cpp

INCLUDEPATH =

#DEFINES =

DISTFILES +=

