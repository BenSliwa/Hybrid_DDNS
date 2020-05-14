HEADERS += \
    $$PWD/car.h \
    $$PWD/carobserver.h

SOURCES += \
    $$PWD/car.cc \
    $$PWD/carobserver.cc

include(awareness/Awareness.pri)
include(following/FollowingModel.pri)
include(strategic/StrategicModel.pri)
include(prediction/Prediction.pri)
