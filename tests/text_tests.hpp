#include <QtTest>

class text_tests : public QObject {
    Q_OBJECT

    private:
        bool my_condition() {
            return true;
        }
    
    private slots:
        void init_test_cases() {
            qDebug("...");
        }
        void txt_test() {

        }
        void html_test() {
            
        }
        void cleanup_test_cases() {
            qDebug("...");
        }
};