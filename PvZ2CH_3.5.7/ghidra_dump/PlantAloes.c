// Class: PlantAloes


/* PlantAloes::PostInitialize() */

void __thiscall PlantAloes::PostInitialize(PlantAloes *this)

{
  PlantAloes PVar1;
  
  PVar1 = (PlantAloes)Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  this[0x34] = PVar1;
  return;
}


/* PlantAloes::CancelPlantfood() */

void __thiscall PlantAloes::CancelPlantfood(PlantAloes *this)

{
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
  Sexy::OutputDebugStrF((wchar_t *)"CancelPlantfood m_plant->m_state = Aloes_Init");
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAloes::StaticClassInit() */

void PlantAloes::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAloes");
    (*pcVar2)(plVar1,asStack_10,FUN_04cc1cb4,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAloes::StaticGetClass() */

long * PlantAloes::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantAloes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAloes::GetClass() const */

long * PlantAloes::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantAloes",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAloes::UpdateCharge() */

void __thiscall PlantAloes::UpdateCharge(PlantAloes *this)

{
  char cVar1;
  
  cVar1 = TimeUtil::CheckTimeEclapse(*(float *)(this + 0x2c),*(float *)(this + 0x28));
  if (cVar1 == '\0') {
    return;
  }
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xc;
  Sexy::OutputDebugStrF((wchar_t *)"m_plant->m_state = Aloes_Splash");
  return;
}


/* PlantAloes::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantAloes::onAnimStoppedCallback(PlantAloes *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"idle");
  if ((!bVar1) &&
     ((((bVar1 = std::operator==(param_1,"attack1"), bVar1 ||
        (bVar1 = std::operator==(param_1,"attack2"), bVar1)) ||
       (bVar1 = std::operator==(param_1,"plantfood"), bVar1)) ||
      (bVar1 = std::operator==(param_1,"plantfood2"), bVar1)))) {
    *(undefined4 *)(*(long *)(this + 0x10) + 200) = 10;
    Sexy::OutputDebugStrF((wchar_t *)"onAnimStoppedCallback m_plant->m_state = Aloes_Init");
    return;
  }
  return;
}


/* PlantAloes::UpdateInit() */

void __thiscall PlantAloes::UpdateInit(PlantAloes *this)

{
  long *plVar1;
  undefined4 uVar2;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x28) = uVar2;
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xb;
  Sexy::OutputDebugStrF((wchar_t *)"m_plant->m_state = Aloes_Charge");
  return;
}


/* PlantAloes::PlantAloes() */

void __thiscall PlantAloes::PlantAloes(PlantAloes *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0699b180;
  Sexy::Point::Point((Point *)(this + 0x38));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* PlantAloes::StaticNew() */

PlantAloes * PlantAloes::StaticNew(void)

{
  PlantAloes *this;
  
  this = ::operator_new(0x58);
  PlantAloes(this);
  return this;
}


/* PlantAloes::~PlantAloes() */

void __thiscall PlantAloes::~PlantAloes(PlantAloes *this)

{
  *(undefined ***)this = &PTR_GetClass_0699b180;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x40));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantAloes::~PlantAloes() */

void __thiscall PlantAloes::~PlantAloes(PlantAloes *this)

{
  ~PlantAloes(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAloes::CheckSpecialAttack() */

void __thiscall PlantAloes::CheckSpecialAttack(PlantAloes *this)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_04cc2efc(*(undefined8 *)(this + 0x10));
  fVar5 = (float)FUN_04cbfc68(*(undefined4 *)(lVar3 + 0x2b8));
  local_c = fVar5;
  iVar2 = FUN_04cbfc0c(*(undefined8 *)(this + 0x10));
  if (iVar2 < 2) {
    uVar4 = 0;
  }
  else {
    if (iVar2 != 2) {
      local_c = fVar5 + fVar5;
    }
    bVar1 = FUN_04cbfd20(&local_c);
    uVar4 = (ulong)bVar1;
  }
  Sexy::OutputDebugStrF((wchar_t *)"CheckSpecialAttack isSpecial = %d",uVar4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAloes::UpdateSplash() */

void __thiscall PlantAloes::UpdateSplash(PlantAloes *this)

{
  uint uVar1;
  PopAnimRig *pPVar2;
  CBMemberTranslatorX *__n;
  string asStack_58 [8];
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = CheckSpecialAttack(this);
  *(uint *)(this + 0x30) = uVar1 & 0xff;
  __n = aCStack_50;
  std::string::string(asStack_58,"attack1");
  nop();
  if (*(int *)(this + 0x30) == 1) {
    std::string::append(asStack_58,"attack2",(size_t)__n);
  }
  pPVar2 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x398);
  Sexy::Delegate1<std::string_const&>::Delegate1<PlantAloes,void(PlantAloes::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aDStack_38);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xd;
  Sexy::OutputDebugStrF((wchar_t *)"m_plant->m_state = Aloes_Spread");
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAloes::UpdateActions() */

void __thiscall PlantAloes::UpdateActions(PlantAloes *this)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)(this + 0x10) + 200);
  if (iVar1 == 0xb) {
    UpdateCharge(this);
    return;
  }
  if (iVar1 != 0xc) {
    if (iVar1 != 10) {
      return;
    }
    UpdateInit(this);
    return;
  }
  UpdateSplash(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAloes::Initialize() */

void __thiscall PlantAloes::Initialize(PlantAloes *this)

{
  long lVar1;
  long lVar2;
  BoardTransforms *this_00;
  undefined4 uVar3;
  undefined8 local_10;
  
  lVar2 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar2 + 200) = 10;
  lVar1 = ___stack_chk_guard;
  uVar3 = PVZ_EOT();
  *(undefined4 *)(this + 0x28) = uVar3;
  lVar2 = FUN_04cc2efc(lVar2);
  uVar3 = FUN_04cbfc6c(*(undefined4 *)(lVar2 + 700));
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x2c) = uVar3;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x40));
  this_00 = (BoardTransforms *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
  BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
  *(undefined8 *)(this + 0x38) = local_10;
  PlantFramework::Initialize((PlantFramework *)this);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAloes::CreateWaterSprayEffect(int, int, bool) */

void PlantAloes::CreateWaterSprayEffect(int param_1,int param_2,bool param_3)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  Effect_PopAnim *this;
  char *pcVar4;
  float fVar5;
  string asStack_90 [8];
  string asStack_88 [8];
  int local_80;
  int local_7c;
  RtMixedPtrBase aRStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> aRStack_50 [72];
  long local_8;
  
  uVar3 = (ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04cbfc14(*(undefined8 *)(uVar3 + 0x10));
  if (cVar1 == '\0') {
    pcVar4 = "POPANIM_EFFECTS_ALOES_EFFECT";
  }
  else {
    pcVar4 = "POPANIM_EFFECTS_ALOES_ICE_EFFECT";
  }
  std::string::string(asStack_90,pcVar4);
  nop();
  cVar1 = FUN_04cbfc14(*(undefined8 *)(uVar3 + 0x10));
  if ((cVar1 == '\0') && (*(int *)(uVar3 + 0x30) == 1)) {
    pcVar4 = "attack2";
  }
  else {
    pcVar4 = "attack1";
  }
  fVar5 = 0.0;
  std::string::string(asStack_88,pcVar4);
  nop();
  uVar2 = Board::MakeRenderOrder(0x64960,0,0);
  Sexy::Point::Point((Point *)&local_60,param_2,(uint)param_3);
  BoardTransforms::GridToBoardSpace((Point *)&local_60);
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    fVar5 = (float)Board::calculateRoofOffsetZ((float)local_80);
    fVar5 = (float)(int)fVar5;
  }
  FUN_05475d88(asStack_68,asStack_90);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_60,(float)local_80,(float)local_7c,fVar5);
  PopAnimEffectFactory::CreateEffect(aRStack_78,local_60,local_5c,local_58,asStack_68,uVar2,0,1);
  std::string::~string(asStack_68);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_78);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
    nop();
    Effect_PopAnim::SetCentered(this,true);
    Effect_PopAnim::PlaySingleAnimation(this,asStack_88,0);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string((string *)&local_60,"onStandaloneEffectFinishedCallback");
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
              (aRStack_50,asStack_68,(Point *)&local_60);
    StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string((string *)&local_60);
    nop();
    Sexy::RtId::~RtId((RtId *)asStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  std::string::~string(asStack_88);
  std::string::~string(asStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAloes::CreateWaterMist(std::vector<Sexy::Point, std::allocator<Sexy::Point> >) */

void __thiscall
PlantAloes::CreateWaterMist
          (PlantAloes *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  WaterMistTileSubSystem *pWVar4;
  GridItemWaterMist *this_00;
  TPoint *pTVar5;
  undefined8 *puVar6;
  GridItemWaterMist *this_01;
  char *__s;
  Board *this_02;
  code *pcVar7;
  float fVar8;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pWVar4 = Board::GetGameSubSystem<WaterMistTileSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_40,(__normal_iterator *)&local_38);
    if (!bVar1) {
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pTVar5 = (TPoint *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    pcVar7 = *(code **)(*(long *)pWVar4 + 0xa8);
    Sexy::Point::Point((Point *)asStack_20,pTVar5);
    cVar2 = (*pcVar7)(pWVar4,asStack_20);
    if (cVar2 == '\0') {
      cVar2 = FUN_04cbfc14(*(undefined8 *)(this + 0x10));
      __s = "aloes_water_mist";
      if (cVar2 != '\0') {
        __s = "aloes_ice_water_mist";
      }
      this_02 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string(asStack_20,__s);
      Board::AddGridItem(this_02,asStack_20,*(int *)pTVar5,*(int *)(pTVar5 + 4),1);
      nop();
      std::string::~string(asStack_20);
      nop();
      GridItemWaterMist::SetType(this_00,*(int *)(this + 0x30));
      GridItemWaterMist::SetAvatar(this_00,(bool)this[0x34]);
      fVar8 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
      GridItemWaterMist::SetExtraAttackRate(this_00,fVar8);
      uVar3 = FUN_04cbfbc8(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
      FUN_04cbfbcc(this_00 + 0x24,uVar3);
    }
    else {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_20);
      EntityFinder::GetEntitiesAtGridSquare
                (asStack_20,4,*(undefined4 *)pTVar5,*(undefined4 *)(pTVar5 + 4));
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)asStack_20);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)asStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar1) {
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        if ((((RtObject *)*puVar6 != (RtObject *)0x0) &&
            (bVar1 = Sexy::RtObject::IsA<GridItemWaterMist>((RtObject *)*puVar6), bVar1)) &&
           (nop(), this_01 != (GridItemWaterMist *)0x0)) {
          Sexy::OutputDebugStrF
                    ((wchar_t *)"PlantAloes::CreateWaterMist TurnToLoop x=%d y=%d",
                     (ulong)*(uint *)pTVar5,(ulong)*(uint *)(pTVar5 + 4));
          GridItemWaterMist::TurnToLoop(this_01);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)asStack_20);
          goto LAB_04cc4ad4;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)asStack_20);
    }
