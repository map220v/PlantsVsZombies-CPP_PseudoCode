// Class: PlantSquash


/* PlantSquash::blockGravestoneSpawning(Sexy::Point const&, bool*) */

void __thiscall PlantSquash::blockGravestoneSpawning(PlantSquash *this,Point *param_1,bool *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 != '\0') {
    if ((*(int *)param_1 == *(int *)(this + 0x28)) &&
       (*(int *)(param_1 + 4) == *(int *)(this + 0x2c))) {
      *param_2 = true;
    }
  }
  return;
}


/* PlantSquash::IsInvincible() const */

bool __thiscall PlantSquash::IsInvincible(PlantSquash *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) != 4;
}


/* PlantSquash::onPlantPlacedOnBoard(Plant*) */

void __thiscall PlantSquash::onPlantPlacedOnBoard(PlantSquash *this,Plant *param_1)

{
  undefined4 uVar1;
  Plant *pPVar2;
  
  pPVar2 = *(Plant **)(this + 0x10);
  if (pPVar2 != param_1) {
    return;
  }
  uVar1 = *(undefined4 *)(pPVar2 + 0x114);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(pPVar2 + 0x110);
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* PlantSquash::onDestroy() */

void __thiscall PlantSquash::onDestroy(PlantSquash *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0x228))(this);
  }
  PlantFramework::onDestroy((PlantFramework *)this);
  return;
}


/* PlantSquash::GetCollisionFlags(PlantWeapon) */

void PlantSquash::GetCollisionFlags(void)

{
  operator|(1,2);
  return;
}


/* PlantSquash::CalcRenderOrder() */

