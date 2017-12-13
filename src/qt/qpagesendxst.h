#ifndef QPAGESENDBTCP_H
#define QPAGESENDBTCP_H

#include "qstealthpage.h"
#include "qhoverbutton.h"
#include "sendcoinsdialog.h"
#include <QLabel>
#include <QTextEdit>
#include <QLineEdit>

class QPageSendBTCP : public QStealthPage
{
    Q_OBJECT
public:
    explicit QPageSendBTCP(QWidget *parent = 0);

    void setModel(WalletModel *model);
    void showOutOfSyncWarning(bool fShow);

public:
    SendCoinsDialog *sendCoinsPage;
};

#endif // QPAGESENDBTCP_H
