// Class: PlantVamporcini


/* PlantVamporcini::GetCollisionFlags(PlantWeapon) */

void PlantVamporcini::GetCollisionFlags(void)

{
  operator|(1,4);
  return;
}


/* PlantVamporcini::GetHandleDeath() */

PlantVamporcini __thiscall PlantVamporcini::GetHandleDeath(PlantVamporcini *this)

{
  char cVar1;
  
  cVar1 = FUN_0408544c(*(undefined8 *)(this + 0x10));
  if (cVar1 == '\0') {
    return this[0xa8];
  }
  return this[0xd1];
}


/* PlantVamporcini::GetEntityHeight() const */

undefined4 __thiscall PlantVamporcini::GetEntityHeight(PlantVamporcini *this)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(int *)(this + 0x2c) == 0x10) {
    uVar1 = 0;
  }
  return uVar1;
}


/* PlantVamporcini::CanApplyPlantfood() */

byte __thiscall PlantVamporcini::CanApplyPlantfood(PlantVamporcini *this)

{
  if (*(int *)(this + 0x2c) == 0xf || *(int *)(this + 0x2c) == 0xc) {
    return 0;
  }
  if (this[0x28] != (PlantVamporcini)0x0) {
    return 0;
  }
  return (byte)this[0xa8] ^ 1;
}


/* PlantVamporcini::onSleeped(bool) */

void __thiscall PlantVamporcini::onSleeped(PlantVamporcini *this,bool param_1)

{
  if ((param_1) && (*(int *)(this + 0x2c) == 0xf || *(int *)(this + 0x2c) == 0xc)) {
    Plant::SetIsSleepping(*(Plant **)(this + 0x10),false,-1.0);
    return;
  }
  return;
}


/* PlantVamporcini::CanBeTargeted() */

undefined8 __thiscall PlantVamporcini::CanBeTargeted(PlantVamporcini *this)

{
  undefined8 uVar1;
  
  if (this[0xa8] == (PlantVamporcini)0x0) {
    uVar1 = PlantFramework::CanBeTargeted();
    return uVar1;
  }
  return 0;
}


/* PlantVamporcini::IsInvincible() const */

ulong __thiscall PlantVamporcini::IsInvincible(PlantVamporcini *this)

{
  ulong uVar1;
  
  if ((byte)this[0xa8] == 0) {
    uVar1 = PlantFramework::IsInvincible();
    return uVar1;
  }
  return (ulong)(uint)(byte)this[0xa8];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVamporcini::StaticClassInit() */

void PlantVamporcini::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantVamporcini");
    (*pcVar2)(plVar1,asStack_10,FUN_04d0b1b0,0xe0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantVamporcini::StaticGetClass() */

long * PlantVamporcini::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantVamporcini",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantVamporcini::GetClass() const */

long * PlantVamporcini::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantVamporcini",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantVamporcini::clearControl() */

void __thiscall PlantVamporcini::clearControl(PlantVamporcini *this)

{
  char cVar1;
  
  if (((*(int *)(this + 0x2c) == 0xf) || (*(int *)(this + 0x2c) == 0xc)) &&
     (cVar1 = Plant::IsIceblocked(*(Plant **)(this + 0x10)), cVar1 != '\0')) {
    Plant::EndCondition(*(Plant **)(this + 0x10),6);
    return;
  }
  return;
}


/* PlantVamporcini::CanApplyDelayedBoost() */

undefined8 __thiscall PlantVamporcini::CanApplyDelayedBoost(PlantVamporcini *this)

{
  this[0xaa] = (PlantVamporcini)0x1;
  this[0xab] = (PlantVamporcini)0x0;
  return 1;
}


/* PlantVamporcini::CanBeTargetedBy(BoardEntity const*) */

undefined8 __thiscall PlantVamporcini::CanBeTargetedBy(PlantVamporcini *this,BoardEntity *param_1)

{
  bool bVar1;
  int iVar2;
  Zombie *this_00;
  undefined8 uVar3;
  
  if (this[0xa8] != (PlantVamporcini)0x0) {
    return 0;
  }
  if ((((param_1 != (BoardEntity *)0x0) && (this[0xd1] != (PlantVamporcini)0x0)) &&
      (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1), bVar1)) &&
     ((nop(), this_00 != (Zombie *)0x0 && (iVar2 = Zombie::GetSizeType(this_00), iVar2 < 2)))) {
    return 0;
  }
  uVar3 = PlantFramework::CanBeTargetedBy((BoardEntity *)this);
  return uVar3;
}


/* PlantVamporcini::PlantVamporcini() */

void __thiscall PlantVamporcini::PlantVamporcini(PlantVamporcini *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantVamporcini)0x0;
  this[0x38] = (PlantVamporcini)0x0;
  *(undefined ***)this = &PTR_GetClass_069a6bb0;
  this[0x40] = (PlantVamporcini)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x48));
  this[0xa8] = (PlantVamporcini)0x0;
  this[0xa9] = (PlantVamporcini)0x0;
  this[0xaa] = (PlantVamporcini)0x0;
  this[0xab] = (PlantVamporcini)0x0;
  *(undefined4 *)(this + 0xac) = 0;
  this[0xb0] = (PlantVamporcini)0x0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0xc0));
  this[0xd0] = (PlantVamporcini)0x0;
  this[0xd1] = (PlantVamporcini)0x0;
  this[0xd2] = (PlantVamporcini)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  return;
}


/* PlantVamporcini::StaticNew() */

PlantVamporcini * PlantVamporcini::StaticNew(void)

{
  PlantVamporcini *this;
  
  this = ::operator_new(0xe0);
  PlantVamporcini(this);
  return this;
}