void __thiscall PlantSquash::CalcRenderOrder(PlantSquash *this)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = *(int *)(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     **)(this + 0x10) + 200);
  if ((1 < iVar1 - 10U) && (iVar1 != 4)) {
    lVar3 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
    uVar2 = BoardTransforms::BoardSpaceToGridY(*(float *)(lVar3 + 4));
    Board::MakeRenderOrder(0x64960,uVar2,iVar1 == 4);
    return;
  }
  PlantFramework::CalcRenderOrder((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSquash::StaticClassInit() */

void PlantSquash::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSquash");
    (*pcVar2)(plVar1,asStack_10,FUN_0406be74,0x68,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSquash::StaticGetClass() */

long * PlantSquash::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSquash",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSquash::GetClass() const */

long * PlantSquash::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSquash",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSquash::~PlantSquash() */

void __thiscall PlantSquash::~PlantSquash(PlantSquash *this)

{
  *(undefined ***)this = &PTR_GetClass_067c5d70;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantSquash::~PlantSquash() */

void __thiscall PlantSquash::~PlantSquash(PlantSquash *this)

{
  ~PlantSquash(this);
  AK::FreeHook(this);
  return;
}


/* PlantSquash::PlantSquash() */

void __thiscall PlantSquash::PlantSquash(PlantSquash *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067c5d70;
  DVec3::DVec3((DVec3 *)(this + 0x30));
  DVec3::DVec3((DVec3 *)(this + 0x3c));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x50));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  return;
}


/* PlantSquash::StaticNew() */

PlantSquash * PlantSquash::StaticNew(void)

{
  PlantSquash *this;
  
  this = ::operator_new(0x68);
  PlantSquash(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSquash::travelToJumpUpDestination() */

void __thiscall PlantSquash::travelToJumpUpDestination(PlantSquash *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  SexyVector3 *pSVar4;
  long *plVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float local_28;
  float local_24;
  float local_18;
  undefined4 local_14;
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x58);
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_28);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    fVar8 = *(float *)(*(long *)(this + 0x10) + 0x128);
    fVar7 = (float)PVZ_T();
    uVar6 = 0x3e19999a;
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pSVar4 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_01);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x3c),pSVar4);
    plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    local_18 = (float)(**(code **)(*plVar5 + 0x3b0))((fVar8 + 0.15) - fVar7);
    *(float *)(this + 0x3c) = local_18;
    local_14 = uVar6;
  }
  cVar2 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar2 == '\0') {
    lVar3 = *(long *)(this + 0x10);
    fVar7 = 0.5;
  }
  else {
    lVar3 = *(long *)(this + 0x10);
    fVar7 = 0.25;
  }
  fVar8 = *(float *)(lVar3 + 0x128);
  uVar6 = PVZ_T();
  local_28 = CurveLerp<float>(fVar8 - fVar7,fVar8,uVar6,this + 0x30,this + 0x3c,4);
  fVar8 = *(float *)(*(long *)(this + 0x10) + 0x128);
  uVar6 = PVZ_T();
  local_18 = *(float *)(this + 0x40) - 120.0;
  local_24 = CurveLerp<float>(fVar8 - fVar7,fVar8,uVar6,this + 0x34,&local_18,4);
  (**(code **)(**(long **)(this + 0x10) + 0x78))(*(long **)(this + 0x10),(DVec3 *)&local_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x0406b874 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantSquash::travelToLandingDestination() */

void __thiscall PlantSquash::travelToLandingDestination(PlantSquash *this)

{
  undefined8 *puVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  float fVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  float local_1c;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  puVar1 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  local_18 = *puVar1;
  uVar4 = *(undefined4 *)(this_00 + 0x128);
  local_10 = *(undefined4 *)(puVar1 + 1);
  auVar3 = PVZ_T();
  local_1c = *(float *)(this + 0x40) - 120.0;
  fVar2 = CurveLerp<float>(auVar3,uVar4,auVar3._0_4_,&local_1c,this + 0x40,1);
  local_18 = CONCAT44(fVar2,(undefined4)local_18);
  (**(code **)(**(long **)(this + 0x10) + 0x78))(*(long **)(this + 0x10),&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSquash::GetShadowOffset() */

void __thiscall PlantSquash::GetShadowOffset(PlantSquash *this)

{
  char cVar1;
  long lVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined4 uVar3;
  float fVar4;
  ulong local_10;
  long local_8;
  
  fVar4 = 0.0;
  this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this_00 + 200) - 0xeU < 4) {
    if (*(code **)(*(long *)this_00 + 0x1f8) == Plant::IsInPlantFoodState) {
      cVar1 = Plant::IsInPlantFoodState((Plant *)this_00);
    }
    else {
      cVar1 = (**(code **)(*(long *)this_00 + 0x1f8))();
      this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(this + 0x10);
    }
    if ((cVar1 == '\0') || (1 < *(int *)(this_00 + 200) - 0xeU)) {
      lVar2 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(this_00);
      fVar4 = *(float *)(this + 0x40) - *(float *)(lVar2 + 4);
    }
    else {
      fVar4 = *(float *)(this_00 + 0x128);
      uVar3 = PVZ_T();
      fVar4 = CurveLerp<float>(fVar4 - 0.25,fVar4,uVar3,this + 0x34,this + 0x40,4);
      lVar2 = std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              **)(this + 0x10));
      fVar4 = fVar4 - *(float *)(lVar2 + 4);
    }
  }
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,fVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10 & 0xffffffff,(int)(local_10 >> 0x20));
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSquash::playAnimation(std::string const&, RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
PlantSquash::playAnimation(PlantSquash *this,undefined8 param_1,RtReflectionDelegate *param_3)

{
  PopAnimRig *pPVar1;
  PlantAnimRig *pPVar2;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_3);
  PopAnimRig::PlayAndStop(pPVar1,param_1,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  pPVar2 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  PlantAnimRig::SetState(pPVar2,0xe);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSquash::registerForEvents() */

void __thiscall PlantSquash::registerForEvents(PlantSquash *this)

{
  undefined *puVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,blockGravestoneSpawning);
  local_60 = local_38;
  local_70 = local_48;
  uStack_68 = uStack_40;
  MessageRouter::
  Subscribe<Sexy::Point_const&,bool*,Sexy::CBMemberTranslatorX<PlantSquash,void(PlantSquash::*)(Sexy::Point_const&,bool*)>>
            ((MessageRouter *)puVar1,Message::BlockGravestoneSpawning,&local_70);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gatherPlantingRestrictions);
  local_90 = local_30;
  uStack_88 = uStack_28;
  local_80 = local_20;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<PlantSquash,void(PlantSquash::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantPlacedOnBoard);
  local_a0 = local_8;
  local_b0 = local_18;
  uStack_a8 = uStack_10;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantSquash,void(PlantSquash::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlaced,&local_b0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSquash::dealDamageToLandingArea() */

void __thiscall PlantSquash::dealDamageToLandingArea(PlantSquash *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  RealObject *this_00;
  ulong uVar7;
  SexyVector3 *pSVar8;
  char *__s;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  ulong uVar9;
  RealObject *this_02;
  code *pcVar10;
  undefined4 uVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  float local_60;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = (**(code **)(*(long *)this + 400))(this,0);
  if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
    uVar5 = PlantFramework::GetDamageFlags();
  }
  else {
    uVar5 = (**(code **)(*(long *)this + 0x198))(this,0);
  }
  FUN_0406b140(aRStack_68,*(undefined8 *)(this + 0x10));
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  FUN_0406b1a4(*(undefined8 *)(lVar6 + 0x70));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    local_60 = local_60 * 0.83;
  }
  operator|=(auStack_58,uVar5);
  uVar9 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  lVar6 = FUN_0406be08(*(undefined8 *)(this + 0x10));
  iVar4 = *(int *)(lVar6 + 0x2b8);
  uVar3 = BoardTransforms::BoardSpaceToGridY(*(float *)(this + 0x40));
  lVar6 = *(long *)(this + 0x10);
  uVar11 = *(undefined4 *)(lVar6 + 0x1c);
  local_88 = FUN_0406b1a8(*(undefined4 *)(lVar6 + 0x18),uVar11,*(undefined4 *)(lVar6 + 0x20));
  uStack_84 = uVar11;
  EntityFinder::GetEntitiesTouchingCircle2D
            ((float)iVar4,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80
             ,2,(string *)&local_88,uVar3,uVar3);
  uVar5 = local_80;
  lVar6 = FUN_0406b17c(local_80,local_78);
  if (lVar6 != 0) {
    do {
      FUN_0406b188(uVar5,uVar9);
      nop();
      cVar1 = (**(code **)(*(long *)this_00 + 0x328))();
      if (cVar1 == '\0') {
        pcVar10 = *(code **)(*(long *)this_00 + 0x3d0);
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_88,(RtWeakPtrBase *)aRStack_90);
        cVar1 = (*pcVar10)(this_00,(string *)&local_88,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
        if (((cVar1 != '\0') &&
            (cVar1 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,uVar2), cVar1 != '\0')) &&
           (cVar1 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10)),
           cVar1 != '\0')) {
          iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
          Sexy::Point::Point((Point *)&local_88,iVar4,*(int *)(*(long *)(this + 0x10) + 0x110));
          local_50 = CONCAT44(uStack_84,local_88);
          (**(code **)(*(long *)this_00 + 0x110))(this_00,aRStack_68);
        }
      }
      uVar5 = local_80;
      uVar9 = uVar9 + 1;
      uVar7 = FUN_0406b17c(local_80,local_78);
    } while (uVar9 < uVar7);
  }
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar1 == '\0') {
    pSVar8 = (SexyVector3 *)(this + 0x3c);
    cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),pSVar8);
    if (((cVar1 != '\0') ||
        (cVar1 = Board::IsShallowWater(*(Board **)(gLawnApp + 0x9f0),pSVar8), cVar1 != '\0')) ||
       (cVar1 = Board::IsSky(*(Board **)(gLawnApp + 0x9f0),pSVar8), cVar1 != '\0')) {
      this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(this + 0x10);
      pSVar8 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_01);
      Board::DoEntityLandedEffects(*(Board **)(gLawnApp + 0x9f0),pSVar8,(BoardEntity *)this_01);
      Plant::KillPlant(*(Plant **)(this + 0x10),0,0,1);
      goto LAB_0406c598;
    }
  }
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),1,4,0.0);
  cVar1 = (**(code **)(*(long *)this + 0x180))(this);
  if (cVar1 == '\0') {
    this_02 = *(RealObject **)(this + 0x10);
    __s = "Play_Plant_Squash_Impact";
  }
  else {
    this_02 = *(RealObject **)(this + 0x10);
    __s = "Play_Plant_Squash_Impact_Nitro";
  }
  std::string::string((string *)&local_88,__s);
  RealObject::PlayPositionalSound(this_02,(string *)&local_88,0.0);
  std::string::~string((string *)&local_88);
  nop();
