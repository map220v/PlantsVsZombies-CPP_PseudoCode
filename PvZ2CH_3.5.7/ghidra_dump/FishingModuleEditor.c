// Class: FishingModuleEditor


/* FishingModuleEditor::ScrollTargetReached(Sexy::ScrollWidget*) */

void FishingModuleEditor::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to FishingModuleEditor::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
FishingModuleEditor::ScrollTargetReached(FishingModuleEditor *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* FishingModuleEditor::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void FishingModuleEditor::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to FishingModuleEditor::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
FishingModuleEditor::ScrollTargetInterrupted(FishingModuleEditor *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModuleEditor::GetLayoutName() */

void __thiscall FishingModuleEditor::GetLayoutName(FishingModuleEditor *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"fishingeditor.json");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModuleEditor::Draw(Sexy::Graphics*) */

void __thiscall FishingModuleEditor::Draw(FishingModuleEditor *this,Graphics *param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  for (uVar4 = 0; uVar3 = FUN_047b914c(*(undefined8 *)(this + 0x178),*(undefined8 *)(this + 0x180)),
      uVar4 < uVar3; uVar4 = uVar4 + 1) {
    Sexy::Insets::Insets((Insets *)&local_38);
    pfVar1 = (float *)FUN_047b9158(*(undefined8 *)(this + 0x178),uVar4);
    local_30 = 10;
    local_2c = 10;
    local_38 = (int)(*(float *)(this + 400) + *pfVar1);
    local_34 = (int)(*(float *)(this + 0x194) + pfVar1[1]);
    Sexy::Graphics::FillRect(param_1,(TRect *)&local_38);
    pfVar1 = (float *)FUN_047b9158(*(undefined8 *)(this + 0x178),uVar4);
    Sexy::StrFormat(L"%d(%d,%d)",auStack_40,uVar4,(ulong)(uint)(int)*pfVar1,
                    (ulong)(uint)(int)pfVar1[1]);
    Sexy::Insets::Insets(aIStack_28,local_38 + -10,local_34 + -0x14,200,0x14);
    uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    Sexy::Color::Color(aCStack_18,2);
    WriteWordInRect(param_1,auStack_40,aIStack_28,uVar2,aCStack_18,0,1);
    FUN_05476c50(auStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModuleEditor::InitButton(std::string const&, int) */

void __thiscall
FishingModuleEditor::InitButton(FishingModuleEditor *this,string *param_1,int param_2)

{
  long lVar1;
  PVZ2UIButton *this_00;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 local_78 [14];
  undefined4 local_40 [14];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,param_1);
  PVZ2UIButton::GetImageNormal();
  PVZ2UIButton::GetImageDown();
  local_78[0] = 2;
  local_40[0] = 2;
  PVZ2UIButton::SetDialogStates(this_00,(PVZ2UIImage *)local_78,(PVZ2UIImage *)local_40);
  pcVar3 = *(code **)(*(long *)this_00 + 800);
  uVar2 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
  (*pcVar3)(this_00,uVar2);
  *(int *)(this_00 + 0xd4) = param_2;
  lVar1 = ___stack_chk_guard;
  *(FishingModuleEditor **)(this_00 + 0x168) = this + 0xd8;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModuleEditor::GetProps() */

void FishingModuleEditor::GetProps(void)

{
  bool bVar1;
  undefined8 uVar2;
  ResourceInfo *this;
  FishingProperties *pFVar3;
  int extraout_w1;
  FishingProperties *pFVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  pFVar4 = (FishingProperties *)0x0;
  local_8 = ___stack_chk_guard;
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar2,0x25);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    this = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_38);
    pFVar3 = Sexy::RtObject::Cast<FishingProperties>((RtObject *)this);
    if (pFVar3 != (FishingProperties *)0x0) {
      pFVar4 = pFVar3;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pFVar4);
}


/* FishingModuleEditor::FishingModuleEditor() */

void __thiscall FishingModuleEditor::FishingModuleEditor(FishingModuleEditor *this)

{
  LevelModuleManager *this_00;
  FishingModule *pFVar1;
  
  UISingletonDialog<FishingModuleEditor>::UISingletonDialog
            ((UISingletonDialog<FishingModuleEditor> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_068e3910;
  *(undefined **)(this + 0xd8) = &DAT_068e3c70;
  *(undefined ***)(this + 0x138) = &PTR__FishingModuleEditor_068e3cb8;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x140));
  *(undefined4 *)(this + 0x170) = 0xffffffff;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x178));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 400));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  this_00 = (LevelModuleManager *)FUN_047b9148(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  pFVar1 = LevelModuleManager::GetModuleByClass<FishingModule>(this_00);
  if (pFVar1 != (FishingModule *)0x0) {
    FishingModule::SetFishingState(pFVar1,2);
    return;
  }
  return;
}


/* FishingModuleEditor::~FishingModuleEditor() */

void __thiscall FishingModuleEditor::~FishingModuleEditor(FishingModuleEditor *this)

{
  LevelModuleManager *this_00;
  FishingModule *pFVar1;
  
  *(undefined ***)(this + 0x138) = &PTR__FishingModuleEditor_068e3cb8;
  *(undefined ***)this = &PTR_GetClass_068e3910;
  *(undefined **)(this + 0xd8) = &DAT_068e3c70;
  this_00 = (LevelModuleManager *)FUN_047b9148(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  pFVar1 = LevelModuleManager::GetModuleByClass<FishingModule>(this_00);
  if (pFVar1 != (FishingModule *)0x0) {
    FishingModule::SetFishingState(pFVar1,0);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::~vector
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x178));
  std::
  map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
  ::~map((map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
          *)(this + 0x140));
  UISingletonDialog<FishingModuleEditor>::~UISingletonDialog
            ((UISingletonDialog<FishingModuleEditor> *)this);
  return;
}


