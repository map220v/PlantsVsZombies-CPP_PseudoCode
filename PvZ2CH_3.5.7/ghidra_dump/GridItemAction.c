// Class: GridItemAction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAction::StaticClassInit() */

void GridItemAction::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemAction");
    (*pcVar2)(plVar1,asStack_10,FUN_04d7342c,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAction::StaticGetClass() */

long * GridItemAction::StaticGetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemAction::GetClass() const */

long * GridItemAction::GetClass(void)

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
  uVar2 = PropertySheetBase::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemAction",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAction::GetAffectedTeams() const */

void __thiscall GridItemAction::GetAffectedTeams(GridItemAction *this)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x50);
    uVar2 = FUN_04d71c88(uVar4,*(undefined8 *)(this + 0x58));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined4 *)FUN_04d71cb0(uVar4,uVar3);
    operator|=(&local_c,*puVar1);
    uVar3 = uVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_c);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAction::GetAffectedTypes() const */

void __thiscall GridItemAction::GetAffectedTypes(GridItemAction *this)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x68);
    uVar2 = FUN_04d71cb8(uVar4,*(undefined8 *)(this + 0x70));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined4 *)FUN_04d71cc4(uVar4,uVar3);
    operator|=(&local_c,*puVar1);
    uVar3 = uVar3 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_c);
}


/* GridItemAction::GridItemAction() */

void __thiscall GridItemAction::GridItemAction(GridItemAction *this)

{
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this);
  *(undefined ***)this = &PTR_GetClass_069b67c0;
  Set8BytesTo0(this + 0x18);
  Set8BytesTo0(this + 0x20);
  Set8BytesTo0(this + 0x28);
  Set8BytesTo0(this + 0x30);
  *(undefined4 *)(this + 0x38) = 0;
  Set8BytesTo0(this + 0x40);
  Sexy::Point::Point((Point *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x68));
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0x3f800000;
  *(undefined4 *)(this + 0x8c) = 0x3f800000;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x90));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xc0));
  return;
}


/* GridItemAction::StaticNew() */

GridItemAction * GridItemAction::StaticNew(void)

{
  GridItemAction *this;
  
  this = ::operator_new(0xd8);
  GridItemAction(this);
  return this;
}


/* GridItemAction::~GridItemAction() */

void __thiscall GridItemAction::~GridItemAction(GridItemAction *this)

{
  *(undefined ***)this = &PTR_GetClass_069b67c0;
  std::vector<GridItemConditionEntry,std::allocator<GridItemConditionEntry>>::~vector
            ((vector<GridItemConditionEntry,std::allocator<GridItemConditionEntry>> *)(this + 0xc0))
  ;
  std::vector<PlantConditionEntry,std::allocator<PlantConditionEntry>>::~vector
            ((vector<PlantConditionEntry,std::allocator<PlantConditionEntry>> *)(this + 0xa8));
  std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::~vector
            ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)(this + 0x90));
  std::vector<BoardEntityTypeFlag,std::allocator<BoardEntityTypeFlag>>::~vector
            ((vector<BoardEntityTypeFlag,std::allocator<BoardEntityTypeFlag>> *)(this + 0x68));
  std::vector<TeamFlags,std::allocator<TeamFlags>>::~vector
            ((vector<TeamFlags,std::allocator<TeamFlags>> *)(this + 0x50));
  std::string::~string((string *)(this + 0x40));
  std::string::~string((string *)(this + 0x30));
  std::string::~string((string *)(this + 0x28));
  std::string::~string((string *)(this + 0x20));
  std::string::~string((string *)(this + 0x18));
  PropertySheetBase::~PropertySheetBase((PropertySheetBase *)this);
  return;
}


/* GridItemAction::~GridItemAction() */

void __thiscall GridItemAction::~GridItemAction(GridItemAction *this)

