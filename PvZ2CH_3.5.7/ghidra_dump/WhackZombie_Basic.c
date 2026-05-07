// Class: WhackZombie_Basic


/* WhackZombie_Basic::calcTouchRect() */

void WhackZombie_Basic::calcTouchRect(void)

{
  long *in_x0;
  
  (**(code **)(*in_x0 + 0xb0))();
  return;
}


/* WhackZombie_Basic::~WhackZombie_Basic() */

void __thiscall WhackZombie_Basic::~WhackZombie_Basic(WhackZombie_Basic *this)

{
  *(undefined ***)this = &PTR_GetClass_067ad5c0;
  *(undefined ***)(this + 0x10) = &PTR__WhackZombie_Basic_067adfe8;
  ZombieBasic::~ZombieBasic((ZombieBasic *)this);
  return;
}


/* non-virtual thunk to WhackZombie_Basic::~WhackZombie_Basic() */

void __thiscall WhackZombie_Basic::~WhackZombie_Basic(WhackZombie_Basic *this)

{
  ~WhackZombie_Basic(this + -0x10);
  return;
}


/* WhackZombie_Basic::~WhackZombie_Basic() */

void __thiscall WhackZombie_Basic::~WhackZombie_Basic(WhackZombie_Basic *this)

{
  ~WhackZombie_Basic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WhackZombie_Basic::~WhackZombie_Basic() */

void __thiscall WhackZombie_Basic::~WhackZombie_Basic(WhackZombie_Basic *this)

{
  ~WhackZombie_Basic(this + -0x10);
  return;
}


/* WhackZombie_Basic::WhackZombie_Basic() */

void __thiscall WhackZombie_Basic::WhackZombie_Basic(WhackZombie_Basic *this)

{
  ZombieBasic::ZombieBasic((ZombieBasic *)this);
  *(undefined ***)this = &PTR_GetClass_067ad5c0;
  *(undefined ***)(this + 0x10) = &PTR__WhackZombie_Basic_067adfe8;
  return;
}


/* WhackZombie_Basic::StaticNew() */

WhackZombie_Basic * WhackZombie_Basic::StaticNew(void)

{
  WhackZombie_Basic *this;
  
  this = ::operator_new(0x810);
  WhackZombie_Basic(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackZombie_Basic::StaticClassInit() */

void WhackZombie_Basic::StaticClassInit(void)

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
    std::string::string(asStack_10,"WhackZombie_Basic");
    (*pcVar2)(plVar1,asStack_10,FUN_03fcef28,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WhackZombie_Basic::StaticGetClass() */

long * WhackZombie_Basic::StaticGetClass(void)

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
  uVar2 = ZombieBasic::StaticGetClass();
  (*pcVar3)(plVar1,"WhackZombie_Basic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WhackZombie_Basic::GetClass() const */

long * WhackZombie_Basic::GetClass(void)

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
  uVar2 = ZombieBasic::StaticGetClass();
  (*pcVar3)(plVar1,"WhackZombie_Basic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WhackZombie_Basic::WhackTakeDamage(Sexy::SexyVector3&) */

void __thiscall WhackZombie_Basic::WhackTakeDamage(WhackZombie_Basic *this,SexyVector3 *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  SexyVector3 *pSVar5;
  string *psVar6;
  uint uVar7;
  code *pcVar8;
  float fVar9;
  DamageInfo *pDVar10;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = RealObject::IsOnTeam(this,1);
  if ((((cVar1 != '\0') || (cVar1 = FUN_03fcf050(*(undefined4 *)(this + 0xcc)), cVar1 != '\0')) ||
      (iVar4 = Zombie::GetInvisibleState((Zombie *)this), iVar4 == 2)) ||
     (cVar1 = (**(code **)(*(long *)this + 0x328))(this), cVar1 != '\0')) {
    uVar7 = 0;
    goto LAB_03fd0b70;
  }
  iVar4 = FUN_03fcd978(*(undefined4 *)(this + 0xb0));
  if (iVar4 == 1) {
    pcVar8 = *(code **)(*(long *)this + 0x110);
    pDVar10._0_4_ = (DamageInfo *)FUN_03fcd97c(*(undefined4 *)(this + 0x2ac));
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  }
  else {
    if (iVar4 == 0) {
      pcVar8 = *(code **)(*(long *)this + 0x110);
      pDVar10._0_4_ = (DamageInfo *)FUN_03fcd974(*(undefined4 *)(this + 0x284));
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo(pDVar10._0_4_,local_70,local_6c,aDStack_68,aPStack_78,0);
      (*pcVar8)(this,aDStack_68);
      DamageInfo::~DamageInfo(aDStack_68);
      pSVar5 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)this);
      Sexy::SexyVector3::operator=(param_1,pSVar5);
      psVar6 = (string *)Zombie::GetTypeName((Zombie *)this);
      bVar2 = std::operator==(psVar6,"whackzombie_tutorial");
      psVar6 = (string *)Zombie::GetTypeName((Zombie *)this);
      bVar3 = std::operator==(psVar6,"whackzombie_tutorial_armor1");
      uVar7 = (uint)bVar2;
      if (bVar3) {
        uVar7 = 2;
      }
      psVar6 = (string *)Zombie::GetTypeName((Zombie *)this);
      bVar2 = std::operator==(psVar6,"whackzombie_tutorial_armor2");
      if (bVar2) {
        uVar7 = 3;
      }
      goto LAB_03fd0b70;
    }
    uVar7 = 0;
    if (iVar4 != 2) goto LAB_03fd0b70;
    pcVar8 = *(code **)(*(long *)this + 0x110);
    fVar9 = (float)FUN_03fcd97c(*(undefined4 *)(this + 0x2ac));
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    pDVar10._0_4_ = (DamageInfo *)(fVar9 * 0.5);
  }
  DamageInfo::DamageInfo(pDVar10._0_4_,local_70,local_6c,aDStack_68,aPStack_78,0);
  (*pcVar8)(this,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  uVar7 = 0xffffffff;
LAB_03fd0b70:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