/* non-virtual thunk to FishingModuleEditor::~FishingModuleEditor() */

void __thiscall FishingModuleEditor::~FishingModuleEditor(FishingModuleEditor *this)

{
  ~FishingModuleEditor(this + -0x138);
  return;
}


/* FishingModuleEditor::~FishingModuleEditor() */

void __thiscall FishingModuleEditor::~FishingModuleEditor(FishingModuleEditor *this)

{
  ~FishingModuleEditor(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to FishingModuleEditor::~FishingModuleEditor() */

void __thiscall FishingModuleEditor::~FishingModuleEditor(FishingModuleEditor *this)

{
  ~FishingModuleEditor(this + -0x138);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModuleEditor::SetZombieGroup(FishingZombieGroup&, std::vector<Sexy::SexyVector2,
   std::allocator<Sexy::SexyVector2> >&) */

void __thiscall
FishingModuleEditor::SetZombieGroup
          (FishingModuleEditor *this,FishingZombieGroup *param_1,vector *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  long local_8;
  
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  local_8 = ___stack_chk_guard;
  uVar1 = FUN_047b9160(uVar8,*(undefined8 *)(param_1 + 0x18));
  uVar7 = *(undefined8 *)param_2;
  uVar2 = FUN_047b914c(uVar7,*(undefined8 *)(param_2 + 8));
  uVar5 = 0;
  do {
    uVar6 = uVar5 & 0xffffffff;
    if (uVar5 == uVar1) {
LAB_047bbbdc:
      uVar5 = (long)(int)uVar5;
      while( true ) {
        if (uVar2 <= uVar5) break;
        uVar6 = (ulong)((int)uVar6 + 1);
        FishingZombieInfo::FishingZombieInfo((FishingZombieInfo *)&local_28);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)&local_28,(RtWeakPtr *)(this + 0x198));
        puVar3 = (undefined8 *)FUN_047b9158(*(undefined8 *)param_2,uVar5);
        local_20 = *puVar3;
        local_18 = 0x3f000000;
        std::vector<FishingZombieInfo,std::allocator<FishingZombieInfo>>::push_back
                  ((vector<FishingZombieInfo,std::allocator<FishingZombieInfo>> *)(param_1 + 0x10),
                   (FishingZombieInfo *)&local_28);
        std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)&local_28);
        uVar2 = FUN_047b914c(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
        uVar5 = uVar5 + 1;
      }
      uVar1 = FUN_047b9160(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      if (uVar5 < uVar1) {
        this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(param_1 + 0x10);
        local_48 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this_00);
        local_40 = __gnu_cxx::
                   __normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                   ::operator+((__normal_iterator<Sexy::StructuredData::Value*,std::vector<Sexy::StructuredData::Value,std::allocator<Sexy::StructuredData::Value>>>
                                *)&local_48,(long)(int)uVar6);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_30,(__normal_iterator *)&local_40);
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_28,(__normal_iterator *)&local_38);
        std::vector<FishingZombieInfo,std::allocator<FishingZombieInfo>>::erase
                  ((vector<FishingZombieInfo,std::allocator<FishingZombieInfo>> *)this_00,local_30,
                   local_28);
      }
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (uVar5 == uVar2) {
      uVar5 = uVar2 & 0xffffffff;
      goto LAB_047bbbdc;
    }
    lVar4 = FUN_047b916c(uVar8,uVar5);
    puVar3 = (undefined8 *)FUN_047b9158(uVar7,uVar5);
    *(undefined8 *)(lVar4 + 8) = *puVar3;
    uVar5 = uVar5 + 1;
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModuleEditor::RefreshDrawPoints() */

void __thiscall FishingModuleEditor::RefreshDrawPoints(FishingModuleEditor *this)

{
  FishingModuleEditor *pFVar1;
  map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
  *this_00;
  bool bVar2;
  ItemPanel *this_01;
  long lVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  pFVar1 = this + 0x170;
  this_00 = (map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
             *)(this + 0x140);
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::clear
            ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x178));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_10)
  ;
  *(undefined8 *)(this + 400) = local_10;
  local_18 = std::
             map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
             ::find(this_00,(int *)pFVar1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  bVar2 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  if (bVar2) {
    this_01 = (ItemPanel *)
              std::
              map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
              ::operator[](this_00,(int *)pFVar1);
    lVar3 = ItemPanel::GetSelectedItem(this_01);
    if (lVar3 != 0) {
      std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::operator=
                ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(this + 0x178),
                 (vector *)(lVar3 + 0x10));
      lVar3 = std::
              map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
              ::operator[](this_00,(int *)pFVar1);
      *(undefined8 *)(this + 400) = *(undefined8 *)(lVar3 + 0x10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModuleEditor::DeletePoint() */

void __thiscall FishingModuleEditor::DeletePoint(FishingModuleEditor *this)

{
  map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
  *this_00;
  FishingModuleEditor *pFVar1;
  char cVar2;
  ItemPanel *pIVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
             *)(this + 0x140);
  pFVar1 = this + 0x170;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
             ::find(this_00,(int *)pFVar1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  cVar2 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar2 == '\0') {
    pIVar3 = (ItemPanel *)
             std::
             map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
             ::operator[](this_00,(int *)pFVar1);
    piVar4 = (int *)ItemPanel::GetSelectedItem(pIVar3);
    if (piVar4 != (int *)0x0) {
      uVar5 = FUN_047b914c(*(undefined8 *)(piVar4 + 4),*(undefined8 *)(piVar4 + 6));
      if (uVar5 < 2) {
        pIVar3 = (ItemPanel *)
                 std::
                 map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
                 ::operator[](this_00,(int *)pFVar1);
        ItemPanel::RemoveItem(pIVar3,*piVar4,true);
        pIVar3 = (ItemPanel *)
                 std::
                 map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
                 ::operator[](this_00,(int *)pFVar1);
        ItemPanel::LayoutPanel(pIVar3);
      }
      else {
        FUN_047b91b0(piVar4 + 6);
      }
      if (local_8 == ___stack_chk_guard) {
        RefreshDrawPoints(this);
        return;
      }
      goto LAB_047bd59c;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
LAB_047bd59c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FishingModuleEditor::CheckSelectItem(int) */

undefined8 __thiscall FishingModuleEditor::CheckSelectItem(FishingModuleEditor *this,int param_1)

{
  ItemPanel *this_00;
  
  if (param_1 - 100U < 0xb54) {
    *(undefined4 *)(this + 0x170) = 1;
  }
  else {
    if (2999 < param_1 - 3000U) {
      return 0;
    }
    *(undefined4 *)(this + 0x170) = 2;
  }
  this_00 = (ItemPanel *)
            std::
            map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
            ::operator[]((map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
                          *)(this + 0x140),(int *)(this + 0x170));
  ItemPanel::SelectItem(this_00,param_1);
  RefreshDrawPoints(this);
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModuleEditor::MouseDown(int, int, int, int) */

void FishingModuleEditor::MouseDown(int param_1,int param_2,int param_3,int param_4)

{
  map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
  *this;
  FishingModuleEditor *pFVar1;
  char cVar2;
  FishingModuleEditor *this_00;
  ItemPanel *this_01;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (FishingModuleEditor *)(ulong)(uint)param_1;
  this = (map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
          *)(this_00 + 0x140);
  pFVar1 = this_00 + 0x170;
  local_8 = ___stack_chk_guard;
  local_18 = std::
             map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
             ::find(this,(int *)pFVar1);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  cVar2 = std::__exception_ptr::operator==((exception_ptr *)&local_18,(exception_ptr *)&local_10);
  if (cVar2 == '\0') {
    this_01 = (ItemPanel *)
              std::
              map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
              ::operator[](this,(int *)pFVar1);
    lVar3 = ItemPanel::GetSelectedItem(this_01);
    if (lVar3 != 0) {
      fVar6 = (float)param_3;
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,(float)param_2,fVar6);
      lVar4 = std::
              map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
              ::operator[](this,(int *)pFVar1);
      uVar5 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_10,(SexyVector2 *)(lVar4 + 0x10));
      local_18 = CONCAT44(fVar6,uVar5);
      std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
                ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(lVar3 + 0x10),
                 (SexyVector2 *)&local_18);
      RefreshDrawPoints(this_00);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModuleEditor::LoadProperty() */

void __thiscall FishingModuleEditor::LoadProperty(FishingModuleEditor *this)

{
  bool bVar1;
  string *psVar2;
  size_t __n;
  ItemPanel *pIVar3;
  FishingZombieGroup *pFVar4;
  PVZ2UIButton *pPVar5;
  undefined8 uVar6;
  FishingZombieInfo *pFVar7;
  FishingPath *pFVar8;
  int iVar9;
  ButtonListener *__n_00;
  code *pcVar10;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  FishingZombieInfo aFStack_a0 [8];
  SexyVector2 aSStack_98 [24];
  int local_80 [2];
  string asStack_78 [8];
  vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> avStack_70 [24];
  PVZ2UIButton *local_58;
  int local_50 [2];
  string asStack_48 [8];
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_40 [24];
  PVZ2UIButton *local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string((string *)local_80,"skycity");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x198),(RtWeakPtr *)local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
  std::string::~string((string *)local_80);
  nop();
  __n = GetProps();
  if (__n != 0) {
    local_50[0] = 1;
    pIVar3 = (ItemPanel *)
             std::
             map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
             ::operator[]((map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
                           *)(this + 0x140),local_50);
    iVar9 = 100;
    local_c0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(__n + 0x70));
    local_b8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(__n + 0x70));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8);
    if (bVar1) {
      do {
        pFVar4 = (FishingZombieGroup *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
        FishingZombieGroup::FishingZombieGroup((FishingZombieGroup *)local_50,pFVar4);
        ItemData::ItemData((ItemData *)local_80);
        thunk_FUN_05475e00(asStack_78,(RtWeakPtr<Sexy::ResourceInfo> *)local_50);
        local_80[0] = iVar9;
        Sexy::ToWString(asStack_78);
        Sexy::Color::Color((Color *)aFStack_a0,1);
        pPVar5 = ::operator_new(0x300);
        PVZ2UIButton::PVZ2UIButton
                  (pPVar5,local_80[0],(ButtonListener *)(this + 0xd8),(wstring *)&local_a8,
                   (Color *)aFStack_a0);
        local_58 = pPVar5;
        FUN_05476c50((__normal_iterator *)&local_a8);
        pPVar5 = local_58;
        pcVar10 = *(code **)(*(long *)local_58 + 800);
        uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
        (*pcVar10)(pPVar5,uVar6);
        thunk_FUN_05475e00(local_58 + 0xc0,asStack_78);
        local_b0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(avStack_40);
        local_a8 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(avStack_40);
        while (bVar1 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_b0,(__normal_iterator *)&local_a8),
              bVar1) {
          pFVar7 = (FishingZombieInfo *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b0);
          FishingZombieInfo::FishingZombieInfo(aFStack_a0,pFVar7);
          std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
                    (avStack_70,aSStack_98);
          std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)aFStack_a0);
          std::move_iterator<SexyURL::KeyedValue*>::operator++
                    ((move_iterator<SexyURL::KeyedValue*> *)&local_b0);
        }
        iVar9 = iVar9 + 1;
        ItemPanel::AddItem(pIVar3,(ItemData *)local_80);
        ItemData::~ItemData((ItemData *)local_80);
        FishingZombieGroup::~FishingZombieGroup((FishingZombieGroup *)local_50);
        __gnu_cxx::
        __normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
        ::operator++((__normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
                      *)&local_c0);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8)
        ;
      } while (bVar1);
    }
    std::string::append((string *)(pIVar3 + 0x50),"group",__n);
    ItemPanel::LayoutPanel(pIVar3);
    ItemPanel::RefreshIDGen(pIVar3,100);
    __n_00 = (ButtonListener *)0x2;
    local_50[0] = 2;
    pIVar3 = (ItemPanel *)
             std::
             map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
             ::operator[]((map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
                           *)(this + 0x140),local_50);
    local_b8 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(__n + 0x88));
    local_b0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(__n + 0x88));
    iVar9 = 3000;
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_b8,(__normal_iterator *)&local_b0), bVar1)
    {
      pFVar8 = (FishingPath *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_b8);
      FishingPath::FishingPath((FishingPath *)local_80,pFVar8);
      ItemData::ItemData((ItemData *)local_50);
      thunk_FUN_05475e00(asStack_48,(string *)local_80);
      local_50[0] = iVar9;
      Sexy::ToWString(asStack_48);
      Sexy::Color::Color((Color *)aFStack_a0,1);
      pPVar5 = ::operator_new(0x300);
      __n_00 = (ButtonListener *)(this + 0xd8);
      PVZ2UIButton::PVZ2UIButton
                (pPVar5,local_50[0],(ButtonListener *)(this + 0xd8),(wstring *)&local_a8,
                 (Color *)aFStack_a0);
      local_28 = pPVar5;
      FUN_05476c50((wstring *)&local_a8);
      pPVar5 = local_28;
      pcVar10 = *(code **)(*(long *)local_28 + 800);
      uVar6 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
      (*pcVar10)(pPVar5,uVar6);
      thunk_FUN_05475e00(local_28 + 0xc0,asStack_48);
      std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::operator=
                ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)avStack_40,
                 (vector *)asStack_78);
      ItemPanel::AddItem(pIVar3,(ItemData *)local_50);
      ItemData::~ItemData((ItemData *)local_50);
      FishingPath::~FishingPath((FishingPath *)local_80);
      std::move_iterator<SexyURL::KeyedValue*>::operator++
                ((move_iterator<SexyURL::KeyedValue*> *)&local_b8);
      iVar9 = iVar9 + 1;
    }
    std::string::append((string *)(pIVar3 + 0x50),"path",(size_t)__n_00);
    ItemPanel::LayoutPanel(pIVar3);
    ItemPanel::RefreshIDGen(pIVar3,3000);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModuleEditor::OnCreate() */

