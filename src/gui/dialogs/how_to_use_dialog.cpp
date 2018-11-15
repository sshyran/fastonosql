/*  Copyright (C) 2014-2018 FastoGT. All right reserved.

    This file is part of FastoNoSQL.

    FastoNoSQL is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    FastoNoSQL is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with FastoNoSQL.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "gui/dialogs/how_to_use_dialog.h"

#include <QVBoxLayout>

#include "gui/widgets/how_to_use_widget.h"

namespace {
const QSize kFixedSize = QSize(1280 / 2, 720 / 2);  // 2x smaller than original
}

namespace fastonosql {
namespace gui {

HowToUseDialog::HowToUseDialog(const QString& title, QWidget* parent) : QDialog(parent) {
  setWindowTitle(title);
  setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);

  HowToUseWidget* hw = new HowToUseWidget(kFixedSize);

  QVBoxLayout* main_layout = new QVBoxLayout;
  main_layout->addWidget(hw);
  setLayout(main_layout);
  setFixedSize(kFixedSize);
}

}  // namespace gui
}  // namespace fastonosql
