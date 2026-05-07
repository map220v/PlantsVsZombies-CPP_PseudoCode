// Class: GridItemCoalSteamZomboss


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCoalSteamZomboss::GetAnimLabelName(GridItemCoalState) */

void GridItemCoalSteamZomboss::GetAnimLabelName(string *param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  char *__s;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(param_1,"");
  nop();
  switch(param_3) {
  case 1:
  case 3:
    std::string::append(param_1,"idle",0x5752488);
    break;
  case 2:
    std::string::append(param_1,"birth",0x5752488);
    break;
  case 4:
    if (*(int *)(param_2 + 0x1b0) == 1) {
      __s = "mine_burn";
    }
    else if (*(int *)(param_2 + 0x1b0) == 2) {
      __s = "mine_extinction";
    }
    else {
      __s = "mine_break";
    }
    std::string::append(param_1,__s,0x5752488);
  }
  if (lVar1 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


/* GridItemCoalSteamZomboss::KillGridItem() */

void __thiscall GridItemCoalSteamZomboss::KillGridItem(GridItemCoalSteamZomboss *this)

{
  int iVar1;
  
  iVar1 = FUN_03c3eca8(*(undefined4 *)(this + 0x1ac));
  if (iVar1 != 4) {
    GridItemCoalSteam::setState((GridItemCoalSteam *)this,4);
    return;
  }
  return;
}


/* GridItemCoalSteamZomboss::CollidesWithType(CollisionTypeFlags) const */

bool GridItemCoalSteamZomboss::CollidesWithType(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_03c3eca8(*(undefined4 *)(param_1 + 0x1ac));
  return iVar1 != 4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCoalSteamZomboss::StaticClassInit() */

void GridItemCoalSteamZomboss::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCoalSteamZomboss");
    (*pcVar2)(plVar1,asStack_10,FUN_03c44e2c,0x218,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCoalSteamZomboss::StaticGetClass() */

long * GridItemCoalSteamZomboss::StaticGetClass(void)

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
  uVar2 = GridItemCoalSteam::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCoalSteamZomboss",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCoalSteamZomboss::GetClass() const */

long * GridItemCoalSteamZomboss::GetClass(void)

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
  uVar2 = GridItemCoalSteam::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCoalSteamZomboss",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCoalSteamZomboss::NotifyDamageByIceburg() */

void __thiscall GridItemCoalSteamZomboss::NotifyDamageByIceburg(GridItemCoalSteamZomboss *this)

{
  *(undefined4 *)(this + 0x1b0) = 2;
  (**(code **)(*(long *)this + 0x230))();
  return;
}


/* GridItemCoalSteamZomboss::GridItemCoalSteamZomboss() */

void __thiscall GridItemCoalSteamZomboss::GridItemCoalSteamZomboss(GridItemCoalSteamZomboss *this)

{
  GridItemCoalSteam::GridItemCoalSteam((GridItemCoalSteam *)this);
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined ***)this = &PTR_GetClass_06751f90;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCoalSteamZomboss_06752250;
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x1b8));
  return;
}


/* GridItemCoalSteamZomboss::StaticNew() */

GridItemCoalSteamZomboss * GridItemCoalSteamZomboss::StaticNew(void)

{
  GridItemCoalSteamZomboss *this;
  
  this = ::operator_new(0x218);
  GridItemCoalSteamZomboss(this);
  return this;
}


/* GridItemCoalSteamZomboss::onGridItemInitialize() */

void __thiscall GridItemCoalSteamZomboss::onGridItemInitialize(GridItemCoalSteamZomboss *this)

{
  GridItemSteamCoalProps *pGVar1;
  
  GridItemRadiationPile::onGridItemInitialize((GridItemRadiationPile *)this);
  pGVar1 = GridItem::GetProps<GridItemSteamCoalProps>();
  FUN_03c3ec94(*(undefined4 *)(pGVar1 + 0x10),this + 300);
  FUN_03c3ec9c(*(undefined4 *)(pGVar1 + 0x10),this + 0x128);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCoalSteamZomboss::isValidFirePlant(std::string const&) */

void __thiscall
GridItemCoalSteamZomboss::isValidFirePlant(GridItemCoalSteamZomboss *this,string *param_1)

{
  char cVar1;
  GridItemCoalSteamZombossProps *pGVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemCoalSteamZombossProps>();
  local_18 = FUN_03c45000(*(undefined8 *)(pGVar2 + 0xd8));
  local_10 = FUN_03c45050(*(undefined8 *)(pGVar2 + 0xe0));
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_03c4742c:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar3);
    cVar1 = std::operator==(asStack_20,param_1);
    if (cVar1 != '\0') {
      std::string::~string(asStack_20);
      goto LAB_03c4742c;
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCoalSteamZomboss::isValidColdPlant(std::string const&) */

void __thiscall
GridItemCoalSteamZomboss::isValidColdPlant(GridItemCoalSteamZomboss *this,string *param_1)

{
  char cVar1;
  GridItemCoalSteamZombossProps *pGVar2;
  undefined8 uVar3;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemCoalSteamZombossProps>();
  local_18 = FUN_03c45000(*(undefined8 *)(pGVar2 + 0xf0));
  local_10 = FUN_03c45050(*(undefined8 *)(pGVar2 + 0xf8));
  do {
    cVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!(bool)cVar1) {
LAB_03c47508:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(cVar1);
    }
    uVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    FUN_05475d88(asStack_20,uVar3);
    cVar1 = std::operator==(asStack_20,param_1);
    if (cVar1 != '\0') {
      std::string::~string(asStack_20);
      goto LAB_03c47508;
    }
    std::string::~string(asStack_20);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  } while( true );
}


/* GridItemCoalSteamZomboss::~GridItemCoalSteamZomboss() */

void __thiscall GridItemCoalSteamZomboss::~GridItemCoalSteamZomboss(GridItemCoalSteamZomboss *this)

{
  *(undefined ***)this = &PTR_GetClass_06751f90;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCoalSteamZomboss_06752250;
  DamageInfo::~DamageInfo((DamageInfo *)(this + 0x1b8));
  GridItemCoalSteam::~GridItemCoalSteam((GridItemCoalSteam *)this);
  return;
}


/* non-virtual thunk to GridItemCoalSteamZomboss::~GridItemCoalSteamZomboss() */

void __thiscall GridItemCoalSteamZomboss::~GridItemCoalSteamZomboss(GridItemCoalSteamZomboss *this)

{
  ~GridItemCoalSteamZomboss(this + -0x10);
  return;
}


/* GridItemCoalSteamZomboss::~GridItemCoalSteamZomboss() */

void __thiscall GridItemCoalSteamZomboss::~GridItemCoalSteamZomboss(GridItemCoalSteamZomboss *this)

{
  ~GridItemCoalSteamZomboss(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemCoalSteamZomboss::~GridItemCoalSteamZomboss() */

void __thiscall GridItemCoalSteamZomboss::~GridItemCoalSteamZomboss(GridItemCoalSteamZomboss *this)

{
  ~GridItemCoalSteamZomboss(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCoalSteamZomboss::onTakeDamage(DamageInfo const&) */

void __thiscall
GridItemCoalSteamZomboss::onTakeDamage(GridItemCoalSteamZomboss *this,DamageInfo *param_1)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::operator=((DamageInfo *)(this + 0x1b8),param_1);
  if ((*(RtObject **)param_1 != (RtObject *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<Plant>(*(RtObject **)param_1), bVar1)) {
    nop();
    Plant::GetType();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    cVar2 = isValidFirePlant(this,(string *)(lVar3 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (cVar2 == '\0') {
      Plant::GetType();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      cVar2 = isValidColdPlant(this,(string *)(lVar3 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      if (cVar2 != '\0') {
        *(undefined4 *)(this + 0x1b0) = 2;
        (**(code **)(*(long *)this + 0x230))(this);
      }
    }
    else {
      *(undefined4 *)(this + 0x1b0) = 1;
      (**(code **)(*(long *)this + 0x230))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

