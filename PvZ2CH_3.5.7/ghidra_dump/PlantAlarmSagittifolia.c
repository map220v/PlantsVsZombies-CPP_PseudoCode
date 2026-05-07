// Class: PlantAlarmSagittifolia


/* PlantAlarmSagittifolia::IsInvincible() const */

bool __thiscall PlantAlarmSagittifolia::IsInvincible(PlantAlarmSagittifolia *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) != 0x10 &&
         *(int *)(*(long *)(this + 0x10) + 200) != 4;
}


/* PlantAlarmSagittifolia::CanApplyPlantfood() */

bool __thiscall PlantAlarmSagittifolia::CanApplyPlantfood(PlantAlarmSagittifolia *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) == 0x10 ||
         *(int *)(*(long *)(this + 0x10) + 200) == 4;
}


/* PlantAlarmSagittifolia::CanBeWatered() */

bool __thiscall PlantAlarmSagittifolia::CanBeWatered(PlantAlarmSagittifolia *this)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = PlantFramework::CanBeWatered((PlantFramework *)this);
  bVar1 = false;
  if (cVar2 != '\0') {
    bVar1 = *(int *)(*(long *)(this + 0x10) + 200) != 0x10;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAlarmSagittifolia::StaticClassInit() */

void PlantAlarmSagittifolia::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAlarmSagittifolia");
    (*pcVar2)(plVar1,asStack_10,FUN_03c1f0a4,0x90,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAlarmSagittifolia::StaticGetClass() */

long * PlantAlarmSagittifolia::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAlarmSagittifolia",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAlarmSagittifolia::GetClass() const */

long * PlantAlarmSagittifolia::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAlarmSagittifolia",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAlarmSagittifolia::travelToJumpUpDestination() */

void __thiscall PlantAlarmSagittifolia::travelToJumpUpDestination(PlantAlarmSagittifolia *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  SexyVector3 *pSVar2;
  long *plVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float local_28;
  float local_24;
  float local_18;
  undefined4 local_14;
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x68);
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_28);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    fVar6 = *(float *)(*(long *)(this + 0x10) + 0x128);
    fVar4 = (float)PVZ_T();
    uVar5 = 0x3d4ccccd;
    this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pSVar2 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_01);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x58),pSVar2);
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    local_18 = (float)(**(code **)(*plVar3 + 0x3b0))((fVar6 + 0.05) - fVar4);
    *(float *)(this + 0x58) = local_18;
    local_14 = uVar5;
  }
  fVar4 = *(float *)(*(long *)(this + 0x10) + 0x128);
  uVar5 = PVZ_T();
  local_28 = CurveLerp<float>(fVar4 - 0.15,fVar4,uVar5,this + 0x4c,this + 0x58,4);
  fVar4 = *(float *)(*(long *)(this + 0x10) + 0x128);
  uVar5 = PVZ_T();
  local_18 = *(float *)(this + 0x5c) - 60.0;
  local_24 = CurveLerp<float>(fVar4 - 0.15,fVar4,uVar5,this + 0x50,&local_18,4);
  (**(code **)(**(long **)(this + 0x10) + 0x78))(*(long **)(this + 0x10),(DVec3 *)&local_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03c19790 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantAlarmSagittifolia::travelToLandingDestination() */

void __thiscall PlantAlarmSagittifolia::travelToLandingDestination(PlantAlarmSagittifolia *this)

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
  local_1c = *(float *)(this + 0x5c) - 60.0;
  fVar2 = CurveLerp<float>(auVar3,uVar4,auVar3._0_4_,&local_1c,this + 0x5c,1);
  local_18 = CONCAT44(fVar2,(undefined4)local_18);
  (**(code **)(**(long **)(this + 0x10) + 0x78))(*(long **)(this + 0x10),&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAlarmSagittifolia::playAnimation(std::string const&,
   RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall
PlantAlarmSagittifolia::playAnimation
          (PlantAlarmSagittifolia *this,undefined8 param_1,RtReflectionDelegate *param_3)

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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAlarmSagittifolia::onUpdateIdle(Sexy::Point const&, Sexy::Point const&, bool) */

void __thiscall
PlantAlarmSagittifolia::onUpdateIdle
          (PlantAlarmSagittifolia *this,Point *param_1,Point *param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  Effect_AngerFlame *this_00;
  RtObject *pRVar3;
  PlantAnimRig_AlarmSagittifolia *pPVar4;
  long *plVar5;
  char *__s;
  Point aPStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_18,*(int *)(*(long *)(this + 0x10) + 0x114),
                     *(int *)(*(long *)(this + 0x10) + 0x110));
  cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)param_1,(TPoint *)aPStack_18);
  if ((cVar1 != '\0') ||
     (cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)param_2,(TPoint *)aPStack_18),
     cVar1 != '\0')) {
    this_00 = (Effect_AngerFlame *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    iVar2 = Effect_AngerFlame::GetFlameCol(this_00);
    if (iVar2 == 1) {
      if (param_3) {
        pRVar3 = (RtObject *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_AlarmSagittifolia>(pRVar3);
        __s = "alarm";
      }
      else {
        pRVar3 = (RtObject *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        pPVar4 = Sexy::RtObject::Cast<PlantAnimRig_AlarmSagittifolia>(pRVar3);
        __s = "idle1";
      }
      std::string::string(asStack_10,__s);
      PlantAnimRig_HoyaCordata::setIdleTag((string *)pPVar4);
      std::string::~string(asStack_10);
      nop();
      plVar5 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      (**(code **)(*plVar5 + 0x118))();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAlarmSagittifolia::PlantAlarmSagittifolia() */

void __thiscall PlantAlarmSagittifolia::PlantAlarmSagittifolia(PlantAlarmSagittifolia *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06748d60;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  Sexy::Point::Point((Point *)(this + 0x44));
  DVec3::DVec3((DVec3 *)(this + 0x4c));
  DVec3::DVec3((DVec3 *)(this + 0x58));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x88));
  return;
}


/* PlantAlarmSagittifolia::StaticNew() */

PlantAlarmSagittifolia * PlantAlarmSagittifolia::StaticNew(void)

{
  PlantAlarmSagittifolia *this;
  
  this = ::operator_new(0x90);
  PlantAlarmSagittifolia(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAlarmSagittifolia::ApplyPlantfood() */

void __thiscall PlantAlarmSagittifolia::ApplyPlantfood(PlantAlarmSagittifolia *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar5;
  undefined8 *puVar6;
  Point *extraout_x1;
  Point *extraout_x1_00;
  Point *pPVar7;
  BoardEntity *this_01;
  float fVar8;
  int local_68;
  undefined4 uStack_64;
  int local_60;
  int local_5c;
  string asStack_58 [8];
  undefined8 local_50 [2];
  Insets aIStack_40 [16];
  undefined8 local_30 [2];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(*(long *)(this + 0x10) + 200) == 0x10) ||
     (*(int *)(*(long *)(this + 0x10) + 200) == 4)) {
    PlantFramework::ApplyPlantfood((PlantFramework *)this);
    *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xf;
    Sexy::Point::Point((Point *)&local_68,6,2);
    Sexy::Insets::Insets(aIStack_40,0,0,9,5);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20,2,
               aIStack_40);
    cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
    pPVar7 = extraout_x1;
    if (cVar1 == '\0') {
      puVar6 = (undefined8 *)FUN_03c17f44(local_20[0],0);
      this_01 = (BoardEntity *)*puVar6;
      local_50[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)local_20);
      local_30[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)local_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)local_50,(__normal_iterator *)local_30), bVar2)
      {
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_50);
        iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)*puVar6);
        iVar4 = BoardEntity::CalcColumnPosition(this_01);
        if (iVar3 < iVar4) {
          this_01 = (BoardEntity *)*puVar6;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)local_50);
      }
      local_68 = BoardEntity::CalcColumnPosition(this_01);
      local_68 = local_68 + 2;
      if (local_68 < 2) {
        local_68 = 2;
        pPVar7 = extraout_x1_00;
      }
      else {
        pPVar7 = (Point *)&DAT_00000006;
        if (6 < local_68) {
          local_68 = 6;
        }
      }
    }
    *(ulong *)(this + 0x44) = CONCAT44(uStack_64,local_68);
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)&local_68,pPVar7);
    Sexy::TRect<int>::GetCenter();
    Sexy::Point::Point((Point *)&local_60,(TPoint *)local_50);
    this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_58,"POPANIM_EFFECTS_ALARMSAGITTIFOLIA_LOCK_SYMBOL");
    GetPAMByName(asStack_58);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_50);
    Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar5,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_50);
    std::string::~string(asStack_58);
    nop();
    fVar8 = 0.0;
    if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
      fVar8 = (float)Board::calculateRoofOffsetZ((float)(local_60 + -100));
    }
    EATextSquish::Vec3::Vec3
              ((Vec3 *)local_50,(float)(local_60 + -100),(float)(local_5c + -100),fVar8);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)local_50,-1);
    FUN_03c17e44(this_00 + 0x1c,300000);
    std::string::string((string *)local_50,"animation");
    Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr *)local_50,0);
    std::string::~string((string *)local_50);
    nop();
    this[0x40] = (PlantAlarmSagittifolia)0x1;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAlarmSagittifolia::Level5Effect() */

