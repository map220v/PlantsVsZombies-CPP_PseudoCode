// Class: ActionEntityFade


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionEntityFade::StaticClassInit() */

void ActionEntityFade::StaticClassInit(void)

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
    std::string::string(asStack_10,"ActionEntityFade");
    (*pcVar2)(plVar1,asStack_10,FUN_049f63d8,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActionEntityFade::StaticGetClass() */

long * ActionEntityFade::StaticGetClass(void)

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
  uVar2 = ActionBase::StaticGetClass();
  (*pcVar3)(plVar1,"ActionEntityFade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ActionEntityFade::GetClass() const */

long * ActionEntityFade::GetClass(void)

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
  uVar2 = ActionBase::StaticGetClass();
  (*pcVar3)(plVar1,"ActionEntityFade",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionEntityFade::InitWithTarget(Sexy::RtWeakPtr<RealObject>, float, bool) */

void __thiscall
ActionEntityFade::InitWithTarget
          (ActionBase *param_1,ActionEntityFade *this,RtWeakPtrBase *param_3,
          ActionEntityFade param_4)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  ActionBase::InitWithTarget(param_1,this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  this[0x61] = param_4;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ActionEntityFade::~ActionEntityFade() */

void __thiscall ActionEntityFade::~ActionEntityFade(ActionEntityFade *this)

{
  *(undefined ***)this = &PTR_GetClass_0692cf10;
  ActionBase::~ActionBase((ActionBase *)this);
  return;
}


/* ActionEntityFade::~ActionEntityFade() */

void __thiscall ActionEntityFade::~ActionEntityFade(ActionEntityFade *this)

{
  ~ActionEntityFade(this);
  AK::FreeHook(this);
  return;
}


/* ActionEntityFade::ActionEntityFade() */

void __thiscall ActionEntityFade::ActionEntityFade(ActionEntityFade *this)

{
  ActionBase::ActionBase((ActionBase *)this);
  this[0x61] = (ActionEntityFade)0x1;
  *(undefined ***)this = &PTR_GetClass_0692cf10;
  return;
}


/* ActionEntityFade::StaticNew() */

ActionEntityFade * ActionEntityFade::StaticNew(void)

{
  ActionEntityFade *this;
  
  this = ::operator_new(0x68);
  ActionEntityFade(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionEntityFade::update(float) */

void __thiscall ActionEntityFade::update(ActionEntityFade *this,float param_1)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  bool bVar2;
  RtObject *pRVar3;
  Zombie *this_01;
  PopAnimRig *this_02;
  Plant *this_03;
  Color aCStack_18 [12];
  int local_c;
  long local_8;
  
  this_00 = (RtMixedPtrBase *)(this + 0x50);
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    pRVar3 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    bVar2 = Sexy::RtObject::IsA<Zombie>(pRVar3);
    if (bVar2) {
      pRVar3 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      this_01 = Sexy::RtObject::Cast<Zombie>(pRVar3);
      this_02 = (PopAnimRig *)Zombie::GetAnimRig(this_01);
      if (this_02 != (PopAnimRig *)0x0) {
        Sexy::Color::Color(aCStack_18,1);
        if (this[0x61] != (ActionEntityFade)0x0) {
          param_1 = 1.0 - param_1;
        }
        local_c = (int)(param_1 * 255.0);
        PopAnimRig::SetPAMColor(this_02,aCStack_18);
      }
    }
    else {
      pRVar3 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      bVar2 = Sexy::RtObject::IsA<Plant>(pRVar3);
      if (bVar2) {
        this_03 = Sexy::RtObject::Cast<Plant>((RtObject *)0x0);
        UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)this_03);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

