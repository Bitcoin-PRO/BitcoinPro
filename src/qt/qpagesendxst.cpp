#include "qpagesendxst.h"

QPageSendBTCP::QPageSendBTCP(QWidget *parent) :
    QStealthPage(parent)
{
    sendCoinsPage = new SendCoinsDialog(this);
    sendCoinsPage->setGeometry(0, 0, SC_PAGE_WIDTH, SC_PAGE_HEIGHT);
    sendCoinsPage->showNormal();
}

void QPageSendBTCP::setModel(WalletModel *model)
{
    sendCoinsPage->setModel(model);
}

void QPageSendBTCP::showOutOfSyncWarning(bool fShow)
{
    sendCoinsPage->showOutOfSyncWarning(fShow);
}

