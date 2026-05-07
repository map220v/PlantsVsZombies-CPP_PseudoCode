// Class: EffectAnimRig_FireWall


/* EffectAnimRig_FireWall::SetGridItemFireWall(Sexy::RtWeakPtr<GridItemFireWall>) */

void __thiscall
EffectAnimRig_FireWall::SetGridItemFireWall(EffectAnimRig_FireWall *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x218),param_2);
  return;
}


/* EffectAnimRig_FireWall::OnLastAnimEnd(std::string const&) */

void EffectAnimRig_FireWall::OnLastAnimEnd(string *param_1)

{
  param_1[0x214] = (string)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_FireWall::StaticClassInit() */

void EffectAnimRig_FireWall::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectAnimRig_FireWall");
    (*pcVar2)(plVar1,asStack_10,FUN_03cb6f44,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_FireWall::StaticGetClass() */

long * EffectAnimRig_FireWall::StaticGetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"EffectAnimRig_FireWall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_FireWall::GetClass() const */

long * EffectAnimRig_FireWall::GetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"EffectAnimRig_FireWall",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_FireWall::EffectAnimRig_FireWall() */

void __thiscall EffectAnimRig_FireWall::EffectAnimRig_FireWall(EffectAnimRig_FireWall *this)

{
  undefined4 uVar1;
  
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_0675cf60;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_FireWall_0675d080;
  uVar1 = PVZ_EOT();
  this[0x214] = (EffectAnimRig_FireWall)0x0;
  *(undefined4 *)(this + 0x210) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x218));
  this[0x220] = (EffectAnimRig_FireWall)0x0;
  return;
}


/* EffectAnimRig_FireWall::StaticNew() */

EffectAnimRig_FireWall * EffectAnimRig_FireWall::StaticNew(void)

{
  EffectAnimRig_FireWall *this;
  
  this = ::operator_new(0x228);
  EffectAnimRig_FireWall(this);
  return this;
}


/* EffectAnimRig_FireWall::~EffectAnimRig_FireWall() */

void __thiscall EffectAnimRig_FireWall::~EffectAnimRig_FireWall(EffectAnimRig_FireWall *this)

{
  *(undefined ***)this = &PTR_GetClass_0675cf60;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_FireWall_0675d080;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x218));
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_FireWall::~EffectAnimRig_FireWall() */

void __thiscall EffectAnimRig_FireWall::~EffectAnimRig_FireWall(EffectAnimRig_FireWall *this)

{
  ~EffectAnimRig_FireWall(this + -0x10);
  return;
}


/* EffectAnimRig_FireWall::~EffectAnimRig_FireWall() */

void __thiscall EffectAnimRig_FireWall::~EffectAnimRig_FireWall(EffectAnimRig_FireWall *this)

{
  ~EffectAnimRig_FireWall(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_FireWall::~EffectAnimRig_FireWall() */

void __thiscall EffectAnimRig_FireWall::~EffectAnimRig_FireWall(EffectAnimRig_FireWall *this)

{
  ~EffectAnimRig_FireWall(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_FireWall::PlayFireWall() */

void __thiscall EffectAnimRig_FireWall::PlayFireWall(EffectAnimRig_FireWall *this)

{
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_58,"PLANTFOOD_IN");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPrevousAnimEnd);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<EffectAnimRig_FireWall,void(EffectAnimRig_FireWall::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_FireWall::OnPrevousAnimEnd(std::string const&) */

void __thiscall
EffectAnimRig_FireWall::OnPrevousAnimEnd(EffectAnimRig_FireWall *this,string *param_1)

{
  bool bVar1;
  GridItemFireWallPropertySheet *pGVar2;
  float fVar3;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"PLANTFOOD_IN");
  if (bVar1) {
    fVar3 = (float)PVZ_T();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x218));
    pGVar2 = GridItem::GetProps<GridItemFireWallPropertySheet>();
    *(float *)(this + 0x210) = fVar3 + *(float *)(pGVar2 + 0xa4);
    std::string::string(asStack_40,"PLANTFOOD");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_FireWall::onUpdate() */

void __thiscall EffectAnimRig_FireWall::onUpdate(EffectAnimRig_FireWall *this)

{
  char *__s;
  float fVar1;
  undefined4 uVar2;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x210) < fVar1) {
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x210) = uVar2;
    if (this[0x220] == (EffectAnimRig_FireWall)0x0) {
      __s = "PLANTFOOD_OUT";
    }
    else {
      __s = "AVATAR_PLANTFOOD_OUT";
    }
    std::string::string(asStack_58,__s);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnLastAnimEnd);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<EffectAnimRig_FireWall,void(EffectAnimRig_FireWall::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