LAB_04cc4ad4:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAloes::FillSprayFields(Sexy::Point) */

void PlantAloes::FillSprayFields
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,
               undefined8 param_2,TPoint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  int local_14;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  Sexy::Point::Point((Point *)&local_18,param_3);
  iVar4 = local_14 + -1;
  do {
    if (-1 < iVar4) {
      iVar1 = local_18 + 2;
      iVar3 = local_18 + -1;
      do {
        while (((iVar2 = BoardConstants::NUMBER_OF_ROWS(), iVar4 < iVar2 && (-1 < iVar3)) &&
               (iVar2 = BoardConstants::NUMBER_OF_COLUMNS(), iVar3 < iVar2))) {
          iVar2 = iVar3 + 1;
          Sexy::Point::Point(aPStack_10,iVar3,iVar4);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_1,aPStack_10);
          iVar3 = iVar2;
          if (iVar2 == iVar1) goto LAB_04cc59dc;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != iVar1);
    }
LAB_04cc59dc:
    iVar4 = iVar4 + 1;
    if (iVar4 == local_14 + 2) {
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(param_1);
      }
      return;
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAloes::LaunchSpecialAttack() */

void __thiscall PlantAloes::LaunchSpecialAttack(PlantAloes *this)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  BoardTransforms *this_00;
  long lVar8;
  Point aPStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesOnBoard
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1);
  iVar3 = FUN_04cbfc80(local_20,local_18);
  if (iVar3 == 0) {
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  else {
    if (5 < iVar3) {
      iVar3 = 5;
    }
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Pinata**,std::vector<Pinata*,std::allocator<Pinata*>>>>
              (uVar5,uVar6);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x40));
    lVar8 = 0;
    if (0 < iVar3) {
      do {
        lVar1 = lVar8 + 1;
        puVar7 = (undefined8 *)FUN_04cbfca0(local_20,lVar8);
        this_00 = (BoardTransforms *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)*puVar7);
        BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
        std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                  ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x40),aPStack_28);
        lVar8 = lVar1;
      } while ((int)lVar1 < iVar3);
    }
    cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    uVar4 = 3;
    if (cVar2 == '\0') {
      uVar4 = 2;
    }
    *(undefined4 *)(this + 0x30) = uVar4;
    *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xe;
    Sexy::OutputDebugStrF((wchar_t *)"m_plant->m_state = Aloes_SpecialAttack");
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAloes::ApplyPlantfood() */

