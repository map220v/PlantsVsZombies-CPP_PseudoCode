// Class: PlantTurnip


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTurnip::GetZombieTarget(bool) */

void PlantTurnip::GetZombieTarget(bool param_1)

{
  undefined1 in_w1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(in_x8);
  *(undefined1 *)((ulong)param_1 + 0x28) = in_w1;
  PlantFramework::FindTargetZombie(aRStack_10,(ulong)param_1,0);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)in_x8,(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTurnip::Initialize() */

void __thiscall PlantTurnip::Initialize(PlantTurnip *this)

{
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x28] = (PlantTurnip)0x0;
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


/* PlantTurnip::onDestroy() */

void __thiscall PlantTurnip::onDestroy(PlantTurnip *this)

{
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  PlantFramework::onDestroy((PlantFramework *)this);
  return;
}


/* PlantTurnip::ApplyPlantfood() */

void __thiscall PlantTurnip::ApplyPlantfood(PlantTurnip *this)

{
  Plant::Heal(*(Plant **)(this + 0x10));
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 5;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTurnip::StaticClassInit() */

void PlantTurnip::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantTurnip");
    (*pcVar2)(plVar1,asStack_10,FUN_040754e0,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTurnip::StaticGetClass() */

long * PlantTurnip::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTurnip",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTurnip::GetClass() const */

long * PlantTurnip::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTurnip",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTurnip::~PlantTurnip() */

void __thiscall PlantTurnip::~PlantTurnip(PlantTurnip *this)

{
  *(undefined ***)this = &PTR_GetClass_067c8660;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantTurnip::~PlantTurnip() */

void __thiscall PlantTurnip::~PlantTurnip(PlantTurnip *this)

{
  ~PlantTurnip(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTurnip::WhetherCanBePulled(Plant const*, int) */

void PlantTurnip::WhetherCanBePulled(Plant *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  Board *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(RtObject **)(param_1 + 0xa8) == (RtObject *)0x0) ||
     (bVar2 = Sexy::RtObject::IsA<PlantTurnip>(*(RtObject **)(param_1 + 0xa8)), !bVar2)) {
    iVar7 = *(int *)(param_1 + 0x114);
    this = *(Board **)(gLawnApp + 0x9f0);
    if (iVar7 < *(int *)(this + 0xf8) + -1) {
      iVar1 = *(int *)(param_1 + 0x110);
      iVar3 = Board::GetGridSquareType(this,iVar7,iVar1);
      uVar4 = Board::GetGridSquareType(this,iVar7 + 1,iVar1);
      if (((iVar3 != 6) && (uVar4 != 1)) && ((uVar4 & 0xfffffff7) != 4)) goto LAB_04075730;
    }
    iVar7 = iVar7 + 1;
    if (iVar7 <= param_2) {
      while( true ) {
        iVar1 = *(int *)(param_1 + 0x110);
        std::string::string(asStack_10,"");
        lVar6 = Board::GetPlantAt(this,iVar7,iVar1,asStack_10);
        std::string::~string(asStack_10);
        nop();
        if (((lVar6 != 0) && (*(RtObject **)(lVar6 + 0xa8) != (RtObject *)0x0)) &&
           (bVar2 = Sexy::RtObject::IsA<PlantTurnip>(*(RtObject **)(lVar6 + 0xa8)), bVar2))
        goto LAB_04075730;
        if (param_2 < iVar7 + 1) break;
        iVar7 = iVar7 + 1;
        this = *(Board **)(gLawnApp + 0x9f0);
      }
    }
    uVar5 = 1;
  }
  else {
LAB_04075730:
    uVar5 = 0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* PlantTurnip::PlantTurnip() */

void __thiscall PlantTurnip::PlantTurnip(PlantTurnip *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantTurnip)0x0;
  *(undefined ***)this = &PTR_GetClass_067c8660;
  *(undefined4 *)(this + 0x2c) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantAbsorbed);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<Sexy::Point_const&,float,Sexy::CBMemberTranslatorX<PlantTurnip,void(PlantTurnip::*)(Sexy::Point_const&,float)>>
            ((MessageRouter *)puVar1,Message::PlantAbsorbed,&local_40);
  return;
}


/* PlantTurnip::StaticNew() */

PlantTurnip * PlantTurnip::StaticNew(void)

{
  PlantTurnip *this;
  
  this = ::operator_new(0x30);
  PlantTurnip(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTurnip::FlyThroughAir(Sexy::SexyVector2, Sexy::SexyVector2) */

void PlantTurnip::FlyThroughAir
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  PopAnimRig *this;
  PlantAnimRig_Turnip *this_00;
  UIEasyButtonWidget *this_01;
  float fVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  float local_20;
  undefined4 local_18;
  long local_8;
  
  this_01 = *(UIEasyButtonWidget **)(param_5 + 0x10);
  *(undefined4 *)(this_01 + 200) = 0xc;
  local_8 = ___stack_chk_guard;
  this = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_01);
  std::string::string((string *)&local_38,"plantfood");
  fVar1 = (float)PopAnimRig::CalcAnimLengthSeconds(this,(string *)&local_38);
  std::string::~string((string *)&local_38);
  nop();
  RelocationEvent::RelocationEvent((RelocationEvent *)&local_38);
  local_38 = param_1;
  local_34 = param_2;
  local_30 = param_3;
  local_2c = param_4;
  local_24 = PVZ_T();
  local_20 = (float)PVZ_T();
  local_20 = local_20 + fVar1;
  local_18 = 0;
  Plant::addRelocationEvent(*(Plant **)(param_5 + 0x10),(RelocationEvent *)&local_38);
  this_00 = (PlantAnimRig_Turnip *)FUN_04075a48(*(undefined8 *)(param_5 + 0x10));
  PlantAnimRig_Turnip::PlaySpinningTurnip(this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTurnip::CreateAndflyTurnipAt(Sexy::Point const&) const */

void __thiscall PlantTurnip::CreateAndflyTurnipAt(PlantTurnip *this,Point *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  Plant *this_00;
  float *pfVar4;
  undefined8 uVar5;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
  uVar1 = *(undefined4 *)(param_1 + 4);
  local_8 = ___stack_chk_guard;
  uVar2 = *(undefined4 *)param_1;
  Plant::GetType();
  this_00 = (Plant *)Board::AddPlant((Board *)0x0,uVar5,uVar2,uVar1,
                                     (RtWeakPtr<Sexy::ResourceInfo> *)&local_10,1,1,0xffffffff,0,1,1
                                     ,0,0,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  Plant::SetIsDuplicatePlant(this_00,true);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_18)
  ;
  iVar3 = BoardTransforms::GridToBoardSpaceX(*(int *)(this_00 + 0x114));
  local_18 = (float)iVar3;
  iVar3 = BoardTransforms::GridToBoardSpaceY(*(int *)(this_00 + 0x110));
  local_14 = (float)iVar3;
  uVar5 = *(undefined8 *)(this_00 + 0xa8);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,*pfVar4,pfVar4[1]);
  FlyThroughAir(local_10,local_c,local_18,local_14,uVar5);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTurnip::OnRelocationComplete() */

void __thiscall PlantTurnip::OnRelocationComplete(PlantTurnip *this)

{
  PlantAnimRig_Turnip *this_00;
  long lVar1;
  RealObject *this_01;
  string asStack_10 [8];
  long local_8;
  
  lVar1 = *(long *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(lVar1 + 200) == 0xc) {
    *(undefined4 *)(lVar1 + 200) = 0xb;
    this_00 = (PlantAnimRig_Turnip *)FUN_04075a48(lVar1);
    PlantAnimRig_Turnip::PlayEmergeFromGround(this_00);
    this_01 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_10,"Play_Dirt_Rise");
    RealObject::PlayPositionalSound(this_01,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTurnip::OnPlantAbsorbed(Sexy::Point const&, float) */

void __thiscall PlantTurnip::OnPlantAbsorbed(PlantTurnip *this,Point *param_1,float param_2)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x10);
  if ((*(int *)(param_1 + 4) == *(int *)(lVar2 + 0x110)) &&
     (*(int *)(lVar2 + 0x114) <= *(int *)param_1)) {
    *(undefined4 *)(lVar2 + 200) = 0xd;
    bVar1 = (bool)FUN_04075a48(lVar2);
    PlantAnimRig_Reincarnation::PlayPreviewAnim(bVar1);
    *(float *)(this + 0x2c) = param_2;
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTurnip::findPlantableSpotColumn(int, int, int&) const */

void __thiscall
PlantTurnip::findPlantableSpotColumn(PlantTurnip *this,int param_1,int param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  Board *pBVar7;
  Point aPStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar7 = *(Board **)(gLawnApp + 0x9f0);
  if (pBVar7 == (Board *)0x0) {
LAB_040761d4:
    iVar4 = *(int *)(pBVar7 + 0xf8);
    if (1 < iVar4) {
LAB_040761e0:
      iVar4 = iVar4 + -2;
      while( true ) {
        Sexy::Point::Point(aPStack_18,iVar4 + 1,param_1);
        Plant::GetType();
        cVar2 = Board::CanPlantAt(pBVar7,aPStack_18,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        if (cVar2 != '\0') {
          pBVar7 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string((string *)aRStack_10,"");
          lVar3 = Board::GetPlantAt(pBVar7,iVar4,param_1,(string *)aRStack_10);
          std::string::~string((string *)aRStack_10);
          nop();
          if (lVar3 != 0) {
            *param_3 = iVar4 + 1;
            goto LAB_040760ac;
          }
        }
        if (iVar4 < 1) break;
        pBVar7 = *(Board **)(gLawnApp + 0x9f0);
        iVar4 = iVar4 + -1;
      }
      bVar1 = false;
LAB_04075fe0:
      pBVar7 = *(Board **)(gLawnApp + 0x9f0);
      goto LAB_04075fec;
    }
    bVar1 = false;
    Sexy::Point::Point(aPStack_18,param_2,param_1);
    Plant::GetType();
    cVar2 = Board::CanPlantAt(pBVar7,aPStack_18,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (cVar2 != '\0') goto LAB_040761c4;
LAB_04076028:
    pBVar7 = *(Board **)(gLawnApp + 0x9f0);
    iVar4 = *(int *)(pBVar7 + 0xf8) + -1;
    if (-1 < iVar4) {
      if (!bVar1) {
        while( true ) {
          Sexy::Point::Point(aPStack_18,iVar4,param_1);
          Plant::GetType();
          cVar2 = Board::CanPlantAt(pBVar7,aPStack_18,aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
          if (cVar2 != '\0') break;
          iVar4 = iVar4 + -1;
          if (iVar4 == -1) goto LAB_040760a8;
          pBVar7 = *(Board **)(gLawnApp + 0x9f0);
        }
LAB_04076170:
        *param_3 = iVar4;
        goto LAB_040760ac;
      }
LAB_04076058:
      while( true ) {
        Sexy::Point::Point(aPStack_18,iVar4,param_1);
        Plant::GetType();
        cVar2 = Board::CanPlantAt(pBVar7,aPStack_18,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        if ((cVar2 != '\0') && (6 < iVar4)) goto LAB_04076170;
        iVar4 = iVar4 + -1;
        if (iVar4 == -1) break;
        pBVar7 = *(Board **)(gLawnApp + 0x9f0);
      }
    }
  }
  else {
    uVar5 = *(undefined8 *)(pBVar7 + 0xad8);
    lVar3 = FUN_040751f4(uVar5);
    if (lVar3 == 0) goto LAB_040761d4;
    lVar3 = FUN_04075e58(uVar5);
    bVar1 = lVar3 != 0;
    pBVar7 = *(Board **)(gLawnApp + 0x9f0);
    iVar4 = *(int *)(pBVar7 + 0xf8);
    iVar6 = iVar4 + -1;
    if (0 < iVar6) {
      if (!bVar1) goto LAB_040761e0;
      iVar4 = iVar4 + -2;
      while( true ) {
        Sexy::Point::Point(aPStack_18,iVar6,param_1);
        Plant::GetType();
        cVar2 = Board::CanPlantAt(pBVar7,aPStack_18,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        if (cVar2 != '\0') {
          pBVar7 = *(Board **)(gLawnApp + 0x9f0);
          std::string::string((string *)aRStack_10,"");
          lVar3 = Board::GetPlantAt(pBVar7,iVar4,param_1,(string *)aRStack_10);
          std::string::~string((string *)aRStack_10);
          nop();
          if ((lVar3 != 0) && (6 < iVar6)) {
            *param_3 = iVar6;
            goto LAB_040760ac;
          }
        }
        iVar6 = iVar6 + -1;
        if (iVar4 < 1) break;
        pBVar7 = *(Board **)(gLawnApp + 0x9f0);
        iVar4 = iVar4 + -1;
      }
      goto LAB_04075fe0;
    }
LAB_04075fec:
    Sexy::Point::Point(aPStack_18,param_2,param_1);
    Plant::GetType();
    cVar2 = Board::CanPlantAt(pBVar7,aPStack_18,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (cVar2 == '\0') goto LAB_04076028;
    if ((!bVar1) || (6 < param_2)) {
LAB_040761c4:
      cVar2 = '\x01';
      *param_3 = param_2;
      goto LAB_040760ac;
    }
    pBVar7 = *(Board **)(gLawnApp + 0x9f0);
    iVar4 = *(int *)(pBVar7 + 0xf8) + -1;
    if (-1 < iVar4) goto LAB_04076058;
  }
LAB_040760a8:
  cVar2 = '\0';
LAB_040760ac:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTurnip::DefendBladeKee() */

void __thiscall PlantTurnip::DefendBladeKee(PlantTurnip *this)

{
  PlantAnimRig_Turnip *pPVar1;
  long lVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  lVar2 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar2 + 200) = 0xe;
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlantAnimRig_Turnip *)FUN_04075a48(lVar2);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_Turnip::PlayDefendBladeKee(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTurnip::GetGridItemTarget(bool) */

void __thiscall PlantTurnip::GetGridItemTarget(PlantTurnip *this,bool param_1)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  long *extraout_x0;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114) + -1;
  }
  else {
    iVar1 = *(int *)(*(long *)(this + 0x10) + 0x114) + 1;
  }
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesAtGridSquare
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4,iVar1,
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  uVar5 = local_20;
  uVar3 = FUN_04075214(local_20,local_18);
  if (uVar3 == 0) {
    EntityFinder::GetEntitiesAtGridSquare
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4,
               *(undefined4 *)(*(long *)(this + 0x10) + 0x114),
               *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
    uVar5 = local_20;
    uVar3 = FUN_04075214(local_20,local_18);
  }
  for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 1) {
    FUN_04075220(uVar5,uVar4);
    nop();
    cVar2 = (**(code **)(*extraout_x0 + 0x200))();
    if ((cVar2 != '\0') &&
       (cVar2 = (**(code **)(*extraout_x0 + 0x210))(extraout_x0,*(undefined8 *)(this + 0x10)),
       plVar6 = extraout_x0, cVar2 != '\0')) goto LAB_0407648c;
    uVar5 = local_20;
    uVar3 = FUN_04075214(local_20,local_18);
  }
  plVar6 = (long *)0x0;
LAB_0407648c:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTurnip::FindTargets() */

void __thiscall PlantTurnip::FindTargets(PlantTurnip *this)

{
  char cVar1;
  long lVar2;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = GetGridItemTarget(this,false);
  GetZombieTarget(SUB81(this,0));
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1 != '\0' || lVar2 != 0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTurnip::UpdateActions() */

void __thiscall PlantTurnip::UpdateActions(PlantTurnip *this)

{
  char cVar1;
  int iVar2;
  PopAnimRig *this_00;
  long *plVar3;
  PlantAnimRig_Turnip *pPVar4;
  long lVar5;
  UIEasyButtonWidget *this_01;
  float fVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 != '\0') goto LAB_040765fc;
  iVar2 = *(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
  if (iVar2 == 0xb) {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar1 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar1 != '\0') goto LAB_040765fc;
    this_01 = *(UIEasyButtonWidget **)(this + 0x10);
  }
  else {
    if (iVar2 != 0xd) {
      if ((((iVar2 == 10) && (iVar2 = FUN_040751ec(), 1 < iVar2)) &&
          (cVar1 = Board::IsGameplayEnded(*(Board **)(gLawnApp + 0x9f0)), cVar1 == '\0')) &&
         (cVar1 = FindTargets(this), cVar1 != '\0')) {
        lVar5 = *(long *)(this + 0x10);
        *(undefined4 *)(lVar5 + 200) = 0x11;
        pPVar4 = (PlantAnimRig_Turnip *)FUN_04075a48(lVar5);
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
        std::string::string(asStack_58,"onAnimStoppedCallback");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_60,asStack_58);
        PlantAnimRig_Turnip::PlayPrepareAttack(pPVar4,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        PlantAnimRig::SetState((PlantAnimRig *)pPVar4,0xe);
      }
      goto LAB_040765fc;
    }
    fVar6 = (float)PVZ_Dt();
    if (0.0 < *(float *)(this + 0x2c) - fVar6) {
      *(float *)(this + 0x2c) = *(float *)(this + 0x2c) - fVar6;
      goto LAB_040765fc;
    }
    this_01 = *(UIEasyButtonWidget **)(this + 0x10);
    *(undefined4 *)(this + 0x2c) = 0;
  }
  *(undefined4 *)(this_01 + 200) = 10;
  plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this_01);
  (**(code **)(*plVar3 + 0x118))();
LAB_040765fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTurnip::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantTurnip::onAnimStoppedCallback(PlantTurnip *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  PlantAnimRig_Turnip *pPVar4;
  UIEasyButtonWidget *this_00;
  long lVar5;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"idle3");
  if (bVar1) {
    this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  }
  else {
    bVar1 = std::operator==(param_1,"idle_to_attack");
    if (bVar1) {
      if (*(int *)(*(long *)(this + 0x10) + 200) == 0x11) {
        cVar2 = FindTargets(this);
        if (cVar2 == '\0') {
          pPVar4 = (PlantAnimRig_Turnip *)FUN_04075a48(*(undefined8 *)(this + 0x10));
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
          std::string::string(asStack_58,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_60,asStack_58);
          PlantAnimRig_Turnip::PlayResumeIdle(pPVar4,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string(asStack_58);
          nop();
          Sexy::RtId::~RtId(aRStack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
          *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0x12;
        }
        else {
          pPVar4 = (PlantAnimRig_Turnip *)FUN_04075a48(*(undefined8 *)(this + 0x10));
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
          std::string::string(asStack_58,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_60,asStack_58);
          PlantAnimRig_Turnip::PlayLevelAttack(pPVar4,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate(aRStack_50);
          std::string::~string(asStack_58);
          nop();
          Sexy::RtId::~RtId(aRStack_60);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
          *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xf;
        }
      }
      goto LAB_040767ec;
    }
    bVar1 = std::operator==(param_1,"attack_to_idle");
    if (!bVar1) {
      bVar1 = std::operator==(param_1,"attack");
      if ((bVar1) && (*(int *)(*(long *)(this + 0x10) + 200) - 0xfU < 2)) {
        cVar2 = FindTargets(this);
        if (cVar2 == '\0') {
          lVar5 = *(long *)(this + 0x10);
          *(undefined4 *)(lVar5 + 200) = 0x12;
          pPVar4 = (PlantAnimRig_Turnip *)FUN_04075a48(lVar5);
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
          std::string::string(asStack_58,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_60,asStack_58);
          PlantAnimRig_Turnip::PlayResumeIdle
                    (pPVar4,(RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50)
          ;
        }
        else {
          pPVar4 = (PlantAnimRig_Turnip *)FUN_04075a48(*(undefined8 *)(this + 0x10));
          ToolPacketData::GetProps();
          Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
          std::string::string(asStack_58,"onAnimStoppedCallback");
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                     aRStack_60,asStack_58);
          PlantAnimRig_Turnip::PlayLevelAttack
                    (pPVar4,(RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50)
          ;
        }
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_58);
        nop();
        Sexy::RtId::~RtId(aRStack_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
      }
      goto LAB_040767ec;
    }
    this_00 = *(UIEasyButtonWidget **)(this + 0x10);
    if (*(int *)(this_00 + 200) != 0x12) goto LAB_040767ec;
  }
  *(undefined4 *)(this_00 + 200) = 10;
  plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
  (**(code **)(*plVar3 + 0x118))();
LAB_040767ec:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTurnip::TakeAttack() */

void __thiscall PlantTurnip::TakeAttack(PlantTurnip *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  BoardEntity *this_00;
  int iVar6;
  Plant *this_01;
  RealObject *this_02;
  code *pcVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  RtMixedPtrBase aRStack_80 [8];
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  iVar2 = *(int *)(*(long *)(this + 0x10) + 200);
  local_8 = ___stack_chk_guard;
  GetZombieTarget(SUB81(this,0));
  Plant::GetProps();
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  lVar3 = FUN_0407527c(*(undefined8 *)(lVar3 + 0x70));
  this_01 = *(Plant **)(this + 0x10);
  fVar9 = (float)FUN_040751d0(*(undefined4 *)(this_01 + 0xf4),*(undefined4 *)(this_01 + 0x100),
                              *(undefined4 *)(this_01 + 0x104),*(undefined4 *)(this_01 + 0x3b8));
  fVar10 = (float)FUN_040751e0(*(undefined4 *)(this_01 + 0x3bc));
  iVar6 = *(int *)(lVar3 + 0x2c);
  fVar11 = (float)Plant::GetExtraDPSmodifier(this_01);
  fVar12 = (float)FUN_040751e4(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
  iVar6 = (int)(fVar9 * fVar10 * (float)iVar6 * fVar11 * fVar12);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_80);
  if (cVar1 == '\0') {
    plVar4 = (long *)GetGridItemTarget(this,iVar2 == 0x10);
    if (plVar4 != (long *)0x0) {
      pcVar7 = *(code **)(*plVar4 + 0x110);
      if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
        uVar5 = PlantFramework::GetDamageFlags();
      }
      else {
        uVar5 = (**(code **)(*(long *)this + 0x198))(this,0);
      }
      uVar8 = *(undefined8 *)(this + 0x10);
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)(float)iVar6,local_70,local_6c,aRStack_68,uVar5,uVar8,aPStack_78,0);
      (*pcVar7)(plVar4,aRStack_68);
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    }
  }
  else {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    pcVar7 = *(code **)(*plVar4 + 0x110);
    if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
      uVar5 = PlantFramework::GetDamageFlags();
    }
    else {
      uVar5 = (**(code **)(*(long *)this + 0x198))(this,0);
    }
    this_00 = (BoardEntity *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
    iVar2 = BoardEntity::CalcColumnPosition(this_00);
    lVar3 = *(long *)(this + 0x10);
    Sexy::Point::Point(aPStack_78,iVar2,*(int *)(lVar3 + 0x110));
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo
              ((DamageInfo *)(float)iVar6,local_70,local_6c,aRStack_68,uVar5,lVar3,aPStack_78,0);
    (*pcVar7)(plVar4,aRStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  }
  this_02 = *(RealObject **)(this + 0x10);
  std::string::string((string *)aRStack_68,"Play_Bonk");
  RealObject::PlayPositionalSound(this_02,(string *)aRStack_68,0.0);
  std::string::~string((string *)aRStack_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTurnip::findHighestPriorityPlantableRow(int&) const */

void __thiscall PlantTurnip::findHighestPriorityPlantableRow(PlantTurnip *this,int *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long extraout_x0;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  Board *pBVar12;
  int iVar13;
  undefined1 auVar14 [16];
  Point aPStack_78 [8];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_48;
  undefined7 uStack_47;
  undefined8 local_40;
  undefined8 local_30 [5];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_60);
  EntityFinder::GetEntities
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_60,1);
  local_48 = (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>)0x0;
  std::vector<bool,std::allocator<bool>>::vector
            ((ulong)local_30,(bool *)(long)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc),
             (allocator *)&local_48);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((ulong)&local_48,(allocator *)(long)*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  iVar13 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc);
  if (0 < iVar13) {
    uVar5 = CONCAT71(uStack_47,local_48);
    lVar10 = 0;
    do {
      puVar3 = (undefined4 *)FUN_0407520c(uVar5,lVar10);
      *puVar3 = (int)lVar10;
      lVar10 = lVar10 + 1;
      puVar3[1] = 0;
    } while ((int)lVar10 < iVar13);
  }
  uVar5 = local_60;
  uVar11 = 0;
  uVar4 = FUN_04075214(local_60,local_58);
  if (uVar4 != 0) {
    do {
      FUN_04075220(uVar5,uVar11);
      nop();
      if ((extraout_x0 != 0) && (*(int *)(extraout_x0 + 200) != 3)) {
        auVar14 = FUN_040752d8(local_30[0],(long)*(int *)(extraout_x0 + 0x110));
        local_70 = auVar14;
        bVar1 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_70);
        if ((!bVar1) && (*(RtObject **)(extraout_x0 + 0xa8) != (RtObject *)0x0)) {
          bVar1 = Sexy::RtObject::IsA<PlantTurnip>(*(RtObject **)(extraout_x0 + 0xa8));
          if (bVar1) {
            auVar14 = FUN_040752d8(local_30[0],(long)*(int *)(extraout_x0 + 0x110));
            local_70 = auVar14;
            std::_Bit_reference::operator=((_Bit_reference *)local_70,true);
          }
        }
        lVar10 = FUN_0407520c(CONCAT71(uStack_47,local_48),(long)*(int *)(extraout_x0 + 0x110));
        uVar5 = local_60;
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
        uVar4 = FUN_04075214(local_60,local_58);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar4);
  }
  uVar11 = 0;
  iVar13 = 0;
  lVar10 = std::vector<bool,std::allocator<bool>>::size
                     ((vector<bool,std::allocator<bool>> *)local_30);
  if (lVar10 != 0) {
    do {
      auVar14 = FUN_040752d8(local_30[0],uVar11);
      local_70 = auVar14;
      bVar1 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_70);
      uVar8 = (uint)bVar1;
      if ((!bVar1) && (pBVar12 = *(Board **)(gLawnApp + 0x9f0), 0 < *(int *)(pBVar12 + 0xf8))) {
        do {
          Sexy::Point::Point(aPStack_78,uVar8,iVar13);
          Plant::GetType();
          cVar2 = Board::CanPlantAt(pBVar12,aPStack_78,(_Bit_reference *)local_70);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_70)
          ;
          if (cVar2 != '\0') goto LAB_0407800c;
          uVar8 = uVar8 + 1;
          pBVar12 = *(Board **)(gLawnApp + 0x9f0);
        } while ((int)uVar8 < *(int *)(pBVar12 + 0xf8));
      }
      uVar11 = uVar11 + 1;
      iVar13 = (int)uVar11;
      uVar4 = std::vector<bool,std::allocator<bool>>::size
                        ((vector<bool,std::allocator<bool>> *)local_30);
    } while (uVar11 < uVar4);
  }
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_48);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_48);
  FUN_04077d90(uVar5,uVar6);
  uVar5 = CONCAT71(uStack_47,local_48);
  uVar4 = FUN_04075228(uVar5,local_40);
  for (uVar11 = 0; uVar11 < uVar4; uVar11 = uVar11 + 1) {
    piVar7 = (int *)FUN_0407520c(uVar5,uVar11);
    iVar13 = *piVar7;
    pBVar12 = *(Board **)(gLawnApp + 0x9f0);
    if (0 < *(int *)(pBVar12 + 0xf8)) {
      iVar9 = 0;
      do {
        Sexy::Point::Point(aPStack_78,iVar9,iVar13);
        Plant::GetType();
        cVar2 = Board::CanPlantAt(pBVar12,aPStack_78,(_Bit_reference *)local_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_70);
        if (cVar2 != '\0') goto LAB_0407800c;
        iVar9 = iVar9 + 1;
        pBVar12 = *(Board **)(gLawnApp + 0x9f0);
      } while (iVar9 < *(int *)(pBVar12 + 0xf8));
      uVar5 = CONCAT71(uStack_47,local_48);
      uVar4 = FUN_04075228(uVar5,local_40);
    }
  }
  cVar2 = '\0';
LAB_04078014:
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(&local_48);
  std::vector<bool,std::allocator<bool>>::~vector((vector<bool,std::allocator<bool>> *)local_30);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_60);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
LAB_0407800c:
  *param_1 = iVar13;
  goto LAB_04078014;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTurnip::OnAnimCommand(std::string const&, std::string const&) */

void PlantTurnip::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int local_18;
  int local_14;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    iVar3 = 0;
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
    iVar4 = 2;
    if (cVar2 == '\0') {
      iVar4 = 1;
    }
    do {
      while( true ) {
        local_18 = -1;
        cVar2 = findHighestPriorityPlantableRow((PlantTurnip *)param_1,&local_18);
        if (cVar2 != '\0') break;
LAB_04078200:
        iVar3 = iVar3 + 1;
        if (iVar3 == iVar4) goto LAB_04078270;
      }
      local_14 = -1;
      cVar2 = findPlantableSpotColumn
                        ((PlantTurnip *)param_1,local_18,*(int *)(*(long *)(param_1 + 0x10) + 0x114)
                         ,&local_14);
      if (cVar2 == '\0') goto LAB_04078200;
      iVar3 = iVar3 + 1;
      Sexy::Point::Point(aPStack_10,local_14,local_18);
      CreateAndflyTurnipAt((PlantTurnip *)param_1,aPStack_10);
    } while (iVar3 != iVar4);
  }
  else {
    bVar1 = std::operator==(param_2,"angry_action");
    if (bVar1) {
      TakeAttack((PlantTurnip *)param_1);
    }
  }
LAB_04078270:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}

