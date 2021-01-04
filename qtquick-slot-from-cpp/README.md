# Connect a Qml signal to a C++ slot

- See [Pushing References to QML](https://doc.qt.io/qt-5/qtquick-bestpractices.html#pushing-references-to-qml) in the official Qml manual.
- The `Backend` must be in its own file, otherwise the moc will not correctly process it.
