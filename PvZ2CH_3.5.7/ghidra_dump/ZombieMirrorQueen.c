// Class: ZombieMirrorQueen


/* ZombieMirrorQueen::CanDropArm() const */

bool __thiscall ZombieMirrorQueen::CanDropArm(ZombieMirrorQueen *this)

{
  bool bVar1;
  char cVar2;
  float fVar3;
  
  cVar2 = Zombie::HasArm((Zombie *)this);
  bVar1 = false;
  if (cVar2 != '\0') {
    fVar3 = (float)(**(code **)(*(long *)this + 0x928))(this);
    bVar1 = 0.0 <= fVar3;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueen::IsValidRangedTarget(Plant*) */

void __thiscall ZombieMirrorQueen::IsValidRangedTarget(ZombieMirrorQueen *this,Plant *param_1)

{
  char cVar1;
  undefined1 uVar2;
  string *psVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Plant *)0x0) {
    psVar3 = (string *)Plant::GetAttachedBoardEntityManager(param_1);
    std::string::string(asStack_10,"poison_apple_puree");
    cVar1 = GameObjectDictionary::Contains(psVar3);
    std::string::~string(asStack_10);
    nop();
    if (cVar1 != '\0') {
      uVar2 = 0;
      goto LAB_04f06500;
    }
  }
  uVar2 = Zombie::IsValidRangedTarget((Zombie *)this,param_1);
LAB_04f06500:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* ZombieMirrorQueen::onZombieInitialize() */

void __thiscall ZombieMirrorQueen::onZombieInitialize(ZombieMirrorQueen *this)

{
  undefined4 uVar1;
  
  ZombieWithActions::onZombieInitialize((ZombieWithActions *)this);
  ZombieWithActions::SetPhase((ZombieWithActions *)this,1);
  ZombieCamelTouch::SetCardType((ZombieCamelTouch *)this,0x21);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x840) = uVar1;
  *(undefined4 *)(this + 0x844) = uVar1;
  Zombie::SetIsControlled((Zombie *)this,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueen::StaticClassInit() */

void ZombieMirrorQueen::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieMirrorQueen");
    (*pcVar2)(plVar1,asStack_10,FUN_04f068b8,0x848,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMirrorQueen::StaticGetClass() */

long * ZombieMirrorQueen::StaticGetClass(void)

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
  uVar2 = ZombieWithActions::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMirrorQueen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMirrorQueen::GetClass() const */

long * ZombieMirrorQueen::GetClass(void)

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
  uVar2 = ZombieWithActions::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieMirrorQueen",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieMirrorQueen::SetLifetime(float) */

void __thiscall ZombieMirrorQueen::SetLifetime(ZombieMirrorQueen *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x840) = fVar1 + param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueen::onApplyCondition(ZombieConditions) */

void __thiscall ZombieMirrorQueen::onApplyCondition(ZombieMirrorQueen *this,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((((param_2 == 1) || (param_2 == 0x27)) || (param_2 == 0x24)) || (param_2 == 2)) {
    Zombie::EndCondition();
  }
  iVar2 = FUN_04f05d50(*(undefined4 *)(this + 0x814));
  if ((iVar2 - 7U & 0xfffffffd) == 0) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&DAT_06ba5048);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&DAT_06ba5048);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
      if (param_2 == *piVar3) {
        Zombie::EndCondition((Zombie *)this,param_2);
      }
      eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
                ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMirrorQueen::ZombieMirrorQueen() */

void __thiscall ZombieMirrorQueen::ZombieMirrorQueen(ZombieMirrorQueen *this)

{
  ZombieWithActions::ZombieWithActions((ZombieWithActions *)this);
  *(undefined ***)this = &PTR_GetClass_06a0cff0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMirrorQueen_06a0da60;
  return;
}


/* ZombieMirrorQueen::StaticNew() */

ZombieMirrorQueen * ZombieMirrorQueen::StaticNew(void)

{
  ZombieMirrorQueen *this;
  
  this = ::operator_new(0x848);
  ZombieMirrorQueen(this);
  return this;
}


/* ZombieMirrorQueen::onPlaceOnBoard() */

void __thiscall ZombieMirrorQueen::onPlaceOnBoard(ZombieMirrorQueen *this)

{
  ZombieMirrorQueenProps *pZVar1;
  
  Zombie::onPlaceOnBoard((Zombie *)this);
  Zombie::setZombieState((Zombie *)this,0x21,0);
  pZVar1 = Zombie::GetProps<ZombieMirrorQueenProps>((Zombie *)this);
  SetLifetime(this,*(float *)(pZVar1 + 0x228));
  return;
}


/* ZombieMirrorQueen::updateState_ZombiePickNextAction() */

void __thiscall ZombieMirrorQueen::updateState_ZombiePickNextAction(ZombieMirrorQueen *this)

{
  int iVar1;
  ZombieMirrorQueenProps *pZVar2;
  float fVar3;
  
  pZVar2 = Zombie::GetProps<ZombieMirrorQueenProps>((Zombie *)this);
  iVar1 = FUN_04f05d50(*(undefined4 *)(this + 0x814));
  if (iVar1 == 3) {
    fVar3 = (float)PVZ_T();
    if (*(float *)(this + 0x840) < fVar3) {
      ZombieWithActions::SetPhase((ZombieWithActions *)this,6);
    }
    iVar1 = FUN_04f05d50(*(undefined4 *)(this + 0x814));
  }
  if ((iVar1 - 3U < 2) && (fVar3 = (float)FUN_04f05d44(*(undefined4 *)(this + 0x280)), fVar3 <= 1.0)
     ) {
    if (1 < *(int *)(pZVar2 + 0x22c)) {
      ZombieWithActions::SetPhase((ZombieWithActions *)this,9);
      ZombieWithActions::updateState_ZombiePickNextAction((ZombieWithActions *)this);
      return;
    }
    ZombieWithActions::SetPhase((ZombieWithActions *)this,7);
  }
  ZombieWithActions::updateState_ZombiePickNextAction((ZombieWithActions *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueen::shouldSeckillPlant(Plant*) */

void ZombieMirrorQueen::shouldSeckillPlant(Plant *param_1)

{
  bool bVar1;
  ZombieMirrorQueenProps *pZVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pZVar2 = Zombie::GetProps<ZombieMirrorQueenProps>((Zombie *)param_1);
  uVar3 = FUN_04f09fe4(*(undefined8 *)(pZVar2 + 0x238));
  uVar4 = FUN_04f0a034(*(undefined8 *)(pZVar2 + 0x240));
  Plant::GetType();
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                       (uVar3,uVar4,lVar5 + 8);
  local_10 = FUN_04f0a034(*(undefined8 *)(pZVar2 + 0x240));
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(!bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueen::shouldSeckillZombie(Zombie*) */

void __thiscall ZombieMirrorQueen::shouldSeckillZombie(ZombieMirrorQueen *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  ZombieMirrorQueenProps *pZVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long lVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,(RealObject *)this);
  if ((cVar1 == '\0') || (cVar1 = Zombie::CanTakeFatalDamage(param_1), cVar1 == '\0')) {
    bVar2 = false;
  }
  else {
    pZVar3 = Zombie::GetProps<ZombieMirrorQueenProps>((Zombie *)this);
    uVar4 = FUN_04f09fe4(*(undefined8 *)(pZVar3 + 0x250));
    uVar5 = FUN_04f0a034(*(undefined8 *)(pZVar3 + 600));
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(param_1);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                         (uVar4,uVar5,lVar6 + 8);
    local_10 = FUN_04f0a034(*(undefined8 *)(pZVar3 + 600));
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    bVar2 = !bVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueen::trySeckillTargets() */

void __thiscall ZombieMirrorQueen::trySeckillTargets(ZombieMirrorQueen *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  Plant *this_00;
  Zombie *pZVar7;
  SharkMinion *this_01;
  code *pcVar8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x3a0))(auStack_90);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  uVar3 = operator|(1,2);
  EntityFinder::GetEntitiesTouchingRectangle(avStack_80,uVar3,auStack_90,0xffffffff,0xffffffff);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    this_01 = (SharkMinion *)*puVar6;
    iVar4 = SharkMinion::getRow(this_01);
    iVar5 = SharkMinion::getRow((SharkMinion *)this);
    if (iVar4 == iVar5) {
      this_00 = Sexy::RtObject::Cast<Plant>((RtObject *)this_01);
      if ((this_00 == (Plant *)0x0) || (cVar2 = shouldSeckillPlant((Plant *)this), cVar2 == '\0')) {
        pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_01);
        if ((pZVar7 != (Zombie *)0x0) && (cVar2 = shouldSeckillZombie(this,pZVar7), cVar2 != '\0'))
        {
          pcVar8 = *(code **)(*(long *)pZVar7 + 0x120);
          DamageInfo::DamageInfo(aDStack_68);
          (*pcVar8)(pZVar7,aDStack_68);
          DamageInfo::~DamageInfo(aDStack_68);
        }
      }
      else {
        pcVar8 = *(code **)(*(long *)this_00 + 0x120);
        DamageInfo::DamageInfo(aDStack_68);
        (*pcVar8)(this_00,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
        cVar2 = GameObject::IsDestroyed((GameObject *)this_00);
        if (cVar2 == '\0') {
          (**(code **)(*(long *)this_00 + 0x48))(this_00);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieMirrorQueen::onUpdate() */

void __thiscall ZombieMirrorQueen::onUpdate(ZombieMirrorQueen *this)

{
  Zombie::onUpdate((Zombie *)this);
  trySeckillTargets(this);
  return;
}


/* ZombieMirrorQueen::~ZombieMirrorQueen() */

void __thiscall ZombieMirrorQueen::~ZombieMirrorQueen(ZombieMirrorQueen *this)

{
  *(undefined ***)this = &PTR_GetClass_06a0cff0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieMirrorQueen_06a0da60;
  ZombieWithActions::~ZombieWithActions((ZombieWithActions *)this);
  return;
}


/* non-virtual thunk to ZombieMirrorQueen::~ZombieMirrorQueen() */

void __thiscall ZombieMirrorQueen::~ZombieMirrorQueen(ZombieMirrorQueen *this)

{
  ~ZombieMirrorQueen(this + -0x10);
  return;
}


/* ZombieMirrorQueen::~ZombieMirrorQueen() */

void __thiscall ZombieMirrorQueen::~ZombieMirrorQueen(ZombieMirrorQueen *this)

{
  ~ZombieMirrorQueen(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieMirrorQueen::~ZombieMirrorQueen() */

void __thiscall ZombieMirrorQueen::~ZombieMirrorQueen(ZombieMirrorQueen *this)

{
  ~ZombieMirrorQueen(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieMirrorQueen::chooseDeathState(DamageInfo const&) */

void __thiscall ZombieMirrorQueen::chooseDeathState(ZombieMirrorQueen *this,DamageInfo *param_1)

{
  vector<ZombieConditions,std::allocator<ZombieConditions>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Zombie::broadcastZombieDied((Zombie *)this,param_1);
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::vector
            (avStack_20,(vector *)&DAT_06ba5048);
  Zombie::EndConditions((Zombie *)this,avStack_20);
  std::vector<ZombieConditions,std::allocator<ZombieConditions>>::~vector(avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