void __thiscall PlantAloes::ApplyPlantfood(PlantAloes *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  LaunchSpecialAttack(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAloes::onStandaloneEffectFinishedCallback(StandaloneEffect*) */

void PlantAloes::onStandaloneEffectFinishedCallback(StandaloneEffect *param_1)

{
  BoardTransforms *this;
  vector<Sexy::Point,std::allocator<Sexy::Point>> avStack_38 [24];
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (BoardTransforms *)
         std::
         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         **)(param_1 + 0x10));
  BoardTransforms::BoardSpaceToGrid(this,*(float *)this,*(float *)(this + 4));
  *(undefined8 *)(param_1 + 0x38) = local_20[0];
  Sexy::Point::Point((Point *)local_20,(TPoint *)(param_1 + 0x38));
  FillSprayFields(avStack_38,param_1,(Point *)local_20);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_20,(vector *)avStack_38);
  CreateWaterMist((PlantAloes *)param_1,(Point *)local_20);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_20);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector(avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAloes::CreateAloesSprayProjectile(Sexy::Point, int) */

void PlantAloes::CreateAloesSprayProjectile(long param_1,Point *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  Projectile *this;
  undefined8 uVar4;
  Projectile *pPVar5;
  Board *pBVar8;
  undefined4 uVar6;
  float fVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  int local_20;
  int local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_04cbfbe8(aRStack_18,*(undefined8 *)(param_1 + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  lVar2 = FUN_04cbfd48(*(undefined8 *)(lVar2 + 0x70));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)(lVar2 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28);
  if (cVar1 == '\0') {
    pPVar5 = (Projectile *)0x0;
  }
  else {
    puVar3 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(param_1 + 0x10));
    fVar7 = *(float *)(puVar3 + 1);
                    /* WARNING: Load size is inaccurate */
    pBVar8._0_4_ = *puVar3;
    uVar6 = *(undefined4 *)((long)puVar3 + 4);
    uVar4 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_28);
    Board::AddProjectile
              (pBVar8._0_4_,uVar6,-fVar7,uVar4,aRStack_18,*(undefined8 *)(param_1 + 0x10),0);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    Sexy::Point::Point((Point *)aRStack_18,(TPoint *)param_2);
    AloesSprayProjectile::InitParam((AloesSprayProjectile *)this,uVar4,aRStack_18);
    BoardTransforms::GridToBoardSpace(param_2);
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_20,(float)local_1c,0.0);
    Projectile::LaunchAt(this,(SexyVector3 *)aRStack_18,250.0,1.5);
    pPVar5 = this;
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar5);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAloes::RemoveProjectielPos(Sexy::Point) */

