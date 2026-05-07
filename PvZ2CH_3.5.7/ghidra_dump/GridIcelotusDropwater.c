// Class: GridIcelotusDropwater


/* GridIcelotusDropwater::CalcRenderOrder() const */

void __thiscall GridIcelotusDropwater::CalcRenderOrder(GridIcelotusDropwater *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_04ce6b84(*(undefined4 *)(this + 0x134));
  uVar2 = FUN_04ce6b80(*(undefined4 *)(this + 0x130));
  Board::MakeRenderOrder(0x61b48,uVar1,uVar2);
  return;
}


/* non-virtual thunk to GridIcelotusDropwater::CalcRenderOrder() const */

void __thiscall GridIcelotusDropwater::CalcRenderOrder(GridIcelotusDropwater *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridIcelotusDropwater::StaticClassInit() */

void GridIcelotusDropwater::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridIcelotusDropwater");
    (*pcVar2)(plVar1,asStack_10,FUN_04cea7e4,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridIcelotusDropwater::StaticGetClass() */

long * GridIcelotusDropwater::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridIcelotusDropwater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridIcelotusDropwater::GetClass() const */

long * GridIcelotusDropwater::GetClass(void)

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
  (*pcVar3)(plVar1,"GridIcelotusDropwater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridIcelotusDropwater::InitParam(bool) */

void __thiscall GridIcelotusDropwater::InitParam(GridIcelotusDropwater *this,bool param_1)

{
  PopAnimRig *pPVar1;
  char *__s;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x1b4] = (GridIcelotusDropwater)param_1;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1a8) = uVar2;
  GridItemAnimation::GetAnimRig();
  pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  if (this[0x1b4] == (GridIcelotusDropwater)0x0) {
    __s = "animation_on";
  }
  else {
    __s = "plantfood_avatar1_on";
  }
  std::string::string(asStack_58,__s);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnAnimStoppedCallback);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<GridIcelotusDropwater,void(GridIcelotusDropwater::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridIcelotusDropwater::ExtensionDuration(float) */

void __thiscall GridIcelotusDropwater::ExtensionDuration(GridIcelotusDropwater *this,float param_1)

{
  GridIcelotusDropwaterProps *pGVar1;
  float fVar2;
  
  fVar2 = *(float *)(this + 0x1ac);
  pGVar1 = GridItem::GetProps<GridIcelotusDropwaterProps>();
  *(float *)(this + 0x1ac) = fVar2 + *(float *)(pGVar1 + 0xd0) * param_1;
  return;
}


/* GridIcelotusDropwater::ExtinguishFire() */

void __thiscall GridIcelotusDropwater::ExtinguishFire(GridIcelotusDropwater *this)

{
  undefined *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  uVar1 = FUN_04ce6b80(*(undefined4 *)(this + 0x130));
  uVar2 = FUN_04ce6b84(*(undefined4 *)(this + 0x134));
  lVar5 = FUN_04ce93e4(uVar1,uVar2);
  this_00 = gMessageRouter;
  if (lVar5 != 0) {
    iVar3 = FUN_04ce6b80(*(undefined4 *)(this + 0x130));
    iVar4 = FUN_04ce6b84(*(undefined4 *)(this + 0x134));
    MessageRouter::Post<int,int,bool,int,int,bool>
              ((MessageRouter *)this_00,Message::CleanPoison,iVar3,iVar4,true);
  }
  uVar1 = FUN_04ce6b80(*(undefined4 *)(this + 0x130));
  uVar2 = FUN_04ce6b84(*(undefined4 *)(this + 0x134));
  lVar5 = FUN_04ce94c8(uVar1,uVar2);
  if (lVar5 != 0) {
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::GridItemFireCracker,false);
  }
  uVar1 = FUN_04ce6b80(*(undefined4 *)(this + 0x130));
  uVar2 = FUN_04ce6b84(*(undefined4 *)(this + 0x134));
  lVar5 = FUN_04ce95ac(uVar1,uVar2);
  if (lVar5 != 0) {
    MessageRouter::Post<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::GridItemSummerFireworks,false);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridIcelotusDropwater::OnAnimStoppedCallback(std::string const&) */

void __thiscall
GridIcelotusDropwater::OnAnimStoppedCallback(GridIcelotusDropwater *this,string *param_1)

{
  long lVar1;
  long *plVar2;
  char *__s;
  code *pcVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_05474374(param_1,&DAT_0562a560,0);
  if (lVar1 == -1) {
    lVar1 = FUN_05474374(param_1,&DAT_055abc50,0);
    if ((lVar1 == -1) && (lVar1 = FUN_05474374(param_1,&DAT_0562a570,0), lVar1 != -1)) {
      (**(code **)(*(long *)this + 0x230))(this);
    }
  }
  else {
    ExtinguishFire(this);
    GridItemAnimation::GetAnimRig();
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
    pcVar3 = *(code **)(*plVar2 + 0x78);
    if (this[0x1b4] == (GridIcelotusDropwater)0x0) {
      __s = "animation_loop";
    }
    else {
      __s = "plantfood_avatar1_loop";
    }
    std::string::string(asStack_28,__s);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    (*pcVar3)(plVar2,asStack_28,1,0,avStack_20);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
    std::string::~string(asStack_28);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
    *(undefined4 *)(this + 0x1b0) = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridIcelotusDropwater::GridIcelotusDropwater() */

void __thiscall GridIcelotusDropwater::GridIcelotusDropwater(GridIcelotusDropwater *this)

{
  undefined4 uVar1;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_069a20d0;
  *(undefined ***)(this + 0x10) = &PTR__GridIcelotusDropwater_069a2388;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1d0));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b8));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1d0));
  *(undefined4 *)(this + 0x1b0) = 0;
  this[0x1b4] = (GridIcelotusDropwater)0x0;
  *(undefined4 *)(this + 0x1ac) = 0x40a00000;
  RealObject::JoinTeam((RealObject *)this,1);
  return;
}


