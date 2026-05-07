// Class: PlantSweetPotato


/* PlantSweetPotato::PlantSweetPotato() */

void __thiscall PlantSweetPotato::PlantSweetPotato(PlantSweetPotato *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067cedb0;
  return;
}


/* PlantSweetPotato::~PlantSweetPotato() */

void __thiscall PlantSweetPotato::~PlantSweetPotato(PlantSweetPotato *this)

{
  *(undefined ***)this = &PTR_GetClass_067cedb0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantSweetPotato::~PlantSweetPotato() */

void __thiscall PlantSweetPotato::~PlantSweetPotato(PlantSweetPotato *this)

{
  ~PlantSweetPotato(this);
  AK::FreeHook(this);
  return;
}


/* PlantSweetPotato::AddAttractionEffect(Zombie*) */

void PlantSweetPotato::AddAttractionEffect(Zombie *param_1)

{
  return;
}


/* PlantSweetPotato::ApplyPlantfoodEffectHeal() */

void __thiscall PlantSweetPotato::ApplyPlantfoodEffectHeal(PlantSweetPotato *this)

{
  char cVar1;
  
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    return;
  }
  PlantFramework::ApplyPlantfoodEffectHeal((PlantFramework *)this);
  return;
}


/* PlantSweetPotato::StaticNew() */

PlantSweetPotato * PlantSweetPotato::StaticNew(void)

{
  PlantSweetPotato *this;
  
  this = ::operator_new(0x28);
  PlantSweetPotato(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSweetPotato::StaticClassInit() */

void PlantSweetPotato::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantSweetPotato");
    (*pcVar2)(plVar1,asStack_10,FUN_04096b34,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantSweetPotato::StaticGetClass() */

long * PlantSweetPotato::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantSweetPotato",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSweetPotato::GetClass() const */

long * PlantSweetPotato::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantSweetPotato",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantSweetPotato::CanBeTargetedBy(BoardEntity const*) */

undefined8 __thiscall PlantSweetPotato::CanBeTargetedBy(PlantSweetPotato *this,BoardEntity *param_1)

{
  int iVar1;
  Zombie *this_00;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  
  if (((param_1 != (BoardEntity *)0x0) &&
      (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) &&
     (iVar1 = Zombie::GetFacing(this_00), iVar1 == 0)) {
    pfVar2 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)this_00);
    pfVar3 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    if (*pfVar2 < *pfVar3) {
      return 0;
    }
  }
  uVar4 = PlantFramework::CanBeTargetedBy((BoardEntity *)this);
  return uVar4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSweetPotato::calcBoardSpaceAttractRect(bool) const */

void PlantSweetPotato::calcBoardSpaceAttractRect(bool param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  char in_w1;
  Insets *in_x8;
  int iVar7;
  float fVar8;
  
  lVar5 = FUN_04097a18(*(undefined8 *)((ulong)param_1 + 0x10));
  Sexy::Insets::Insets(in_x8);
  if (lVar5 != 0) {
    puVar1 = (undefined8 *)(lVar5 + 0x2d0);
    if (in_w1 != '\0') {
      puVar1 = (undefined8 *)(lVar5 + 0x2e0);
    }
    uVar2 = puVar1[1];
    *(undefined8 *)in_x8 = *puVar1;
    *(undefined8 *)(in_x8 + 8) = uVar2;
    cVar3 = NewPVPUtils::IsPlayingNewPVP();
    if (cVar3 != '\0') {
      iVar4 = BoardConstants::GRIDSQUARE_HEIGHT();
      iVar7 = (int)((float)iVar4 * _FUN_04097b5c * (float)*(int *)(in_x8 + 4));
      *(int *)(in_x8 + 0xc) = (int)((float)iVar4 * _FUN_04097b5c * (float)*(int *)(in_x8 + 0xc));
      goto LAB_04097ae0;
    }
  }
  iVar7 = *(int *)(in_x8 + 4);
LAB_04097ae0:
  pfVar6 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)((ulong)param_1 + 0x10));
  fVar8 = *pfVar6;
  *(int *)(in_x8 + 4) = (int)pfVar6[1] + iVar7;
  *(int *)in_x8 = *(int *)in_x8 + (int)fVar8;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSweetPotato::CanAttractZombie(Zombie*) const */

void __thiscall PlantSweetPotato::CanAttractZombie(PlantSweetPotato *this,Zombie *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  SweetPotatoProps *this_00;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar5;
  int local_18;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::IsSuspended(param_1);
  if (((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 == '\0'))
     && (cVar1 = Zombie::IsControlled(param_1), cVar1 == '\0')) {
    cVar1 = Zombie::IsInSandStorm(param_1);
    if (cVar1 == '\0') {
      cVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,*(RealObject **)(this + 0x10));
      bVar3 = 0;
      if (cVar1 == '\0') goto LAB_04098c28;
      cVar1 = Zombie::HasFogImmune(param_1);
      if ((cVar1 == '\0') && (cVar1 = Zombie::IsBerserk(param_1), cVar1 == '\0')) {
        this_00 = (SweetPotatoProps *)FUN_04097a18(*(undefined8 *)(this + 0x10));
        this_01 = (RtWeakPtr *)Zombie::GetType(param_1);
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
        cVar1 = SweetPotatoProps::IsZombieTypeBlackListed(this_00,(ZombieType *)pRVar5);
        if (cVar1 != '\0') goto LAB_04098c28;
        bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)param_1);
        if ((!bVar2) &&
           (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)param_1), !bVar2)) {
          cVar1 = (**(code **)(*(long *)param_1 + 0x4d8))(param_1);
          if ((cVar1 == '\0') &&
             ((cVar1 = (**(code **)(*(long *)param_1 + 0x508))(param_1), cVar1 == '\0' &&
              (cVar1 = Zombie::HasCondition(param_1,0x92), cVar1 == '\0')))) {
            BoardEntity::CalcGridPosition();
            iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
            Sexy::Point::Point(aPStack_10,local_18,iVar4);
            bVar3 = Board::IsPitOfDoom(*(Board **)(gLawnApp + 0x9f0),aPStack_10);
            bVar3 = bVar3 ^ 1;
          }
          goto LAB_04098c28;
        }
      }
    }
  }
  bVar3 = 0;
