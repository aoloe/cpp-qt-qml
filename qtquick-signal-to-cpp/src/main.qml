import QtQuick 2.12
import QtQuick.Controls 1.0

ApplicationWindow
{
    id: mainWindow
    visible: true
    width: 640
    height: 480
    title: qsTr("Qml Main Window")

    Shortcut {
        sequences: [StandardKey.Quit, StandardKey.Cancel]
        context: Qt.ApplicationShortcut
        onActivated: Qt.quit()
    }

    Button {
        id: button
        objectName: "clickable"
        signal qmlSignal(msg: string)

        text: "Click me"
        onClicked: button.qmlSignal("A Qml button has been")

    }
}
