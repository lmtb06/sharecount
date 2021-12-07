# Created by and for Qt Creator This file was created for editing the project sources only.
# You may attempt to use it for building too, by modifying this file here.

#TARGET = Sharecount

QT = core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets 

HEADERS = \
   $$PWD/comptes/CompteDepensesCommunes.hpp \
   $$PWD/comptes/ComptePersonnel.hpp \
   $$PWD/comptes/CompteUtilisateur.hpp \
   $$PWD/exceptions/ExceptionSC.hpp \
   $$PWD/exceptions/ExceptionSauvegardeCompteUtilisateur.hpp \
   $$PWD/gestionnaires/GestionnaireSauvegarde.hpp \
   $$PWD/tests/TestCompteUtilisateur.hpp \
   $$PWD/tests/Test.hpp \
   $$PWD/gestionnaires/GestionnaireSauvegardeFichier.hpp \
   tests/TestComptePersonnel.hpp

SOURCES = \
   $$PWD/comptes/CompteDepensesCommunes.cpp \
   $$PWD/comptes/ComptePersonnel.cpp \
   $$PWD/comptes/CompteUtilisateur.cpp \
   $$PWD/exceptions/ExceptionSC.cpp \
   $$PWD/exceptions/ExceptionSauvegardeCompteUtilisateur.cpp \
   $$PWD/gestionnaires/GestionnaireSauvegarde.cpp \
   $$PWD/gestionnaires/GestionnaireSauvegardeFichier.cpp \
   $$PWD/tests/TestCompteUtilisateur.cpp \
   $$PWD/tests/Test.cpp \
   $$PWD/main.cpp \
   tests/TestComptePersonnel.cpp

INCLUDEPATH =

#DEFINES =