void __thiscall PlantAlarmSagittifolia::Level5Effect(PlantAlarmSagittifolia *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  RtWeakPtr *this_01;
  ulong uVar6;
  Insets *pIVar7;
  ElectricArcStream *this_02;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  string asStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  Vec3 aVStack_50 [16];
  Insets aIStack_40 [16];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_20,"PlantLightningReed");
  uVar10 = 0;
  LawnApp::LoadGroup(this_00,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar3 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  Sexy::Insets::Insets(aIStack_40,iVar2 + -1,iVar3 + -1,3,3);
  uVar4 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares((string *)&local_20,uVar4,aIStack_40);
  cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if ((cVar1 == '\0') && (lVar5 = FUN_03c17f4c(local_20,local_18), lVar5 != 0)) {
    do {
      uVar8 = 0;
      while( true ) {
        uVar9 = *(undefined8 *)(this + 0x28);
        uVar6 = FUN_03c17f94(uVar9,*(undefined8 *)(this + 0x30));
        if (uVar6 <= uVar8) break;
        this_01 = (RtWeakPtr *)FUN_03c17fa0(uVar9,uVar8);
        Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
        uVar8 = uVar8 + 1;
      }
      FUN_03c17f44(local_20,uVar10);
      uVar10 = uVar10 + 1;
      pIVar7 = (Insets *)(**(code **)(**(long **)(this + 0x10) + 0x178))(*(long **)(this + 0x10));
      Sexy::Insets::Insets((Insets *)&local_30,pIVar7);
      EATextSquish::Vec3::Vec3
                (aVStack_50,(float)local_30 + (float)local_28 * 0.5,
                 (float)local_2c + (float)local_24 * 0.33333334,0.0);
      this_02 = GameObject::Create<ElectricArcStream>();
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_60);
      ElectricArcStream::setPlant(this_02,aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_60);
      TwinsAssistPerson::SetOwner((TwinsAssistPerson *)this_02,aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      BoardEntity::PlaceOnBoard((SexyVector3 *)this_02);
      std::string::string(asStack_68,"POPANIM_EFFECTS_LIGHTNINGREED_BOLT_DEFAULT");
      std::string::string((string *)aRStack_60,"POPANIM_EFFECTS_LIGHTNINGREED_BOLT");
      std::string::string((string *)aRStack_58,"POPANIM_EFFECTS_LIGHTNINGREED_HIT");
      LightningBolt::SetPopAnim
                ((LightningBolt *)this_02,asStack_68,(string *)aRStack_60,(string *)aRStack_58);
      std::string::~string((string *)aRStack_58);
      nop();
      std::string::~string((string *)aRStack_60);
      nop();
      std::string::~string(asStack_68);
      nop();
      std::string::string(asStack_68,"POPANIM_EFFECTS_LIGHTNINGREED_BOLT_DEFAULT");
      std::string::string((string *)aRStack_60,"POPANIM_EFFECTS_LIGHTNINGREED_BOLT");
      std::string::string((string *)aRStack_58,"POPANIM_EFFECTS_LIGHTNINGREED_HIT");
      LightningBolt::SetPopAnim
                ((LightningBolt *)this_02,asStack_68,(string *)aRStack_60,(string *)aRStack_58);
      std::string::~string((string *)aRStack_58);
      nop();
      std::string::~string((string *)aRStack_60);
      nop();
      std::string::~string(asStack_68);
      nop();
      FUN_03c17ebc(this_02 + 0x118,3);
      FUN_03c17ec4(0x3dcccccd,0x3dcccccd,this_02 + 0x11c,this_02 + 0x120);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,(RtWeakPtrBase *)aRStack_60);
      LightningBolt::SetInitialTarget((LightningBolt *)this_02,aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
      uVar8 = FUN_03c17f4c(local_20,local_18);
    } while (uVar10 < uVar8);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAlarmSagittifolia::Explode() */

void __thiscall PlantAlarmSagittifolia::Explode(PlantAlarmSagittifolia *this)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  Effect_PopAnim *pEVar4;
  ResourceInfo *pRVar5;
  long lVar6;
  RealObject *this_00;
  ulong uVar7;
  long extraout_x0;
  RealObject *this_01;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  undefined8 uVar12;
  ulong uVar13;
  Plant *this_03;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 local_64;
  long local_8;
  
  this_02 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_02);
  fVar15 = pfVar3[1];
  fVar19 = (float)(int)(*pfVar3 - 90.0);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) == '\0') {
    fVar16 = 0.0;
    cVar1 = FUN_03c17e94(this_02);
  }
  else {
    fVar16 = (float)Board::calculateRoofOffsetZ(fVar19);
    fVar16 = (float)(int)fVar16;
    cVar1 = FUN_03c17e94(*(undefined8 *)(this + 0x10));
  }
  if (cVar1 != '\0') {
    Level5Effect(this);
    fVar20 = (float)(int)(fVar15 - 120.0);
    pEVar4 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string((string *)&local_80,"POPANIM_EFFECTS_ALARMSAGITTIFOLIA_EXPLODE");
    GetPAMByName((string *)&local_80);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_68);
    Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar5,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    std::string::~string((string *)&local_80);
    nop();
    (**(code **)(*(long *)pEVar4 + 0x80))(0x3f800000,pEVar4);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_68,fVar19,fVar20,fVar16);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar4,(SexyVector3 *)&local_68,-1);
    FUN_03c17e44(pEVar4 + 0x1c,500000);
    std::string::string((string *)&local_68,"boom2");
    Effect_PopAnim::PlaySingleAnimation(pEVar4,(RtWeakPtr *)&local_68,0);
    std::string::~string((string *)&local_68);
    nop();
    pEVar4 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    (**(code **)(*(long *)pEVar4 + 0x80))(0x3f800000);
    std::string::string((string *)&local_80,"POPANIM_EFFECTS_ALARMSAGITTIFOLIA_ELECTRIC_FIELD");
    GetPAMByName((string *)&local_80);
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_68);
    Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar5,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    std::string::~string((string *)&local_80);
    nop();
    EATextSquish::Vec3::Vec3((Vec3 *)&local_68,fVar19,fVar20,fVar16);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar4,(SexyVector3 *)&local_68,-1);
    FUN_03c17e44(pEVar4 + 0x1c,300000);
    std::string::string((string *)&local_68,"animation2");
    Effect_PopAnim::PlaySingleAnimation(pEVar4,(RtWeakPtr *)&local_68,0);
    std::string::~string((string *)&local_68);
    nop();
  }
  uVar13 = 0;
  pEVar4 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string((string *)&local_80,"POPANIM_EFFECTS_ALARMSAGITTIFOLIA_EXPLODE");
  GetPAMByName((string *)&local_80);
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_68);
  Effect_PopAnim::CreatePopAnimRig(pEVar4,(PopAnim *)pRVar5,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  std::string::~string((string *)&local_80);
  nop();
  (**(code **)(*(long *)pEVar4 + 0x80))(0x3f800000,pEVar4);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_68,fVar19,(float)(int)(fVar15 - 120.0),fVar16);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar4,(SexyVector3 *)&local_68,-1);
  FUN_03c17e44(pEVar4 + 0x1c,500000);
  std::string::string((string *)&local_68,"boom1");
  Effect_PopAnim::PlaySingleAnimation(pEVar4,(RtWeakPtr *)&local_68,0);
  std::string::~string((string *)&local_68);
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98);
  lVar6 = FUN_03c1adc8(*(undefined8 *)(this + 0x10));
  lVar10 = *(long *)(this + 0x10);
  uVar18 = *(undefined4 *)(lVar6 + 0x2c4);
  uVar17 = *(undefined4 *)(lVar10 + 0x1c);
  local_68 = FUN_03c183e0(*(undefined4 *)(lVar10 + 0x18),uVar17,*(undefined4 *)(lVar10 + 0x20));
  local_64 = uVar17;
  EntityFinder::GetEntitiesWithinCircle2D
            (uVar18,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98,2,
             (RtWeakPtr *)&local_68);
  uVar12 = local_98;
  lVar6 = FUN_03c17f4c(local_98,local_90);
  if (lVar6 != 0) {
    do {
      FUN_03c17f44(uVar12,uVar13);
      nop();
      cVar1 = (**(code **)(*(long *)this_00 + 0x328))();
      if ((cVar1 == '\0') &&
         (cVar1 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10)), cVar1 != '\0'
         )) {
        uVar7 = 0;
        do {
          uVar12 = *(undefined8 *)(this + 0x70);
          uVar9 = FUN_03c17f80(uVar12,*(undefined8 *)(this + 0x78));
          if (uVar9 <= uVar7) goto LAB_03c1c86c;
          pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03c17f8c(uVar12,uVar7);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
          pRVar8 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType((Zombie *)this_00);
          lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar8);
          cVar1 = std::operator==((string *)(lVar6 + 8),(string *)(lVar10 + 8));
          uVar7 = uVar7 + 1;
        } while (cVar1 == '\0');
        uVar12 = *(undefined8 *)(this + 0x10);
        iVar2 = FUN_03c17e8c(uVar12);
        pcVar11 = *(code **)(*(long *)this_00 + 0x2a0);
        if (iVar2 < 2) {
          lVar6 = FUN_03c1adc8(uVar12);
          (*pcVar11)(*(undefined4 *)(lVar6 + 0x2b8),this_00);
        }
        else {
          lVar6 = FUN_03c1adc8(uVar12);
          (*pcVar11)(*(float *)(lVar6 + 0x2b8) + 3.0,this_00);
        }
      }
