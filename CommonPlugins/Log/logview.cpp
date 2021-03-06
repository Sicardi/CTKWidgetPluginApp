#include "logview.h"
#include "ui_logview.h"
#include <QDateTime>
#include <QDebug>
#include <ctkPluginContext.h>

LogView::LogView(ctkPluginContext* context, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LogView),
    m_pContext(context)
{
    ui->setupUi(this);
}

LogView::~LogView()
{
    delete ui;
}