LAB_0406c598:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSquash::setState(unsigned int) */

void __thiscall PlantSquash::setState(PlantSquash *this,uint param_1)

{
  char cVar1;
  bool bVar2;
  UIEasyButtonWidget *this_00;
  PopAnimRig *pPVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  SexyVector3 *pSVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  RealObject *this_02;
  float fVar8;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(uint *)(this_00 + 200) == param_1) goto switchD_0406c7ec_caseD_5;
  *(uint *)(this_00 + 200) = param_1;
  switch(param_1) {
  case 4:
    plVar5 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
    (**(code **)(*plVar5 + 0x118))();
    break;
  case 10:
    Plant::EndCondition((Plant *)this_00,0xe);
    pcVar6 = "turn";
    goto LAB_0406caf8;
  case 0xb:
    Plant::EndCondition((Plant *)this_00,0xe);
    pcVar6 = "size_up";
LAB_0406caf8:
    std::string::string((string *)a_Stack_58,pcVar6);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    playAnimation(this,(string *)a_Stack_58,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string((string *)a_Stack_58);
    nop();
    break;
  case 0xc:
    Plant::EndCondition((Plant *)this_00,0xe);
    pcVar6 = "jump_up_left";
    goto LAB_0406ca1c;
  case 0xd:
    Plant::EndCondition((Plant *)this_00,0xe);
    pcVar6 = "jump_up_right";
LAB_0406ca1c:
    std::string::string((string *)a_Stack_58,pcVar6);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
    playAnimation(this,(string *)a_Stack_58,
                  (RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string((string *)a_Stack_58);
    nop();
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
    this_02 = *(RealObject **)(this + 0x10);
    if (cVar1 == '\0') {
      pcVar6 = "Play_Plant_Squash_Attack";
    }
    else {
      pcVar6 = "Play_Plant_Squash_Jump_Nitro";
    }
    std::string::string((string *)a_Stack_58,pcVar6);
    RealObject::PlayPositionalSound(this_02,(string *)a_Stack_58,0.0);
    std::string::~string((string *)a_Stack_58);
    nop();
    lVar7 = *(long *)(this + 0x10);
    fVar8 = (float)PVZ_T();
    *(float *)(lVar7 + 0x128) = fVar8 + 0.5;
    break;
  case 0xe:
  case 0xf:
    Plant::EndCondition((Plant *)this_00,0xe);
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    PopAnimRig::SetPaused(pPVar3,false);
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar1 == '\0') {
      lVar7 = *(long *)(this + 0x10);
      fVar8 = (float)PVZ_T();
      *(float *)(lVar7 + 0x128) = fVar8 + 0.5;
      UnchartedModePlantNumData::UnchartedModePlantNumData
                ((UnchartedModePlantNumData *)asStack_60,1,0);
      PlantFramework::FindTargetZombie
                ((RtWeakPtr *)a_Stack_58,this,0,(UnchartedModePlantNumData *)asStack_60);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_58);
      if (bVar2) {
        this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
        pSVar4 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(this_01);
        Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x3c),pSVar4);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
    }
    else {
      lVar7 = *(long *)(this + 0x10);
      fVar8 = (float)PVZ_T();
      *(float *)(lVar7 + 0x128) = fVar8 + 0.25;
    }
    break;
  case 0x10:
    Plant::EndCondition((Plant *)this_00,0xe);
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar1 == '\0') {
      pcVar6 = "jump_down_left";
    }
    else {
      pcVar6 = "plantfood_jump_down_left";
    }
    goto LAB_0406c8a4;
  case 0x11:
    Plant::EndCondition((Plant *)this_00,0xe);
    cVar1 = (**(code **)(*(long *)this + 0x180))(this);
    if (cVar1 == '\0') {
      pcVar6 = "jump_down_right";
    }
    else {
      pcVar6 = "plantfood_jump_down_right";
    }
