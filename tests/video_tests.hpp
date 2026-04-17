#include <QtTest>

class video_tests : public QObject {
    Q_OBJECT

    private:
        bool my_condition() {
            return true;
        }
    
    private slots:
        void init_test_cases() {
            qDebug("...");
        }
        void mp4_test() {

        }
        void mov_test() {
            
        }
        void cleanup_test_cases() {
            qDebug("...");
        }
};