// Class: MulberryProjectile


/* MulberryProjectile::~MulberryProjectile() */

void __thiscall MulberryProjectile::~MulberryProjectile(MulberryProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06746470;
  *(undefined ***)(this + 0x10) = &PTR__MulberryProjectile_06746668;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to MulberryProjectile::~MulberryProjectile() */

void __thiscall MulberryProjectile::~MulberryProjectile(MulberryProjectile *this)

{
  ~MulberryProjectile(this + -0x10);
  return;
}


/* MulberryProjectile::~MulberryProjectile() */

void __thiscall MulberryProjectile::~MulberryProjectile(MulberryProjectile *this)

{
  ~MulberryProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MulberryProjectile::~MulberryProjectile() */

void __thiscall MulberryProjectile::~MulberryProjectile(MulberryProjectile *this)

{
  ~MulberryProjectile(this + -0x10);
  return;
}


/* MulberryProjectile::MulberryProjectile() */

void __thiscall MulberryProjectile::MulberryProjectile(MulberryProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06746470;
  *(undefined ***)(this + 0x10) = &PTR__MulberryProjectile_06746668;
  return;
}


/* MulberryProjectile::StaticNew() */

MulberryProjectile * MulberryProjectile::StaticNew(void)

{
  MulberryProjectile *this;
  
  this = ::operator_new(0x1a8);
  MulberryProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MulberryProjectile::StaticClassInit() */

void MulberryProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"MulberryProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_03c0c360,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MulberryProjectile::StaticGetClass() */

long * MulberryProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"MulberryProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MulberryProjectile::GetClass() const */

long * MulberryProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"MulberryProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MulberryProjectile::StartAnimation() */

void __thiscall MulberryProjectile::StartAnimation(MulberryProjectile *this)

{
  (**(code **)(*(long *)this + 0x1e0))(this,this[0x1a5]);
  return;
}


/* MulberryProjectile::onAnimCommand(std::string const&, float, std::string const&, std::string
   const&) */

void MulberryProjectile::onAnimCommand
               (string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_4,"use_action");
  if (bVar1) {
    (**(code **)(*(long *)param_1 + 0x1e0))(param_1,param_1[0x1a5]);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MulberryProjectile::playAnimation(bool) */

void __thiscall MulberryProjectile::playAnimation(MulberryProjectile *this,bool param_1)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)this);
  if (param_1) {
    std::string::string(asStack_40,"plantfood_run2");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    PopAnimRig::PlayAndStop(pPVar1,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
  }
  else {
    std::string::string(asStack_40,"plantfood_run");
    Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
    PopAnimRig::PlayAndStop(pPVar1,asStack_40,0,aDStack_38);
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
/* MulberryProjectile::onProjectileInitialized() */

void __thiscall MulberryProjectile::onProjectileInitialized(MulberryProjectile *this)

{
  TimeChallengeEndLevelUI *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  this[0x1a5] = (MulberryProjectile)0x0;
  local_8 = ___stack_chk_guard;
  this_00 = (TimeChallengeEndLevelUI *)Projectile::GetAnimRig((Projectile *)this);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<MulberryProjectile,void(MulberryProjectile::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aCStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_00,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

