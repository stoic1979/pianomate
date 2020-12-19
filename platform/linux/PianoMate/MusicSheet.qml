import QtQuick 2.0

Rectangle {
    anchors.fill: parent
    border.color: "#555555"

    Image {
        source: 'img/blanche.png'
        x: 20
        y: 20
        width: 20
        height: 20
    }

    Canvas {
        id: mycanvas
        y: 60
        x: 1
        width: parent.width - 2
        height: 600

        property int verticalSpacing: 30
        property int horizontalSpacing: 30
        property int startY: 50
        property int startX: 10
        property int endX: parent.width - 10
        property int trebleStartY: startY
        property int bassStartY: trebleStartY + verticalSpacing * 9

        function drawLines(ctx, Y) {
            for(var i=0; i<5; i++) {
                ctx.beginPath();
                ctx.moveTo(startX, Y + verticalSpacing * i);
                ctx.lineTo(endX, Y + verticalSpacing * i);
                ctx.stroke();
            }
        }

        function drawNoteOnLine(ctx, label, timeSlot, verticalIndex) {
            ctx.drawImage('img/blanche.png', startX + horizontalSpacing * timeSlot, trebleStartY + verticalSpacing * verticalIndex);
        }

        onPaint: {
            console.log("Canvas onPaint");

            var ctx = getContext("2d");
            ctx.fillStyle = Qt.rgba(1, 1, 1, 1);
            ctx.fillRect(0, 0, width, height);

            // line
            ctx.lineWidth = 1;
            ctx.strokeStyle = "black";

            //--------------------------------------------
            // TREBLE
            //--------------------------------------------
            drawLines(ctx, trebleStartY);

            drawLines(ctx, bassStartY);

            drawNoteOnLine(ctx, 'C', 2, 3);

        }

        Component.onCompleted: {
            console.log("Canvas Completed");
        }
    }

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
