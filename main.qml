import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    id: root

    Rectangle {
        id: rectangle
        x: controller.getX()
        y: controller.getY()
        width: 40
        height: 40
        color: "#f10101"
    }
}
