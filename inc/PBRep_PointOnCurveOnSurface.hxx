// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PBRep_PointOnCurveOnSurface_HeaderFile
#define _PBRep_PointOnCurveOnSurface_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PBRep_PointOnCurveOnSurface_HeaderFile
#include <Handle_PBRep_PointOnCurveOnSurface.hxx>
#endif

#ifndef _Handle_PGeom2d_Curve_HeaderFile
#include <Handle_PGeom2d_Curve.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _PBRep_PointsOnSurface_HeaderFile
#include <PBRep_PointsOnSurface.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_PGeom_Surface_HeaderFile
#include <Handle_PGeom_Surface.hxx>
#endif
class PGeom2d_Curve;
class PGeom_Surface;
class PTopLoc_Location;


class PBRep_PointOnCurveOnSurface : public PBRep_PointsOnSurface {

public:

  
  Standard_EXPORT   PBRep_PointOnCurveOnSurface(const Standard_Real P,const Handle(PGeom2d_Curve)& C,const Handle(PGeom_Surface)& S,const PTopLoc_Location& L);
  
  Standard_EXPORT     Handle_PGeom2d_Curve PCurve() const;
  //! Returns True <br>
  Standard_EXPORT   virtual  Standard_Boolean IsPointOnCurveOnSurface() const;

  PBRep_PointOnCurveOnSurface( )
{
  
}
PBRep_PointOnCurveOnSurface(const Storage_stCONSTclCOM& a) : PBRep_PointsOnSurface(a)
{
  
}
    Handle(PGeom2d_Curve) _CSFDB_GetPBRep_PointOnCurveOnSurfacemyPCurve() const { return myPCurve; }
    void _CSFDB_SetPBRep_PointOnCurveOnSurfacemyPCurve(const Handle(PGeom2d_Curve)& p) { myPCurve = p; }



  DEFINE_STANDARD_RTTI(PBRep_PointOnCurveOnSurface)

protected:




private: 


Handle_PGeom2d_Curve myPCurve;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif