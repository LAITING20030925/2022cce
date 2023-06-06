size(400,400);
for(int i=0;i<24;i++){
  float a = radians(360/24);
  if(i==0) fill(#FF7E05);
  else if(i%3==0) fill(#000000);
  else if(i%3==0) fill(#FAE3A9);
  else fill(#FFFFFF);
  arc(200,200,300,300,a*i,a*(i+1),PIE);
}