LAB_03c1c86c:
      uVar12 = local_98;
      uVar13 = uVar13 + 1;
      uVar7 = FUN_03c17f4c(local_98,local_90);
    } while (uVar13 < uVar7);
  }
  FUN_03c17e68((RtWeakPtr *)&local_68,*(undefined8 *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
  if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
    local_a8 = PlantFramework::GetDamageFlags();
  }
  else {
    local_a8 = (**(code **)(*(long *)this + 0x198))(this,0);
  }
  fVar15 = 1.0;
  operator|=(&local_a8,0x80);
  this_03 = *(Plant **)(this + 0x10);
  iVar2 = FUN_03c17e8c(this_03);
  if (2 < iVar2) {
    fVar15 = 1.4;
  }
  uVar13 = 0;
  lVar6 = FUN_03c183c8(*(undefined8 *)(extraout_x0 + 0x70));
  iVar2 = *(int *)(lVar6 + 0x2c);
  fVar19 = (float)Plant::GetTotalDamageRate(this_03);
  uVar12 = local_a8;
  uVar14 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point((Point *)&local_a0,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_80,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(fVar15 * fVar19 * (float)iVar2),local_80,uStack_7c,
             (RtWeakPtr *)&local_68,uVar12,uVar14,(Point *)&local_a0,0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
  lVar6 = *(long *)(this + 0x10);
  uVar18 = *(undefined4 *)(extraout_x0 + 0x2cc);
  uVar17 = *(undefined4 *)(lVar6 + 0x1c);
  local_a0 = FUN_03c183e0(*(undefined4 *)(lVar6 + 0x18),uVar17,*(undefined4 *)(lVar6 + 0x20));
  local_9c = uVar17;
  EntityFinder::GetEntitiesWithinCircle2D(uVar18,(string *)&local_80,2,(Point *)&local_a0);
  uVar12 = CONCAT44(uStack_7c,local_80);
  lVar6 = FUN_03c17f4c(uVar12,local_78);
  if (lVar6 != 0) {
    do {
      FUN_03c17f44(uVar12,uVar13);
      nop();
      cVar1 = (**(code **)(*(long *)this_01 + 0x328))();
      if ((cVar1 == '\0') &&
         (cVar1 = RealObject::IsOnOpposingTeam(this_01,*(RealObject **)(this + 0x10)), cVar1 != '\0'
         )) {
        (**(code **)(*(long *)this_01 + 0x110))(this_01,(RtWeakPtr *)&local_68);
      }
      uVar13 = uVar13 + 1;
      uVar12 = CONCAT44(uStack_7c,local_80);
      uVar7 = FUN_03c17f4c(uVar12,local_78);
    } while (uVar13 < uVar7);
  }
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.0);
  Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  DamageInfo::~DamageInfo((DamageInfo *)&local_68);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_98);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAlarmSagittifolia::~PlantAlarmSagittifolia() */

