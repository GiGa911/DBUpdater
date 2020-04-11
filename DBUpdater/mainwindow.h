#pragma once
#include <cstdlib>
#include <libssh/libssh.h>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    int authenticate_console(ssh_session session);
    int authenticate_kbdint(ssh_session session, const char *password);
    int auth_keyfile(ssh_session session, char* keyfile);
    void MainWindow::error(ssh_session session);
    int verify_knownhost(ssh_session session);
    ssh_session connect_ssh(const char *hostname, const char *user, int verbosity);

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QString host;
    QString user;
    int verbosity;
};
