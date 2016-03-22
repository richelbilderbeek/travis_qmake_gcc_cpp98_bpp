TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle qt

SOURCES += main.cpp

QMAKE_CXXFLAGS += -Wall -Wextra -Weffc++ -Werror

# Bio++
LIBS += -lbpp-core -lbpp-seq -lbpp-phyl -lbpp-popgen -lbpp-qt -lbpp-raa