void __thiscall PlantAlarmSagittifolia::~PlantAlarmSagittifolia(PlantAlarmSagittifolia *this)

{
  *(undefined ***)this = &PTR_GetClass_06748d60;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88));
  std::vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
  ~vector((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
           *)(this + 0x70));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantAlarmSagittifolia::~PlantAlarmSagittifolia() */

void __thiscall PlantAlarmSagittifolia::~PlantAlarmSagittifolia(PlantAlarmSagittifolia *this)

{
  ~PlantAlarmSagittifolia(this);
  AK::FreeHook(this);
  return;
}


/* PlantAlarmSagittifolia::OnRelocationComplete() */

void __thiscall PlantAlarmSagittifolia::OnRelocationComplete(PlantAlarmSagittifolia *this)

{
  bool bVar1;
  char cVar2;
  AlarmSagittifoliaFenceSystem *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x88));
  if ((bVar1) && (cVar2 = Plant::IsOnBoardGrid(*(Plant **)(this + 0x10)), cVar2 != '\0')) {
    this_00 = (AlarmSagittifoliaFenceSystem *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88));
    AlarmSagittifoliaFenceSystem::AddNodeDelay(this_00,this,2.0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAlarmSagittifolia::onEndCondition(PlantConditions) */

void __thiscall PlantAlarmSagittifolia::onEndCondition(PlantAlarmSagittifolia *this,int param_2)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  AlarmSagittifoliaFenceSystem *this_01;
  
  this_00 = (RtWeakPtr *)(this + 0x88);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (((((bVar1) && (cVar2 = Plant::IsSuspended(*(Plant **)(this + 0x10)), cVar2 == '\0')) &&
       (cVar2 = GameObject::IsDestroyed(*(GameObject **)(this + 0x10)), cVar2 == '\0')) &&
      ((_FUN_03c200a4 < *(float *)(*(long *)(this + 0x10) + 0xd8) &&
       (lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00),
       *(char *)(lVar3 + 0x10) == '\0')))) &&
     (((param_2 - 1U < 2 || ((param_2 == 6 || (param_2 == 0x1d)))) || (param_2 - 0x15U < 2)))) {
    this_01 = (AlarmSagittifoliaFenceSystem *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    AlarmSagittifoliaFenceSystem::AddNodeDelay(this_01,this,2.0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAlarmSagittifolia::onLastStandStart() */

void __thiscall PlantAlarmSagittifolia::onLastStandStart(PlantAlarmSagittifolia *this)

{
  AlarmSagittifoliaFenceSystem *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::GetGameSubSystem<AlarmSagittifoliaFenceSystem>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x88),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this_00 = (AlarmSagittifoliaFenceSystem *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88))
  ;
  AlarmSagittifoliaFenceSystem::AddNodeDelay(this_00,this,2.0);
  (**(code **)(*(long *)this + 0x168))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAlarmSagittifolia::OnRelocationBegun() */

void __thiscall PlantAlarmSagittifolia::OnRelocationBegun(PlantAlarmSagittifolia *this)

{
  bool bVar1;
  AlarmSagittifoliaFenceSystem *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x88));
  if (!bVar1) {
    return;
  }
  this_00 = (AlarmSagittifoliaFenceSystem *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88))
  ;
  AlarmSagittifoliaFenceSystem::RemoveOrphanedFences(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAlarmSagittifolia::onApplyCondition(PlantConditions) */

void __thiscall PlantAlarmSagittifolia::onApplyCondition(PlantAlarmSagittifolia *this,int param_2)

{
  bool bVar1;
  char cVar2;
  AlarmSagittifoliaFenceSystem *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x88));
  if ((bVar1) &&
     ((((cVar2 = Plant::IsSuspended(*(Plant **)(this + 0x10)), cVar2 != '\0' ||
        (cVar2 = GameObject::IsDestroyed(*(GameObject **)(this + 0x10)), cVar2 != '\0')) ||
       (param_2 == 0x15)) || (*(float *)(*(long *)(this + 0x10) + 0xd8) <= _FUN_03c213ac)))) {
    this_00 = (AlarmSagittifoliaFenceSystem *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88));
    AlarmSagittifoliaFenceSystem::RemoveNode(this_00,this);
    return;
  }
  return;
}