LAB_04098c28:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* PlantSweetPotato::Initialize() */

void __thiscall PlantSweetPotato::Initialize(PlantSweetPotato *this)

{
  SweetPotatoSubsystem *pSVar1;
  
  PlantFramework::Initialize((PlantFramework *)this);
  pSVar1 = Board::GetGameSubSystem<SweetPotatoSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  SweetPotatoSubsystem::RegisterSweetPotato((PlantSweetPotato *)pSVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSweetPotato::findZombiesInBoardSpaceRect(Sexy::TRect<int> const&, std::vector<Zombie*,
   std::allocator<Zombie*> >&) const */

void __thiscall
PlantSweetPotato::findZombiesInBoardSpaceRect(PlantSweetPotato *this,TRect *param_1,vector *param_2)

{
  char cVar1;
  bool bVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *extraout_x0;
  SexyVector3 *pSVar3;
  undefined8 local_38;
  undefined8 local_30;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInRectangle(avStack_20,2,param_1);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (!bVar2) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
    nop();
    local_28 = extraout_x0;
    pSVar3 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    cVar1 = NewPVPUtils::IsOppoentRegion(pSVar3);
    if (cVar1 == '\0') {
LAB_04099794:
      std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                ((vector<Zombie*,std::allocator<Zombie*>> *)param_2,(Zombie **)&local_28);
    }
    else {
      pSVar3 = (SexyVector3 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(local_28);
      cVar1 = NewPVPUtils::IsOppoentRegion(pSVar3);
      if (cVar1 != '\0') goto LAB_04099794;
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_38);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantSweetPotato::UpdateActions() */

void __thiscall PlantSweetPotato::UpdateActions(PlantSweetPotato *this)

{
  SweetPotatoSubsystem *this_00;
  TRect aTStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x180))();
  calcBoardSpaceAttractRect(SUB81(this,0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  findZombiesInBoardSpaceRect(this,aTStack_30,(vector *)avStack_20);
  this_00 = Board::GetGameSubSystem<SweetPotatoSubsystem>(*(Board **)(gLawnApp + 0x9f0));
  SweetPotatoSubsystem::RegisterAttractions(this_00,this,(vector *)avStack_20);
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

