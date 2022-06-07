#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/bboo/Wait-Bot-X/src/dynamixel_motor/dynamixel_driver"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/bboo/Wait-Bot-X/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/bboo/Wait-Bot-X/install/lib/python2.7/dist-packages:/home/bboo/Wait-Bot-X/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/bboo/Wait-Bot-X/build" \
    "/usr/bin/python2" \
    "/home/bboo/Wait-Bot-X/src/dynamixel_motor/dynamixel_driver/setup.py" \
     \
    build --build-base "/home/bboo/Wait-Bot-X/build/dynamixel_motor/dynamixel_driver" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/bboo/Wait-Bot-X/install" --install-scripts="/home/bboo/Wait-Bot-X/install/bin"
