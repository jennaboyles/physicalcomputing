import processing.serial.*;


int rowPos = 0; //adapted from crochet sketch
int colPos = 0;//adapted from crochet sketch
PShape stitch; //int. my stitch
//PShape thread; //int. the thread
//PImage needle; //int needle :)
int d=140;

int y=0;
int m=4;
int s=15;

int dy=1;
int dm= 7;
int ds= 4;
//boolean stitchStop = false;
//boolean stitchStart = false;

void setup(){
  fullScreen(); //hopefully full screen?
  background (255);//white
  smooth();//should make my animation not glitchy
  stitch = loadShape ("stitch.svg");
  //thread = loadShape("");
  //needle = loadImage ("crochet hool.png"); //my only file taken from the internet
}
void draw(){
  shape (stitch,m,y, d, d); //calls my shape, normally (stitch, x, y, size, size) but in a loop???

y = y + dy;
m = m + dm;
s = s + ds;

if (y > height){
  dy= -9;
}

 if (m+50> height){
   dm=-200;
 }
 
 if (s+200 > height){
   ds = -45;
 }
 
if (y<0){
  dy=10;
}

 if (m-20<0){
   dm= 15;
 }
 if (s-20 < 50){
   ds = 4;
 }
}
//void update(int x, int y){
 //if (stitchStart) {
   //stitchStart = true;
   //stitchStop = false;
//  } else if (stitchStop){
   // stitchStop =true;
   // stitchStart=false;
 // } else {
 //   stitchStart = stitchStop = false;
 // }
 
//}
  void keyPressed() {
   if((key=='c') || (key=='C')) {
// beginDraw(); 
 clear();
//endDraw();
    }
  }

void mousePressed(){
  // if (stitchStart) {
   loop();
}
//}
void mouseReleased() {
// if (stitchStop) {
    noLoop();
 }
//}