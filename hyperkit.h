/*
Copyright 2022 The Kubernetes Authors All rights reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef HYPERKIT_H
#define HYPERKIT_H

#include <QStringList>
#include <QObject>
#include <QIcon>

class HyperKit : public QObject
{
    Q_OBJECT

public:
    explicit HyperKit(QIcon icon);
    bool hyperkitPermissionFix(QStringList args, QString text);

signals:
    void rerun(QStringList args);

private:
    void hyperkitPermission();
    bool showHyperKitMessage();
    QIcon m_icon;
};

#endif // HYPERKIT_H
