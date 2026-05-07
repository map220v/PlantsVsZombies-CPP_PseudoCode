// Class: PlantMarigold


/* PlantMarigold::CancelPlantfood() */

void __thiscall PlantMarigold::CancelPlantfood(PlantMarigold *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  (**(code **)(**(long **)(this + 0x10) + 0x48))(*(long **)(this + 0x10));
  return;
}


/* PlantMarigold::PlantMarigold() */

void __thiscall PlantMarigold::PlantMarigold(PlantMarigold *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067bdfa0;
  return;
}


/* PlantMarigold::StaticNew() */

PlantMarigold * PlantMarigold::StaticNew(void)

{
  PlantMarigold *this;
  
  this = ::operator_new(0x28);
  PlantMarigold(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMarigold::StaticClassInit() */

void PlantMarigold::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantMarigold");
    (*pcVar2)(plVar1,asStack_10,FUN_040479cc,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantMarigold::StaticGetClass() */

long * PlantMarigold::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantMarigold",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMarigold::GetClass() const */

long * PlantMarigold::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantMarigold",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantMarigold::PutToSleep() */

void __thiscall PlantMarigold::PutToSleep(PlantMarigold *this)

{
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  return;
}


/* PlantMarigold::isAsleep() const */

bool __thiscall PlantMarigold::isAsleep(PlantMarigold *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) - 10U < 2;
}


/* PlantMarigold::~PlantMarigold() */

void __thiscall PlantMarigold::~PlantMarigold(PlantMarigold *this)

{
  *(undefined ***)this = &PTR_GetClass_067bdfa0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantMarigold::~PlantMarigold() */

void __thiscall PlantMarigold::~PlantMarigold(PlantMarigold *this)

{
  ~PlantMarigold(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMarigold::Initialize() */

void __thiscall PlantMarigold::Initialize(PlantMarigold *this)

{
  MarigoldGameSystem *pMVar1;
  code *pcVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  fVar3 = *(float *)(*(long *)(this + 0x10) + 0xc0);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)(*(long *)(this + 0x10) + 0xb4),fVar3 * 0.125,fVar3 * 0.5);
  pMVar1 = Board::GetGameSubSystem<MarigoldGameSystem>(*(Board **)(gLawnApp + 0x9f0));
  pcVar2 = *(code **)(*(long *)pMVar1 + 0x88);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  (*pcVar2)(pMVar1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMarigold::ProduceSun(PlantAction const&) */

void __thiscall PlantMarigold::ProduceSun(PlantMarigold *this,PlantAction *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  MarigoldGameSystem *pMVar3;
  SexyVector3 *pSVar4;
  string asStack_20 [8];
  float local_18;
  undefined4 uStack_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  local_18 = (float)*puVar2;
  pSVar4 = *(SexyVector3 **)(gLawnApp + 0x9f0);
  local_10 = *(float *)(puVar2 + 1) - *(float *)(param_1 + 0x6c);
  _local_18 = CONCAT44((int)((ulong)*puVar2 >> 0x20),*(float *)(param_1 + 0x68) + local_18);
  std::string::string(asStack_20,"coin_silver");
  Board::AddCoin(pSVar4,(string *)&local_18);
  std::string::~string(asStack_20);
  nop();
  pMVar3 = Board::GetGameSubSystem<MarigoldGameSystem>(*(Board **)(gLawnApp + 0x9f0));
  uVar1 = CollectableCure::GetCureValue();
  FUN_040472c8(pMVar3 + 0x10,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMarigold::UpdateActions() */

void __thiscall PlantMarigold::UpdateActions(PlantMarigold *this)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  MarigoldGameSystem *pMVar4;
  long lVar5;
  RealObject *this_00;
  float fVar6;
  string asStack_10 [8];
  long local_8;
  
  lVar5 = *(long *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(lVar5 + 200) == 4) {
    fVar6 = (float)PVZ_T();
    if (*(float *)(*(long *)(this + 0x10) + 300) < fVar6) {
      pMVar4 = Board::GetGameSubSystem<MarigoldGameSystem>(*(Board **)(gLawnApp + 0x9f0));
      bVar1 = FUN_040472d8(*(undefined4 *)(pMVar4 + 0x10),*(undefined4 *)(pMVar4 + 0x14));
      bVar2 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0));
      if (bVar2 < bVar1) {
        plVar3 = (long *)FUN_04048178(*(undefined8 *)(this + 0x10));
        (**(code **)(*plVar3 + 600))();
        this_00 = *(RealObject **)(this + 0x10);
        std::string::string(asStack_10,"Play_Plant_Marigold_Attack");
        RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
        std::string::~string(asStack_10);
        nop();
      }
      Plant::ResetLaunchTimer(*(Plant **)(this + 0x10),false);
      if (bVar1 == 0) {
        *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
      }
    }
  }
  else if (*(int *)(lVar5 + 200) == 10) {
    *(undefined4 *)(lVar5 + 200) = 0xb;
    plVar3 = (long *)FUN_04048178(lVar5);
    (**(code **)(*plVar3 + 0x260))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantMarigold::ApplyPlantfood() */

void __thiscall PlantMarigold::ApplyPlantfood(PlantMarigold *this)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  long *plVar5;
  AnimationController *pAVar6;
  undefined4 *puVar7;
  AnimationMgr *this_00;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  lVar8 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar8 + 200) = 5;
  lVar8 = FUN_04048350(lVar8);
  iVar2 = *(int *)(lVar8 + 0x2b8);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar12 = *pfVar4;
  Plant::GetProps();
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
  lVar8 = FUN_040472f4(*(undefined8 *)(lVar8 + 0x70));
  fVar9 = *(float *)(lVar8 + 0x68);
  lVar8 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          **)(this + 0x10));
  fVar11 = *(float *)(lVar8 + 4);
  Plant::GetProps();
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
  lVar8 = FUN_040472f4(*(undefined8 *)(lVar8 + 0x70));
  EATextSquish::Vec3::Vec3((Vec3 *)&local_30,fVar12 + fVar9,fVar11,*(float *)(lVar8 + 0x6c));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  FUN_040483c0(iVar2,(RtWeakPtr<Sexy::ResourceInfo> *)local_20);
  Plant::GetProps();
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
  uVar3 = *(undefined4 *)(lVar8 + 0x3c);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  plVar5 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  fVar9 = (float)(**(code **)(*plVar5 + 0x1b8))(plVar5,uVar3);
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                    ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
  fVar11 = (float)FUN_040472c4(*(undefined4 *)(lVar8 + 0x10));
  if (0 < iVar2) {
    fVar12 = 0.3;
    lVar8 = 0;
    do {
      pAVar6 = (AnimationController *)FUN_040474dc();
      lVar1 = lVar8 + 1;
      puVar7 = (undefined4 *)FUN_040472e8(local_20[0],lVar8);
      FUN_040473d0(local_30,local_2c,local_28,*puVar7,puVar7[1],puVar7[2],pAVar6);
      this_00 = (AnimationMgr *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(*(long *)(gLawnApp + 0x9f0) + 0x898));
      fVar10 = fVar12 + fVar11;
      fVar12 = fVar12 + (fVar9 / (float)iVar2) * 0.5;
      AnimationMgr::Add(this_00,pAVar6,fVar10);
      lVar8 = lVar1;
    } while ((int)lVar1 < iVar2);
  }
  std::vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>>::~vector
            ((vector<Sexy::SexyVector3,std::allocator<Sexy::SexyVector3>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