/* PlantAlarmSagittifolia::onDestroy() */

void __thiscall PlantAlarmSagittifolia::onDestroy(PlantAlarmSagittifolia *this)

{
  bool bVar1;
  AlarmSagittifoliaFenceSystem *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x88));
  if (bVar1) {
    this_00 = (AlarmSagittifoliaFenceSystem *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88));
    AlarmSagittifoliaFenceSystem::RemoveNode(this_00,this);
  }
  PlantFramework::onDestroy((PlantFramework *)this);
  return;
}


/* PlantAlarmSagittifolia::onSleeped(bool) */

void __thiscall PlantAlarmSagittifolia::onSleeped(PlantAlarmSagittifolia *this,bool param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  AlarmSagittifoliaFenceSystem *pAVar2;
  
  this_00 = (RtWeakPtr *)(this + 0x88);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (!bVar1) {
    return;
  }
  if (!param_1) {
    pAVar2 = (AlarmSagittifoliaFenceSystem *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    AlarmSagittifoliaFenceSystem::AddNodeDelay(pAVar2,this,2.0);
    return;
  }
  pAVar2 = (AlarmSagittifoliaFenceSystem *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  AlarmSagittifoliaFenceSystem::RemoveNode(pAVar2,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAlarmSagittifolia::setState(unsigned int) */

void __thiscall PlantAlarmSagittifolia::setState(PlantAlarmSagittifolia *this,uint param_1)

{
  char cVar1;
  UIEasyButtonWidget *this_00;
  RtObject *pRVar2;
  PlantAnimRig_AlarmSagittifolia *pPVar3;
  long *plVar4;
  AlarmSagittifoliaFenceSystem *this_01;
  PopAnimRig *pPVar5;
  char *pcVar6;
  long lVar7;
  UIEasyButtonWidget *this_02;
  code *pcVar8;
  float fVar9;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this_02 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  *(uint *)(this_02 + 200) = param_1;
  switch(param_1) {
  case 4:
    pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_02);
    pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_AlarmSagittifolia>(pRVar2);
    std::string::string(asStack_58,"idle1");
    PlantAnimRig_HoyaCordata::setIdleTag((string *)pPVar3);
    std::string::~string(asStack_58);
    goto LAB_03c215c0;
  case 10:
    this_01 = (AlarmSagittifoliaFenceSystem *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88));
    AlarmSagittifoliaFenceSystem::RemoveNode(this_01,this);
    cVar1 = FUN_03c17e94(*(undefined8 *)(this + 0x10));
    if (cVar1 == '\0') {
      pcVar6 = "attack1R";
    }
    else {
      pcVar6 = "attack2R";
    }
    std::string::string(asStack_58,pcVar6);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_68,asStack_60);
    playAnimation(this,asStack_58,
                  (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                   *)aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_58);
    nop();
    break;
  case 0xb:
    cVar1 = FUN_03c17e94(this_02);
    if (cVar1 == '\0') {
      pcVar6 = "attack1";
    }
    else {
      pcVar6 = "attack2";
    }
    std::string::string(asStack_58,pcVar6);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    playAnimation(this,asStack_58,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    lVar7 = *(long *)(this + 0x10);
    fVar9 = (float)PVZ_T();
    *(float *)(lVar7 + 0x128) = fVar9 + 0.04;
    break;
  case 0xc:
    pPVar5 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_02);
    PopAnimRig::SetPaused(pPVar5,false);
    lVar7 = *(long *)(this + 0x10);
    fVar9 = (float)PVZ_T();
    *(float *)(lVar7 + 0x128) = fVar9 + 0.15;
    break;
  case 0xd:
    fVar9 = (float)PVZ_T();
    *(float *)(this_02 + 0x128) = fVar9 + 0.05;
    break;
  case 0xe:
    pcVar8 = *(code **)(*(long *)this + 0x398);
    std::string::string(asStack_58,"explode");
    (*pcVar8)(this,asStack_58);
    std::string::~string(asStack_58);
    nop();
    pPVar5 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
    ;
    PopAnimRig::SetPaused(pPVar5,false);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_58);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x68),(RtWeakPtr *)asStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
    break;
  case 0x10:
    fVar9 = (float)PVZ_T();
    this_00 = *(UIEasyButtonWidget **)(this + 0x10);
    *(float *)(this_02 + 0x128) = fVar9 + 2.0;
    pRVar2 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_00);
    pPVar3 = Sexy::RtObject::Cast<PlantAnimRig_AlarmSagittifolia>(pRVar2);
    std::string::string(asStack_58,"idle2");
    PlantAnimRig_HoyaCordata::setIdleTag((string *)pPVar3);
    std::string::~string(asStack_58);
