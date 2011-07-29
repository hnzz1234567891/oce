// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_Hider_HeaderFile
#define _HLRBRep_Hider_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_HLRBRep_Data_HeaderFile
#include <Handle_HLRBRep_Data.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class HLRBRep_Data;
class BRepTopAdaptor_MapOfShapeTool;



class HLRBRep_Hider  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Creates a Hider processing  the set  of  Edges and <br>
//!          hiding faces described by <DS>.  Stores the hidden <br>
//!          parts in <DS>. <br>
  Standard_EXPORT   HLRBRep_Hider(const Handle(HLRBRep_Data)& DS);
  //! own hiding the side face number <FI>. <br>
  Standard_EXPORT     void OwnHiding(const Standard_Integer FI) ;
  //! Removes from the edges,   the parts hidden by  the <br>
//!          hiding face number <FI>. <br>
  Standard_EXPORT     void Hide(const Standard_Integer FI,BRepTopAdaptor_MapOfShapeTool& MST) ;





protected:





private:



Handle_HLRBRep_Data myDS;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif