// Class: IZombieSunflower


/* IZombieSunflower::onPlaceOnBoard() */

void __thiscall IZombieSunflower::onPlaceOnBoard(IZombieSunflower *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  *(undefined4 *)(this + 0x80c) = uVar1;
  Zombie::onPlaceOnBoard((Zombie *)this);
  return;
}


/* IZombieSunflower::~IZombieSunflower() */

void __thiscall IZombieSunflower::~IZombieSunflower(IZombieSunflower *this)

{
  *(undefined ***)this = &PTR_GetClass_06623690;
  *(undefined ***)(this + 0x10) = &PTR__IZombieSunflower_066240b8;
  ZombieBasic::~ZombieBasic((ZombieBasic *)this);
  return;
}


/* non-virtual thunk to IZombieSunflower::~IZombieSunflower() */

void __thiscall IZombieSunflower::~IZombieSunflower(IZombieSunflower *this)

{
  ~IZombieSunflower(this + -0x10);
  return;
}


/* IZombieSunflower::~IZombieSunflower() */

void __thiscall IZombieSunflower::~IZombieSunflower(IZombieSunflower *this)

{
  ~IZombieSunflower(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to IZombieSunflower::~IZombieSunflower() */

void __thiscall IZombieSunflower::~IZombieSunflower(IZombieSunflower *this)

{
  ~IZombieSunflower(this + -0x10);
  return;
}


/* IZombieSunflower::IZombieSunflower() */

void __thiscall IZombieSunflower::IZombieSunflower(IZombieSunflower *this)

{
  ZombieBasic::ZombieBasic((ZombieBasic *)this);
  *(undefined4 *)(this + 0x80c) = 0;
  *(undefined ***)this = &PTR_GetClass_06623690;
  *(undefined ***)(this + 0x10) = &PTR__IZombieSunflower_066240b8;
  return;
}


/* IZombieSunflower::StaticNew() */

IZombieSunflower * IZombieSunflower::StaticNew(void)

{
  IZombieSunflower *this;
  
  this = ::operator_new(0x810);
  IZombieSunflower(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IZombieSunflower::StaticClassInit() */

void IZombieSunflower::StaticClassInit(void)

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
    std::string::string(asStack_10,"IZombieSunflower");
    (*pcVar2)(plVar1,asStack_10,FUN_0341b704,0x810,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IZombieSunflower::StaticGetClass() */

long * IZombieSunflower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IZombieSunflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IZombieSunflower::GetClass() const */

long * IZombieSunflower::GetClass(void)

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
  (*pcVar3)(plVar1,"IZombieSunflower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IZombieSunflower::dropSun(int) */

void __thiscall IZombieSunflower::dropSun(IZombieSunflower *this,int param_1)

{
  SexyVector3 *pSVar1;
  
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  Board::FanOutSun(*(Board **)(gLawnApp + 0x9f0),pSVar1,param_1,false,true,false,false,false);
  return;
}


/* IZombieSunflower::onUpdate() */

void __thiscall IZombieSunflower::onUpdate(IZombieSunflower *this)

{
  int iVar1;
  int iVar2;
  IZombieSunflowerProps *pIVar3;
  
  ZombieBasic::onUpdate((ZombieBasic *)this);
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
  if ((iVar1 < iVar2) && (-2 < iVar1)) {
    if (*(int *)(this + 0x80c) < iVar1) {
      *(int *)(this + 0x80c) = iVar1;
      pIVar3 = Zombie::GetProps<IZombieSunflowerProps>((Zombie *)this);
      dropSun(this,*(int *)(pIVar3 + 0x210));
      return;
    }
  }
  else if (*(int *)(this + 0x80c) < iVar1) {
    pIVar3 = Zombie::GetProps<IZombieSunflowerProps>((Zombie *)this);
    dropSun(this,*(int *)(pIVar3 + 0x210));
    pIVar3 = Zombie::GetProps<IZombieSunflowerProps>((Zombie *)this);
    dropSun(this,*(int *)(pIVar3 + 0x214));
    *(undefined4 *)(this + 0x80c) = 99999;
    return;
  }
  return;
}