LAB_0406c8a4:
    std::string::string((string *)a_Stack_58,pcVar6);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
               asStack_60);
    playAnimation(this,(string *)a_Stack_58,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string((string *)a_Stack_58);
    nop();
    lVar7 = *(long *)(this + 0x10);
    fVar8 = (float)PVZ_T();
    *(float *)(lVar7 + 0x128) = fVar8 + 0.15;
    break;
  case 0x12:
    Plant::EndCondition((Plant *)this_00,0xe);
    pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    PopAnimRig::SetPaused(pPVar3,false);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_58);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x58),(RtWeakPtr *)a_Stack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
    dealDamageToLandingArea(this);
  }
switchD_0406c7ec_caseD_5:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSquash::Initialize() */

void __thiscall PlantSquash::Initialize(PlantSquash *this)

{
  undefined4 uVar1;
  char cVar2;
  SexyVector3 *pSVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  uVar1 = *(undefined4 *)(this_00 + 0x114);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(this_00 + 0x110);
  *(undefined4 *)(this + 0x28) = uVar1;
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(this_00);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x30),pSVar3);
  pSVar3 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x3c),pSVar3);
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x50),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  this[0x60] = (PlantSquash)0x0;
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0;
  Sexy::LazySingleton<PVPManager>::GetInstancePtr();
  cVar2 = PVPManager::IsInBattle();
  if (cVar2 != '\0') {
    Plant::SetExtraLevelDamge(*(Plant **)(this + 0x10),0.5);
  }
  setState(this,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSquash::UpdateActions() */

void __thiscall PlantSquash::UpdateActions(PlantSquash *this)

{
  bool bVar1;
  SexyVector3 *pSVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  UnchartedModePlantNumData aUStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar6 = *(int *)(*(long *)(this + 0x10) + 200);
  do {
    switch(iVar6) {
    case 4:
      UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_18,1,0);
      PlantFramework::FindTargetZombie(aRStack_10,this,0,aUStack_18);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_10);
      if (bVar1) {
        pSVar2 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 **)(this + 0x10));
        Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x30),pSVar2);
        this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        pSVar2 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(this_00);
        Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x3c),pSVar2);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(this + 0x58),aRStack_10);
        if (*(float *)(this + 0x30) <= *(float *)(this + 0x3c)) {
          setState(this,0xb);
        }
        else {
          setState(this,10);
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      iVar5 = *(int *)(*(long *)(this + 0x10) + 200);
      break;
    default:
      goto switchD_0406cd94_caseD_5;
    case 0xc:
      fVar7 = (float)PVZ_T();
      lVar4 = *(long *)(this + 0x10);
      if (*(float *)(lVar4 + 0x128) <= fVar7) {
        uVar3 = 0xe;
        goto LAB_0406ce6c;
      }
LAB_0406cdb4:
      iVar5 = *(int *)(lVar4 + 200);
      break;
    case 0xd:
      fVar7 = (float)PVZ_T();
      lVar4 = *(long *)(this + 0x10);
      if (fVar7 < *(float *)(lVar4 + 0x128)) goto LAB_0406cdb4;
      uVar3 = 0xf;
LAB_0406ce6c:
      setState(this,uVar3);
      Plant::SetTravellingOutsideGroup(*(Plant **)(this + 0x10),true);
      iVar5 = *(int *)(*(long *)(this + 0x10) + 200);
      break;
    case 0xe:
      travelToJumpUpDestination(this);
      fVar7 = (float)PVZ_T();
      lVar4 = *(long *)(this + 0x10);
      if (fVar7 < *(float *)(lVar4 + 0x128)) goto LAB_0406cdb4;
      setState(this,0x10);
      iVar5 = *(int *)(*(long *)(this + 0x10) + 200);
      break;
    case 0xf:
      travelToJumpUpDestination(this);
      fVar7 = (float)PVZ_T();
      lVar4 = *(long *)(this + 0x10);
      if (fVar7 < *(float *)(lVar4 + 0x128)) goto LAB_0406cdb4;
      setState(this,0x11);
      iVar5 = *(int *)(*(long *)(this + 0x10) + 200);
      break;
    case 0x10:
    case 0x11:
      travelToLandingDestination(this);
      fVar7 = (float)PVZ_T();
      lVar4 = *(long *)(this + 0x10);
      if (fVar7 < *(float *)(lVar4 + 0x128)) goto LAB_0406cdb4;
      setState(this,0x12);
      iVar5 = *(int *)(*(long *)(this + 0x10) + 200);
    }
    bVar1 = iVar6 != iVar5;
    iVar6 = iVar5;
  } while (bVar1);
