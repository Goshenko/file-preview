#include <QtTest>

class image_tests : public QObject {
    Q_OBJECT

    private:
        bool my_condition() {
            return true;
        }
    
    private slots:
        void init_test_cases() {
            qDebug("...");
        }
        void jpeg_test() {

        }
        void png_test() {
            
        }
        void cleanup_test_cases() {
            qDebug("...");
        }
};