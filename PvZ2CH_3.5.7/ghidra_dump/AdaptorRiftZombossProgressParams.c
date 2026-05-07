// Class: AdaptorRiftZombossProgressParams


/* AdaptorRiftZombossProgressParams::AdaptorRiftZombossProgressParams() */

void __thiscall
AdaptorRiftZombossProgressParams::AdaptorRiftZombossProgressParams
          (AdaptorRiftZombossProgressParams *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  this[8] = (AdaptorRiftZombossProgressParams)0x0;
  this[9] = (AdaptorRiftZombossProgressParams)0x0;
  this[10] = (AdaptorRiftZombossProgressParams)0x0;
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 0x10));
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 0x58),(DummyInit *)0x0);
  ZombossProgressDisplayData::ZombossProgressDisplayData
            ((ZombossProgressDisplayData *)(this + 0x88));
  return;
}


/* AdaptorRiftZombossProgressParams::~AdaptorRiftZombossProgressParams() */

void __thiscall
AdaptorRiftZombossProgressParams::~AdaptorRiftZombossProgressParams
          (AdaptorRiftZombossProgressParams *this)

{
  ZombossProgressDisplayData::~ZombossProgressDisplayData
            ((ZombossProgressDisplayData *)(this + 0x88));
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 0x10));
  return;
}


/* AdaptorRiftZombossProgressParams::TEMPNAMEPLACEHOLDERVALUE(AdaptorRiftZombossProgressParams
   const&) */

AdaptorRiftZombossProgressParams * __thiscall
AdaptorRiftZombossProgressParams::operator=
          (AdaptorRiftZombossProgressParams *this,AdaptorRiftZombossProgressParams *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  AdaptorRiftZombossProgressParams AVar3;
  AdaptorRiftZombossProgressParams AVar4;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  AVar3 = param_1[8];
  AVar4 = param_1[9];
  this[10] = param_1[10];
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  this[8] = AVar3;
  this[9] = AVar4;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 0x10),
             (RtReflectionDelegate *)(param_1 + 0x10));
  Sexy::Delegate2<Sexy::IPurchaseDriver*,bool>::operator=
            ((Delegate2<Sexy::IPurchaseDriver*,bool> *)(this + 0x58),(Delegate2 *)(param_1 + 0x58));
  ZombossProgressDisplayData::operator=
            ((ZombossProgressDisplayData *)(this + 0x88),
             (ZombossProgressDisplayData *)(param_1 + 0x88));
  return this;
}