switchD_0406cd94_caseD_5:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSquash::CancelPlantfood() */

void __thiscall PlantSquash::CancelPlantfood(PlantSquash *this)

{
  undefined *puVar1;
  bool bVar2;
  RtObject *this_00;
  Effect_PopAnim *pEVar3;
  undefined8 uVar4;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  MessageRouter::Post<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::NotifyPlantfoodRelease,
             *(Plant **)(this + 0x10));
  Plant::HidePlantfoodAnimationEffect(*(Plant **)(this + 0x10));
  Board::SetGridSquareLocked
            (*(Board **)(gLawnApp + 0x9f0),*(int *)(this + 0x28),*(int *)(this + 0x2c),false);
  puVar1 = gMessageRouter;
  uVar4 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point(aPStack_10,*(int *)(this + 0x28),*(int *)(this + 0x2c));
  MessageRouter::Broadcast<Plant*,Sexy::Point&,Plant*,Sexy::Point>
            ((MessageRouter *)puVar1,Message::PlantMoving,uVar4,aPStack_10);
  Plant::SetGridLoc(*(Plant **)(this + 0x10),*(int *)(this + 0x28),*(int *)(this + 0x2c));
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x50));
  if (bVar2) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x50));
    pEVar3 = Sexy::RtObject::Cast<Effect_PopAnim>(this_00);
    std::string::string((string *)aPStack_10,"plantfood_off");
    Effect_PopAnim::PlaySingleAnimation(pEVar3,aPStack_10,0);
    std::string::~string((string *)aPStack_10);
    nop();
  }
  setState(this,4);
  Plant::SetTravellingOutsideGroup(*(Plant **)(this + 0x10),false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSquash::Idle() */

void __thiscall PlantSquash::Idle(PlantSquash *this)

{
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  setState(this,4);
  return;
}


/* PlantSquash::onAnimTurnFinished(std::string const&) */

void PlantSquash::onAnimTurnFinished(string *param_1)

{
  if (*(int *)(*(long *)(param_1 + 0x10) + 200) != 10) {
    setState((PlantSquash *)param_1,0xd);
    return;
  }
  setState((PlantSquash *)param_1,0xc);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSquash::backToStartPoint() */

void __thiscall PlantSquash::backToStartPoint(PlantSquash *this)

{
  int iVar1;
  Point *extraout_x1;
  int local_18;
  int local_14;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardTransforms::GridToBoardSpaceX(*(int *)(this + 0x28));
  *(float *)(this + 0x3c) = (float)iVar1;
  iVar1 = BoardTransforms::GridToBoardSpaceY(*(int *)(this + 0x2c));
  *(float *)(this + 0x40) = (float)iVar1;
  Sexy::Point::Point(aPStack_10,*(int *)(this + 0x28),*(int *)(this + 0x2c));
  BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)aPStack_10,extraout_x1);
  this[0x60] = (PlantSquash)0x1;
  *(float *)(this + 0x3c) = (float)local_18;
  *(float *)(this + 0x40) = (float)local_14 - 10.0;
  setState(this,0xd);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSquash::recoverStartState() */

void __thiscall PlantSquash::recoverStartState(PlantSquash *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MessageRouter::Post<Plant*,Plant*>
            ((MessageRouter *)gMessageRouter,Message::NotifyPlantfoodRelease,
             *(Plant **)(this + 0x10));
  Plant::HidePlantfoodAnimationEffect(*(Plant **)(this + 0x10));
  Board::SetGridSquareLocked
            (*(Board **)(gLawnApp + 0x9f0),*(int *)(this + 0x28),*(int *)(this + 0x2c),false);
  puVar1 = gMessageRouter;
  uVar2 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point(aPStack_10,*(int *)(this + 0x28),*(int *)(this + 0x2c));
  MessageRouter::Broadcast<Plant*,Sexy::Point&,Plant*,Sexy::Point>
            ((MessageRouter *)puVar1,Message::PlantMoving,uVar2,aPStack_10);
  Plant::SetGridLoc(*(Plant **)(this + 0x10),*(int *)(this + 0x28),*(int *)(this + 0x2c));
  setState(this,4);
  Plant::SetTravellingOutsideGroup(*(Plant **)(this + 0x10),false);
  this[0x60] = (PlantSquash)0x0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSquash::pickPlantfoodDestination() */

void __thiscall PlantSquash::pickPlantfoodDestination(PlantSquash *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  SexyVector3 *pSVar4;
  long lVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  ulong uVar7;
  size_t __nmemb;
  BoardEntity **ppBVar8;
  void *__base;
  Point *extraout_x1;
  code *pcVar9;
  ulong uVar10;
  undefined8 uVar11;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pSVar4 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x30),pSVar4);
  uVar10 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  Sexy::Insets::Insets
            ((Insets *)&local_48,0,0,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + 1,
             *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,2,
             (Insets *)&local_48);
  uVar2 = (**(code **)(*(long *)this + 400))(this,0);
  uVar11 = local_38;
  lVar5 = FUN_0406b17c(local_38,local_30);
  if (lVar5 != 0) {
    do {
      puVar6 = (undefined8 *)FUN_0406b188(uVar11,uVar10);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar6);
      if ((((this_00 != (Zombie *)0x0) &&
           (cVar1 = (**(code **)(*(long *)this_00 + 0x328))(), cVar1 == '\0')) &&
          (cVar1 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,uVar2), cVar1 != '\0')) &&
         (cVar1 = RealObject::IsOnOpposingTeam((RealObject *)this_00,*(RealObject **)(this + 0x10)),
         cVar1 != '\0')) {
        pcVar9 = *(code **)(*(long *)this_00 + 0x3d0);
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_48,(RtWeakPtrBase *)&local_50);
        cVar1 = (*pcVar9)(this_00,(Insets *)&local_48,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
        if (cVar1 != '\0') {
          puVar6 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this_00);
          local_48 = *puVar6;
          local_40 = *(undefined4 *)(puVar6 + 1);
          cVar1 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),(SexyVector3 *)&local_48);
          if (cVar1 == '\0') {
            ppBVar8 = (BoardEntity **)FUN_0406b188(local_38,uVar10);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,ppBVar8);
          }
        }
      }
      uVar11 = local_38;
      uVar10 = uVar10 + 1;
      uVar7 = FUN_0406b17c(local_38,local_30);
    } while (uVar10 < uVar7);
  }
  uVar11 = local_20;
  if ((*(int *)(this + 0x48) == 0) || (__nmemb = FUN_0406b17c(local_20,local_18), __nmemb == 0)) {
    iVar3 = BoardTransforms::GridToBoardSpaceX(*(int *)(this + 0x28));
    *(float *)(this + 0x3c) = (float)iVar3;
    iVar3 = BoardTransforms::GridToBoardSpaceY(*(int *)(this + 0x2c));
    *(float *)(this + 0x40) = (float)iVar3;
    Sexy::Point::Point((Point *)&local_48,*(int *)(this + 0x28),*(int *)(this + 0x2c));
    BoardTransforms::GridToBoardSpaceUnbounded((BoardTransforms *)&local_48,extraout_x1);
    *(undefined4 *)(this + 0x48) = 0;
    *(float *)(this + 0x3c) = (float)local_50;
    *(float *)(this + 0x40) = (float)local_4c - 10.0;
  }
  else {
    __base = (void *)FUN_0406b188(uVar11,0);
    qsort(__base,__nmemb,8,FUN_0406b5e8);
    uVar11 = local_20;
    lVar5 = FUN_0406b17c(local_20,local_18);
    puVar6 = (undefined8 *)FUN_0406b188(uVar11,lVar5 + -1);
    pSVar4 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)*puVar6);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x3c),pSVar4);
    FUN_0406b188(local_20,lVar5 + -1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58),(RtWeakPtrBase *)&local_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  }
  setState(this,0xd);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSquash::onAnimLandingFinished(std::string const&) */

