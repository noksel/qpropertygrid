# File generated by kdevelop's qmake manager. 
# ------------------------------------------- 
# Subdir relative project main directory: ./src/property
# Target is a library:  qproperty

QT       += core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qproperty
TEMPLATE = lib
CONFIG += staticlib

CONFIG += c++17


RESOURCES += resources/property.qrc 
HEADERS += core/TreeContainer.h \
           items/PropertyItem.h \
           items/PropertyItemValueHolder.h \
           items/PropertyItemDefaultValueHolder.h \
           model/PropertyModel.h \
           view/treebrowser/PropertyTreeBrowser.h \
           items/PropertyItemFromQObject.h \
           items/PropertyItemSection.h \
           items/PropertyItemQPropertyValueHolder.h \
           delegate/PropertyDelegate.h \
           delegate/renderers/PropertyRendererSection.h \
           delegate/PropertyRenderer.h \
           delegate/PropertyDelegateFactory.h \
           items/PropertyItemDefaultFactory.h \
           defaulttype/TypeBool.h \
           items/PropertyItemProvider.h \
           defaulttype/TypeSize.h \
           items/PropertyItemGroup.h \
           delegate/renderers/PropertyRendererGroup.h \
           items/PropertyItemTranslateTable.h \
           defaulttype/TypeRect.h \
           defaulttype/TypeInt.h \
           defaulttype/TypeFont.h \
           defaulttype/TypeCursor.h \
           defaulttype/TypeColor.h \
           defaulttype/TypePixmap.h \
           core/Abstractfactory.h \
           defaulttype/TypeChar.h \
           items/PropertyItemValueChecker.h 
SOURCES += items/PropertyItem.cpp \
           items/PropertyItemDefaultValueHolder.cpp \
           model/PropertyModel.cpp \
           view/treebrowser/PropertyTreeBrowser.cpp \
           items/PropertyItemFromQObject.cpp \
           items/PropertyItemSection.cpp \
           items/PropertyItemQPropertyValueHolder.cpp \
           delegate/PropertyDelegate.cpp \
           delegate/renderers/PropertyRendererSection.cpp \
           delegate/PropertyDelegateFactory.cpp \
           items/PropertyItemDefaultFactory.cpp \
           defaulttype/TypeBool.cpp \
           items/PropertyItemProvider.cpp \
           items/PropertyItemGroup.cpp \
           delegate/renderers/PropertyRendererGroup.cpp \
           defaulttype/TypeSize.cpp \
           items/PropertyItemTranslateTable.cpp \
           items/PropertyItemValueHolder.cpp \
           defaulttype/TypeRect.cpp \
           defaulttype/TypeInt.cpp \
           defaulttype/TypeFont.cpp \
           defaulttype/TypeCursor.cpp \
           defaulttype/TypeColor.cpp \
           defaulttype/TypePixmap.cpp \
           defaulttype/TypeChar.cpp \
           items/PropertyItemValueChecker.cpp 
#INCLUDEPATH += ../../src/property
#MOC_DIR = .moc
#UI_DIR = .ui
#OBJECTS_DIR = .obj

#CONFIG += debug \
#warn_on \
#staticlib
