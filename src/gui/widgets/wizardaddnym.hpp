#ifndef WIZARDADDNYM_HPP
#define WIZARDADDNYM_HPP

#include <WinsockWrapper.h>
#include <ExportWrapper.h>

#include <QWizard>

namespace Ui {
class MTWizardAddNym;
}

class MTWizardAddNym : public QWizard
{
    Q_OBJECT

public:
    explicit MTWizardAddNym(QWidget *parent = 0);
    ~MTWizardAddNym();

private:
    Ui::MTWizardAddNym *ui;
};

#endif // WIZARDADDNYM_HPP
