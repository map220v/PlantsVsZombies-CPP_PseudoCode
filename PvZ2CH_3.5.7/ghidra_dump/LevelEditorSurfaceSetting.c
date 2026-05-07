// Class: LevelEditorSurfaceSetting


/* LevelEditorSurfaceSetting::ScrollTargetReached(Sexy::ScrollWidget*) */

void LevelEditorSurfaceSetting::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LevelEditorSurfaceSetting::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
LevelEditorSurfaceSetting::ScrollTargetReached
          (LevelEditorSurfaceSetting *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0xd8));
  return;
}


/* LevelEditorSurfaceSetting::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void LevelEditorSurfaceSetting::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to LevelEditorSurfaceSetting::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
LevelEditorSurfaceSetting::ScrollTargetInterrupted
          (LevelEditorSurfaceSetting *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0xd8));
  return;
}


/* LevelEditorSurfaceSetting::~LevelEditorSurfaceSetting() */

void __thiscall
LevelEditorSurfaceSetting::~LevelEditorSurfaceSetting(LevelEditorSurfaceSetting *this)

{
  *(undefined ***)this = &PTR_GetClass_0695a610;
  *(undefined ***)(this + 0xd8) = &PTR__LevelEditorSurfaceSetting_0695a940;
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* non-virtual thunk to LevelEditorSurfaceSetting::~LevelEditorSurfaceSetting() */

void __thiscall
LevelEditorSurfaceSetting::~LevelEditorSurfaceSetting(LevelEditorSurfaceSetting *this)

{
  ~LevelEditorSurfaceSetting(this + -0xd8);
  return;
}


/* LevelEditorSurfaceSetting::~LevelEditorSurfaceSetting() */

void __thiscall
LevelEditorSurfaceSetting::~LevelEditorSurfaceSetting(LevelEditorSurfaceSetting *this)

{
  ~LevelEditorSurfaceSetting(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LevelEditorSurfaceSetting::~LevelEditorSurfaceSetting() */

void __thiscall
LevelEditorSurfaceSetting::~LevelEditorSurfaceSetting(LevelEditorSurfaceSetting *this)

{
  ~LevelEditorSurfaceSetting(this + -0xd8);
  return;
}


/* LevelEditorSurfaceSetting::LevelEditorSurfaceSetting() */

void __thiscall
LevelEditorSurfaceSetting::LevelEditorSurfaceSetting(LevelEditorSurfaceSetting *this)

{
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_0695a610;
  *(undefined ***)(this + 0xd8) = &PTR__LevelEditorSurfaceSetting_0695a940;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSurfaceSetting::Draw(Sexy::Graphics*) */

void __thiscall LevelEditorSurfaceSetting::Draw(LevelEditorSurfaceSetting *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_04b334ec(0x1e);
  iVar2 = FUN_04b334ec(0x10e);
  Sexy::Insets::Insets(aIStack_18,0,iVar1,*(int *)(this + 0x50),iVar2);
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b85798);
  Draw9SliceImage(param_1,aIStack_18,uVar3);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LevelEditorSurfaceSetting::Init(std::function<void (LevelEditorCardInfo const&)>) */

void __thiscall LevelEditorSurfaceSetting::Init(LevelEditorSurfaceSetting *this,function *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  PVZ2UIScrollingWidget *this_00;
  Widget *this_01;
  undefined8 uVar8;
  long *plVar9;
  LevelEditorCardItem *this_02;
  LevelEditorCardInfo *pLVar10;
  long lVar11;
  ulong uVar12;
  int extraout_w1;
  ulong uVar13;
  code *pcVar14;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  RtId aRStack_60 [8];
  Insets aIStack_58 [8];
  int local_50;
  Iterator aIStack_48 [4];
  int local_44;
  int local_3c;
  function<void(int,std::string)> afStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_04b334ec(5);
  this_00 = ::operator_new(0x248);
  PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_00,(ScrollWidgetListener *)(this + 0xd8));
  this_01 = ::operator_new(0xd8);
  Sexy::Widget::Widget(this_01);
  iVar4 = FUN_04b334ec(0);
  iVar5 = FUN_04b334ec(0x28);
  iVar6 = FUN_04b334ec(300);
  iVar7 = FUN_04b334ec(0xfa);
  Sexy::Insets::Insets(aIStack_58,iVar4,iVar5,iVar6,iVar7);
  (**(code **)(*(long *)this_00 + 0x1a0))(this_00,aIStack_58);
  Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_00,2);
  (**(code **)(*(long *)this_01 + 0x1a0))(this_01,aIStack_58);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_70);
  uVar8 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_48,uVar8,0x9f);
  while( true ) {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_48);
    if (!bVar1) break;
    Sexy::RtDbTable::Iterator::operator*(aIStack_48);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_68,(RtWeakPtrBase *)aRStack_60);
    Sexy::RtId::~RtId(aRStack_60);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_68);
    if (bVar1) {
      plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      pcVar14 = *(code **)(*plVar9 + 0x20);
      uVar8 = LevelEditorConfig::StaticGetClass();
      cVar2 = (*pcVar14)(plVar9,uVar8);
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_70,(RtWeakPtrBase *)aRStack_68);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    Sexy::RtDbTable::Iterator::operator++(aIStack_48,extraout_w1);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_48);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_70);
  iVar4 = 0;
  if (bVar1) {
    local_50 = local_50 + iVar3 * -5;
    iVar5 = local_50 + 3;
    if (-1 < local_50) {
      iVar5 = local_50;
    }
    iVar5 = iVar5 >> 2;
    uVar13 = 0;
    while( true ) {
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_70)
      ;
      uVar12 = FUN_04b2d870(*(undefined8 *)(lVar11 + 0x28),*(undefined8 *)(lVar11 + 0x30));
      if (uVar12 <= uVar13) break;
      Sexy::Insets::Insets
                ((Insets *)aIStack_48,iVar3 + (iVar3 + iVar5) * ((uint)uVar13 & 3),
                 (iVar3 + (int)((double)iVar5 * 0.65)) * ((int)(uint)uVar13 >> 2),iVar5,
                 (int)((double)iVar5 * 0.65));
      this_02 = ::operator_new(0x110);
      LevelEditorCardItem::LevelEditorCardItem(this_02);
      (**(code **)(*(long *)this_02 + 0x1a0))(this_02,aIStack_48);
      std::function<void(int,std::string)>::function(afStack_28,param_2);
      LevelEditorCardItem::SetClickFunction(this_02,afStack_28);
      std::function<bool(Sexy::Touch_const&)>::~function
                ((function<bool(Sexy::Touch_const&)> *)afStack_28);
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_70)
      ;
      pLVar10 = (LevelEditorCardInfo *)FUN_04b2d87c(*(undefined8 *)(lVar11 + 0x28),uVar13);
      LevelEditorCardItem::SetData(this_02,pLVar10);
      (**(code **)(*(long *)this_01 + 0x60))(this_01,this_02);
      iVar4 = local_44 + local_3c;
      uVar13 = uVar13 + 1;
    }
  }
  lVar11 = *(long *)this;
  *(int *)(this_01 + 0x54) = iVar4;
  (**(code **)(lVar11 + 0x60))(this,this_00);
  (**(code **)(*(long *)this_00 + 0x60))(this_00,this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

