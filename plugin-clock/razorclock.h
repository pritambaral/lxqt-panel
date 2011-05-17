#ifndef RAZORCLOCK_H
#define RAZORCLOCK_H

#include "../panel/razorpanelplugin.h"

class QLabel;
class QTimer;
class QString;
class QDialog;

/**
 * @brief the clock-plugin for razorbar
 */
class RazorClock : public RazorPanelPlugin
{
    Q_OBJECT
public:
    RazorClock(const RazorPanelPluginStartInfo* startInfo, QWidget* parent = 0);
    ~RazorClock();

    virtual Alignment preferredAlignment() const { return AlignRight; }

public slots:
    void updateTime();

protected:
    void mouseReleaseEvent(QMouseEvent* event);

private:
    QTimer* clocktimer;
    QLabel * gui;
    QString clockFormat;
    QString toolTipFormat;
    QDialog* calendarDialog;
};


EXPORT_RAZOR_PANEL_PLUGIN_H

#endif