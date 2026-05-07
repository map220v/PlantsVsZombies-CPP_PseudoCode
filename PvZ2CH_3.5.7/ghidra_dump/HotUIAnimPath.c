// Class: HotUIAnimPath


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAnimPath::StaticClassInit() */

void HotUIAnimPath::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIAnimPath");
    (*pcVar2)(plVar1,asStack_10,FUN_0361f898,0x268,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIAnimPath::StaticGetClass() */

long * HotUIAnimPath::StaticGetClass(void)

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
  uVar2 = HotUIAnim::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIAnimPath",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIAnimPath::HotUIAnimPath() */

void __thiscall HotUIAnimPath::HotUIAnimPath(HotUIAnimPath *this)

{
  HotUIAnim::HotUIAnim((HotUIAnim *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_0666ac70;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x248));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x250));
  Sexy::Point::Point((Point *)(this + 600));
  Sexy::Point::Point((Point *)(this + 0x260));
  return;
}


/* HotUIAnimPath::StaticNew() */

HotUIAnimPath * HotUIAnimPath::StaticNew(void)

{
  HotUIAnimPath *this;
  
  this = ::operator_new(0x268);
  HotUIAnimPath(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAnimPath::SetStartAndEndPointsAndOffsets(HotUIWidget*, HotUIWidget*, Sexy::Point&,
   Sexy::Point&) */

void __thiscall
HotUIAnimPath::SetStartAndEndPointsAndOffsets
          (HotUIAnimPath *this,HotUIWidget *param_1,HotUIWidget *param_2,Point *param_3,
          Point *param_4)

{
  code *pcVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIWidget::GetPtr();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x248),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  HotUIWidget::GetPtr();
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x250),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  *(undefined8 *)(this + 600) = *(undefined8 *)param_3;
  pcVar1 = *(code **)(*(long *)this + 0x340);
  *(undefined8 *)(this + 0x260) = *(undefined8 *)param_4;
  (*pcVar1)(this);
  (**(code **)(*(long *)this + 0xd8))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIAnimPath::~HotUIAnimPath() */

void __thiscall HotUIAnimPath::~HotUIAnimPath(HotUIAnimPath *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_0666ac70;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x250));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
  HotUIAnim::~HotUIAnim((HotUIAnim *)this);
  return;
}


/* HotUIAnimPath::~HotUIAnimPath() */

void __thiscall HotUIAnimPath::~HotUIAnimPath(HotUIAnimPath *this)

{
  ~HotUIAnimPath(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIAnimPath::onLayoutFinalized() */

void __thiscall HotUIAnimPath::onLayoutFinalized(HotUIAnimPath *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  undefined1 in_w4;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  TPoint<int> aTStack_28 [8];
  FastCurve aFStack_20 [8];
  FastCurve aFStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x248));
  if (cVar4 != '\0') {
    cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x250));
    if (cVar4 != '\0') {
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
      (**(code **)(*plVar5 + 0x48))(aFStack_18);
      Sexy::TRect<int>::GetCenter();
      Sexy::TPoint<int>::operator+(aTStack_28,(TPoint *)(this + 600));
      Sexy::Point::Point((Point *)&local_40,(TPoint *)aFStack_20);
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x250));
      (**(code **)(*plVar5 + 0x48))(aFStack_18);
      Sexy::TRect<int>::GetCenter();
      Sexy::TPoint<int>::operator+(aTStack_28,(TPoint *)(this + 0x260));
      Sexy::Point::Point((Point *)&local_38,(TPoint *)aFStack_20);
      lVar6 = FUN_0361f53c(*(undefined8 *)(this + 0x238));
      lVar6 = FUN_0361f538(*(undefined8 *)(lVar6 + 0x20));
      fVar7 = *(float *)(lVar6 + 0x28);
      iVar1 = *(int *)(lVar6 + 0x3c);
      ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                ((ResistenceValueInfo *)&local_30);
      iVar2 = local_38 - local_40;
      iVar3 = local_34 - local_3c;
      local_30 = (float)iVar2;
      local_2c = (float)iVar3;
      fVar8 = (float)DVec2::getLength((DVec2 *)&local_30);
      dVar11 = atan2((double)-(float)iVar3,(double)iVar2);
      fVar9 = (float)FUN_0361f540(0x42820000);
      fVar10 = (float)FUN_0361f540(0x42bc0000);
      Sexy::FastCurve::SetOutRange((FastCurve *)aTStack_28,fVar9,fVar10);
      Sexy::FastCurve::SetOutRange(aFStack_20,(float)local_40,(float)local_3c);
      Sexy::FastCurve::SetOutRange(aFStack_18,fVar8 / (fVar7 * 0.3 * (float)iVar1),1.0);
      Sexy::SexyTransform2D::CreateTransformWithPivot
                ((SexyTransform2D *)aFStack_20,(SexyVector2 *)aFStack_18,(float)dVar11,
                 (SexyVector2 *)aTStack_28,(SexyVector2 *)0x1,(bool)in_w4);
      *(undefined4 *)(this + 0x230) = local_50;
      *(undefined8 *)(this + 0x210) = local_70;
      *(undefined8 *)(this + 0x218) = uStack_68;
      *(undefined8 *)(this + 0x220) = local_60;
      *(undefined8 *)(this + 0x228) = uStack_58;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

