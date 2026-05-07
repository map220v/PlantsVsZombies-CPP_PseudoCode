// Class: PlantAnimRig_CthulhuActinia


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CthulhuActinia::StaticClassInit() */

void PlantAnimRig_CthulhuActinia::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_CthulhuActinia");
    (*pcVar2)(plVar1,asStack_10,FUN_04d5c5a0,0x3c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_CthulhuActinia::StaticGetClass() */

long * PlantAnimRig_CthulhuActinia::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_CthulhuActinia",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_CthulhuActinia::GetClass() const */

long * PlantAnimRig_CthulhuActinia::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAnimRig_CthulhuActinia",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_CthulhuActinia::~PlantAnimRig_CthulhuActinia() */

void __thiscall
PlantAnimRig_CthulhuActinia::~PlantAnimRig_CthulhuActinia(PlantAnimRig_CthulhuActinia *this)

{
  *(undefined ***)this = &PTR_GetClass_069b3900;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_CthulhuActinia_069b3b68;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x3b8));
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_CthulhuActinia::~PlantAnimRig_CthulhuActinia() */

void __thiscall
PlantAnimRig_CthulhuActinia::~PlantAnimRig_CthulhuActinia(PlantAnimRig_CthulhuActinia *this)

{
  ~PlantAnimRig_CthulhuActinia(this + -0x10);
  return;
}


/* PlantAnimRig_CthulhuActinia::~PlantAnimRig_CthulhuActinia() */

void __thiscall
PlantAnimRig_CthulhuActinia::~PlantAnimRig_CthulhuActinia(PlantAnimRig_CthulhuActinia *this)

{
  ~PlantAnimRig_CthulhuActinia(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_CthulhuActinia::~PlantAnimRig_CthulhuActinia() */

void __thiscall
PlantAnimRig_CthulhuActinia::~PlantAnimRig_CthulhuActinia(PlantAnimRig_CthulhuActinia *this)

{
  ~PlantAnimRig_CthulhuActinia(this + -0x10);
  return;
}


/* PlantAnimRig_CthulhuActinia::PlantAnimRig_CthulhuActinia() */

void __thiscall
PlantAnimRig_CthulhuActinia::PlantAnimRig_CthulhuActinia(PlantAnimRig_CthulhuActinia *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069b3900;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_CthulhuActinia_069b3b68;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x3b8));
  return;
}


/* PlantAnimRig_CthulhuActinia::StaticNew() */

PlantAnimRig_CthulhuActinia * PlantAnimRig_CthulhuActinia::StaticNew(void)

{
  PlantAnimRig_CthulhuActinia *this;
  
  this = ::operator_new(0x3c0);
  PlantAnimRig_CthulhuActinia(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CthulhuActinia::getIdleAnimationName() */

void PlantAnimRig_CthulhuActinia::getIdleAnimationName(void)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  long in_x0;
  PlantCthulhuActinia *this;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x3b8));
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x3b8));
    nop();
    cVar3 = PlantCthulhuActinia::GetEyeballStatus(this);
    if (cVar3 != '\0') {
      std::string::string(in_x8,"idle02");
      nop();
      goto LAB_04d5a7b4;
    }
  }
  std::string::string(in_x8,"idle01");
  nop();
LAB_04d5a7b4:
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_CthulhuActinia::getWaterAnimName() */

void PlantAnimRig_CthulhuActinia::getWaterAnimName(void)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  long in_x0;
  PlantCthulhuActinia *this;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x3b8));
  if (bVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x3b8));
    nop();
    cVar3 = PlantCthulhuActinia::GetEyeballStatus(this);
    if (cVar3 != '\0') {
      std::string::string(in_x8,"water02");
      nop();
      goto LAB_04d5a87c;
    }
  }
  std::string::string(in_x8,"water01");
  nop();
LAB_04d5a87c:
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

