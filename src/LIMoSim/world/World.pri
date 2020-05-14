HEADERS += \
    $$PWD/node.h \
    $$PWD/way.h \
    $$PWD/worldobject.h \
    $$PWD/world.h \
    $$PWD/vector3d.h \
    $$PWD/vehiclemanager.h \
    $$PWD/building.h \
    $$PWD/area.h

SOURCES += \
    $$PWD/node.cc \
    $$PWD/way.cc \
    $$PWD/world.cc \
    $$PWD/worldobject.cc \
    $$PWD/vector3d.cc \
    $$PWD/vehiclemanager.cc \
    $$PWD/building.cc \
    $$PWD/area.cc

include(road/Road.pri)
include(raytracing/Raytracing.pri)
