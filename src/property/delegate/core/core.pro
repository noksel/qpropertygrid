# File generated by kdevelop's qmake manager. 
# ------------------------------------------- 
# Subdir relative project main directory: ./src/property/delegate/core
# Target is a library:  delegate

HEADERS += PropertyDelegate.h \
           PropertyRenderer.h \
           PropertyEditor.h 
SOURCES += PropertyDelegate.cpp 
INCLUDEPATH += ../../../../src/property/core \
               ../../../../src/property/items 
MOC_DIR = .moc 
UI_DIR = .ui 
OBJECTS_DIR = .obj 
TARGET = delegate 
CONFIG += release \
          warn_on \
          staticlib 
TEMPLATE = lib 