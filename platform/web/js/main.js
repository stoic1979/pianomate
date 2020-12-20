var w = window.innerWidth;
var hSpace = 50;
var canvas;
var context;

function initializeMusicSheet(){

  canvas = document.getElementById("canvas");
  context = canvas.getContext("2d");
  canvas.width=w-100;
  context.translate(0.5, 0.5);

  for (var i=0; i<5; i++) {
    drawLine(i, hSpace);
  }

  drawShape(64,(hSpace*1)+30, "♩");     
  drawShape(128,(hSpace*2)+30, "♪");
  drawShape(256,(hSpace*3)+30, "♭");
}

function drawLine(n,offset){
  context.beginPath();
  context.lineWidth = 1;
  context.strokeStyle = "#D2D2D2";
  context.moveTo(0, n*offset);
  context.lineTo(w-100, n*offset);
  context.stroke(); 
  context.closePath();
}

function drawShape(x,y,note){
  context.moveTo(x,y);
  context.font = "64px Arial";
  context.fillText(note, x, y); 	
  context.stroke();
}
