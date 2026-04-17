#include <QtTest>

class SheetTests : public QObject {
    Q_OBJECT
    
    private:
        bool myCondition() {
            return true;
        }
    
    private slots:
        void initTestCase() {
            qDebug("...");
        }
        void xlsx_test() {

        }
        void csv_test() {
            
        }
        void cleanup_test_cases() {
            qDebug("...");
        }
};