void PlantSquash::onAnimLandingFinished(string *param_1)

{
  char cVar1;
  int iVar2;
  SquashProps *this;
  Plant *pPVar3;
  RealObject *this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_1 + 0x180))();
  this_00 = *(RealObject **)(param_1 + 0x10);
  if (cVar1 == '\0') {
    std::string::string(asStack_10,"Play_Plant_Squash_Impact");
    RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    if (param_1[0x60] == (string)0x0) {
      this = (SquashProps *)FUN_0406be08(*(undefined8 *)(param_1 + 0x10));
      pPVar3 = *(Plant **)(param_1 + 0x10);
      iVar2 = FUN_0406b164(pPVar3);
      if ((this != (SquashProps *)0x0) && (1 < iVar2)) {
        fVar4 = (float)PlantFramework::Rand((PlantFramework *)param_1,1.0);
        Sexy::LazySingleton<PVPManager>::GetInstancePtr();
        cVar1 = PVPManager::IsInBattle();
        if (cVar1 == '\0') {
          fVar5 = (float)SquashProps::GetLiveRateNormal(this,iVar2);
        }
        else {
          fVar5 = (float)SquashProps::GetLiveRateInPVP(this,iVar2);
        }
        fVar6 = (float)Plant::GetGeneSkillBoost(*(Plant **)(param_1 + 0x10));
        cVar1 = Plant::IsSkillCheat(*(Plant **)(param_1 + 0x10));
        if (cVar1 == '\0') {
          cVar1 = fVar4 < fVar6 + fVar5;
        }
        else {
          cVar1 = Plant::IsSkillActivate(*(Plant **)(param_1 + 0x10));
        }
        if (cVar1 != '\0') {
          backToStartPoint((PlantSquash *)param_1);
          goto LAB_0406d744;
        }
        pPVar3 = *(Plant **)(param_1 + 0x10);
      }
      Plant::KillPlant(pPVar3,1,0,0x8000000000);
    }
    else {
      recoverStartState((PlantSquash *)param_1);
    }
  }
  else {
    std::string::string(asStack_10,"Play_Plant_Squash_Impact_Nitro");
    RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
    std::string::~string(asStack_10);
    nop();
    if (*(int *)(param_1 + 0x48) == 0) {
      (**(code **)(*(long *)param_1 + 0x228))(param_1);
    }
    else {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
      pickPlantfoodDestination((PlantSquash *)param_1);
    }
  }
