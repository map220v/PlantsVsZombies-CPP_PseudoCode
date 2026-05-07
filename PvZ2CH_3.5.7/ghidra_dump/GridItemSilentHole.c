// Class: GridItemSilentHole


/* GridItemSilentHole::~GridItemSilentHole() */

void __thiscall GridItemSilentHole::~GridItemSilentHole(GridItemSilentHole *this)

{
  *(undefined ***)this = &PTR_GetClass_06891aa0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSilentHole_06891d38;
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemSilentHole::~GridItemSilentHole() */

void __thiscall GridItemSilentHole::~GridItemSilentHole(GridItemSilentHole *this)

{
  ~GridItemSilentHole(this + -0x10);
  return;
}


/* GridItemSilentHole::~GridItemSilentHole() */

void __thiscall GridItemSilentHole::~GridItemSilentHole(GridItemSilentHole *this)

{
  ~GridItemSilentHole(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSilentHole::~GridItemSilentHole() */

void __thiscall GridItemSilentHole::~GridItemSilentHole(GridItemSilentHole *this)

{
  ~GridItemSilentHole(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSilentHole::StaticClassInit() */

void GridItemSilentHole::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSilentHole");
    (*pcVar2)(plVar1,asStack_10,FUN_04663ca0,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSilentHole::StaticGetClass() */

long * GridItemSilentHole::StaticGetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSilentHole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSilentHole::GetClass() const */

long * GridItemSilentHole::GetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSilentHole",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSilentHole::GridItemSilentHole() */

void __thiscall GridItemSilentHole::GridItemSilentHole(GridItemSilentHole *this)

{
  undefined4 uVar1;
  
  GridItem::GridItem((GridItem *)this);
  *(undefined ***)this = &PTR_GetClass_06891aa0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSilentHole_06891d38;
  uVar1 = PVZ_EOT();
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x19c) = uVar1;
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  return;
}


/* GridItemSilentHole::StaticNew() */

GridItemSilentHole * GridItemSilentHole::StaticNew(void)

{
  GridItemSilentHole *this;
  
  this = ::operator_new(0x1b0);
  GridItemSilentHole(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSilentHole::CreateHoleEffect(int, int) */

void __thiscall
GridItemSilentHole::CreateHoleEffect(GridItemSilentHole *this,int param_1,int param_2)

{
  undefined4 uVar1;
  Effect_PopAnim *pEVar2;
  ResourceInfo *pRVar3;
  int iVar4;
  int local_30;
  int local_2c;
  string asStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar2 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_EFFECTS_DARK_WIZARD_SILENTHOLE");
  GetPAMByName(asStack_20);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar2,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string((string *)aRStack_18,"QUAN_1");
  iVar4 = 0;
  Effect_PopAnim::PlaySingleAnimation(pEVar2,aRStack_18);
  std::string::~string((string *)aRStack_18);
  nop();
  BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)(uint)param_1,param_2,iVar4);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,(float)local_30,(float)local_2c,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar2,(SexyVector3 *)aRStack_18,-1);
  Effect_PopAnim::SetCentered(pEVar2,true);
  uVar1 = Board::MakeRenderOrder(0x61cd8,0,0);
  FUN_04663414(pEVar2 + 0x1c,uVar1);
  pEVar2 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_28,"POPANIM_EFFECTS_DARK_WIZARD_SILENTHOLE");
  GetPAMByName(asStack_28);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_20);
  Effect_PopAnim::CreatePopAnimRig(pEVar2,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_20);
  std::string::~string(asStack_28);
  nop();
  std::string::string(asStack_20,"QUAN_2");
  Effect_PopAnim::PlaySingleAnimation(pEVar2,asStack_20,0);
  std::string::~string(asStack_20);
  nop();
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar2,(SexyVector3 *)aRStack_18,-1);
  Effect_PopAnim::SetCentered(pEVar2,true);
  uVar1 = Board::MakeRenderOrder(0x65130,4,0);
  FUN_04663414(pEVar2 + 0x1c,uVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSilentHole::IsDisablePlantfood(Plant*) */

void __thiscall GridItemSilentHole::IsDisablePlantfood(GridItemSilentHole *this,Plant *param_1)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  Plant *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = false;
  local_38 = param_1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  EntityFinder::GetEntitiesWithinCircle
            (*(undefined4 *)(this + 0x194),
             (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,1,pfVar2);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)local_38);
  uVar4 = FUN_04663460(local_20,local_18);
  Sexy::OutputDebugStrF
            ((wchar_t *)
             "silenthole : hole position : %f %f, plant position : %f %f,  radius = %f foundSize = %d"
             ,(double)*pfVar2,(double)pfVar2[1],(double)*pfVar3,(double)pfVar3[1],
             (double)*(float *)(this + 0x194),uVar4);
  lVar5 = FUN_04663460(local_20,local_18);
  if (lVar5 != 0) {
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    local_30 = std::
               find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,Plant*>
                         (uVar4,uVar6,&local_38);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&local_20);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* GridItemSilentHole::onGridItemInitialize() */

void __thiscall GridItemSilentHole::onGridItemInitialize(GridItemSilentHole *this)

{
  int iVar1;
  int iVar2;
  GridItemSilentHoleProps *pGVar3;
  float fVar4;
  
  GridItem::onGridItemInitialize((GridItem *)this);
  fVar4 = (float)PVZ_T();
  pGVar3 = GridItem::GetProps<GridItemSilentHoleProps>();
  *(float *)(this + 0x19c) = fVar4 + *(float *)(pGVar3 + 0x98);
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  *(float *)(this + 0x194) = (float)iVar1 * 4.5;
  pGVar3 = GridItem::GetProps<GridItemSilentHoleProps>();
  *(float *)(this + 0x198) = ((float)iVar1 * 4.5) / *(float *)(pGVar3 + 0x98);
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar2 = SharkMinion::getRow((SharkMinion *)this);
  CreateHoleEffect(this,iVar1,iVar2);
  return;
}


/* GridItemSilentHole::onUpdate() */

void __thiscall GridItemSilentHole::onUpdate(GridItemSilentHole *this)

{
  float fVar1;
  float fVar2;
  
  GridItem::onUpdate((GridItem *)this);
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x19c) < fVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  fVar2 = *(float *)(this + 0x198);
  fVar1 = (float)PVZ_Dt();
  *(float *)(this + 0x194) = *(float *)(this + 0x194) - fVar2 * fVar1;
  return;
}

