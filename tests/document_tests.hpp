#include <QtTest>

class document_tests : public QObject {
    Q_OBJECT

    private:
        bool my_condition() {
            return true;
        }
    
    private slots:
        void init_test_cases() {
            qDebug("...");
        }
        void pdf_test() {

        }
        void odt_test() {
            
        }
        void cleanup_test_cases() {
            qDebug("...");
        }
};