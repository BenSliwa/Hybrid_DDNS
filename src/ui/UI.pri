include(export/Export.pri)
include(qml/QML.pri)
include(opengl/OpenGL.pri)
include(standalone/Standalone.pri)

HEADERS += \
    $$PWD/uimanager.h \
    $$PWD/canvas.h \
    $$PWD/visualizer.h

SOURCES += \
    $$PWD/uimanager.cc \
    $$PWD/canvas.cc \
    $$PWD/visualizer.cc
