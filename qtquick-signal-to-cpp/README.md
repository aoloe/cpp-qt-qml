# Connect a Qml signal to a C++ slot

- See [Connecting to QML Signals](https://doc.qt.io/qt-5/qtqml-cppintegration-interactqmlfromcpp.html#connecting-to-qml-signals) in the official Qml manual.
- The Qml button needs a `objectName` which is a string enclosed between quotes.
- Since the Qml signal does not exist at compile time, it's not possible to use the modern signal / slot syntax
- It's probably better to trigger a C++ slot from the Qml button.
