import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
import message
 
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Text{
        text: "hello"
        font.pointSize:30 
        width: 200
        height: 200
        MouseArea{
           anchors.fill: parent
           onClicked: {
           var result = msg.handleMessage("Hello from QML")
           console.log(result)
           }
        }
    }
    TextField {
        text: msg.name
        placeholderText: qsTr("name")
        anchors.centerIn: parent
        onEditingFinished: msg.name = text
    }
    
    Message{
        id:msg
        onNameChanged:()=>{
        console.log("name changed")
        }
    }
}