void __thiscall PlantAloes::RemoveProjectielPos(PlantAloes *this,undefined8 param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                       (uVar2,uVar3,param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (bVar1) {
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_10,(__normal_iterator *)&local_18);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::erase
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAloes::OnAnimCommand(std::string const&, std::string const&) */

void PlantAloes::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  long lVar2;
  TPoint *pTVar3;
  BoardTransforms *this;
  undefined8 uVar4;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(uint *)(param_1 + 0x30) < 2) {
    bVar1 = std::operator==(param_2,"use_action");
    if (bVar1) {
      this = (BoardTransforms *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(param_1 + 0x10));
      BoardTransforms::BoardSpaceToGrid(this,*(float *)this,*(float *)(this + 4));
      *(undefined8 *)(param_1 + 0x38) = local_10;
      CreateWaterSprayEffect((int)param_1,(int)local_10,SUB81((ulong)local_10 >> 0x20,0));
    }
  }
  else if ((*(uint *)(param_1 + 0x30) - 2 < 2) &&
          (bVar1 = std::operator==(param_2,"use_action"), bVar1)) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    lVar2 = FUN_04cbfc8c(uVar4,*(undefined8 *)(param_1 + 0x48));
    if (lVar2 != 0) {
      pTVar3 = (TPoint *)FUN_04cbfc98(uVar4,0);
      Sexy::Point::Point((Point *)&local_10,pTVar3);
      CreateAloesSprayProjectile(param_1,(Point *)&local_10,*(undefined4 *)(param_1 + 0x30));
      pTVar3 = (TPoint *)FUN_04cbfc98(*(undefined8 *)(param_1 + 0x40),0);
      Sexy::Point::Point((Point *)&local_10,pTVar3);
      RemoveProjectielPos((PlantAloes *)param_1,(Point *)&local_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    PlantFramework::OnAnimCommand(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAloes::CreateAloesSprayProjectile(std::vector<Sexy::Point, std::allocator<Sexy::Point> >,
   int) */

void __thiscall
PlantAloes::CreateAloesSprayProjectile
          (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,PlantAloes *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_3)

{
  Projectile *this_00;
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  Point *pPVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  Board *pBVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  Projectile *local_28;
  int local_20;
  int local_1c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  lVar3 = FUN_04cbfc8c(*(undefined8 *)param_3,*(undefined8 *)(param_3 + 8));
  if (lVar3 != 0) {
    FUN_04cbfbe8(aRStack_18,*(undefined8 *)(this + 0x10));
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    lVar3 = FUN_04cbfd48(*(undefined8 *)(lVar3 + 0x70));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)(lVar3 + 8));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_40);
    if (cVar1 != '\0') {
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               **)(this + 0x10));
      fVar7 = *(float *)(puVar4 + 1);
                    /* WARNING: Load size is inaccurate */
      pBVar9._0_4_ = *puVar4;
      uVar8 = *(undefined4 *)((long)puVar4 + 4);
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(param_3);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(param_3);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_38,(__normal_iterator *)&local_30),
            bVar2) {
        pPVar5 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
        uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_40);
        local_28 = (Projectile *)
                   Board::AddProjectile
                             (pBVar9._0_4_,uVar8,-fVar7,uVar6,aRStack_18,
                              *(undefined8 *)(this + 0x10),0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        BoardTransforms::GridToBoardSpace(pPVar5);
        this_00 = local_28;
        EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_20,(float)local_1c,0.0);
        Projectile::LaunchAt(this_00,(SexyVector3 *)aRStack_18,250.0,1.5);
        std::vector<Projectile*,std::allocator<Projectile*>>::push_back
                  ((vector<Projectile*,std::allocator<Projectile*>> *)param_1,&local_28);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}

