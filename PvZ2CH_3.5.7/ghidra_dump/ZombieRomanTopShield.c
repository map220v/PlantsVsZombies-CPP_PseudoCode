// Class: ZombieRomanTopShield


/* ZombieRomanTopShield::~ZombieRomanTopShield() */

void __thiscall ZombieRomanTopShield::~ZombieRomanTopShield(ZombieRomanTopShield *this)

{
  *(undefined ***)this = &PTR_GetClass_0688b630;
  *(undefined ***)(this + 0x10) = &PTR__ZombieRomanTopShield_0688c0c0;
  ZombieRomanShield::~ZombieRomanShield((ZombieRomanShield *)this);
  return;
}


/* non-virtual thunk to ZombieRomanTopShield::~ZombieRomanTopShield() */

void __thiscall ZombieRomanTopShield::~ZombieRomanTopShield(ZombieRomanTopShield *this)

{
  ~ZombieRomanTopShield(this + -0x10);
  return;
}


/* ZombieRomanTopShield::~ZombieRomanTopShield() */

void __thiscall ZombieRomanTopShield::~ZombieRomanTopShield(ZombieRomanTopShield *this)

{
  ~ZombieRomanTopShield(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieRomanTopShield::~ZombieRomanTopShield() */

void __thiscall ZombieRomanTopShield::~ZombieRomanTopShield(ZombieRomanTopShield *this)

{
  ~ZombieRomanTopShield(this + -0x10);
  return;
}


/* ZombieRomanTopShield::ZombieRomanTopShield() */

void __thiscall ZombieRomanTopShield::ZombieRomanTopShield(ZombieRomanTopShield *this)

{
  ZombieRomanShield::ZombieRomanShield((ZombieRomanShield *)this);
  *(undefined ***)this = &PTR_GetClass_0688b630;
  *(undefined ***)(this + 0x10) = &PTR__ZombieRomanTopShield_0688c0c0;
  return;
}


/* ZombieRomanTopShield::StaticNew() */

ZombieRomanTopShield * ZombieRomanTopShield::StaticNew(void)

{
  ZombieRomanTopShield *this;
  
  this = ::operator_new(0x810);
  ZombieRomanTopShield(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanTopShield::StaticClassInit() */

void ZombieRomanTopShield::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieRomanTopShield");
    (*pcVar2)(plVar1,asStack_10,FUN_04659e14,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieRomanTopShield::StaticGetClass() */

long * ZombieRomanTopShield::StaticGetClass(void)

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
  uVar2 = ZombieRomanShield::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieRomanTopShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanTopShield::GetClass() const */

long * ZombieRomanTopShield::GetClass(void)

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
  uVar2 = ZombieRomanShield::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieRomanTopShield",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieRomanTopShield::onShieldLost(std::string const&) */

void __thiscall ZombieRomanTopShield::onShieldLost(ZombieRomanTopShield *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = std::operator==(param_1,"shield_off");
  if (bVar1) {
    cVar2 = (**(code **)(*(long *)this + 0x328))(this);
    if (cVar2 == '\0') {
      Zombie::setZombieState((Zombie *)this,0x1f);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieRomanTopShield::onArmorDropped(std::string) */

void ZombieRomanTopShield::onArmorDropped(Zombie *param_1)

{
  int iVar1;
  CreatureConditionTracker *this;
  float *pfVar2;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar3;
  long lVar4;
  Effect_PopAnim *this_00;
  PopAnim *pPVar5;
  PopAnimRig *this_01;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05475d88(asStack_18);
  ZombieCamel::onArmorDropped(param_1,asStack_18);
  std::string::~string(asStack_18);
  this = (CreatureConditionTracker *)Zombie::GetConditionTracker(param_1);
  fVar6 = (float)CreatureConditionTracker::GetDrawScale(this);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar10 = *pfVar2;
  fVar9 = pfVar2[1];
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(param_1);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  fVar8 = *(float *)(lVar4 + 0xc4);
  pRVar3 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(param_1);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar3);
  fVar7 = *(float *)(lVar4 + 200);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_ZOMBIE_ROMAN_TOP_SHIELD_BREAK");
  GetPAMByName(asStack_20);
  pPVar5 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::~string(asStack_20);
  nop();
  EATextSquish::Vec3::Vec3
            ((Vec3 *)asStack_18,(float)(int)((fVar10 - fVar8 * fVar6) - fVar6 * 30.0),
             (float)(int)((fVar9 - fVar7 * fVar6) - fVar6 * 67.0),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)asStack_18,-1);
  iVar1 = (**(code **)(*(long *)param_1 + 0x170))(param_1);
  FUN_04658f44(this_00 + 0x1c,iVar1 + 1);
  std::string::string(asStack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_00,asStack_18,0);
  std::string::~string(asStack_18);
  nop();
  (**(code **)(*(long *)this_00 + 0x80))(fVar6,this_00);
  this_01 = (PopAnimRig *)Zombie::GetAnimRig(param_1);
  PopAnimRig::DebugPrintLayerNames(this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

