// Class: GridItemHydrocotyledrummerEffect


/* GridItemHydrocotyledrummerEffect::CalcRenderOrder() const */

void __thiscall
GridItemHydrocotyledrummerEffect::CalcRenderOrder(GridItemHydrocotyledrummerEffect *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_04cd84c0(*(undefined4 *)(this + 0x134));
  uVar2 = FUN_04cd84bc(*(undefined4 *)(this + 0x130));
  Board::MakeRenderOrder(0x64960,uVar1,uVar2);
  return;
}


/* non-virtual thunk to GridItemHydrocotyledrummerEffect::CalcRenderOrder() const */

void __thiscall
GridItemHydrocotyledrummerEffect::CalcRenderOrder(GridItemHydrocotyledrummerEffect *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHydrocotyledrummerEffect::StaticClassInit() */

void GridItemHydrocotyledrummerEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemHydrocotyledrummerEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_04cd95c8,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHydrocotyledrummerEffect::StaticGetClass() */

long * GridItemHydrocotyledrummerEffect::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemHydrocotyledrummerEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHydrocotyledrummerEffect::GetClass() const */

long * GridItemHydrocotyledrummerEffect::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemHydrocotyledrummerEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemHydrocotyledrummerEffect::Level5Cure(Plant*, bool) */

void GridItemHydrocotyledrummerEffect::Level5Cure(Plant *param_1,bool param_2)

{
  Plant *this;
  float fVar1;
  
  this = (Plant *)(ulong)param_2;
  fVar1 = (float)Plant::GetMaxHealth(this);
  (**(code **)(*(long *)this + 0x1e0))(this,(int)(fVar1 * *(float *)(param_1 + 0x1b8)),0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHydrocotyledrummerEffect::OnPlantDestroyed(Plant*) */

void __thiscall
GridItemHydrocotyledrummerEffect::OnPlantDestroyed
          (GridItemHydrocotyledrummerEffect *this,Plant *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BoardTransforms *this_00;
  TPoint aTStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
  iVar2 = FUN_04cd84bc(*(undefined4 *)(this + 0x130));
  iVar3 = FUN_04cd84c0(*(undefined4 *)(this + 0x134));
  Sexy::Point::Point(aPStack_10,iVar2,iVar3);
  cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)aPStack_10,aTStack_18);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x230))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHydrocotyledrummerEffect::StartEffect(int, float, bool) */

void GridItemHydrocotyledrummerEffect::StartEffect(int param_1,float param_2,bool param_3)

{
  ulong uVar1;
  float fVar2;
  
  uVar1 = (ulong)(uint)param_1;
  fVar2 = (float)PVZ_T();
  *(float *)(uVar1 + 0x1ac) = fVar2 + param_2;
  Sexy::OutputDebugStrF
            ((wchar_t *)"StartEffect duration = %f m_effectEndTime = %f",(double)param_2,
             (double)(fVar2 + param_2));
  *(undefined4 *)(uVar1 + 0x1a8) = 0;
  *(uint *)(uVar1 + 0x1bc) = (uint)param_3;
  return;
}


/* GridItemHydrocotyledrummerEffect::StartHealEffect(float, float, bool) */

void GridItemHydrocotyledrummerEffect::StartHealEffect(float param_1,float param_2,bool param_3)

{
  ulong uVar1;
  float fVar2;
  
  uVar1 = (ulong)param_3;
  *(float *)(uVar1 + 0x1b8) = param_1;
  *(undefined1 *)(uVar1 + 0x1c0) = 1;
  *(float *)(uVar1 + 0x1b0) = param_2;
  fVar2 = (float)PVZ_T();
  *(float *)(uVar1 + 0x1b4) = fVar2 + param_2;
  Sexy::OutputDebugStrF
            ((wchar_t *)"StartHealEffect duration = %f m_healEndTime = %f",(double)param_2,
             (double)(fVar2 + param_2));
  *(undefined4 *)(uVar1 + 0x1a8) = 0;
  *(undefined1 *)(uVar1 + 0x1d5) = 0;
  return;
}


