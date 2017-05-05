# Arduino-stuff
some code base on Dccduino (base on Arduino UNO )


Dccduino is different with original Arduino UNO

To lowest the hardware costs, the UART chip is change to CH340G,which belongs to CH340-341 serise.

You can download the CH341SER.EXE.

Dccduino 和原生Arduino UNO 不一样，是国人二次开发的 Dccduino 基板，

它的串口芯片换成了CH340G，所以需要安装对应型号的驱动，见附件 CH341SER.EXE，自动进行安装即可。



For easy-debugging , OpenJumper Serial Assistant is a good one.

Need set the USB-Serial before Serial Enable.

Also can switch to keyboard-Page to use wasd or custom keys to control the smart car. 

同时，为了方便进行串口调试，可以采用OpenJumper串口调试助手，方便数据调试观测

打开串口助手过后，需要设置串口为当前开发板的端口（USB-Serial）

然后可以切换到键盘模式界面，用小写字母的 wasd以及 空格键进行小车移动和姿态的控制。



Tools:
OpenJumper™+Serial+Assistant+1.3.6beta.rar  esay-to-use Serial Assistant 

CH341SER.EXE   USB-Serial driver for win7/win10

串口控制小车说明.txt  a readme file in chinese with more details.


to run the *.ino file ,

need a Arduino based smart car ,and arduino-1.8.2 IDE (version is not important)