void __thiscall FishingModuleEditor::OnCreate(FishingModuleEditor *this)

{
  map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
  *this_00;
  PVZ2UIButton *pPVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  PVZ2UIScrollingWidget *pPVar5;
  Widget *pWVar6;
  undefined8 *puVar7;
  long lVar8;
  code *pcVar9;
  PVZ2UIButton *local_b0;
  PVZ2UIButton *local_a8;
  Insets aIStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_90 [24];
  undefined4 local_78 [14];
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
             *)(this + 0x140);
  UI::Dialog::OnCreate((Dialog *)this);
  std::string::string((string *)&local_40,"ZombieBack");
  plVar4 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  *(undefined1 *)((long)plVar4 + 0x59) = 1;
  iVar2 = FUN_047b946c(5);
  iVar3 = FUN_047b946c(10);
  Sexy::Insets::Insets
            (aIStack_a0,iVar2,iVar2,(int)plVar4[10] - iVar3,*(int *)((long)plVar4 + 0x54) - iVar2);
  pPVar5 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(pPVar5,(ScrollWidgetListener *)(this + 0x138));
  (**(code **)(*(long *)pPVar5 + 0x1a0))(pPVar5,aIStack_a0);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)pPVar5,2);
  (**(code **)(*plVar4 + 0x60))(plVar4,pPVar5);
  pWVar6 = ::operator_new(0xd8);
  Sexy::Widget::Widget(pWVar6);
  local_40 = 1;
  puVar7 = (undefined8 *)
           std::
           map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
           ::operator[](this_00,(int *)&local_40);
  *puVar7 = pWVar6;
  local_40 = 1;
  puVar7 = (undefined8 *)
           std::
           map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
           ::operator[](this_00,(int *)&local_40);
  (**(code **)(*(long *)*puVar7 + 0x198))((long *)*puVar7,0,0,local_98,local_94);
  pcVar9 = *(code **)(*(long *)pPVar5 + 0x60);
  local_40 = 1;
  puVar7 = (undefined8 *)
           std::
           map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
           ::operator[](this_00,(int *)&local_40);
  (*pcVar9)(pPVar5,*puVar7);
  std::string::string((string *)&local_40,"PathBack");
  plVar4 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_40);
  std::string::~string((string *)&local_40);
  nop();
  *(undefined1 *)((long)plVar4 + 0x59) = 1;
  pPVar5 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(pPVar5,(ScrollWidgetListener *)(this + 0x138));
  (**(code **)(*(long *)pPVar5 + 0x1a0))(pPVar5,aIStack_a0);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)pPVar5,2);
  (**(code **)(*plVar4 + 0x60))(plVar4,pPVar5);
  pWVar6 = ::operator_new(0xd8);
  Sexy::Widget::Widget(pWVar6);
  local_40 = 2;
  puVar7 = (undefined8 *)
           std::
           map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
           ::operator[](this_00,(int *)&local_40);
  *puVar7 = pWVar6;
  local_40 = 2;
  puVar7 = (undefined8 *)
           std::
           map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
           ::operator[](this_00,(int *)&local_40);
  (**(code **)(*(long *)*puVar7 + 0x198))((long *)*puVar7,0,0,local_98,local_94);
  pcVar9 = *(code **)(*(long *)pPVar5 + 0x60);
  local_40 = 2;
  puVar7 = (undefined8 *)
           std::
           map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
           ::operator[](this_00,(int *)&local_40);
  (*pcVar9)(pPVar5,*puVar7);
  *(undefined4 *)(this + 0x170) = 1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_90);
  std::string::string((string *)&local_40,"Tab_1");
  local_b0 = (PVZ2UIButton *)InitButton(this,(string *)&local_40,1);
  std::string::~string((string *)&local_40);
  nop();
  std::string::string((string *)&local_40,"Tab_2");
  local_a8 = (PVZ2UIButton *)InitButton(this,(string *)&local_40,2);
  std::string::~string((string *)&local_40);
  nop();
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,&local_b0);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::push_back
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90,&local_a8);
  pPVar1 = local_b0;
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06b26208,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b261a8,2);
  PVZ2UIButton::SetRadioStates(pPVar1,(PVZ2UIImage *)local_78,(PVZ2UIImage *)&local_40,true);
  pPVar1 = local_b0;
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)&local_40,(vector *)avStack_90);
  PVZ2UIButton::LinkRadioButtons(pPVar1,(string *)&local_40);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)&local_40);
  local_40 = 1;
  lVar8 = std::
          map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
          ::operator[](this_00,(int *)&local_40);
  *(PVZ2UIButton **)(lVar8 + 8) = local_b0;
  local_78[0] = 1;
  lVar8 = std::
          map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
          ::operator[](this_00,(int *)local_78);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_40,(float)(*(int *)(gLawnApp + 0xd4) / 2),
             (float)(*(int *)(gLawnApp + 0xd8) / 2));
  *(ulong *)(lVar8 + 0x10) = CONCAT44(uStack_3c,local_40);
  local_40 = 1;
  lVar8 = std::
          map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
          ::operator[](this_00,(int *)&local_40);
  pPVar1 = local_a8;
  *(undefined4 *)(lVar8 + 0x48) = 100;
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)local_78,&DAT_06b26208,2);
  PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b261a8,2);
  PVZ2UIButton::SetRadioStates(pPVar1,(PVZ2UIImage *)local_78,(PVZ2UIImage *)&local_40,false);
  pPVar1 = local_a8;
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)&local_40,(vector *)avStack_90);
  PVZ2UIButton::LinkRadioButtons(pPVar1,(string *)&local_40);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)&local_40);
  local_40 = 2;
  lVar8 = std::
          map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
          ::operator[](this_00,(int *)&local_40);
  *(PVZ2UIButton **)(lVar8 + 8) = local_a8;
  local_78[0] = 2;
  lVar8 = std::
          map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
          ::operator[](this_00,(int *)local_78);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)&local_40,(float)(*(int *)(gLawnApp + 0xd4) + -0x14),
             (float)(*(int *)(gLawnApp + 0xd8) / 2));
  *(ulong *)(lVar8 + 0x10) = CONCAT44(uStack_3c,local_40);
  local_40 = 2;
  lVar8 = std::
          map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
          ::operator[](this_00,(int *)&local_40);
  *(undefined4 *)(lVar8 + 0x48) = 3000;
  std::string::string((string *)&local_40,"BtnSave");
  InitButton(this,(string *)&local_40,3);
  std::string::~string((string *)&local_40);
  nop();
  std::string::string((string *)&local_40,"BtnShowHide");
  InitButton(this,(string *)&local_40,4);
  std::string::~string((string *)&local_40);
  nop();
  std::string::string((string *)&local_40,"BtnNew");
  InitButton(this,(string *)&local_40,5);
  std::string::~string((string *)&local_40);
  nop();
  std::string::string((string *)&local_40,"BtnDel");
  InitButton(this,(string *)&local_40,6);
  std::string::~string((string *)&local_40);
  nop();
  std::string::string((string *)&local_40,"BtnView");
  InitButton(this,(string *)&local_40,7);
  std::string::~string((string *)&local_40);
  nop();
  LoadProperty(this);
  std::vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>>::~vector
            ((vector<PVZ2UIButton*,std::allocator<PVZ2UIButton*>> *)avStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModuleEditor::NewItem() */

void __thiscall FishingModuleEditor::NewItem(FishingModuleEditor *this)

{
  map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
  *this_00;
  FishingModuleEditor *pFVar1;
  char cVar2;
  ItemPanel *pIVar3;
  PVZ2UIButton *pPVar4;
  undefined8 uVar5;
  int iVar6;
  code *pcVar7;
  wstring awStack_50 [8];
  undefined8 local_48 [2];
  undefined8 local_38;
  string asStack_30 [8];
  vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> avStack_28 [24];
  PVZ2UIButton *local_10;
  long local_8;
  
  this_00 = (map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
             *)(this + 0x140);
  pFVar1 = this + 0x170;
  local_8 = ___stack_chk_guard;
  local_48[0] = std::
                map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
                ::find(this_00,(int *)pFVar1);
  local_38 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this_00);
  cVar2 = std::__exception_ptr::operator==((exception_ptr *)local_48,(exception_ptr *)&local_38);
  if (cVar2 == '\0') {
    ItemData::ItemData((ItemData *)&local_38);
    pIVar3 = (ItemPanel *)
             std::
             map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
             ::operator[](this_00,(int *)pFVar1);
    iVar6 = 100;
    if (*(int *)(this + 0x170) != 1) {
      iVar6 = 3000;
    }
    ItemPanel::InitData(pIVar3,(ItemData *)&local_38,iVar6);
    Sexy::ToWString(asStack_30);
    Sexy::Color::Color((Color *)local_48,1);
    pPVar4 = ::operator_new(0x300);
    PVZ2UIButton::PVZ2UIButton
              (pPVar4,(int)local_38,(ButtonListener *)(this + 0xd8),awStack_50,(Color *)local_48);
    local_10 = pPVar4;
    FUN_05476c50(awStack_50);
    pPVar4 = local_10;
    pcVar7 = *(code **)(*(long *)local_10 + 800);
    uVar5 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_18);
    (*pcVar7)(pPVar4,uVar5);
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)local_48);
    std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::push_back
              (avStack_28,(SexyVector2 *)local_48);
    pIVar3 = (ItemPanel *)
             std::
             map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
             ::operator[](this_00,(int *)pFVar1);
    ItemPanel::AddItem(pIVar3,(ItemData *)&local_38);
    pIVar3 = (ItemPanel *)
             std::
             map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
             ::operator[](this_00,(int *)pFVar1);
    ItemPanel::LayoutPanel(pIVar3);
    pIVar3 = (ItemPanel *)
             std::
             map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
             ::operator[](this_00,(int *)pFVar1);
    ItemPanel::SelectItem(pIVar3,(int)local_38);
    RefreshDrawPoints(this);
    ItemData::~ItemData((ItemData *)&local_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModuleEditor::SaveProperty() */

void __thiscall FishingModuleEditor::SaveProperty(FishingModuleEditor *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
  *pmVar1;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_01;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  FishingZombieGroup *pFVar7;
  pair *ppVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  PVZDB *pPVar11;
  string asStack_d8 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_b8 [24];
  undefined8 local_a0 [3];
  undefined8 local_88;
  vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> avStack_80 [8];
  undefined1 auStack_78 [8];
  vector avStack_70 [32];
  undefined8 local_50 [2];
  undefined1 auStack_40 [8];
  vector avStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
  lVar5 = GetProps();
  if (lVar5 == 0) {
LAB_047c0088:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(lVar5 + 0x70);
  local_50[0] = CONCAT44(local_50[0]._4_4_,1);
  lVar6 = std::
          map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
          ::operator[]((map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
                        *)(this + 0x140),(int *)local_50);
  pmVar1 = (map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
            *)(lVar6 + 0x18);
  Set8BytesTo0(asStack_d8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_b8);
  local_c8 = std::
             map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
             ::begin(pmVar1);
  local_c0 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)pmVar1);
  while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_c8,(rbtree_iterator *)&local_c0), bVar2
        ) {
    ppVar8 = (pair *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                               ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_c8);
    std::pair<int_const,FishingModuleEditor::ItemData>::pair
              ((pair<int_const,FishingModuleEditor::ItemData> *)&local_88,ppVar8);
    thunk_FUN_05475e00(asStack_d8,auStack_78);
    uVar9 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
    local_a0[0] = FUN_047ba374(uVar9,uVar10,asStack_d8);
    local_50[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)local_a0,(__normal_iterator *)local_50);
    if (bVar2) {
      pFVar7 = (FishingZombieGroup *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_a0);
      SetZombieGroup(this,pFVar7,avStack_70);
    }
    else {
      FishingZombieGroup::FishingZombieGroup((FishingZombieGroup *)local_50);
      thunk_FUN_05475e00((FishingZombieGroup *)local_50,auStack_78);
      SetZombieGroup(this,(FishingZombieGroup *)local_50,avStack_70);
      std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>::push_back
                ((vector<FishingZombieGroup,std::allocator<FishingZombieGroup>> *)avStack_b8,
                 (FishingZombieGroup *)local_50);
      FishingZombieGroup::~FishingZombieGroup((FishingZombieGroup *)local_50);
    }
    std::pair<int,FishingModuleEditor::ItemData>::~pair
              ((pair<int,FishingModuleEditor::ItemData> *)&local_88);
    std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_c8);
  }
  local_a0[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
  do {
    local_50[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)local_a0,(__normal_iterator *)local_50);
    while( true ) {
      if (!bVar2) {
        this_01 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(lVar5 + 0x88);
        local_88 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)local_50,(__normal_iterator *)&local_88);
        uVar9 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_b8);
        uVar10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_b8);
        std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>::
        insert<__gnu_cxx::__normal_iterator<FishingZombieGroup*,std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>>,void>
                  ((vector<FishingZombieGroup,std::allocator<FishingZombieGroup>> *)this_00,
                   local_50[0],uVar9,uVar10);
        local_50[0] = CONCAT44(local_50[0]._4_4_,2);
        lVar5 = std::
                map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
                ::operator[]((map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
                              *)(this + 0x140),(int *)local_50);
        pmVar1 = (map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
                  *)(lVar5 + 0x18);
        std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_a0);
        local_d0 = std::
                   map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
                   ::begin(pmVar1);
        local_c8 = std::
                   map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)pmVar1);
        while (bVar2 = eastl::operator!=((rbtree_iterator *)&local_d0,(rbtree_iterator *)&local_c8),
              bVar2) {
          ppVar8 = (pair *)std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator*
                                     ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)
                                      &local_d0);
          std::pair<int_const,FishingModuleEditor::ItemData>::pair
                    ((pair<int_const,FishingModuleEditor::ItemData> *)local_50,ppVar8);
          thunk_FUN_05475e00(asStack_d8,auStack_40);
          uVar9 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(this_01);
          uVar10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_01);
          local_c0 = FUN_047ba574(uVar9,uVar10,asStack_d8);
          local_88 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(this_01);
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_c0,(__normal_iterator *)&local_88);
          if (bVar2) {
            lVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
            std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::operator=
                      ((vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> *)(lVar5 + 8),
                       avStack_38);
          }
          else {
            MarqueeViewItemData::MarqueeViewItemData((MarqueeViewItemData *)&local_88);
            thunk_FUN_05475e00((pair<int,FishingModuleEditor::ItemData> *)&local_88,auStack_40);
            std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::operator=
                      (avStack_80,avStack_38);
            std::vector<FishingPath,std::allocator<FishingPath>>::push_back
                      ((vector<FishingPath,std::allocator<FishingPath>> *)local_a0,
                       (FishingPath *)&local_88);
            FishingPath::~FishingPath((FishingPath *)&local_88);
          }
          std::pair<int,FishingModuleEditor::ItemData>::~pair
                    ((pair<int,FishingModuleEditor::ItemData> *)local_50);
          std::_Rb_tree_iterator<std::pair<int_const,std::wstring>>::operator++
                    ((_Rb_tree_iterator<std::pair<int_const,std::wstring>> *)&local_d0);
        }
        local_c0 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this_01);
        do {
          local_50[0] = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end(this_01);
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_c0,(__normal_iterator *)local_50);
          while( true ) {
            if (!bVar2) {
              local_88 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::end(this_01);
              __gnu_cxx::
              __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              ::__normal_iterator<Sexy::RenderStateManager::Context**>
                        ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)local_50,(__normal_iterator *)&local_88);
              uVar9 = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                               *)local_a0);
              uVar10 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)local_a0);
              std::vector<FishingPath,std::allocator<FishingPath>>::
              insert<__gnu_cxx::__normal_iterator<FishingPath*,std::vector<FishingPath,std::allocator<FishingPath>>>,void>
                        ((vector<FishingPath,std::allocator<FishingPath>> *)this_01,local_50[0],
                         uVar9,uVar10);
              GetFolder((pair<int,FishingModuleEditor::ItemData> *)&local_88,3);
              uVar4 = FUN_0547429c(uVar4);
              Sexy::StrFormat("properties\\%s_fishing.json",(FishingZombieGroup *)local_50,uVar4);
              std::operator+((string *)&local_88,(string *)local_50);
              std::string::~string((string *)local_50);
              std::string::~string((string *)&local_88);
              pPVar11 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
              PVZDB::SavePackageForTableToFile(pPVar11,0x25,(__normal_iterator *)&local_c0,1,bVar2);
              std::string::~string((string *)&local_c0);
              std::vector<FishingPath,std::allocator<FishingPath>>::~vector
                        ((vector<FishingPath,std::allocator<FishingPath>> *)local_a0);
              std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>::~vector
                        ((vector<FishingZombieGroup,std::allocator<FishingZombieGroup>> *)avStack_b8
                        );
              std::string::~string(asStack_d8);
              goto LAB_047c0088;
            }
            uVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
            thunk_FUN_05475e00(asStack_d8,uVar9);
            uVar9 = std::
                    map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
                    ::begin(pmVar1);
            uVar10 = std::
                     map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)pmVar1);
            local_88 = FUN_047bab40(uVar9,uVar10,asStack_d8);
            local_50[0] = std::
                          map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)pmVar1);
            cVar3 = std::__exception_ptr::operator==
                              ((exception_ptr *)&local_88,(exception_ptr *)local_50);
            if (cVar3 == '\0') break;
            __gnu_cxx::
            __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
            ::__normal_iterator<Sexy::RenderStateManager::Context**>
                      ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)local_50,(__normal_iterator *)&local_c0);
            local_c0 = std::vector<FishingPath,std::allocator<FishingPath>>::erase
                                 ((vector<FishingPath,std::allocator<FishingPath>> *)this_01,
                                  local_50[0]);
            local_50[0] = std::
                          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          ::end(this_01);
            bVar2 = __gnu_cxx::operator!=
                              ((__normal_iterator *)&local_c0,(__normal_iterator *)local_50);
          }
          std::move_iterator<SexyURL::KeyedValue*>::operator++
                    ((move_iterator<SexyURL::KeyedValue*> *)&local_c0);
        } while( true );
      }
      uVar9 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_a0);
      thunk_FUN_05475e00(asStack_d8,uVar9);
      uVar9 = std::
              map<int,FishingModuleEditor::ItemData,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemData>>>
              ::begin(pmVar1);
      uVar10 = std::
               map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      *)pmVar1);
      local_88 = FUN_047baa04(uVar9,uVar10,asStack_d8);
      local_50[0] = std::
                    map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)pmVar1);
      cVar3 = std::__exception_ptr::operator==((exception_ptr *)&local_88,(exception_ptr *)local_50)
      ;
      if (cVar3 == '\0') break;
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)local_50,(__normal_iterator *)local_a0);
      local_a0[0] = std::vector<FishingZombieGroup,std::allocator<FishingZombieGroup>>::erase
                              ((vector<FishingZombieGroup,std::allocator<FishingZombieGroup>> *)
                               this_00,local_50[0]);
      local_50[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this_00);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)local_a0,(__normal_iterator *)local_50);
    }
    __gnu_cxx::
    __normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
    ::operator++((__normal_iterator<PlantFamilyDisplayValue_const*,std::vector<PlantFamilyDisplayValue,std::allocator<PlantFamilyDisplayValue>>>
                  *)local_a0);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FishingModuleEditor::ButtonDepress(int) */

