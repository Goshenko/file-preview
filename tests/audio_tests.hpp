#include <QtTest>

class audio_tests : public QObject {
    Q_OBJECT

    private:
        bool my_condition() {
            return true;
        }
    
    private slots:
        void init_test_cases() {
            qDebug("...");
        }
        void mp3_test() {

        }
        void wav_test() {
            
        }
        void cleanup_test_cases() {
            qDebug("...");
        }
};