/* PlantVamporcini::zombieInExclusionList(Zombie const*) const */

void __thiscall PlantVamporcini::zombieInExclusionList(PlantVamporcini *this,Zombie *param_1)

{
  long lVar1;
  
  lVar1 = FUN_04d0a8d8(*(undefined8 *)(this + 0x10));
  ClassRestrictionSet::IsIncluded((ClassRestrictionSet *)(lVar1 + 0x300),(GameObject *)param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVamporcini::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

void PlantVamporcini::CanTargetZombie(TextureInfo *param_1,RtWeakPtr<Zombie> *param_2)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  RealObject *this;
  code *pcVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RealObject *)Sexy::RtWeakPtr<Zombie>::GetPtr(param_2);
  if (this == (RealObject *)0x0) {
LAB_04d0aa6c:
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)param_2);
    uVar3 = EA::Text::GlyphCache_Memory::EndUpdate(param_1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x328))();
    if (cVar1 == '\0') {
      bVar2 = RealObject::IsOnOpposingTeam(this,*(RealObject **)(param_1 + 0x10));
      if (bVar2 != 0) {
        pcVar4 = *(code **)(*(long *)this + 0x3d0);
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        cVar1 = (*pcVar4)(this,aRStack_10,0);
        if (cVar1 != '\0') {
          bVar2 = zombieInExclusionList((PlantVamporcini *)param_1,(Zombie *)this);
          bVar2 = bVar2 ^ 1;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        if (bVar2 == 0) goto LAB_04d0aa6c;
      }
    }
    uVar3 = 0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVamporcini::canTargetGridItem(GridItem const*) */

void __thiscall PlantVamporcini::canTargetGridItem(PlantVamporcini *this,GridItem *param_1)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_04d0a8d8(*(undefined8 *)(this + 0x10));
  GridItem::GetType();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  FUN_05475d88(asStack_18,lVar4 + 8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if ((param_1 == (GridItem *)0x0) ||
     (cVar1 = (**(code **)(*(long *)param_1 + 0x200))(param_1), cVar1 == '\0')) {
    uVar2 = 0;
  }
  else {
    GridItem::GetType();
    uVar2 = GridItemRestrictionSet::IsIncluded((GridItemRestrictionSet *)(lVar3 + 0x328),aRStack_10)
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* PlantVamporcini::vampireShield() */

void __thiscall PlantVamporcini::vampireShield(PlantVamporcini *this)

{
  Plant *this_00;
  long lVar1;
  float fVar2;
  
  this_00 = *(Plant **)(this + 0x10);
  fVar2 = (float)Plant::GetMaxHealth(this_00);
  Plant::SetHealth(this_00,fVar2);
  lVar1 = *(long *)(this + 0x10);
  fVar2 = (float)FUN_04d08888(*(undefined4 *)(lVar1 + 0xd8));
  if (fVar2 <= *(float *)(this + 0xbc)) {
    return;
  }
  lVar1 = FUN_04d0ac0c(lVar1);
  FUN_04d088b4(lVar1 + 0x3b8,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVamporcini::Draw(Sexy::Graphics*) */

void PlantVamporcini::Draw(Graphics *param_1)

{
  RtWeakPtr *this;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  wchar16 *pwVar7;
  Shield *this_00;
  float *pfVar8;
  long lVar9;
  Insets *pIVar10;
  LineBreakCategory *in_x3;
  LineBreakCategory *in_x4;
  float fVar11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Draw(param_1);
  if (*(long *)(gLawnApp + 0x9f0) != 0) {
    pwVar7 = (wchar16 *)Sexy::LazySingleton<CheatManager>::GetInstancePtr();
    pIVar10 = aIStack_28;
    std::string::string(asStack_18,"HealthBars");
    cVar1 = EA::Text::LineBreakIterator::GetNextSoutheastAsianLineBreak
                      (pwVar7,(wchar16 *)asStack_18,(LineBreakCategory *)pIVar10,in_x3,in_x4);
    if (cVar1 != '\0') {
      this = (RtWeakPtr *)(param_1 + 0xd8);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
      if (bVar2) {
        this_00 = (Shield *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        cVar1 = Shield::Undamaged(this_00);
        std::string::~string(asStack_18);
        nop();
        if (cVar1 != '\0') {
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          Shield::GetShieldInfo();
          pfVar8 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            **)(param_1 + 0x10));
          fVar11 = *pfVar8;
          iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
          iVar3 = FUN_04d08ac0((int)(fVar11 - (float)(iVar3 / 2)));
          lVar9 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  **)(param_1 + 0x10));
          fVar11 = *(float *)(lVar9 + 4);
          iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
          iVar4 = FUN_04d08ac0((int)(fVar11 - (float)iVar4));
          BoardConstants::GRIDSQUARE_WIDTH();
          iVar5 = FUN_04d08ac0();
          BoardConstants::GRIDSQUARE_HEIGHT();
          iVar6 = FUN_04d08ac0();
          Sexy::Insets::Insets(aIStack_38,iVar3,iVar4,iVar5,iVar6);
          PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12);
          Sexy::Color::Color((Color *)asStack_18,7);
          WriteWordInRect();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          Shield::GetShieldPercent();
          pfVar8 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            **)(param_1 + 0x10));
          fVar11 = *pfVar8;
          iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
          iVar3 = FUN_04d08ac0((int)(fVar11 - (float)(iVar3 / 2)));
          lVar9 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  **)(param_1 + 0x10));
          fVar11 = *(float *)(lVar9 + 4);
          iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
          iVar4 = FUN_04d08ac0((int)((fVar11 + 12.0) - (float)iVar4));
          BoardConstants::GRIDSQUARE_WIDTH();
          iVar5 = FUN_04d08ac0();
          BoardConstants::GRIDSQUARE_HEIGHT();
          iVar6 = FUN_04d08ac0();
          Sexy::Insets::Insets(aIStack_28,iVar3,iVar4,iVar5,iVar6);
          PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12);
          Sexy::Color::Color((Color *)asStack_18,7);
          WriteWordInRect();
          FUN_05476c50(auStack_40);
          FUN_05476c50(auStack_48);
        }
        goto LAB_04d0adc4;
      }
    }
    std::string::~string(asStack_18);
    nop();
  }
