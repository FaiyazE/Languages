#! /usr/bin/env python
# -*- coding: utf-8 -*-
#

from PyQt4.QtGui import *
import sys

def main():

   # Create an PyQT4 application object.
   app    = QApplication(sys.argv)
   
   # The QWidget widget is the base class of all user interface objects in PyQt4.
   w = QMainWindow()

   # Set window size. 
   w.resize(320, 100)

   # Set window title  
   w.setWindowTitle("Select Component!")

   # Create combobox
   combo = QComboBox(w)
   combo.addItem("CtApTVMaster")
   combo.addItem("CtCdTVIC")
   combo.addItem("CtApTVCntrl")
   combo.move(20,20)

   # Show window
   w.show()

   return sys.exit(app.exec_())

if __name__  == '__main__':
   main()