LAB_0406d744:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSquash::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantSquash::onAnimStoppedCallback(PlantSquash *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"turn");
  if ((bVar1) || (bVar1 = std::operator==(param_1,"size_up"), bVar1)) {
    onAnimTurnFinished((string *)this);
    return;
  }
  bVar1 = std::operator==(param_1,"plantfood_jump_down_left");
  if ((((!bVar1) && (bVar1 = std::operator==(param_1,"jump_down_left"), !bVar1)) &&
      (bVar1 = std::operator==(param_1,"plantfood_jump_down_right"), !bVar1)) &&
     (bVar1 = std::operator==(param_1,"jump_down_right"), !bVar1)) {
    return;
  }
  onAnimLandingFinished((string *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSquash::gatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
PlantSquash::gatherPlantingRestrictions
          (PlantSquash *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  int iVar1;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(*(long *)(this + 0x10) + 200) != 4) && (iVar1 = FUN_0406b164(), 1 < iVar1)) {
    if ((*(int *)param_1 == *(int *)(this + 0x28)) &&
       (*(int *)(param_1 + 4) == *(int *)(this + 0x2c))) {
      local_c = 0x4d;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)&local_c);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSquash::calculatePlantfoodJumps() */

void __thiscall PlantSquash::calculatePlantfoodJumps(PlantSquash *this)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  *(undefined4 *)(this + 0x48) = 0;
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  lVar3 = FUN_0406be08(*(undefined8 *)(this + 0x10));
  uVar6 = 0;
  while( true ) {
    uVar7 = *(undefined8 *)(lVar3 + 0x2c0);
    uVar5 = FUN_0406b190(uVar7,*(undefined8 *)(lVar3 + 0x2c8));
    if (uVar5 <= uVar6) break;
    piVar4 = (int *)FUN_0406b19c(uVar7,uVar6);
    ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)aPStack_38,*piVar4,piVar4[1]);
    uVar6 = uVar6 + 1;
  }
  lVar3 = ProbabilitySet<int>::GetSize((ProbabilitySet<int> *)aPStack_38);
  if (lVar3 != 0) {
    uVar2 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)aPStack_38);
    *(undefined4 *)(this + 0x48) = uVar2;
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    if (cVar1 != '\0') {
      *(int *)(this + 0x48) = *(int *)(this + 0x48) + 1;
    }
  }
  ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSquash::ApplyPlantfood() */

