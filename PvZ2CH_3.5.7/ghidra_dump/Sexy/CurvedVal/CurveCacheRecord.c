// Class: Sexy::CurvedVal::CurveCacheRecord


/* Sexy::CurvedVal::CurveCacheRecord::CurveCacheRecord() */

void __thiscall Sexy::CurvedVal::CurveCacheRecord::CurveCacheRecord(CurveCacheRecord *this)

{
  SexyMathHermite::SexyMathHermite((SexyMathHermite *)(this + 0x400));
  Set8BytesTo0(this + 0x438);
  return;
}


/* Sexy::CurvedVal::CurveCacheRecord::~CurveCacheRecord() */

void __thiscall Sexy::CurvedVal::CurveCacheRecord::~CurveCacheRecord(CurveCacheRecord *this)

{
  std::string::~string((string *)(this + 0x438));
  SexyMathHermite::~SexyMathHermite((SexyMathHermite *)(this + 0x400));
  return;
}


/* Sexy::CurvedVal::CurveCacheRecord::CurveCacheRecord(Sexy::CurvedVal::CurveCacheRecord&&) */

void __thiscall
Sexy::CurvedVal::CurveCacheRecord::CurveCacheRecord
          (CurveCacheRecord *this,CurveCacheRecord *param_1)

{
  memcpy(this,param_1,0x400);
  SexyMathHermite::SexyMathHermite
            ((SexyMathHermite *)(this + 0x400),(SexyMathHermite *)(param_1 + 0x400));
  FUN_05474148(this + 0x438,param_1 + 0x438);
  return;
}

