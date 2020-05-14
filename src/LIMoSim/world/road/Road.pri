HEADERS += \
    $$PWD/endpoint.h \
    $$PWD/gate.h \
    $$PWD/intersection.h \
    $$PWD/lanesegment.h \
    $$PWD/road.h \
    $$PWD/roaddefinitions.h \
    $$PWD/roadsegment.h

SOURCES += \
    $$PWD/endpoint.cc \
    $$PWD/gate.cc \
    $$PWD/intersection.cc \
    $$PWD/lanesegment.cc \
    $$PWD/road.cc \
    $$PWD/roadsegment.cc

include(infrastructure/Infrastructure.pri);
