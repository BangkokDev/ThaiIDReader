#ifndef BKKDEVSCARD_GLOBAL_H
#define BKKDEVSCARD_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BKKDEVSCARD_LIBRARY)
#  define BKKDEVSCARDSHARED_EXPORT Q_DECL_EXPORT
#else
#  define BKKDEVSCARDSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // BKKDEVSCARD_GLOBAL_H