/* GridIcelotusDropwater::StaticNew() */

GridIcelotusDropwater * GridIcelotusDropwater::StaticNew(void)

{
  GridIcelotusDropwater *this;
  
  this = ::operator_new(0x1e8);
  GridIcelotusDropwater(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridIcelotusDropwater::Resume(bool) */

void __thiscall GridIcelotusDropwater::Resume(GridIcelotusDropwater *this,bool param_1)

{
  PopAnimRig *pPVar1;
  char *__s;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  this[0x1b4] = (GridIcelotusDropwater)param_1;
  local_8 = ___stack_chk_guard;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x1a8) = uVar2;
  if (*(int *)(this + 0x1b0) == 2) {
    *(undefined4 *)(this + 0x1b0) = 0;
    GridItemAnimation::GetAnimRig();
    pPVar1 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    if (this[0x1b4] == (GridIcelotusDropwater)0x0) {
      __s = "animation_on";
    }
    else {
      __s = "plantfood_avatar1_on";
    }
    std::string::string(asStack_58,__s);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnAnimStoppedCallback);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<GridIcelotusDropwater,void(GridIcelotusDropwater::*)(std::string_const&)>
              (aDStack_38,aCStack_50);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  }
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b8));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1d0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridIcelotusDropwater::~GridIcelotusDropwater() */

void __thiscall GridIcelotusDropwater::~GridIcelotusDropwater(GridIcelotusDropwater *this)

{
  *(undefined ***)this = &PTR_GetClass_069a20d0;
  *(undefined ***)(this + 0x10) = &PTR__GridIcelotusDropwater_069a2388;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1d0));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridIcelotusDropwater::~GridIcelotusDropwater() */

void __thiscall GridIcelotusDropwater::~GridIcelotusDropwater(GridIcelotusDropwater *this)

{
  ~GridIcelotusDropwater(this + -0x10);
  return;
}


/* GridIcelotusDropwater::~GridIcelotusDropwater() */

void __thiscall GridIcelotusDropwater::~GridIcelotusDropwater(GridIcelotusDropwater *this)

