void setup() {
  size(400, 400);
}
void draw() {
  background(#FFFFF2);
  for (int i=0; i<24; i++) {
    float a = radians(360/24);
    if (i==0) fill(#FF7E05);
    else if (i%3==0) fill(#000000);
    else if (i%3==1) fill(#FAE3A9);
    else fill(#FFFFFF);
    arc(200, 200, 300, 300, d+a*i, d+a*(i+1), PIE);
  }
  d -= v;
  v *= 0.9;
}
float d = 0, v = 0, oldX;
void mousePressed(){
  oldX = mouseX;
}
void mouseDragged(){
  d = radians(mouseX);
}
void mouseReleased(){
  v = radians(mouseX - oldX);
}
