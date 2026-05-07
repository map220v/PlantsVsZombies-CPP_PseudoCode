// Class: GridItemHeianBoxLevelUp


/* GridItemHeianBoxLevelUp::~GridItemHeianBoxLevelUp() */

void __thiscall GridItemHeianBoxLevelUp::~GridItemHeianBoxLevelUp(GridItemHeianBoxLevelUp *this)

{
  *(undefined ***)this = &PTR_GetClass_06767240;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHeianBoxLevelUp_06767510;
  GridItemHeianBox::~GridItemHeianBox((GridItemHeianBox *)this);
  return;
}


/* non-virtual thunk to GridItemHeianBoxLevelUp::~GridItemHeianBoxLevelUp() */

void __thiscall GridItemHeianBoxLevelUp::~GridItemHeianBoxLevelUp(GridItemHeianBoxLevelUp *this)

{
  ~GridItemHeianBoxLevelUp(this + -0x10);
  return;
}


/* GridItemHeianBoxLevelUp::~GridItemHeianBoxLevelUp() */

void __thiscall GridItemHeianBoxLevelUp::~GridItemHeianBoxLevelUp(GridItemHeianBoxLevelUp *this)

{
  ~GridItemHeianBoxLevelUp(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemHeianBoxLevelUp::~GridItemHeianBoxLevelUp() */

void __thiscall GridItemHeianBoxLevelUp::~GridItemHeianBoxLevelUp(GridItemHeianBoxLevelUp *this)

{
  ~GridItemHeianBoxLevelUp(this + -0x10);
  return;
}


/* GridItemHeianBoxLevelUp::GridItemHeianBoxLevelUp() */

void __thiscall GridItemHeianBoxLevelUp::GridItemHeianBoxLevelUp(GridItemHeianBoxLevelUp *this)

{
  GridItemHeianBox::GridItemHeianBox((GridItemHeianBox *)this);
  *(undefined ***)this = &PTR_GetClass_06767240;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHeianBoxLevelUp_06767510;
  return;
}


/* GridItemHeianBoxLevelUp::StaticNew() */

GridItemHeianBoxLevelUp * GridItemHeianBoxLevelUp::StaticNew(void)

{
  GridItemHeianBoxLevelUp *this;
  
  this = ::operator_new(0x1b0);
  GridItemHeianBoxLevelUp(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxLevelUp::StaticClassInit() */

void GridItemHeianBoxLevelUp::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHeianBoxLevelUp");
    (*pcVar2)(plVar1,asStack_10,FUN_03d2ab98,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHeianBoxLevelUp::StaticGetClass() */

long * GridItemHeianBoxLevelUp::StaticGetClass(void)

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
  uVar2 = GridItemHeianBox::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHeianBoxLevelUp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeianBoxLevelUp::GetClass() const */

long * GridItemHeianBoxLevelUp::GetClass(void)

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
  uVar2 = GridItemHeianBox::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemHeianBoxLevelUp",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxLevelUp::findTargets() */

void GridItemHeianBoxLevelUp::findTargets(void)

{
  int iVar1;
  int iVar2;
  SharkMinion *in_x0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = SharkMinion::getRow(in_x0);
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)in_x0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  operator|(1,2);
  Sexy::Insets::Insets(aIStack_18,iVar2 + -1,iVar1 + -1,3,3);
  EntityFinder::GetEntitiesInGridSquares();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxLevelUp::onActivated() */

void GridItemHeianBoxLevelUp::onActivated(void)

{
  GridItemHeianBoxLevelUpAnimRig *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  if (extraout_x0 != (GridItemHeianBoxLevelUpAnimRig *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string((string *)aRStack_58,"onLevelUpBoxAnimDone");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               aRStack_58);
    GridItemHeianBoxLevelUpAnimRig::PlayBoxLevelUp(extraout_x0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)aRStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxLevelUp::levelUp() */

void GridItemHeianBoxLevelUp::levelUp(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long extraout_x0;
  long lVar4;
  undefined8 *puVar5;
  GridItemHeianBoxLevelUpProps *pGVar6;
  RtObject *this;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  findTargets();
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (!bVar2) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    this = (RtObject *)*puVar5;
    if (this != (RtObject *)0x0) {
      bVar2 = Sexy::RtObject::IsA<Plant>(this);
      if (bVar2) {
        bVar2 = Sexy::RtObject::IsA<Plant>(this);
        if (bVar2) {
LAB_03d2bf10:
          nop();
          if (extraout_x0 != 0) {
            pGVar6 = GridItem::GetProps<GridItemHeianBoxLevelUpProps>();
            Plant::GetType();
            lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
            cVar1 = StringRestrictionSet::IsIncluded
                              ((StringRestrictionSet *)(pGVar6 + 0xd8),(string *)(lVar4 + 8));
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
            if (cVar1 != '\0') goto LAB_03d2bf5c;
          }
        }
      }
      else {
        bVar2 = Sexy::RtObject::IsA<Zombie>(this);
        if (!bVar2) goto LAB_03d2bf5c;
        bVar2 = Sexy::RtObject::IsA<Plant>(this);
        if (bVar2) goto LAB_03d2bf10;
      }
      iVar3 = FUN_03d27f0c(*(undefined4 *)(this + 0x50));
      pGVar6 = GridItem::GetProps<GridItemHeianBoxLevelUpProps>();
      BoardEntity::LevelUp((BoardEntity *)this,iVar3 + *(int *)(pGVar6 + 0xd0));
    }
LAB_03d2bf5c:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  } while( true );
}


/* GridItemHeianBoxLevelUp::onLevelUpBoxAnimDone(std::string const&) */

void __thiscall
GridItemHeianBoxLevelUp::onLevelUpBoxAnimDone(GridItemHeianBoxLevelUp *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"upgrade");
  if (!bVar1) {
    return;
  }
  levelUp();
  GridItemHeianBox::setState((GridItemHeianBox *)this,4);
  return;
}

