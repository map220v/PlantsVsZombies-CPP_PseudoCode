// Class: GridItemHeianBoxSun


/* GridItemHeianBoxSun::~GridItemHeianBoxSun() */

void __thiscall GridItemHeianBoxSun::~GridItemHeianBoxSun(GridItemHeianBoxSun *this)

{
  *(undefined ***)this = &PTR_GetClass_06766820;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHeianBoxSun_06766af0;
  GridItemHeianBox::~GridItemHeianBox((GridItemHeianBox *)this);
  return;
}


/* non-virtual thunk to GridItemHeianBoxSun::~GridItemHeianBoxSun() */

void __thiscall GridItemHeianBoxSun::~GridItemHeianBoxSun(GridItemHeianBoxSun *this)

{
  ~GridItemHeianBoxSun(this + -0x10);
  return;
}


/* GridItemHeianBoxSun::~GridItemHeianBoxSun() */

void __thiscall GridItemHeianBoxSun::~GridItemHeianBoxSun(GridItemHeianBoxSun *this)

{
  ~GridItemHeianBoxSun(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemHeianBoxSun::~GridItemHeianBoxSun() */

void __thiscall GridItemHeianBoxSun::~GridItemHeianBoxSun(GridItemHeianBoxSun *this)

{
  ~GridItemHeianBoxSun(this + -0x10);
  return;
}


/* GridItemHeianBoxSun::GridItemHeianBoxSun() */

void __thiscall GridItemHeianBoxSun::GridItemHeianBoxSun(GridItemHeianBoxSun *this)

{
  GridItemHeianBox::GridItemHeianBox((GridItemHeianBox *)this);
  *(undefined ***)this = &PTR_GetClass_06766820;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHeianBoxSun_06766af0;
  return;
}


/* GridItemHeianBoxSun::StaticNew() */

GridItemHeianBoxSun * GridItemHeianBoxSun::StaticNew(void)

{
  GridItemHeianBoxSun *this;
  
  this = ::operator_new(0x1b0);
  GridItemHeianBoxSun(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxSun::StaticClassInit() */

void GridItemHeianBoxSun::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHeianBoxSun");
    (*pcVar2)(plVar1,asStack_10,FUN_03d2a760,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHeianBoxSun::StaticGetClass() */

long * GridItemHeianBoxSun::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemHeianBoxSun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHeianBoxSun::GetClass() const */

long * GridItemHeianBoxSun::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemHeianBoxSun",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHeianBoxSun::onActivated() */

void GridItemHeianBoxSun::onActivated(void)

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
    std::string::string((string *)aRStack_58,"onSunBoxAnimDone");
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
/* GridItemHeianBoxSun::collecting() */

void __thiscall GridItemHeianBoxSun::collecting(GridItemHeianBoxSun *this)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  SexyVector3 *pSVar5;
  GridItemHeianBoxSunProps *pGVar6;
  Board *this_00;
  RtObject *this_01;
  int iVar7;
  undefined8 local_38;
  undefined8 local_30;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar7 = 0;
  ZombiePVPSkill_Sleep::findSleepTargets();
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    this_01 = (RtObject *)*puVar3;
    if ((this_01 != (RtObject *)0x0) && (bVar1 = Sexy::RtObject::IsA<Plant>(this_01), bVar1)) {
      Sexy::RtObject::Cast<Plant>(this_01);
      Plant::GetType();
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
      iVar2 = (**(code **)(*plVar4 + 0x70))(plVar4,0xfffffffe);
      iVar7 = iVar7 + iVar2;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  }
  if (0 < iVar7) {
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    pSVar5 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    pGVar6 = GridItem::GetProps<GridItemHeianBoxSunProps>();
    Board::FanOutSun(this_00,pSVar5,(int)((float)iVar7 * *(float *)(pGVar6 + 0xd0)),false,false,true
                     ,false,false);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHeianBoxSun::onSunBoxAnimDone(std::string const&) */

void __thiscall GridItemHeianBoxSun::onSunBoxAnimDone(GridItemHeianBoxSun *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"upgrade");
  if (!bVar1) {
    return;
  }
  collecting(this);
  GridItemHeianBox::setState((GridItemHeianBox *)this,4);
  return;
}

