// Class: GridItemRambutanIcy


/* GridItemRambutanIcy::~GridItemRambutanIcy() */

void __thiscall GridItemRambutanIcy::~GridItemRambutanIcy(GridItemRambutanIcy *this)

{
  *(undefined ***)this = &PTR_GetClass_066b27e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRambutanIcy_066b2a98;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemRambutanIcy::~GridItemRambutanIcy() */

void __thiscall GridItemRambutanIcy::~GridItemRambutanIcy(GridItemRambutanIcy *this)

{
  ~GridItemRambutanIcy(this + -0x10);
  return;
}


/* GridItemRambutanIcy::~GridItemRambutanIcy() */

void __thiscall GridItemRambutanIcy::~GridItemRambutanIcy(GridItemRambutanIcy *this)

{
  ~GridItemRambutanIcy(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemRambutanIcy::~GridItemRambutanIcy() */

void __thiscall GridItemRambutanIcy::~GridItemRambutanIcy(GridItemRambutanIcy *this)

{
  ~GridItemRambutanIcy(this + -0x10);
  return;
}


/* GridItemRambutanIcy::CalcRenderOrder() const */

void __thiscall GridItemRambutanIcy::CalcRenderOrder(GridItemRambutanIcy *this)

{
  int iVar1;
  
  iVar1 = FUN_038a21e4(*(undefined4 *)(this + 0x134));
  Board::MakeGroundRenderOrder(iVar1,1);
  return;
}


/* non-virtual thunk to GridItemRambutanIcy::CalcRenderOrder() const */

void __thiscall GridItemRambutanIcy::CalcRenderOrder(GridItemRambutanIcy *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* GridItemRambutanIcy::GridItemRambutanIcy() */

void __thiscall GridItemRambutanIcy::GridItemRambutanIcy(GridItemRambutanIcy *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_066b27e0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemRambutanIcy_066b2a98;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  *(undefined4 *)(this + 0x1ac) = uVar1;
  return;
}


/* GridItemRambutanIcy::StaticNew() */

GridItemRambutanIcy * GridItemRambutanIcy::StaticNew(void)

{
  GridItemRambutanIcy *this;
  
  this = ::operator_new(0x1b0);
  GridItemRambutanIcy(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRambutanIcy::StaticClassInit() */

void GridItemRambutanIcy::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemRambutanIcy");
    (*pcVar2)(plVar1,asStack_10,FUN_038a51c8,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemRambutanIcy::StaticGetClass() */

long * GridItemRambutanIcy::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRambutanIcy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemRambutanIcy::GetClass() const */

long * GridItemRambutanIcy::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemRambutanIcy",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRambutanIcy::onAnimation(std::string const&) */

void __thiscall GridItemRambutanIcy::onAnimation(GridItemRambutanIcy *this,string *param_1)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"animation");
  if (bVar1) {
    GridItemAnimation::GetAnimRig();
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
    std::string::string(asStack_40,"animation2");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
    std::string::~string(asStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x1ac) = fVar3 + 5.0;
  }
  else {
    bVar1 = std::operator==(param_1,"animation3");
    if (bVar1) {
      (**(code **)(*(long *)this + 0x230))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRambutanIcy::onGridItemInitialize() */

void __thiscall GridItemRambutanIcy::onGridItemInitialize(GridItemRambutanIcy *this)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  undefined4 uVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  uVar3 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar3;
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  std::string::string(asStack_58,"animation");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAnimation);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<GridItemRambutanIcy,void(GridItemRambutanIcy::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  fVar4 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x1ac) = fVar4 + 5.0;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemRambutanIcy::onUpdate() */

void __thiscall GridItemRambutanIcy::onUpdate(GridItemRambutanIcy *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  PopAnimRig *pPVar5;
  long lVar6;
  undefined8 *puVar7;
  Zombie *pZVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 local_70;
  undefined8 local_68;
  string asStack_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  fVar11 = *(float *)(this + 0x1a8);
  fVar9 = (float)PVZ_T();
  if (fVar11 <= fVar9) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
    iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
    iVar4 = SharkMinion::getRow((SharkMinion *)this);
    Sexy::Insets::Insets((Insets *)asStack_60,iVar3,iVar4,1,1);
    uVar10 = operator|(2,4);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50,uVar10,
               (Insets *)asStack_60);
    lVar6 = FUN_038a2240(local_50,local_48);
    if (lVar6 == 0) {
      uVar10 = PVZ_T();
      *(undefined4 *)(this + 0x1a8) = uVar10;
    }
    else {
      local_70 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_50);
      local_68 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_50);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68),
            bVar2) {
        puVar7 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
        if ((((RtObject *)*puVar7 != (RtObject *)0x0) &&
            (pZVar8 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7), pZVar8 != (Zombie *)0x0))
           && (cVar1 = RealObject::IsOnOpposingTeam(pZVar8,1), cVar1 != '\0')) {
          Zombie::ApplyCondition((Zombie *)0x40a00000,0,pZVar8,0,1);
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_70);
      }
      *(float *)(this + 0x1a8) = *(float *)(this + 0x1a8) + 0.5;
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
  }
  fVar11 = *(float *)(this + 0x1ac);
  fVar9 = (float)PVZ_T();
  if (fVar11 <= fVar9) {
    GridItemAnimation::GetAnimRig();
    pPVar5 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    std::string::string(asStack_60,"animation3");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onAnimation);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<GridItemRambutanIcy,void(GridItemRambutanIcy::*)(std::string_const&)>
              (aDStack_38,(CBMemberTranslatorX *)&local_50);
    PopAnimRig::PlayAndStop(pPVar5,asStack_60,0,aDStack_38);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    uVar10 = PVZ_EOT();
    *(undefined4 *)(this + 0x1ac) = uVar10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

