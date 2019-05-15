/*
  screensaver.ino
  Fisher Bricker
 
 Example file using the The Meggy Jr Simplified Library (MJSL)
  from the Meggy Jr RGB library for Arduino
   
 Blink a damned LED.
   
   
 
 Version 1.25 - 12/2/2008
 Copyright (c) 2008 Windell H. Oskay.  All right reserved.
 http://www.evilmadscientist.com/
 
 This library is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this library.  If not, see <http://www.gnu.org/licenses/>.
 	  
 */

 
 
 
 

/*
 * Adapted from "Blink,"  The basic Arduino example.  
 * http://www.arduino.cc/en/Tutorial/Blink
 */

#include <MeggyJrSimple.h> 

int color;
void setup()             
{
  MeggyJrSimpleSetup();
  color=1;
}

void loop()                    
{
 R1();
 DisplaySlate();
 delay(150);
 color++;
 R2();
 DisplaySlate();
 delay(150);
 color++;
 R3();
 DisplaySlate();
 delay(150);
 color++;
 R4();
 DisplaySlate();
 delay(150);
 color++;
 R4();
 DisplaySlate();
 delay(150);
 color++;
 R3();
 DisplaySlate();
 delay(150);
 color++;
 R2();
 DisplaySlate();
 delay(150);
 color++;
 R1();
 DisplaySlate();
 delay(150);
 color++;
}


void R1()
{
  if (color == 15)
 {
  color=1;
 }
  DrawPx(3,3,color);
  DrawPx(4,3,color);
  DrawPx(4,4,color);
  DrawPx(3,4,color);
}

void R2()
{
  if (color == 15)
 {
  color=1;
 }
  DrawPx(2,2,color);
  DrawPx(2,3,color);
  DrawPx(2,4,color);
  DrawPx(2,5,color);
  DrawPx(3,2,color);
  DrawPx(3,5,color);
  DrawPx(4,2,color);
  DrawPx(4,5,color);
  DrawPx(5,2,color);
  DrawPx(5,3,color);
  DrawPx(5,4,color);
  DrawPx(5,5,color);
}
void R3()
{
  if (color == 15)
 {
  color=1;
 }
  for (int i=1;i<7;i++)
  {
    DrawPx(1,i,color);
    DrawPx(6,i,color);
    DrawPx(i,1,color);
    DrawPx(i,6,color);
  }
}
void R4()
{
  if (color == 15)
 {
  color=1;
 }
  for (int i=0;i<8;i++)
  {
    DrawPx(0,i,color);
    DrawPx(7,i,color);
    DrawPx(i,0,color);
    DrawPx(i,7,color);
  }
}