LAB_03c215c0:
    nop();
    plVar4 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar4 + 0x118))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAlarmSagittifolia::Initialize() */

void __thiscall PlantAlarmSagittifolia::Initialize(PlantAlarmSagittifolia *this)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  string *psVar5;
  SexyVector3 *pSVar6;
  PlantAnimRig *pPVar7;
  RtObject *this_00;
  PlantAnimRig_AlarmSagittifolia *pPVar8;
  AlarmSagittifoliaFenceSystem *this_01;
  ulong uVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onLastStandStart);
  Sexy::Delegate0::Delegate0<PlantAlarmSagittifolia,void(PlantAlarmSagittifolia::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LastStandLevelStarting,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onUpdateIdle);
  local_80 = local_50;
  uStack_78 = uStack_48;
  local_70 = local_40;
  MessageRouter::
  Subscribe<Sexy::Point_const&,Sexy::Point_const&,bool,Sexy::CBMemberTranslatorX<PlantAlarmSagittifolia,void(PlantAlarmSagittifolia::*)(Sexy::Point_const&,Sexy::Point_const&,bool)>>
            ((MessageRouter *)puVar1,Message::UpdateAlarmSagittifoliaIdle,&local_80);
  lVar3 = FUN_03c1adc8(*(undefined8 *)(this + 0x10));
  for (uVar9 = 0;
      uVar4 = FUN_03c17f58(*(undefined8 *)(lVar3 + 0x2d0),*(undefined8 *)(lVar3 + 0x2d8)),
      uVar9 < uVar4; uVar9 = uVar9 + 1) {
    psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    FUN_03c17f64(*(undefined8 *)(lVar3 + 0x2d0),uVar9);
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar5);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_58);
    if (cVar2 != '\0') {
      std::
      vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>::
      push_back((vector<Sexy::RtWeakPtr<ZombieType_const>,std::allocator<Sexy::RtWeakPtr<ZombieType_const>>>
                 *)(this + 0x70),(RtWeakPtr *)&local_58);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
  }
  this[0x40] = (PlantAlarmSagittifolia)0x0;
  Sexy::Point::Point((Point *)&local_58,6,2);
  *(undefined8 *)(this + 0x44) = local_58;
  pSVar6 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x4c),pSVar6);
  pSVar6 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x58),pSVar6);
  setState(this,0x10);
  pPVar7 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  PlantAnimRig::SetState(pPVar7,1);
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar8 = Sexy::RtObject::Cast<PlantAnimRig_AlarmSagittifolia>(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_58,(RtWeakPtrBase *)aRStack_60);
  PlantAnimRig_Mandrake::SetPlant
            ((PlantAnimRig_Mandrake *)pPVar8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  cVar2 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar2 != '\0') {
    Board::GetGameSubSystem<AlarmSagittifoliaFenceSystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x88),(RtWeakPtrBase *)&local_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    this_01 = (AlarmSagittifoliaFenceSystem *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88));
    AlarmSagittifoliaFenceSystem::AddNodeDelay(this_01,this,2.0);
    (**(code **)(*(long *)this + 0x168))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAlarmSagittifolia::UpdateActions() */

