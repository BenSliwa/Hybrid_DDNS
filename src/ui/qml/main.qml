import QtQuick 2.0
import OpenGL 1.0

Item {
    width: 1200
    height: 700
    id: window

    DropArea // external drag & drop
    {
        anchors.fill: parent
        onDropped: UiManager.handleExternalDrop(drop.text);
    }

    /*************************************
     *              MAP VIEW             *
     ************************************/

    Row
    {
        id: figureRow
        objectName: "figureRow"
    }

    Text
    {
        id: info
        color: "white"
        anchors.left: parent.left
        visible: false
    }

    OpenGLWindow
    {
        signal positionUpdated(double _latitude, double _longitude, double _direction, double _speed);

        anchors.fill: parent

        id: map
        objectName: "map"

        focus: true
        Keys.onPressed:
        {
            UiManager.handleKeyPress(event.key)

        }

        //onFocusChanged: map.focus = true

        Component.onCompleted:
        {
            UiManager.info.connect(onInfo);
        }

        function onInfo(_info)
        {
            info.text = _info;
        }

        MouseArea
        {
            hoverEnabled: true
            anchors.fill: parent
            onWheel:
            {
                var scale = wheel.angleDelta.y / 1200;
                map.handleScale(scale, mouseX, mouseY);
            }
            acceptedButtons: "NoButton"

        }
    }

}