{
  ~GridItemAction(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAction::Execute(std::vector<BoardEntity*, std::allocator<BoardEntity*> >, DamageInfo)
   const */

void __thiscall
GridItemAction::Execute
          (GridItemAction *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2,long param_3)

{
  vector<std::pair<ZombieConditionInfo,float>,std::allocator<std::pair<ZombieConditionInfo,float>>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 extraout_x0;
  pair *ppVar5;
  Effect_PopAnim *this_01;
  PopAnim *pPVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_02;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30 [3];
  undefined4 local_18;
  Zombie *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c((string *)(this + 0x20));
  if (cVar1 == '\0') {
    Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)local_30);
    cVar1 = FUN_0547419c(this + 0x28);
    if (cVar1 == '\0') {
      AnimationSequence::AddSingleAnimation((PIInterpolator *)local_30,this + 0x28);
    }
    cVar1 = FUN_0547419c(this + 0x30);
    if ((cVar1 == '\0') && (*(float *)(this + 0x38) != 0.0)) {
      AnimationSequence::AddLoopingAnimation((PIInterpolator *)local_30,this + 0x30);
    }
    cVar1 = FUN_0547419c(this + 0x40);
    if (cVar1 == '\0') {
      AnimationSequence::AddSingleAnimation((PIInterpolator *)local_30,this + 0x40);
    }
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(param_2);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(param_2);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar2)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50)
      ;
      this_02 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)*puVar4;
      this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
      GetPAMByName((string *)(this + 0x20));
      pPVar6 = (PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      Effect_PopAnim::CreatePopAnimRig(this_01,pPVar6,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      puVar4 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_02);
      local_38 = *(undefined4 *)(puVar4 + 1);
      local_40._0_4_ = (float)*puVar4;
      local_40._4_4_ = (float)((ulong)*puVar4 >> 0x20);
      local_40 = CONCAT44((float)*(int *)(this + 0x4c) + local_40._4_4_,
                          (float)*(int *)(this + 0x48) + (float)local_40);
      iVar3 = (**(code **)(*(long *)this_02 + 0x170))(this_02);
      StandaloneEffect::SetBoardSpaceOrigin
                ((StandaloneEffect *)this_01,(SexyVector3 *)&local_40,iVar3 + 2);
      Effect_PopAnim::SetCentered(this_01,true);
      Effect_PopAnim::PlayAnimationSequence(this_01,(AnimationSequence *)local_30);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
    }
    AnimationSequence::~AnimationSequence((AnimationSequence *)local_30);
  }
  if (*(int *)(this + 0x10) == 0) {
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(param_2);
    local_30[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(param_2);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)local_30), bVar2)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      (**(code **)(*(long *)*puVar4 + 0x110))((long *)*puVar4,param_3);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
  }
  else {
    if (0.0 < *(float *)(this + 0x84)) {
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(param_2);
      local_30[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(param_2);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_40,(__normal_iterator *)local_30), bVar2
            ) {
        puVar4 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
        (**(code **)(*(long *)*puVar4 + 0x148))(*(undefined4 *)(param_3 + 8),(long *)*puVar4);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
      }
    }
    this_00 = (vector<std::pair<ZombieConditionInfo,float>,std::allocator<std::pair<ZombieConditionInfo,float>>>
               *)(param_3 + 0x20);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(param_2);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(param_2);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50), bVar2)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58)
      ;
      if ((((RtObject *)*puVar4 != (RtObject *)0x0) &&
          (bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar4), bVar2)) &&
         (cVar1 = std::
                  vector<std::pair<ZombieConditionInfo,float>,std::allocator<std::pair<ZombieConditionInfo,float>>>
                  ::empty(this_00), cVar1 == '\0')) {
        nop();
        local_48 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)this_00);
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this_00);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_48,(__normal_iterator *)&local_40),
              bVar2) {
          ppVar5 = (pair *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
          std::pair<ZombieConditionInfo,float>::pair
                    ((pair<ZombieConditionInfo,float> *)local_30,ppVar5);
          Zombie::ApplyCondition(local_10._0_4_,0,extraout_x0,local_18,1);
          std::_Destroy<PlantWarsNodeData>((PlantWarsNodeData *)local_30);
          __gnu_cxx::
          __normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
          ::operator++((__normal_iterator<Sexy::CharData_const*,std::vector<Sexy::CharData,std::allocator<Sexy::CharData>>>
                        *)&local_48);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemAction::GridItemAction(GridItemAction const&) */

void __thiscall GridItemAction::GridItemAction(GridItemAction *this,GridItemAction *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  PropertySheetBase::PropertySheetBase((PropertySheetBase *)this,(PropertySheetBase *)param_1);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined ***)this = &PTR_GetClass_069b67c0;
  FUN_05475d88(this + 0x18,param_1 + 0x18);
  FUN_05475d88(this + 0x20,param_1 + 0x20);
  FUN_05475d88(this + 0x28,param_1 + 0x28);
  FUN_05475d88(this + 0x30,param_1 + 0x30);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  FUN_05475d88(this + 0x40,param_1 + 0x40);
  Sexy::Point::Point((Point *)(this + 0x48),(TPoint *)(param_1 + 0x48));
  std::vector<TeamFlags,std::allocator<TeamFlags>>::vector
            ((vector<TeamFlags,std::allocator<TeamFlags>> *)(this + 0x50),(vector *)(param_1 + 0x50)
            );
  std::vector<BoardEntityTypeFlag,std::allocator<BoardEntityTypeFlag>>::vector
            ((vector<BoardEntityTypeFlag,std::allocator<BoardEntityTypeFlag>> *)(this + 0x68),
             (vector *)(param_1 + 0x68));
  uVar1 = *(undefined4 *)(param_1 + 0x84);
  uVar2 = *(undefined4 *)(param_1 + 0x88);
  uVar3 = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = uVar1;
  *(undefined4 *)(this + 0x88) = uVar2;
  *(undefined4 *)(this + 0x8c) = uVar3;
  std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::vector
            ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)(this + 0x90),
             (vector *)(param_1 + 0x90));
  std::vector<PlantConditionEntry,std::allocator<PlantConditionEntry>>::vector
            ((vector<PlantConditionEntry,std::allocator<PlantConditionEntry>> *)(this + 0xa8),
             (vector *)(param_1 + 0xa8));
  std::vector<GridItemConditionEntry,std::allocator<GridItemConditionEntry>>::vector
            ((vector<GridItemConditionEntry,std::allocator<GridItemConditionEntry>> *)(this + 0xc0),
             (vector *)(param_1 + 0xc0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemAction::BuildDamageInfo(BoardEntity*) const */

void GridItemAction::BuildDamageInfo(BoardEntity *param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 in_x1;
  DamageInfo *in_x8;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(in_x8);
  uVar1 = *(undefined4 *)(param_1 + 0x84);
  *(undefined8 *)in_x8 = in_x1;
  *(undefined4 *)(in_x8 + 8) = uVar1;
  cVar2 = std::vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>>::empty
                    ((vector<ZombieConditionEntry,std::allocator<ZombieConditionEntry>> *)
                     (param_1 + 0x90));
  if (cVar2 == '\0') {
    local_28 = FUN_04d72638(*(undefined8 *)(param_1 + 0x90));
    local_20 = FUN_04d72688(*(undefined8 *)(param_1 + 0x98));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar3)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28)
      ;
      local_18 = *puVar4;
      local_10 = *(undefined4 *)(puVar4 + 1);
      ValueRange::GetRandomValue((ValueRange *)((long)&local_18 + 4));
      DamageInfo::AddCondition();
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_28);
    }
  }
  cVar2 = std::vector<GridItemConditionEntry,std::allocator<GridItemConditionEntry>>::empty
                    ((vector<GridItemConditionEntry,std::allocator<GridItemConditionEntry>> *)
                     (param_1 + 0xc0));
  if (cVar2 == '\0') {
    local_28 = FUN_04d7273c(*(undefined8 *)(param_1 + 0xc0));
    local_20 = FUN_04d7278c(*(undefined8 *)(param_1 + 200));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar3)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28)
      ;
      local_18 = *puVar4;
      local_10 = *(undefined4 *)(puVar4 + 1);
      ValueRange::GetRandomValue((ValueRange *)((long)&local_18 + 4));
      DamageInfo::AddCondition();
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_28);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