void __thiscall PlantAlarmSagittifolia::UpdateActions(PlantAlarmSagittifolia *this)

{
  char cVar1;
  int iVar2;
  AlarmSagittifoliaFenceSystem *pAVar3;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *pSVar4;
  long lVar5;
  float fVar6;
  Point aPStack_48 [8];
  UnchartedModePlantNumData aUStack_40 [8];
  RtMixedPtrBase aRStack_38 [8];
  Insets aIStack_30 [16];
  Point aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    lVar5 = *(long *)(this + 0x10);
    switch(*(undefined4 *)(lVar5 + 200)) {
    case 4:
      Sexy::Point::Point(aPStack_48,*(int *)(lVar5 + 0x114),*(int *)(lVar5 + 0x110));
      pAVar3 = (AlarmSagittifoliaFenceSystem *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88));
      iVar2 = AlarmSagittifoliaFenceSystem::GetNumFencesOnNode(pAVar3,this);
      if (0 < iVar2) {
        pAVar3 = (AlarmSagittifoliaFenceSystem *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88));
        Sexy::Point::Point(aPStack_20,(TPoint *)aPStack_48);
        this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)AlarmSagittifoliaFenceSystem::GetAttackTargets(pAVar3,aPStack_20);
        if (this_00 !=
            (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)0x0) {
          pSVar4 = (SexyVector3 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(this_00);
          Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x58),pSVar4);
          nop();
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                    ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x68),
                     (RtWeakPtrBase *)aPStack_20);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_20);
          setState(this,10);
          break;
        }
      }
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_20);
      Sexy::Insets::Insets
                (aIStack_30,*(int *)(*(long *)(this + 0x10) + 0x114) + -1,
                 *(int *)(*(long *)(this + 0x10) + 0x110),3,1);
      EntityFinder::GetEntitiesInGridSquares
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_20,2,
                 aIStack_30);
      UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_40,1,0);
      PlantFramework::FindTargetZombie(aRStack_38,this,0,aUStack_40);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
      if (cVar1 != '\0') {
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(this + 0x68),(RtWeakPtr *)aRStack_38);
        setState(this,10);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aPStack_20);
      break;
    case 0xb:
      fVar6 = (float)PVZ_T();
      if (*(float *)(*(long *)(this + 0x10) + 0x128) <= fVar6) {
        setState(this,0xc);
        Plant::SetTravellingOutsideGroup(*(Plant **)(this + 0x10),true);
      }
      break;
    case 0xc:
      travelToJumpUpDestination(this);
      fVar6 = (float)PVZ_T();
      if (*(float *)(*(long *)(this + 0x10) + 0x128) <= fVar6) {
        setState(this,0xd);
      }
      break;
    case 0xd:
      travelToLandingDestination(this);
      fVar6 = (float)PVZ_T();
      if (*(float *)(*(long *)(this + 0x10) + 0x128) <= fVar6) {
        setState(this,0xe);
      }
      break;
    case 0x10:
      fVar6 = (float)PVZ_T();
      if (*(float *)(*(long *)(this + 0x10) + 0x128) <= fVar6) {
        setState(this,4);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAlarmSagittifolia::CancelPlantfood() */

void __thiscall PlantAlarmSagittifolia::CancelPlantfood(PlantAlarmSagittifolia *this)

{
  char cVar1;
  int iVar2;
  AlarmSagittifoliaFenceSystem *this_00;
  long lVar3;
  ulong uVar4;
  EgretflowerPlantFoodBomb *this_01;
  float *pfVar5;
  Point *extraout_x1;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  int local_28;
  int local_24;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[8] == (PlantAlarmSagittifolia)0x0) goto LAB_03c21d20;
  setState(this,4);
  if (this[0x40] != (PlantAlarmSagittifolia)0x0) {
    Plant::GetProps();
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    lVar3 = FUN_03c183cc(*(undefined8 *)(lVar3 + 0x70));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    BoardTransforms::GridToBoardSpaceRect((BoardTransforms *)(this + 0x44),extraout_x1);
    Sexy::TRect<int>::GetCenter();
    Sexy::Point::Point((Point *)&local_28,(TPoint *)aRStack_20);
    fVar8 = *(float *)(lVar3 + 0x68);
    fVar7 = *(float *)(lVar3 + 0x6c);
    uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)(lVar3 + 8));
    lVar3 = Board::AddProjectile
                      ((Board *)((float)local_28 + fVar8),(float)local_24 + fVar7,0x43c80000,uVar6,
                       aRStack_20,*(undefined8 *)(this + 0x10),0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    if (lVar3 != 0) {
      lVar3 = FUN_03c1adc8(*(undefined8 *)(this + 0x10));
      iVar2 = FUN_03c17e8c(*(undefined8 *)(this + 0x10));
      if (iVar2 < 1) {
LAB_03c21ed4:
        fVar7 = 1.0;
      }
      else {
        uVar6 = *(undefined8 *)(lVar3 + 0x208);
        uVar4 = FUN_03c17f6c(uVar6,*(undefined8 *)(lVar3 + 0x210));
        if (uVar4 <= (ulong)(long)iVar2) goto LAB_03c21ed4;
        pfVar5 = (float *)FUN_03c17f78(uVar6,(long)(iVar2 + -1));
        fVar7 = *pfVar5;
      }
      nop();
      FUN_03c183d4(this_01 + 0x24);
      EgretflowerPlantFoodBomb::SetDamageRate(this_01,fVar7 * *(float *)(lVar3 + 0x2c8));
      cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
      if (cVar1 != '\0') {
        StrawburstProjectile::SetJamFlag((StrawburstProjectile *)this_01,true);
      }
      EgretflowerPlantFoodBomb::SetGridPosition(this_01,*(int *)(this + 0x44),*(int *)(this + 0x48))
      ;
    }
    this[0x40] = (PlantAlarmSagittifolia)0x0;
  }
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    Board::GetGameSubSystem<AlarmSagittifoliaFenceSystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x88),(RtWeakPtrBase *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    this_00 = (AlarmSagittifoliaFenceSystem *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x88));
    AlarmSagittifoliaFenceSystem::AddNodeDelay(this_00,this,0.0);
    (**(code **)(*(long *)this + 0x168))(this);
  }
LAB_03c21d20:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAlarmSagittifolia::onAnimStoppedCallback(std::string const&) */

void __thiscall
PlantAlarmSagittifolia::onAnimStoppedCallback(PlantAlarmSagittifolia *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"attack2R");
  if ((!bVar1) && (bVar1 = std::operator==(param_1,"attack1R"), !bVar1)) {
    bVar1 = std::operator==(param_1,"explode");
    if (!bVar1) {
      return;
    }
    Explode(this);
    return;
  }
  setState(this,0xb);
  return;
}