void __thiscall FishingModuleEditor::ButtonDepress(FishingModuleEditor *this,int param_1)

{
  byte bVar1;
  char cVar2;
  PVZ2UIButton *pPVar3;
  ItemPanel *pIVar4;
  long lVar5;
  long lVar6;
  LevelModuleManager *this_00;
  FishingModule *pFVar7;
  undefined *puVar8;
  TPoint aTStack_80 [8];
  Point aPStack_78 [8];
  MarqueeViewItemData aMStack_70 [8];
  vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>> avStack_68 [24];
  undefined4 local_50 [18];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = CheckSelectItem(this,param_1);
  if (cVar2 == '\0') {
    switch(param_1) {
    case 1:
    case 2:
      *(int *)(this + 0x170) = param_1;
      RefreshDrawPoints(this);
      break;
    case 3:
      SaveProperty(this);
      break;
    case 4:
      std::string::string((string *)local_50,"ZombieBack");
      lVar5 = UI::Dialog::GetWidget((Dialog *)this,(string *)local_50);
      std::string::~string((string *)local_50);
      nop();
      bVar1 = *(byte *)(lVar5 + 0x6c) ^ 1;
      *(byte *)(lVar5 + 0x6c) = bVar1;
      std::string::string((string *)local_50,"PathBack");
      lVar5 = UI::Dialog::GetWidget((Dialog *)this,(string *)local_50);
      *(byte *)(lVar5 + 0x6c) = bVar1;
      std::string::~string((string *)local_50);
      nop();
      std::string::string((string *)local_50,"BtnShowHide");
      pPVar3 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,(string *)local_50);
      if (bVar1 == 0) {
        puVar8 = &DAT_05735f80;
      }
      else {
        puVar8 = &DAT_05735f68;
      }
      FUN_054772c4(pPVar3 + 0xd8,puVar8);
      std::string::~string((string *)local_50);
      nop();
      break;
    case 5:
      NewItem(this);
      break;
    case 6:
      DeletePoint(this);
      break;
    case 7:
      local_50[0] = 1;
      pIVar4 = (ItemPanel *)
               std::
               map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
               ::operator[]((map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
                             *)(this + 0x140),(int *)local_50);
      lVar5 = ItemPanel::GetSelectedItem(pIVar4);
      local_50[0] = 2;
      pIVar4 = (ItemPanel *)
               std::
               map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
               ::operator[]((map<int,FishingModuleEditor::ItemPanel,std::less<int>,std::allocator<std::pair<int_const,FishingModuleEditor::ItemPanel>>>
                             *)(this + 0x140),(int *)local_50);
      lVar6 = ItemPanel::GetSelectedItem(pIVar4);
      if ((lVar6 != 0) && (lVar5 != 0)) {
        FishingZombieGroup::FishingZombieGroup((FishingZombieGroup *)local_50);
        thunk_FUN_05475e00((FishingZombieGroup *)local_50,lVar5 + 8);
        SetZombieGroup(this,(FishingZombieGroup *)local_50,(vector *)(lVar5 + 0x10));
        MarqueeViewItemData::MarqueeViewItemData(aMStack_70);
        thunk_FUN_05475e00(aMStack_70,lVar6 + 8);
        std::vector<Sexy::SexyVector2,std::allocator<Sexy::SexyVector2>>::operator=
                  (avStack_68,(vector *)(lVar6 + 0x10));
        this_00 = (LevelModuleManager *)
                  FUN_047b9148(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8));
        pFVar7 = LevelModuleManager::GetModuleByClass<FishingModule>(this_00);
        if (pFVar7 != (FishingModule *)0x0) {
          FishingModule::GetRandomStartPos();
          Sexy::Point::Point(aPStack_78,aTStack_80);
          FishingModule::SpawnZombieGroup
                    (pFVar7,aPStack_78,(FishingZombieGroup *)local_50,aMStack_70);
        }
        FishingPath::~FishingPath((FishingPath *)aMStack_70);
        FishingZombieGroup::~FishingZombieGroup((FishingZombieGroup *)local_50);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to FishingModuleEditor::ButtonDepress(int) */

void __thiscall FishingModuleEditor::ButtonDepress(FishingModuleEditor *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

