/* This header file is used to implement the Cartesian Plot using Jpt */

#ifndef __MEDMJPT_H__
#define __MEDMJPT_H__

#include <At.h>
#include <Plotter.h>

#define CpDataType PlotDataType
#define CpDataHandle PlotDataHandle
#define CpData PlotData

#define CP_GENERAL PLOT_DATA_GENERAL

#define CpDataCreate(widget, type, nsets, npoints) \
  PlotDataCreate(type, nsets, npoints)
#define CpDataGetXElement(hData, set, point) \
  PlotDataGetXElement(hData, set, point)
#define CpDataGetYElement(hData, set, point) \
  PlotDataGetYElement(hData, set, point)
#define CpDataDestroy(hData) \
  PlotDataDestroy(hData)
#define CpDataSetHole(hData, hole) \
  PlotDataSetHole(hData, hole)
#define CpDataSetXElement(hData, set, point, x) \
  PlotDataSetXElement(hData, set, point, x)
#define CpDataSetYElement(hData, set, point, y) \
  PlotDataSetYElement(hData, set, point, y)
/*
#define CpDataGetLastPoint(hData, set) \
  PlotDataGetLastPoint(hData, set)
#define CpDataSetLastPoint(hData, set, npoints) \
  PlotDataSetLastPoint(hData, set, npoints)
*/

/*typedef CpData * PlotDataHandle; */

#endif  /* __MEDMJPT_H__ */