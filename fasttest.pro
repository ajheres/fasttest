# --- Qmake (Qt) pro file ---
# --- Generated by Elise (2.0.0), do *NOT* edit! ---
# --- Build platform x86_64-linux-gnu ---
# --- 2020-06-30, 19:58 ---
# ---
# --- Used options:
# rebuild
# debuginfo
# --- Used parameters:
# ---



ELISE_OS        = DEBIAN9

CONFIG 		-= qt thread release
CONFIG 		+= warn_on stl ordered debug

DESTDIR 	= bin/x86_64-linux-gnu
OBJECTS_DIR 	= tmp/debug/x86_64-linux-gnu
MOC_DIR 	= tmp/moc/x86_64-linux-gnu
UI_DIR 		= tmp/ui

TARGET 		= fasttest
TEMPLATE 	= subdirs

SUBDIRS 	= test1