void __thiscall PlantSquash::ApplyPlantfood(PlantSquash *this)

{
  int iVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  float *pfVar3;
  ResourceInfo *pRVar4;
  Board *this_01;
  long lVar5;
  RealObject *this_02;
  float fVar6;
  string asStack_38 [8];
  string asStack_30 [16];
  PIInterpolator aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  Plant::HidePlantfoodAnimationEffect(*(Plant **)(this + 0x10));
  Sexy::PIInterpolator::PIInterpolator(aPStack_20);
  std::string::string(asStack_30,"plantfood_on");
  AnimationSequence::AddSingleAnimation(aPStack_20,asStack_30,0);
  std::string::~string(asStack_30);
  nop();
  std::string::string(asStack_30,"plantfood");
  PVZ_EOT();
  AnimationSequence::AddLoopingAnimation(aPStack_20,asStack_30,0);
  std::string::~string(asStack_30);
  nop();
  this_02 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_30,"Play_Plant_Squash_Attack_Nitro");
  RealObject::PlayPositionalSound(this_02,asStack_30,0.0);
  std::string::~string(asStack_30);
  nop();
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_30,*pfVar3 - 102.0,pfVar3[1] - 240.0,pfVar3[2]);
  iVar2 = (**(code **)(**(long **)(this + 0x10) + 0x170))(*(long **)(this + 0x10));
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)asStack_30,iVar2 + -1);
  std::string::string(asStack_38,"POPANIM_EFFECTS_PLANTFOOD_FX");
  GetPAMByName(asStack_38);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_30);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
  std::string::~string(asStack_38);
  nop();
  (**(code **)(*(long *)this_00 + 0x80))(0x3fc00000,this_00);
  Effect_PopAnim::PlayAnimationSequence(this_00,(AnimationSequence *)aPStack_20);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x50),(RtWeakPtrBase *)asStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
  calculatePlantfoodJumps(this);
  *(undefined4 *)(this + 0x4c) = 0;
  iVar2 = *(int *)(*(long *)(this + 0x10) + 0x114);
  iVar1 = *(int *)(*(long *)(this + 0x10) + 0x110);
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  *(int *)(this + 0x28) = iVar2;
  *(int *)(this + 0x2c) = iVar1;
  Board::SetGridSquareLocked(this_01,iVar2,iVar1,true);
  pickPlantfoodDestination(this);
  setState(this,0xb);
  lVar5 = *(long *)(this + 0x10);
  fVar6 = (float)PVZ_T();
  *(float *)(lVar5 + 0x128) = fVar6 + 0.25;
  AnimationSequence::~AnimationSequence((AnimationSequence *)aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

