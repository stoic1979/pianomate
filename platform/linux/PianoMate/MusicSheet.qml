import QtQuick 2.0

Rectangle {
    anchors.fill: parent
    border.color: "#555555"

    MouseArea {
       id: myMouseArea
       anchors.fill: parent
       onClicked: parent.width=myText.contentWidth
       hoverEnabled: true
     }

    Text {
        anchors.fill:parent
        id: myText
        font.family: "Helvetica"
        font.pointSize: 20
        text:  qsTr("Happy Birthday")
    }
}