/* GridItemHydrocotyledrummerEffect::GridItemHydrocotyledrummerEffect() */

void __thiscall
GridItemHydrocotyledrummerEffect::GridItemHydrocotyledrummerEffect
          (GridItemHydrocotyledrummerEffect *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_0699ff40;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHydrocotyledrummerEffect_069a01f8;
  Set8BytesTo0(this + 0x1c8);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantDestroyed);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<GridItemHydrocotyledrummerEffect,void(GridItemHydrocotyledrummerEffect::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDestroyed,&local_40);
  return;
}


/* GridItemHydrocotyledrummerEffect::StaticNew() */

GridItemHydrocotyledrummerEffect * GridItemHydrocotyledrummerEffect::StaticNew(void)

{
  GridItemHydrocotyledrummerEffect *this;
  
  this = ::operator_new(0x1d8);
  GridItemHydrocotyledrummerEffect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHydrocotyledrummerEffect::FindPlant(int, int) */

void __thiscall
GridItemHydrocotyledrummerEffect::FindPlant
          (GridItemHydrocotyledrummerEffect *this,int param_1,int param_2)

{
  bool bVar1;
  long lVar2;
  long extraout_x0;
  long lVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,param_1,
             param_2);
  lVar2 = FUN_04cd8830(local_20,local_18);
  lVar3 = 0;
  if (lVar2 != 0) {
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      nop();
      lVar3 = extraout_x0;
      if (extraout_x0 != 0) goto LAB_04cdbc28;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    lVar3 = 0;
  }
LAB_04cdbc28:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHydrocotyledrummerEffect::OnAnimStoppedCallback(std::string const&) */

void __thiscall
GridItemHydrocotyledrummerEffect::OnAnimStoppedCallback
          (GridItemHydrocotyledrummerEffect *this,string *param_1)

{
  string *psVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  PopAnimRig *pPVar7;
  long lVar8;
  long *plVar9;
  char *__s;
  size_t in_x2;
  code *pcVar10;
  float fVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  string asStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar6 = FUN_0547429c(param_1);
  Sexy::OutputDebugStrF((wchar_t *)"OnAnimStoppedCallback %s",uVar6);
  bVar2 = std::operator==(param_1,"attack5");
  if (!bVar2) {
    bVar2 = std::operator==(param_1,"plantfood_music_fly");
    if (bVar2) {
      if (this[0x1c0] == (GridItemHydrocotyledrummerEffect)0x0) {
        std::string::append((string *)(this + 0x1c8),"plantfood2",in_x2);
        GridItemAnimation::GetAnimRig();
        pPVar7 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        std::operator+((string *)(this + 0x1c8),"_on");
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,OnAnimStoppedCallback);
        Sexy::Delegate1<std::string_const&>::
        Delegate1<GridItemHydrocotyledrummerEffect,void(GridItemHydrocotyledrummerEffect::*)(std::string_const&)>
                  (aDStack_38,asStack_50);
        PopAnimRig::PlayAndStop(pPVar7,asStack_58,0,aDStack_38);
        std::string::~string(asStack_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
        Sexy::OutputDebugStrF((wchar_t *)"OnAnimStoppedCallback 5");
      }
      else {
        GridItemAnimation::GetAnimRig();
        pPVar7 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        std::string::string(asStack_58,"attack5");
        Sexy::
        MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                  ((ReceivedDataCallback *)this,OnAnimStoppedCallback);
        Sexy::Delegate1<std::string_const&>::
        Delegate1<GridItemHydrocotyledrummerEffect,void(GridItemHydrocotyledrummerEffect::*)(std::string_const&)>
                  (aDStack_38,asStack_50);
        PopAnimRig::PlayAndStop(pPVar7,asStack_58,0,aDStack_38);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
        iVar4 = FUN_04cd84bc(*(undefined4 *)(this + 0x130));
        iVar5 = FUN_04cd84c0(*(undefined4 *)(this + 0x134));
        lVar8 = FindPlant(this,iVar4,iVar5);
        if (lVar8 != 0) {
          Level5Cure((Plant *)this,SUB81(lVar8,0));
        }
        Sexy::OutputDebugStrF((wchar_t *)"OnAnimStoppedCallback 4");
      }
    }
    else {
      psVar1 = (string *)(this + 0x1c8);
      std::operator+(psVar1,"_on");
      cVar3 = std::operator==(param_1,asStack_50);
      std::string::~string(asStack_50);
      if (cVar3 == '\0') {
        std::operator+(psVar1,"_off");
        cVar3 = std::operator==(param_1,asStack_50);
        std::string::~string(asStack_50);
        if (cVar3 != '\0') {
          if (this[0x1c0] == (GridItemHydrocotyledrummerEffect)0x0) {
            *(undefined4 *)(this + 0x1a8) = 4;
            Sexy::OutputDebugStrF((wchar_t *)"OnAnimStoppedCallback 8");
          }
          else {
            GridItemAnimation::GetAnimRig();
            plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
            pcVar10 = *(code **)(*plVar9 + 0x78);
            std::string::string(asStack_58,"hide");
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_50);
            (*pcVar10)(plVar9,asStack_58,1,0,asStack_50);
            std::vector<int,std::allocator<int>>::~vector
                      ((vector<int,std::allocator<int>> *)asStack_50);
            std::string::~string(asStack_58);
            nop();
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
            Sexy::OutputDebugStrF((wchar_t *)"OnAnimStoppedCallback 7");
          }
        }
      }
      else {
        GridItemAnimation::GetAnimRig();
        plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        pcVar10 = *(code **)(*plVar9 + 0x78);
        std::operator+(psVar1,"_loop");
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_50);
        (*pcVar10)(plVar9,asStack_58,1,0,asStack_50);
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_50)
        ;
        std::string::~string(asStack_58);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
        Sexy::OutputDebugStrF((wchar_t *)"OnAnimStoppedCallback 6");
      }
    }
    goto LAB_04cdbea8;
  }
  fVar11 = (float)PVZ_T();
  if (*(float *)(this + 0x1ac) <= fVar11) {
    GridItemAnimation::GetAnimRig();
    plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    pcVar10 = *(code **)(*plVar9 + 0x78);
    std::string::string(asStack_58,"hide");
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_50);
    (*pcVar10)(plVar9,asStack_58,1,0,
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_50);
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)asStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    Sexy::OutputDebugStrF((wchar_t *)"OnAnimStoppedCallback 3");
    goto LAB_04cdbea8;
  }
  if (*(int *)(this + 0x1bc) != 0) {
    if (*(int *)(this + 0x1bc) == 1) {
      std::string::append((string *)(this + 0x1c8),"plantfood2",in_x2);
      GridItemAnimation::GetAnimRig();
      pPVar7 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
      std::operator+((string *)(this + 0x1c8),"_on");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnAnimStoppedCallback);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<GridItemHydrocotyledrummerEffect,void(GridItemHydrocotyledrummerEffect::*)(std::string_const&)>
                (aDStack_38,asStack_50);
      PopAnimRig::PlayAndStop(pPVar7,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      Sexy::OutputDebugStrF((wchar_t *)"OnAnimStoppedCallback 2");
    }
    goto LAB_04cdbea8;
  }
  iVar4 = *(int *)(this + 0x1d0);
  if (iVar4 == 1) {
    if (this[0x1d4] == (GridItemHydrocotyledrummerEffect)0x0) {
      __s = "attack1";
    }
    else {
      __s = "attack1_strong";
    }
LAB_04cdbd08:
    std::string::append((string *)(this + 0x1c8),__s,in_x2);
  }
  else {
    if (iVar4 == 2) {
      if (this[0x1d4] == (GridItemHydrocotyledrummerEffect)0x0) {
        __s = "attack2";
      }
      else {
        __s = "attack2_strong";
      }
      goto LAB_04cdbd08;
    }
    if (2 < iVar4) {
      if (this[0x1d4] == (GridItemHydrocotyledrummerEffect)0x0) {
        __s = "attack3";
      }
      else {
        __s = "attack3_strong";
      }
      goto LAB_04cdbd08;
    }
  }
  GridItemAnimation::GetAnimRig();
  pPVar7 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
  std::operator+((string *)(this + 0x1c8),"_on");
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnAnimStoppedCallback);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<GridItemHydrocotyledrummerEffect,void(GridItemHydrocotyledrummerEffect::*)(std::string_const&)>
            (aDStack_38,asStack_50);
  PopAnimRig::PlayAndStop(pPVar7,asStack_58,0,aDStack_38);
  std::string::~string(asStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  Sexy::OutputDebugStrF((wchar_t *)"OnAnimStoppedCallback 1");
LAB_04cdbea8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemHydrocotyledrummerEffect::~GridItemHydrocotyledrummerEffect() */

void __thiscall
GridItemHydrocotyledrummerEffect::~GridItemHydrocotyledrummerEffect
          (GridItemHydrocotyledrummerEffect *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  *(undefined ***)this = &PTR_GetClass_0699ff40;
  *(undefined ***)(this + 0x10) = &PTR__GridItemHydrocotyledrummerEffect_069a01f8;
  GridItem::KillGridItem((GridItem *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantDestroyed);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Unsubscribe<Plant*,Sexy::CBMemberTranslatorX<GridItemHydrocotyledrummerEffect,void(GridItemHydrocotyledrummerEffect::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDestroyed,&local_40);
  std::string::~string((string *)(this + 0x1c8));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to GridItemHydrocotyledrummerEffect::~GridItemHydrocotyledrummerEffect() */

void __thiscall
GridItemHydrocotyledrummerEffect::~GridItemHydrocotyledrummerEffect
          (GridItemHydrocotyledrummerEffect *this)

{
  ~GridItemHydrocotyledrummerEffect(this + -0x10);
  return;
}


/* GridItemHydrocotyledrummerEffect::~GridItemHydrocotyledrummerEffect() */

void __thiscall
GridItemHydrocotyledrummerEffect::~GridItemHydrocotyledrummerEffect
          (GridItemHydrocotyledrummerEffect *this)

{
  ~GridItemHydrocotyledrummerEffect(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemHydrocotyledrummerEffect::~GridItemHydrocotyledrummerEffect() */

void __thiscall
GridItemHydrocotyledrummerEffect::~GridItemHydrocotyledrummerEffect
          (GridItemHydrocotyledrummerEffect *this)

{
  ~GridItemHydrocotyledrummerEffect(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHydrocotyledrummerEffect::onGridItemInitialize() */

void __thiscall
GridItemHydrocotyledrummerEffect::onGridItemInitialize(GridItemHydrocotyledrummerEffect *this)

{
  uint uVar1;
  ulong __n;
  undefined4 uVar2;
  
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  uVar2 = PVZ_EOT();
  this[0x1c0] = (GridItemHydrocotyledrummerEffect)0x0;
  uVar1 = _FUN_04cdd998;
  __n = (ulong)_FUN_04cdd998;
  *(undefined4 *)(this + 0x1ac) = uVar2;
  *(undefined4 *)(this + 0x1b0) = 0x41700000;
  *(uint *)(this + 0x1b8) = uVar1;
  *(undefined4 *)(this + 0x1b4) = uVar2;
  std::string::append((string *)(this + 0x1c8),"",__n);
  *(undefined4 *)(this + 0x1d0) = 0;
  this[0x1d4] = (GridItemHydrocotyledrummerEffect)0x1;
  this[0x1d5] = (GridItemHydrocotyledrummerEffect)0x0;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemHydrocotyledrummerEffect::onUpdate() */

void __thiscall GridItemHydrocotyledrummerEffect::onUpdate(GridItemHydrocotyledrummerEffect *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  PopAnimRig *pPVar4;
  long lVar5;
  char *__s;
  size_t in_x2;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  string asStack_58 [8];
  RtMixedPtr<Sexy::Image> aRStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::GetAnimRig();
  cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
  if (cVar1 != '\0') goto LAB_04cdda10;
  iVar2 = *(int *)(this + 0x1a8);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      if (this[0x1c0] == (GridItemHydrocotyledrummerEffect)0x0) {
        fVar6 = (float)PVZ_T();
        Sexy::OutputDebugStrF
                  ((wchar_t *)"onUpdate Effect_State_Update time = %f endTime = %f",(double)fVar6,
                   (double)*(float *)(this + 0x1ac));
        fVar6 = (float)PVZ_T();
        if (*(float *)(this + 0x1ac) < fVar6) {
          GridItemAnimation::GetAnimRig();
          pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
          std::operator+((string *)(this + 0x1c8),"_off");
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,OnAnimStoppedCallback);
          Sexy::Delegate1<std::string_const&>::
          Delegate1<GridItemHydrocotyledrummerEffect,void(GridItemHydrocotyledrummerEffect::*)(std::string_const&)>
                    (aDStack_38,aRStack_50);
          PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_38);
          std::string::~string(asStack_58);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
          Sexy::OutputDebugStrF((wchar_t *)"onUpdate 7");
          *(undefined4 *)(this + 0x1a8) = 2;
        }
      }
      else {
        fVar6 = (float)PVZ_T();
        if (*(float *)(this + 0x1b4) < fVar6) {
          GridItem::GetGridLocation();
          cVar1 = CheckAroundHydrocotyledrummer(aRStack_50);
          if (cVar1 == '\0') {
            (**(code **)(*(long *)this + 0x230))(this);
            goto LAB_04cdda10;
          }
          fVar6 = (float)PVZ_T();
          *(float *)(this + 0x1b4) = fVar6 + *(float *)(this + 0x1b0);
          GridItemAnimation::GetAnimRig();
          pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
          std::string::string(asStack_58,"attack5");
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,OnAnimStoppedCallback);
          Sexy::Delegate1<std::string_const&>::
          Delegate1<GridItemHydrocotyledrummerEffect,void(GridItemHydrocotyledrummerEffect::*)(std::string_const&)>
                    (aDStack_38,aRStack_50);
          PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_38);
          std::string::~string(asStack_58);
          nop();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
          iVar2 = FUN_04cd84bc(*(undefined4 *)(this + 0x130));
          iVar3 = FUN_04cd84c0(*(undefined4 *)(this + 0x134));
          lVar5 = FindPlant(this,iVar2,iVar3);
          if (lVar5 != 0) {
            Level5Cure((Plant *)this,SUB81(lVar5,0));
          }
          Sexy::OutputDebugStrF((wchar_t *)"onUpdate 5");
        }
        fVar6 = (float)PVZ_T();
        if ((*(float *)(this + 0x1ac) < fVar6) &&
           (this[0x1d5] == (GridItemHydrocotyledrummerEffect)0x0)) {
          GridItemAnimation::GetAnimRig();
          pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
          std::operator+((string *)(this + 0x1c8),"_off");
          Sexy::
          MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                    ((ReceivedDataCallback *)this,OnAnimStoppedCallback);
          Sexy::Delegate1<std::string_const&>::
          Delegate1<GridItemHydrocotyledrummerEffect,void(GridItemHydrocotyledrummerEffect::*)(std::string_const&)>
                    (aDStack_38,aRStack_50);
          PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_38);
          std::string::~string(asStack_58);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
          Sexy::OutputDebugStrF((wchar_t *)"onUpdate 6");
          this[0x1d5] = (GridItemHydrocotyledrummerEffect)0x1;
        }
      }
    }
    else if (iVar2 == 4) {
      (**(code **)(*(long *)this + 0x230))(this);
      Sexy::OutputDebugStrF((wchar_t *)"onUpdate 8");
    }
    GridItemAnimation::onUpdate((GridItemAnimation *)this);
    goto LAB_04cdda10;
  }
  if (this[0x1c0] == (GridItemHydrocotyledrummerEffect)0x0) {
    if (*(int *)(this + 0x1bc) == 0) {
      iVar2 = *(int *)(this + 0x1d0);
      if (iVar2 == 1) {
        if (this[0x1d4] == (GridItemHydrocotyledrummerEffect)0x0) {
          __s = "attack1";
        }
        else {
          __s = "attack1_strong";
        }
LAB_04cdde98:
        std::string::append((string *)(this + 0x1c8),__s,in_x2);
      }
      else {
        if (iVar2 == 2) {
          if (this[0x1d4] == (GridItemHydrocotyledrummerEffect)0x0) {
            __s = "attack2";
          }
          else {
            __s = "attack2_strong";
          }
          goto LAB_04cdde98;
        }
        if (2 < iVar2) {
          if (this[0x1d4] == (GridItemHydrocotyledrummerEffect)0x0) {
            __s = "attack3";
          }
          else {
            __s = "attack3_strong";
          }
          goto LAB_04cdde98;
        }
      }
      GridItemAnimation::GetAnimRig();
      pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
      std::operator+((string *)(this + 0x1c8),"_on");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnAnimStoppedCallback);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<GridItemHydrocotyledrummerEffect,void(GridItemHydrocotyledrummerEffect::*)(std::string_const&)>
                (aDStack_38,aRStack_50);
      PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      Sexy::OutputDebugStrF((wchar_t *)"onUpdate 3");
    }
    else if (*(int *)(this + 0x1bc) == 1) {
      GridItemAnimation::GetAnimRig();
      pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
      std::string::string(asStack_58,"plantfood_music_fly");
      Sexy::
      MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
                ((ReceivedDataCallback *)this,OnAnimStoppedCallback);
      Sexy::Delegate1<std::string_const&>::
      Delegate1<GridItemHydrocotyledrummerEffect,void(GridItemHydrocotyledrummerEffect::*)(std::string_const&)>
                (aDStack_38,aRStack_50);
      PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_38);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      Sexy::OutputDebugStrF((wchar_t *)"onUpdate 4");
    }
  }
  else if (*(int *)(this + 0x1bc) == 0) {
    GridItemAnimation::GetAnimRig();
    pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    std::string::string(asStack_58,"attack5");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnAnimStoppedCallback);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<GridItemHydrocotyledrummerEffect,void(GridItemHydrocotyledrummerEffect::*)(std::string_const&)>
              (aDStack_38,aRStack_50);
    PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    iVar2 = FUN_04cd84bc(*(undefined4 *)(this + 0x130));
    iVar3 = FUN_04cd84c0(*(undefined4 *)(this + 0x134));
    lVar5 = FindPlant(this,iVar2,iVar3);
    if (lVar5 != 0) {
      Level5Cure((Plant *)this,SUB81(lVar5,0));
    }
    Sexy::OutputDebugStrF((wchar_t *)"onUpdate 1");
  }
  else if (*(int *)(this + 0x1bc) == 1) {
    GridItemAnimation::GetAnimRig();
    pPVar4 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    std::string::string(asStack_58,"plantfood_music_fly");
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,OnAnimStoppedCallback);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<GridItemHydrocotyledrummerEffect,void(GridItemHydrocotyledrummerEffect::*)(std::string_const&)>
              (aDStack_38,aRStack_50);
    PopAnimRig::PlayAndStop(pPVar4,asStack_58,0,aDStack_38);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    Sexy::OutputDebugStrF((wchar_t *)"onUpdate 2");
  }
  *(undefined4 *)(this + 0x1a8) = 1;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
LAB_04cdda10:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