LAB_04d0adc4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVamporcini::CalculateStealHealthTargetRect() */

void __thiscall PlantVamporcini::CalculateStealHealthTargetRect(PlantVamporcini *this)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long extraout_x0;
  undefined8 *puVar7;
  GridItem *extraout_x0_00;
  int in_w4;
  code *pcVar8;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined1 auStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar5 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(ulong)(iVar4 - 1),iVar5 + -1,3,3,in_w4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar6 = operator|(2,4);
  EntityFinder::GetEntitiesInRectangle(avStack_20,uVar6,auStack_30);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1) {
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar7);
    if (bVar2) {
      nop();
      if (extraout_x0 != 0) {
        pcVar8 = *(code **)(*(long *)this + 0x3e0);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
        cVar3 = (*pcVar8)(this,aRStack_38,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
        goto joined_r0x04d0b104;
      }
    }
    else {
      bVar2 = Sexy::RtObject::IsA<GridItem>((RtObject *)*puVar7);
      if ((bVar2) && (nop(), extraout_x0_00 != (GridItem *)0x0)) {
        cVar3 = canTargetGridItem(this,extraout_x0_00);
joined_r0x04d0b104:
        if (cVar3 != '\0') break;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}


/* PlantVamporcini::~PlantVamporcini() */

void __thiscall PlantVamporcini::~PlantVamporcini(PlantVamporcini *this)

{
  *(undefined ***)this = &PTR_GetClass_069a6bb0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  DamageInfo::~DamageInfo((DamageInfo *)(this + 0x48));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantVamporcini::~PlantVamporcini() */

void __thiscall PlantVamporcini::~PlantVamporcini(PlantVamporcini *this)

{
  ~PlantVamporcini(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVamporcini::StealHealth(float) */

void __thiscall PlantVamporcini::StealHealth(PlantVamporcini *this,float param_1)

{
  GridItem *pGVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  GridItem *extraout_x0;
  undefined8 *puVar7;
  GridItem *extraout_x0_00;
  int in_w4;
  code *pcVar8;
  undefined8 local_b0;
  undefined8 local_a8;
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar5 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(ulong)(iVar4 - 1),iVar5 + -1,3,3,in_w4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  uVar6 = operator|(2,4);
  EntityFinder::GetEntitiesInRectangle(avStack_80,uVar6,auStack_90);
  Sexy::Point::Point(aPStack_a0,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
  DamageInfo::DamageInfo((DamageInfo *)param_1,local_98,local_94,aDStack_68,aPStack_a0,0);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
    if (!bVar2) {
      DamageInfo::~DamageInfo(aDStack_68);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar7 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar7);
    if (bVar2) {
      nop();
      if (extraout_x0 != (GridItem *)0x0) {
        pcVar8 = *(code **)(*(long *)this + 0x3e0);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_98,(RtWeakPtrBase *)aPStack_a0);
        cVar3 = (*pcVar8)(this,(FastCurve *)&local_98,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_a0)
        ;
        pGVar1 = extraout_x0;
        goto joined_r0x04d0bdc8;
      }
    }
    else {
      bVar2 = Sexy::RtObject::IsA<GridItem>((RtObject *)*puVar7);
      if ((bVar2) && (nop(), extraout_x0_00 != (GridItem *)0x0)) {
        cVar3 = canTargetGridItem(this,extraout_x0_00);
        pGVar1 = extraout_x0_00;
joined_r0x04d0bdc8:
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pGVar1 + 0x110))(pGVar1,aDStack_68);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVamporcini::batFly(float) */

void __thiscall PlantVamporcini::batFly(PlantVamporcini *this,float param_1)

{
  GridItem *pGVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  GridItem *extraout_x0;
  undefined8 *puVar6;
  GridItem *extraout_x0_00;
  int in_w4;
  code *pcVar7;
  undefined8 local_b0;
  undefined8 local_a8;
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar5 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(ulong)(iVar4 - 1),iVar5 + -1,3,3,in_w4);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  EntityFinder::GetEntitiesInRectangle(avStack_80,2,auStack_90);
  Sexy::Point::Point(aPStack_a0,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
  DamageInfo::DamageInfo((DamageInfo *)param_1,local_98,local_94,aDStack_68,aPStack_a0,0);
  local_b0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_a8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8);
    if (!bVar2) {
      DamageInfo::~DamageInfo(aDStack_68);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
    bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar6);
    if (bVar2) {
      nop();
      if (extraout_x0 != (GridItem *)0x0) {
        pcVar7 = *(code **)(*(long *)this + 0x3e0);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_98,(RtWeakPtrBase *)aPStack_a0);
        cVar3 = (*pcVar7)(this,(FastCurve *)&local_98,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_a0)
        ;
        pGVar1 = extraout_x0;
        goto joined_r0x04d0bfd8;
      }
    }
    else {
      bVar2 = Sexy::RtObject::IsA<GridItem>((RtObject *)*puVar6);
      if ((bVar2) && (nop(), extraout_x0_00 != (GridItem *)0x0)) {
        cVar3 = canTargetGridItem(this,extraout_x0_00);
        pGVar1 = extraout_x0_00;
joined_r0x04d0bfd8:
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pGVar1 + 0x110))(pGVar1,aDStack_68);
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_b0);
  } while( true );
}


/* PlantVamporcini::onDestroy() */

void __thiscall PlantVamporcini::onDestroy(PlantVamporcini *this)

{
  char *pcVar1;
  
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  AudioMgr::SendEvent(pcVar1,"Play_Plant_Vamporcini_Attack_End");
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  AudioMgr::SendEvent(pcVar1,"Play_Plant_Vamporcini_Plantfood_End");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVamporcini::SetState(PlantVamporciniState) */

void __thiscall PlantVamporcini::SetState(PlantVamporcini *this,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  PlantAnimRig_Vamporcini *pPVar5;
  long lVar6;
  Shield *this_00;
  PopAnimRig *pPVar7;
  Plant *pPVar8;
  PlantAnimRig_WaterRabbit *pPVar9;
  string *__n;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  *(undefined4 *)(this + 0x2c) = param_2;
  local_8 = ___stack_chk_guard;
  switch(param_2) {
  case 10:
    pPVar5 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
    PlantAnimRig_Vamporcini::PlayIdleAnim(pPVar5);
    break;
  case 0xb:
    this_00 = (Shield *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
    cVar1 = Shield::hasShield(this_00);
    if (cVar1 == '\0') {
      lVar6 = FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
      cVar1 = FUN_04d088bc(*(undefined1 *)(lVar6 + 0x3b8));
      if (cVar1 == '\0') {
        uVar10 = *(undefined8 *)(this + 0x10);
        iVar3 = FUN_04d0888c(uVar10);
        if ((iVar3 != 1) || (*(int *)(this + 0xac) != 1)) {
          pPVar5 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c(uVar10);
          PlantAnimRig_Vamporcini::PlayWaitAnim(pPVar5);
        }
      }
    }
    break;
  case 0xc:
    fVar11 = (float)PVZ_T();
    lVar6 = FUN_04d0a8d8(*(undefined8 *)(this + 0x10));
    *(float *)(this + 0x3c) = fVar11 + *(float *)(lVar6 + 700);
    pPVar5 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_Vamporcini::PlayStealHealthOnAnim(pPVar5,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    if (*(int *)(this + 0xac) == 0) {
      Plant::SetHealth(*(Plant **)(this + 0x10),*(float *)(this + 0x44));
      Plant::SetMaxHealth(*(Plant **)(this + 0x10),*(float *)(this + 0x44));
      *(int *)(this + 0xac) = *(int *)(this + 0xac) + 1;
    }
    else {
      pPVar8 = *(Plant **)(this + 0x10);
      fVar11 = (float)FUN_04d08888(*(undefined4 *)(pPVar8 + 0xd8));
      fVar13 = *(float *)(this + 0xbc);
      fVar12 = (float)Plant::GetMaxHealth(pPVar8);
      if (fVar11 + fVar13 * 0.5 < fVar12) {
        pPVar8 = *(Plant **)(this + 0x10);
        fVar11 = (float)FUN_04d08888(*(undefined4 *)(pPVar8 + 0xd8));
        Plant::SetHealth(pPVar8,fVar11 + *(float *)(this + 0xbc) * 0.5);
      }
      else {
        pPVar8 = *(Plant **)(this + 0x10);
        fVar11 = (float)Plant::GetMaxHealth(pPVar8);
        Plant::SetHealth(pPVar8,fVar11);
      }
    }
    pcVar4 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    AudioMgr::SendEvent(pcVar4,"Play_Plant_Vamporcini_Attack_Start");
    break;
  case 0xd:
    pPVar7 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_70,"plantfood_start");
    cVar1 = PopAnimRig::IsAnimStringActive(pPVar7,asStack_70);
    if (cVar1 == '\0') {
      pPVar7 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string((string *)aRStack_68,"plantfood2_fullstart");
      cVar1 = PopAnimRig::IsAnimStringActive(pPVar7,(string *)aRStack_68);
      if (cVar1 == '\0') {
        pPVar7 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        std::string::string((string *)aRStack_60,"plantfood2_start");
        cVar1 = PopAnimRig::IsAnimStringActive(pPVar7,(string *)aRStack_60);
        bVar2 = 0;
        if (cVar1 == '\0') {
          pPVar7 = (PopAnimRig *)
                   UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
          std::string::string(asStack_58,"plantfood_fullstart");
          bVar2 = PopAnimRig::IsAnimStringActive(pPVar7,asStack_58);
          bVar2 = bVar2 ^ 1;
          std::string::~string(asStack_58);
          nop();
        }
        std::string::~string((string *)aRStack_60);
        nop();
        std::string::~string((string *)aRStack_68);
        nop();
        std::string::~string(asStack_70);
        nop();
        if (bVar2 != 0) {
          __n = asStack_58;
          std::string::string(asStack_70,"plantfood_start");
          nop();
          cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
          if (cVar1 == '\0') {
            lVar6 = FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
            cVar1 = FUN_04d088bc(*(undefined1 *)(lVar6 + 0x3b8));
            if (cVar1 != '\0') {
              std::string::append(asStack_70,"plantfood_fullstart",(size_t)__n);
            }
          }
          else {
            lVar6 = FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
            cVar1 = FUN_04d088bc(*(undefined1 *)(lVar6 + 0x3b8));
            if (cVar1 == '\0') {
              std::string::append(asStack_70,"plantfood2_start",(size_t)__n);
            }
            else {
              std::string::append(asStack_70,"plantfood2_fullstart",(size_t)__n);
            }
          }
          pPVar9 = (PlantAnimRig_WaterRabbit *)FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
          std::string::string(asStack_58,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     (string *)aRStack_60,asStack_58);
          PlantAnimRig_WaterRabbit::PlayPlantFoodAttack(pPVar9,asStack_70,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string(asStack_58);
          nop();
          Sexy::RtId::~RtId(aRStack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
          std::string::~string(asStack_70);
        }
      }
      else {
        std::string::~string((string *)aRStack_68);
        nop();
        std::string::~string(asStack_70);
        nop();
      }
    }
    else {
      std::string::~string(asStack_70);
      nop();
    }
    vampireShield(this);
    break;
  case 0xe:
    lVar6 = FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
    cVar1 = FUN_04d088c0(*(undefined1 *)(lVar6 + 0x3b9));
    if (cVar1 == '\0') {
      pPVar5 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
      PlantAnimRig_Vamporcini::PlayAndContinueSleepAnim(pPVar5);
    }
    else {
      pPVar5 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
      PlantAnimRig_Vamporcini::PlayPFIdleAnim(pPVar5);
    }
    break;
  case 0xf:
    fVar11 = (float)PVZ_T();
    lVar6 = FUN_04d0a8d8(*(undefined8 *)(this + 0x10));
    *(float *)(this + 0xb4) = fVar11 + *(float *)(lVar6 + 0x2dc);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVamporcini::Initialize() */

void __thiscall PlantVamporcini::Initialize(PlantVamporcini *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  char cVar1;
  long lVar2;
  Shield *pSVar3;
  Plant *this_01;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  ShieldProps aSStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xd8);
  PlantFramework::Initialize((PlantFramework *)this);
  lVar2 = FUN_04d0a8d8(*(undefined8 *)(this + 0x10));
  GameObject::Create<Shield>();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar4 = (float)Plant::GetMaxHealth(*(Plant **)(this + 0x10));
  this_01 = *(Plant **)(this + 0x10);
  *(float *)(this + 0x44) = fVar4 + fVar4;
  uVar5 = FUN_04d08888(*(undefined4 *)(this_01 + 0xd8));
  fVar6 = *(float *)(lVar2 + 0x2d8);
  *(undefined4 *)(this + 0xbc) = uVar5;
  cVar1 = Plant::GetAvatarEnable(this_01);
  fVar4 = 1.5;
  if (cVar1 == '\0') {
    fVar4 = 1.0;
  }
  ShieldProps::ShieldProps(aSStack_20,(int)(fVar4 * fVar6));
  pSVar3 = (Shield *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Shield::SetProps(pSVar3,aSStack_20);
  pSVar3 = (Shield *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
  Shield::SetAnimRig(pSVar3,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  SetState(this,10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantVamporcini::ApplyPlantfood() */

void __thiscall PlantVamporcini::ApplyPlantfood(PlantVamporcini *this)

{
  char cVar1;
  PlantAnimRig_Vamporcini *this_00;
  Shield *this_01;
  long lVar2;
  Plant *this_02;
  
  this_02 = *(Plant **)(this + 0x10);
  cVar1 = FUN_04d08884(this_02[0x278]);
  if (cVar1 != '\0') {
    Plant::SetIsSleepping(this_02,false,-1.0);
  }
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  SetState(this,0xd);
  this_00 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Vamporcini::SetShield(this_00,true);
  this_01 = (Shield *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8))
  ;
  Shield::DeployShield(this_01);
  Plant::SetMaxHealth(*(Plant **)(this + 0x10),*(float *)(this + 0x44));
  Plant::SetHealth(*(Plant **)(this + 0x10),*(float *)(this + 0x44));
  lVar2 = FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
  FUN_04d088b4(lVar2 + 0x3b8,1);
  this[0x38] = (PlantVamporcini)0x1;
  return;
}


/* PlantVamporcini::CancelPlantfood() */

void __thiscall PlantVamporcini::CancelPlantfood(PlantVamporcini *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  SetState(this,10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVamporcini::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantVamporcini::TakeSmashAttack(PlantVamporcini *this,RtWeakPtr *param_2)

{
  char cVar1;
  BoardEntity *pBVar2;
  Plant *this_00;
  PlantAnimRig_Vamporcini *pPVar3;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = (BoardEntity *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
  cVar1 = Shield::TakeSmashAttack(pBVar2);
  if (cVar1 != '\0') {
    if (*(int *)(this + 0x2c) == 0xc) {
      pPVar3 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
      PlantAnimRig_Vamporcini::SetShield(pPVar3,false);
      pPVar3 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
      PlantAnimRig_Vamporcini::PlayStealHealthLoopAnim(pPVar3);
    }
    goto LAB_04d0c9d8;
  }
  this_00 = *(Plant **)(this + 0x10);
  cVar1 = FUN_04d08884(this_00[0x278]);
  if (cVar1 == '\0') {
    if (this[0xd2] != (PlantVamporcini)0x0) goto LAB_04d0ca30;
LAB_04d0c920:
    cVar1 = FUN_04d08894(this_00);
    if (cVar1 != '\0') {
      pPVar3 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c(this_00);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_Vamporcini::PlayLv5DeathOnAnim(pPVar3,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      this[0xd1] = (PlantVamporcini)0x1;
      this[0xd2] = (PlantVamporcini)0x1;
      SetState(this,0xf);
      goto LAB_04d0c9d8;
    }
  }
  else {
    Plant::SetIsSleepping(this_00,false,-1.0);
    this_00 = *(Plant **)(this + 0x10);
    if (this[0xd2] == (PlantVamporcini)0x0) goto LAB_04d0c920;
LAB_04d0ca30:
    cVar1 = FUN_04d08894(this_00);
    if (cVar1 != '\0') {
      this[0xd1] = (PlantVamporcini)0x0;
      this[0xd2] = (PlantVamporcini)0x0;
    }
  }
  this[0xa8] = (PlantVamporcini)0x1;
  pPVar3 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c(this_00);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_Vamporcini::PlayDeathOnAnim(pPVar3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  SetState(this,0xf);
LAB_04d0c9d8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantVamporcini::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantVamporcini::onAnimStoppedCallback(PlantVamporcini *this,string *param_1)

{
  bool bVar1;
  PlantAnimRig_Vamporcini *this_00;
  long lVar2;
  Plant *this_01;
  float fVar3;
  
  bVar1 = std::operator==(param_1,"sleep_end");
  if ((bVar1) || (bVar1 = std::operator==(param_1,"full_contract"), bVar1)) {
LAB_04d0cb48:
    SetState(this,10);
    return;
  }
  bVar1 = std::operator==(param_1,"attack_start");
  if ((bVar1) || (bVar1 = std::operator==(param_1,"full_start"), bVar1)) {
    this_00 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
    PlantAnimRig_Vamporcini::PlayStealHealthLoopAnim(this_00);
    return;
  }
  bVar1 = std::operator==(param_1,"attack_end");
  if ((bVar1) || (bVar1 = std::operator==(param_1,"full_end"), bVar1)) {
    lVar2 = *(long *)(this + 0x10);
    fVar3 = (float)FUN_04d08888(*(undefined4 *)(lVar2 + 0xd8));
    if (*(float *)(this + 0xbc) < fVar3) {
      lVar2 = FUN_04d0ac0c(lVar2);
      FUN_04d088b4(lVar2 + 0x3b8,1);
    }
    SetState(this,0xe);
    return;
  }
  bVar1 = std::operator==(param_1,"death_start");
  if (!bVar1) {
    bVar1 = std::operator==(param_1,"death_end");
    if (bVar1) {
      this[0xa8] = (PlantVamporcini)0x0;
      Plant::KillPlant(*(Plant **)(this + 0x10),0,1,1);
      return;
    }
    bVar1 = std::operator==(param_1,"lv5_start");
    if (!bVar1) {
      bVar1 = std::operator==(param_1,"lv5_end");
      if (bVar1) {
        this_01 = *(Plant **)(this + 0x10);
        fVar3 = (float)Plant::GetMaxHealth(this_01);
        Plant::SetHealth(this_01,fVar3);
        lVar2 = FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
        FUN_04d088b4(lVar2 + 0x3b8,1);
        this[0xd1] = (PlantVamporcini)0x0;
        this[0xa8] = (PlantVamporcini)0x0;
        this[0xd2] = (PlantVamporcini)0x0;
      }
      else {
        bVar1 = std::operator==(param_1,"plantfood_start");
        if ((((!bVar1) && (bVar1 = std::operator==(param_1,"plantfood2_start"), !bVar1)) &&
            (bVar1 = std::operator==(param_1,"plantfood_fullstart"), !bVar1)) &&
           (bVar1 = std::operator==(param_1,"plantfood2_fullstart"), !bVar1)) {
          return;
        }
      }
      goto LAB_04d0cb48;
    }
  }
  return;
}


/* PlantVamporcini::calculateAttackTime() */

void __thiscall PlantVamporcini::calculateAttackTime(PlantVamporcini *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if (this[0x40] == (PlantVamporcini)0x0) {
    fVar5 = (float)PVZ_T();
    lVar2 = FUN_04d0a8d8(*(undefined8 *)(this + 0x10));
    fVar4 = *(float *)(lVar2 + 0x2d0);
    this[0x40] = (PlantVamporcini)0x1;
    fVar5 = fVar5 + fVar4;
    *(float *)(this + 0x30) = fVar5;
  }
  else if (((this[0xb0] == (PlantVamporcini)0x0) || (this[0xd0] != (PlantVamporcini)0x0)) ||
          (iVar1 = FUN_04d0888c(*(undefined8 *)(this + 0x10)), iVar1 < 2)) {
    fVar5 = *(float *)(this + 0x30);
  }
  else {
    fVar4 = (float)PVZ_T();
    uVar3 = *(undefined8 *)(this + 0x10);
    iVar1 = FUN_04d0888c(uVar3);
    if (iVar1 == 2) {
      lVar2 = FUN_04d0a8d8(uVar3);
      fVar5 = *(float *)(lVar2 + 0x2b8);
    }
    else {
      lVar2 = FUN_04d0a8d8(uVar3);
      fVar5 = *(float *)(lVar2 + 0x2e0);
    }
    fVar5 = fVar5 + fVar4;
    this[0xb0] = (PlantVamporcini)0x0;
    *(float *)(this + 0x30) = fVar5;
  }
  fVar4 = (float)PVZ_T();
  if (fVar4 < fVar5) {
    this[0xd0] = (PlantVamporcini)0x1;
  }
  fVar5 = (float)PVZ_T();
  if ((fVar5 <= *(float *)(this + 0x30)) || (this[0xd0] == (PlantVamporcini)0x0)) {
    fVar5 = (float)PVZ_T();
    if ((*(float *)(this + 0x30) < fVar5) &&
       (fVar5 = (float)Plant::GetMaxHealth(*(Plant **)(this + 0x10)),
       (int)fVar5 != (int)*(float *)(this + 0x44))) {
      SetState(this,0xb);
      return;
    }
  }
  else {
    SetState(this,0xb);
    this[0xd0] = (PlantVamporcini)0x0;
    iVar1 = FUN_04d0888c(*(undefined8 *)(this + 0x10));
    if (1 < iVar1) {
      this[0xb0] = (PlantVamporcini)0x1;
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVamporcini::UpdateActions() */

void __thiscall PlantVamporcini::UpdateActions(PlantVamporcini *this)

{
  char cVar1;
  long lVar2;
  PopAnimRig *pPVar3;
  PlantAnimRig_Vamporcini *pPVar4;
  UIEasyButtonWidget *this_00;
  float fVar5;
  float fVar6;
  float fVar7;
  RtMixedPtr aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
  cVar1 = FUN_04d088c0(*(undefined1 *)(lVar2 + 0x3b9));
  if (cVar1 == '\0') {
    pPVar3 = (PopAnimRig *)FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
    std::string::string(asStack_58,"vamp_cloak");
    PopAnimRig::SetLayerVisibility(pPVar3,asStack_58,false);
    std::string::~string(asStack_58);
    nop();
    pPVar3 = (PopAnimRig *)FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
    std::string::string(asStack_58,"vamp_customcloak_full");
    PopAnimRig::SetLayerVisibility(pPVar3,asStack_58,false);
    std::string::~string(asStack_58);
    nop();
    pPVar3 = (PopAnimRig *)FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
    std::string::string(asStack_58,"vamp_cloak_damage");
    PopAnimRig::SetLayerVisibility(pPVar3,asStack_58,false);
    std::string::~string(asStack_58);
    nop();
    pPVar3 = (PopAnimRig *)FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
    std::string::string(asStack_58,"vamp_cloak_full");
    PopAnimRig::SetLayerVisibility(pPVar3,asStack_58,false);
    std::string::~string(asStack_58);
    nop();
    pPVar3 = (PopAnimRig *)FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
    std::string::string(asStack_58,"vamp_customcloak_damage");
    PopAnimRig::SetLayerVisibility(pPVar3,asStack_58,false);
    std::string::~string(asStack_58);
    nop();
  }
  switch(*(undefined4 *)(this + 0x2c)) {
  case 10:
    cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
    if (cVar1 != '\0') {
      calculateAttackTime(this);
    }
    break;
  case 0xb:
    fVar5 = (float)PVZ_T();
    if ((*(float *)(this + 0x30) < fVar5) &&
       (cVar1 = CalculateStealHealthTargetRect(this), cVar1 != '\0')) {
      SetState(this,0xc);
    }
    break;
  case 0xc:
    fVar6 = *(float *)(this + 0x3c);
    fVar5 = (float)PVZ_T();
    if (fVar5 < fVar6) {
      fVar5 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
      lVar2 = FUN_04d0a8d8(*(undefined8 *)(this + 0x10));
      fVar7 = *(float *)(lVar2 + 0x2cc);
      fVar6 = (float)PVZ_Dt();
      StealHealth(this,fVar5 * fVar6 * fVar7);
    }
    else {
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal((UIEasyButtonWidget *)*(Plant **)(this + 0x10));
      std::string::string(asStack_60,"attack_loop");
      cVar1 = PopAnimRig::IsAnimStringActive(pPVar3,asStack_60);
      if (cVar1 == '\0') {
        pPVar3 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        std::string::string(asStack_58,"full_loop");
        cVar1 = PopAnimRig::IsAnimStringActive(pPVar3,asStack_58);
        std::string::~string(asStack_58);
        nop();
        std::string::~string(asStack_60);
        nop();
        if (cVar1 == '\0') break;
      }
      else {
        std::string::~string(asStack_60);
        nop();
      }
      pPVar4 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,asStack_60,
                 asStack_58);
      PlantAnimRig_Vamporcini::PlayStealHealthOffAnim(pPVar4,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId((RtId *)asStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    break;
  case 0xe:
    fVar5 = (float)PVZ_T();
    if (fVar5 <= *(float *)(this + 0x3c)) break;
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_58,"full_sleep");
    cVar1 = PopAnimRig::IsAnimStringActive(pPVar3,asStack_58);
    std::string::~string(asStack_58);
    nop();
    if (cVar1 == '\0') {
      SetState(this,10);
      break;
    }
    pPVar4 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,asStack_60,
               asStack_58);
    PlantAnimRig_Vamporcini::PlayWakeupAnim
              (pPVar4,(RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
    goto LAB_04d0d264;
  case 0xf:
    fVar6 = *(float *)(this + 0xb4);
    fVar5 = (float)PVZ_T();
    if (fVar5 < fVar6) {
      this_00 = *(UIEasyButtonWidget **)(this + 0x10);
      cVar1 = FUN_04d08894(this_00);
      if ((cVar1 == '\0') || (this[0xd2] == (PlantVamporcini)0x0)) {
        pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
        std::string::string(asStack_58,"death_start");
        cVar1 = PopAnimRig::IsAnimStringActive(pPVar3,asStack_58);
        std::string::~string(asStack_58);
        nop();
        if (cVar1 != '\0') {
          pPVar4 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
          PlantAnimRig_Vamporcini::PlayDeathLoopAnim(pPVar4);
        }
      }
      else {
        pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
        std::string::string(asStack_58,"lv5_start");
        cVar1 = PopAnimRig::IsAnimStringActive(pPVar3,asStack_58);
        std::string::~string(asStack_58);
        nop();
        if (cVar1 != '\0') {
          pPVar4 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
          PlantAnimRig_Vamporcini::PlayLv5DeathLoopAnim(pPVar4);
        }
      }
      fVar5 = (float)PVZ_T();
      lVar2 = FUN_04d0a8d8(*(undefined8 *)(this + 0x10));
      *(float *)(this + 0xb8) = fVar5 + *(float *)(lVar2 + 0x2c4);
      fVar5 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
      lVar2 = FUN_04d0a8d8(*(undefined8 *)(this + 0x10));
      fVar7 = *(float *)(lVar2 + 0x2cc);
      fVar6 = (float)PVZ_Dt();
      batFly(this,fVar5 * fVar6 * fVar7);
      break;
    }
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    std::string::string(asStack_58,"death_loop");
    cVar1 = PopAnimRig::IsAnimStringActive(pPVar3,asStack_58);
    std::string::~string(asStack_58);
    nop();
    if (cVar1 == '\0') {
      pPVar3 = (PopAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      std::string::string(asStack_58,"lv5_loop");
      cVar1 = PopAnimRig::IsAnimStringActive(pPVar3,asStack_58);
      std::string::~string(asStack_58);
      nop();
      if (cVar1 == '\0') break;
      pPVar4 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c(*(undefined8 *)(this + 0x10));
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,asStack_60,
                 asStack_58);
      PlantAnimRig_Vamporcini::PlayLv5DeathOffAnim
                (pPVar4,(RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
    }
    else {
      pPVar4 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c();
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,asStack_60,
                 asStack_58);
      PlantAnimRig_Vamporcini::PlayDeathOffAnim
                (pPVar4,(RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
    }
LAB_04d0d264:
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId((RtId *)asStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  clearControl(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVamporcini::handleAnimation(DamageInfo const&) */

void PlantVamporcini::handleAnimation(DamageInfo *param_1)

{
  char cVar1;
  long lVar2;
  Shield *this;
  PlantAnimRig_Vamporcini *pPVar3;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  Plant *this_00;
  float fVar4;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(in_x8,in_x1);
  this_00 = *(Plant **)(param_1 + 0x10);
  fVar4 = (float)FUN_04d08888(*(undefined4 *)(this_00 + 0xd8));
  fVar4 = fVar4 - *(float *)(in_x8 + 8);
  if ((*(float *)(param_1 + 0xbc) < fVar4) || (fVar4 <= 0.0)) {
    if (fVar4 <= 0.0) {
      cVar1 = FUN_04d08884(this_00[0x278]);
      if (cVar1 != '\0') {
        Plant::SetIsSleepping(this_00,false,-1.0);
        this_00 = *(Plant **)(param_1 + 0x10);
      }
      cVar1 = FUN_04d08894(this_00);
      if (cVar1 == '\0') {
        if (param_1[0xa8] == (DamageInfo)0x0) {
          param_1[0xa8] = (DamageInfo)0x1;
          pPVar3 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c(this_00);
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
          std::string::string(asStack_58,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_60,asStack_58);
          PlantAnimRig_Vamporcini::PlayDeathOnAnim
                    (pPVar3,(RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50)
          ;
          goto LAB_04d0d8ec;
        }
      }
      else if (param_1[0xd1] == (DamageInfo)0x0) {
        param_1[0xd1] = (DamageInfo)0x1;
        param_1[0xd2] = (DamageInfo)0x1;
        pPVar3 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c(this_00);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,asStack_58);
        PlantAnimRig_Vamporcini::PlayLv5DeathOnAnim
                  (pPVar3,(RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
LAB_04d0d8ec:
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        SetState((PlantVamporcini *)param_1,0xf);
      }
      DamageInfo::operator=(param_1 + 0x48,in_x1);
      this_00 = *(Plant **)(param_1 + 0x10);
      *(undefined4 *)(in_x8 + 8) = 0;
    }
  }
  else {
    lVar2 = FUN_04d0ac0c(this_00);
    cVar1 = FUN_04d088bc(*(undefined1 *)(lVar2 + 0x3b8));
    if (cVar1 == '\0') {
      lVar2 = FUN_04d0ac0c(*(undefined8 *)(param_1 + 0x10));
      cVar1 = FUN_04d088c0(*(undefined1 *)(lVar2 + 0x3b9));
      goto joined_r0x04d0d6f0;
    }
    lVar2 = FUN_04d0ac0c(*(undefined8 *)(param_1 + 0x10));
    FUN_04d088b4(lVar2 + 0x3b8,0);
    pPVar3 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c(*(undefined8 *)(param_1 + 0x10));
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    PlantAnimRig_Vamporcini::PlayContract(pPVar3,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    this_00 = *(Plant **)(param_1 + 0x10);
  }
  lVar2 = FUN_04d0ac0c(this_00);
  cVar1 = FUN_04d088c0(*(undefined1 *)(lVar2 + 0x3b9));
joined_r0x04d0d6f0:
  if (cVar1 != '\0') {
    this = (Shield *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xd8));
    cVar1 = Shield::hasShield(this);
    if (cVar1 == '\0') {
      param_1[0x38] = (DamageInfo)0x0;
      pPVar3 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c(*(undefined8 *)(param_1 + 0x10));
      PlantAnimRig_Vamporcini::SetShield(pPVar3,false);
      pPVar3 = (PlantAnimRig_Vamporcini *)FUN_04d0ac0c(*(undefined8 *)(param_1 + 0x10));
      PlantAnimRig_Vamporcini::PlayPFIdleAnim(pPVar3);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantVamporcini::TakeDamage(DamageInfo const&) */

void PlantVamporcini::TakeDamage(DamageInfo *param_1)

{
  char cVar1;
  Shield *this;
  long in_x1;
  DamageInfo *pDVar2;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (Shield *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xd8))
  ;
  cVar1 = Shield::hasShield(this);
  if (cVar1 == '\0') {
                    /* WARNING: Load size is inaccurate */
    pDVar2._0_4_ = *(DamageInfo **)(in_x1 + 8);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo(pDVar2._0_4_,local_70,local_6c,aDStack_68,aPStack_78,0);
    handleAnimation(param_1);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  else {
    pDVar2 = (DamageInfo *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xd8));
    Shield::ReduceDamage(pDVar2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

