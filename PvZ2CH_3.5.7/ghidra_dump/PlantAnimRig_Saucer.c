// Class: PlantAnimRig_Saucer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Saucer::StaticClassInit() */

void PlantAnimRig_Saucer::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"PlantAnimRig_Saucer");
    (*pcVar2)(plVar1,asStack_10,FUN_041070e4,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_Saucer::StaticGetClass() */

long * PlantAnimRig_Saucer::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Saucer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Saucer::GetClass() const */

long * PlantAnimRig_Saucer::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_Saucer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_Saucer::PlantAnimRig_Saucer() */

void __thiscall PlantAnimRig_Saucer::PlantAnimRig_Saucer(PlantAnimRig_Saucer *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067e4190;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Saucer_067e43f8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3b8));
  return;
}


/* PlantAnimRig_Saucer::StaticNew() */

PlantAnimRig_Saucer * PlantAnimRig_Saucer::StaticNew(void)

{
  PlantAnimRig_Saucer *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_Saucer(this);
  return this;
}


/* PlantAnimRig_Saucer::~PlantAnimRig_Saucer() */

void __thiscall PlantAnimRig_Saucer::~PlantAnimRig_Saucer(PlantAnimRig_Saucer *this)

{
  *(undefined ***)this = &PTR_GetClass_067e4190;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_Saucer_067e43f8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Saucer::~PlantAnimRig_Saucer() */

void __thiscall PlantAnimRig_Saucer::~PlantAnimRig_Saucer(PlantAnimRig_Saucer *this)

{
  ~PlantAnimRig_Saucer(this + -0x10);
  return;
}


/* PlantAnimRig_Saucer::~PlantAnimRig_Saucer() */

void __thiscall PlantAnimRig_Saucer::~PlantAnimRig_Saucer(PlantAnimRig_Saucer *this)

{
  ~PlantAnimRig_Saucer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_Saucer::~PlantAnimRig_Saucer() */

void __thiscall PlantAnimRig_Saucer::~PlantAnimRig_Saucer(PlantAnimRig_Saucer *this)

{
  ~PlantAnimRig_Saucer(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Saucer::PlayLight() */

void __thiscall PlantAnimRig_Saucer::PlayLight(PlantAnimRig_Saucer *this)

{
  long lVar1;
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"attack");
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this + 0x3b8));
  std::string::string(asStack_60,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0xf;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Saucer::PlayAway() */

void __thiscall PlantAnimRig_Saucer::PlayAway(PlantAnimRig_Saucer *this)

{
  long lVar1;
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"leave");
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)(this + 0x3b8));
  std::string::string(asStack_60,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
             asStack_60);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtId::~RtId(aRStack_68);
  std::string::~string(asStack_58);
  nop();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x218) = 0x11;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_Saucer::onAnimStopped() */

void __thiscall PlantAnimRig_Saucer::onAnimStopped(PlantAnimRig_Saucer *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x218) == 0xf) {
    std::string::string(asStack_40,"loop");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    *(undefined4 *)(this + 0x218) = 0x10;
  }
  PlantAnimRig::onAnimStopped((PlantAnimRig *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

