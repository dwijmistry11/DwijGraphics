/*==============================================================================

  Copyright (c) Kitware, Inc.

  See http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Julien Finet, Kitware, Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qDwijGraphicsAppMainWindow_h
#define __qDwijGraphicsAppMainWindow_h

// DwijGraphics includes
#include "qDwijGraphicsAppExport.h"
class qDwijGraphicsAppMainWindowPrivate;

// Slicer includes
#include "qSlicerMainWindow.h"

class Q_DWIJGRAPHICS_APP_EXPORT qDwijGraphicsAppMainWindow : public qSlicerMainWindow
{
  Q_OBJECT
public:
  typedef qSlicerMainWindow Superclass;

  qDwijGraphicsAppMainWindow(QWidget *parent=0);
  virtual ~qDwijGraphicsAppMainWindow();

public slots:
  void on_HelpAboutDwijGraphicsAppAction_triggered();

protected:
  qDwijGraphicsAppMainWindow(qDwijGraphicsAppMainWindowPrivate* pimpl, QWidget* parent);

private:
  Q_DECLARE_PRIVATE(qDwijGraphicsAppMainWindow);
  Q_DISABLE_COPY(qDwijGraphicsAppMainWindow);
};

#endif