{
  ~GridIcelotusDropwater(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridIcelotusDropwater::~GridIcelotusDropwater() */

void __thiscall GridIcelotusDropwater::~GridIcelotusDropwater(GridIcelotusDropwater *this)

{
  ~GridIcelotusDropwater(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridIcelotusDropwater::DebuffZombie() */

void __thiscall GridIcelotusDropwater::DebuffZombie(GridIcelotusDropwater *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  Zombie *pZVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  Zombie *pZVar12;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = FUN_04ce6b80(*(undefined4 *)(this + 0x130));
  uVar4 = FUN_04ce6b84(*(undefined4 *)(this + 0x134));
  EntityFinder::GetEntitiesAtGridSquare(avStack_20,2,uVar3,uVar4);
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (cVar1 == '\0') {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1b8);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar2)
    {
      puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
      if ((pZVar6 == (Zombie *)0x0) ||
         (cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pZVar6),
         cVar1 != '\0')) {
        uVar7 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
        local_30 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,BoardEntity*>
                             (uVar7,uVar8,puVar5);
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_30,(__normal_iterator *)&local_28)
        ;
        if (bVar2) {
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)&local_30);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                     *)this_00,(RtWeakPtr *)&local_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
          fVar9 = *(float *)(this + 0x1ac);
          fVar11 = *(float *)(this + 0x1a8);
          fVar10 = (float)PVZ_T();
          pZVar12._0_4_ = (Zombie *)((fVar9 + fVar11) - fVar10);
          pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar5);
          if (this[0x1b4] == (GridIcelotusDropwater)0x0) {
            cVar1 = Zombie::HasCondition(pZVar6,0x33);
            if (cVar1 != '\0') {
              Zombie::EndCondition(pZVar6,0x33);
            }
            Zombie::ApplyCondition(pZVar12._0_4_,0,pZVar6,0x33,1);
          }
          else {
            cVar1 = Zombie::HasCondition(pZVar6,1);
            if (cVar1 != '\0') {
              Zombie::EndCondition(pZVar6,1);
            }
            Zombie::ApplyCondition(pZVar12._0_4_,0,pZVar6,1,1);
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridIcelotusDropwater::onGridItemInitialize() */

void __thiscall GridIcelotusDropwater::onGridItemInitialize(GridIcelotusDropwater *this)

{
  bool bVar1;
  PopAnimRig *pPVar2;
  GridIcelotusDropwaterProps *pGVar3;
  float fVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  std::string::string(asStack_10,"animation_on");
  fVar4 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  std::string::string(asStack_10,"animation_off");
  fVar5 = (float)PopAnimRig::CalcAnimLengthSeconds(pPVar2,asStack_10);
  std::string::~string(asStack_10);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  pGVar3 = GridItem::GetProps<GridIcelotusDropwaterProps>();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x1ac) = (*(float *)(pGVar3 + 0xd0) - fVar4) - fVar5;
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridIcelotusDropwater::onUpdate() */

void __thiscall GridIcelotusDropwater::onUpdate(GridIcelotusDropwater *this)

{
  char cVar1;
  PopAnimRig *pPVar2;
  char *__s;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  RtMixedPtr<Sexy::Image> aRStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  if (cVar1 == '\0') {
    if (*(int *)(this + 0x1b0) == 1) {
      DebuffZombie(this);
      cVar1 = TimeUtil::CheckTimeEclapse(*(float *)(this + 0x1ac),*(float *)(this + 0x1a8));
      if (cVar1 != '\0') {
        *(undefined4 *)(this + 0x1b0) = 2;
        GridItemAnimation::GetAnimRig();
        pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        if (this[0x1b4] == (GridIcelotusDropwater)0x0) {
          __s = "animation_off";
        }
        else {
          __s = "plantfood_avatar1_off";
        }
        std::string::string(asStack_58,__s);
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,OnAnimStoppedCallback);
        Sexy::Delegate1<std::string_const&>::
        Delegate1<GridIcelotusDropwater,void(GridIcelotusDropwater::*)(std::string_const&)>
                  (aDStack_38,aRStack_50);
        PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      }
    }
    GridItemAnimation::onUpdate((GridItemAnimation *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

