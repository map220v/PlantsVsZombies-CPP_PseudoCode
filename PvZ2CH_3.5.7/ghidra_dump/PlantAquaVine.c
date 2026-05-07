// Class: PlantAquaVine


/* PlantAquaVine::onPlantDestroyed(Plant*) */

void __thiscall PlantAquaVine::onPlantDestroyed(PlantAquaVine *this,Plant *param_1)

{
  if ((*(Plant **)(this + 0x10) == param_1) && (this[0x169] == (PlantAquaVine)0x0)) {
    (**(code **)(*(long *)this + 0x130))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAquaVine::StaticClassInit() */

void PlantAquaVine::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAquaVine");
    (*pcVar2)(plVar1,asStack_10,FUN_03f4b9d8,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAquaVine::StaticGetClass() */

long * PlantAquaVine::StaticGetClass(void)

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
  uVar2 = PlantVineFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAquaVine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAquaVine::GetClass() const */

long * PlantAquaVine::GetClass(void)

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
  uVar2 = PlantVineFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAquaVine",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAquaVine::IsOnWater() */

undefined8 __thiscall PlantAquaVine::IsOnWater(PlantAquaVine *this)

{
  SexyVector3 *pSVar1;
  undefined8 uVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  
  this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  if (this_00 !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0) {
    pSVar1 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    uVar2 = RealObject::IsOnWaterTile((RealObject *)this_00,pSVar1);
    return uVar2;
  }
  return 0;
}


/* PlantAquaVine::getWeapon() */

undefined1 __thiscall PlantAquaVine::getWeapon(PlantAquaVine *this)

{
  char cVar1;
  undefined1 uVar2;
  
  if (this[0x158] != (PlantAquaVine)0x0) {
    cVar1 = (**(code **)(*(long *)this + 0x180))();
    uVar2 = 3;
    if (cVar1 == '\0') {
      uVar2 = 2;
    }
    return uVar2;
  }
  uVar2 = (**(code **)(*(long *)this + 0x180))();
  return uVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAquaVine::getHostPlant() */

void __thiscall PlantAquaVine::getHostPlant(PlantAquaVine *this)

{
  undefined8 uVar1;
  long lVar2;
  Board *pBVar3;
  Point aPStack_10 [8];
  long local_8;
  
  lVar2 = *(long *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    pBVar3 = *(Board **)(gLawnApp + 0x9f0);
    Sexy::Point::Point(aPStack_10,*(int *)(lVar2 + 0x114),*(int *)(lVar2 + 0x110));
    uVar1 = Board::GetPlantAt(pBVar3,aPStack_10,1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantAquaVine::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantAquaVine::onAnimStoppedCallback(PlantAquaVine *this,string *param_1)

{
  bool bVar1;
  char *pcVar2;
  
  if (((this[0x158] == (PlantAquaVine)0x0) || (this[0x170] != (PlantAquaVine)0x0)) ||
     (this[0x171] != (PlantAquaVine)0x0)) {
    pcVar2 = "attack";
  }
  else {
    pcVar2 = "attack_water";
  }
  bVar1 = std::operator==(param_1,pcVar2);
  if (bVar1) {
    this[0x168] = (PlantAquaVine)0x0;
  }
  return;
}


/* PlantAquaVine::NotifySetHidden(bool, bool) */

void __thiscall PlantAquaVine::NotifySetHidden(PlantAquaVine *this,bool param_1,bool param_2)

{
  char cVar1;
  StandaloneEffect *pSVar2;
  
  if (this[0x158] != (PlantAquaVine)0x0) {
    if (param_2 < param_1) {
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x160));
      if (cVar1 != '\0') {
        pSVar2 = (StandaloneEffect *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160));
        StandaloneEffect::SetVisibility(pSVar2,false);
        return;
      }
    }
    else if (param_1 < param_2) {
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x160));
      if ((cVar1 != '\0') &&
         (cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),1), cVar1 == '\0')) {
        pSVar2 = (StandaloneEffect *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160));
        StandaloneEffect::SetVisibility(pSVar2,true);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAquaVine::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

void PlantAquaVine::CanTargetZombie(long param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long *plVar4;
  code *pcVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  if (((plVar4 != (long *)0x0) && (cVar1 = (**(code **)(*plVar4 + 0x330))(), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*plVar4 + 0x328))(plVar4), cVar1 == '\0')) {
    uVar3 = FUN_03f4b2f4(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x24));
    cVar1 = RealObject::IsOnTeam(plVar4,uVar3);
    if (cVar1 == '\0') {
      cVar1 = FUN_03f4cbf8(*(undefined4 *)((long)plVar4 + 0xcc));
      if (cVar1 == '\0') {
        pcVar5 = *(code **)(*plVar4 + 0x3d0);
        Plant::GetType();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        uVar2 = (*pcVar5)(plVar4,aRStack_10,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        goto LAB_03f4cdcc;
      }
    }
  }
  uVar2 = 0;
LAB_03f4cdcc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAquaVine::fireOnActionCommand(float) */

void __thiscall PlantAquaVine::fireOnActionCommand(PlantAquaVine *this,float param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  Projectile *this_00;
  code *pcVar4;
  float fVar5;
  RtMixedPtrBase aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this[0x168] = (PlantAquaVine)0x1;
  PlantFramework::FindTargetZombie(aRStack_20,this,*(undefined4 *)(this + 0x174));
  (**(code **)(*(long *)this + 0xf8))(aRStack_18,this,*(undefined4 *)(this + 0x174));
  if ((*(long *)(this + 0x10) != 0) &&
     (((cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_20), cVar2 != '\0' ||
       (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18), cVar2 != '\0')) ||
      (cVar2 = (**(code **)(*(long *)this + 0x180))(this), cVar2 != '\0')))) {
    cVar2 = (**(code **)(*(long *)this + 0x180))(this);
    if ((cVar2 == '\0') || (cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10)), cVar2 == '\0')
       ) {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = *(undefined4 *)(this + 0x174);
    }
    else if (this[0x158] == (PlantAquaVine)0x0) {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 7;
    }
    else {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 6;
    }
    pcVar4 = *(code **)(*(long *)this + 0xb0);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    this_00 = (Projectile *)
              (*pcVar4)(this,a_Stack_10,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
                        *(undefined4 *)(this + 0x174));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    if ((this_00 != (Projectile *)0x0) && (0.0 < param_1)) {
      fVar5 = (float)PVZ_T();
      Projectile::SetUpdateTimeOverride(this_00,fVar5 - param_1);
    }
    uVar1 = *(uint *)(this + 0x174);
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
    if ((((uVar1 & 0xfffffffd) == 0) || (uVar1 == 4)) && (iVar3 = FUN_03f4b374(), iVar3 == 5)) {
      *(int *)(this + 0x178) = *(int *)(this + 0x178) + 1;
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAquaVine::onUseSpecialAnimCommand(float) */

void __thiscall PlantAquaVine::onUseSpecialAnimCommand(PlantAquaVine *this,float param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  Projectile *this_00;
  code *pcVar4;
  float fVar5;
  RtMixedPtrBase aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this[0x168] = (PlantAquaVine)0x1;
  PlantFramework::FindTargetZombie(aRStack_20,this,*(undefined4 *)(this + 0x174));
  (**(code **)(*(long *)this + 0xf8))(aRStack_18,this,*(undefined4 *)(this + 0x174));
  if ((*(long *)(this + 0x10) != 0) &&
     (((cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_20), cVar2 != '\0' ||
       (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18), cVar2 != '\0')) ||
      (cVar2 = (**(code **)(*(long *)this + 0x180))(this), cVar2 != '\0')))) {
    cVar2 = (**(code **)(*(long *)this + 0x180))(this);
    if ((cVar2 == '\0') || (cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10)), cVar2 == '\0')
       ) {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = *(undefined4 *)(this + 0x174);
    }
    else if (this[0x158] == (PlantAquaVine)0x0) {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 7;
    }
    else {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 6;
    }
    pcVar4 = *(code **)(*(long *)this + 0xb0);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    this_00 = (Projectile *)
              (*pcVar4)(this,a_Stack_10,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
                        *(undefined4 *)(this + 0x174));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    if ((this_00 != (Projectile *)0x0) && (0.0 < param_1)) {
      fVar5 = (float)PVZ_T();
      Projectile::SetUpdateTimeOverride(this_00,fVar5 - param_1);
    }
    uVar1 = *(uint *)(this + 0x174);
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
    if ((((uVar1 & 0xfffffffd) == 0) || (uVar1 == 4)) && (iVar3 = FUN_03f4b374(), iVar3 == 5)) {
      *(int *)(this + 0x178) = *(int *)(this + 0x178) + 1;
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAquaVine::onUseActionAnimCommand(float) */

void __thiscall PlantAquaVine::onUseActionAnimCommand(PlantAquaVine *this,float param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  Projectile *this_00;
  code *pcVar4;
  float fVar5;
  RtMixedPtrBase aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  this[0x168] = (PlantAquaVine)0x1;
  PlantFramework::FindTargetZombie(aRStack_20,this,*(undefined4 *)(this + 0x174));
  (**(code **)(*(long *)this + 0xf8))(aRStack_18,this,*(undefined4 *)(this + 0x174));
  if ((*(long *)(this + 0x10) != 0) &&
     (((cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_20), cVar2 != '\0' ||
       (cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18), cVar2 != '\0')) ||
      (cVar2 = (**(code **)(*(long *)this + 0x180))(this), cVar2 != '\0')))) {
    cVar2 = (**(code **)(*(long *)this + 0x180))(this);
    if ((cVar2 == '\0') || (cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10)), cVar2 == '\0')
       ) {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = *(undefined4 *)(this + 0x174);
    }
    else if (this[0x158] == (PlantAquaVine)0x0) {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 7;
    }
    else {
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 6;
    }
    pcVar4 = *(code **)(*(long *)this + 0xb0);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    this_00 = (Projectile *)
              (*pcVar4)(this,a_Stack_10,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
                        *(undefined4 *)(this + 0x174));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    if ((this_00 != (Projectile *)0x0) && (0.0 < param_1)) {
      fVar5 = (float)PVZ_T();
      Projectile::SetUpdateTimeOverride(this_00,fVar5 - param_1);
    }
    uVar1 = *(uint *)(this + 0x174);
    *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
    if ((((uVar1 & 0xfffffffd) == 0) || (uVar1 == 4)) && (iVar3 = FUN_03f4b374(), iVar3 == 5)) {
      *(int *)(this + 0x178) = *(int *)(this + 0x178) + 1;
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAquaVine::getBasePlant() */

void __thiscall PlantAquaVine::getBasePlant(PlantAquaVine *this)

{
  long lVar1;
  ResourceInfo *pRVar2;
  Point *pPVar3;
  float fVar4;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar3 = *(Point **)(gLawnApp + 0x9f0);
  Sexy::Point::Point(aPStack_10,*(int *)(*(long *)(this + 0x10) + 0x114),
                     *(int *)(*(long *)(this + 0x10) + 0x110));
  lVar1 = Board::GetPlantGroupAt(pPVar3);
  if (lVar1 != 0) {
    PlantGroup::GetPlantAtLayer(aPStack_10,lVar1,1);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aPStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
    if (pRVar2 == (ResourceInfo *)0x0) {
      if (this[0x158] == (PlantAquaVine)0x0) {
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aPStack_10);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(this + 0x128),(RtWeakPtr *)aPStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10)
        ;
        fVar4 = (float)PVZ_T();
        *(float *)(this + 0x134) = fVar4 + *(float *)(this + 0x130);
      }
    }
    else {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x128),(RtWeakPtrBase *)aPStack_10)
      ;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_10);
      if (*(code **)(*(long *)this + 0x700) != PlantVineFramework::onBoostPlant) {
        (**(code **)(*(long *)this + 0x700))(this,pRVar2);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAquaVine::CheckMainPlant() */

void __thiscall PlantAquaVine::CheckMainPlant(PlantAquaVine *this)

{
  LawnApp *this_00;
  char cVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  this_00 = gLawnApp;
  lVar2 = LawnApp::GetPlantLevelUpListView(gLawnApp);
  lVar3 = LawnApp::GetPlantAvatarListView(this_00);
  if ((lVar3 == 0) && (lVar2 == 0)) {
    cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!((RtMixedPtr<Sexy::Image> *)(this + 0x128));
    if ((cVar1 == '\0') || (cVar1 = IsOnWater(this), cVar1 != '\0')) {
      cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),4);
      if (cVar1 != '\0') {
        Plant::EndCondition(*(Plant **)(this + 0x10),4);
        return;
      }
    }
    else {
      fVar5 = *(float *)(this + 0x134);
      fVar4 = (float)PVZ_T();
      if (fVar5 <= fVar4) {
        Plant::KillPlant(*(Plant **)(this + 0x10),1,0,1);
      }
      fVar4 = (float)PVZ_Dt();
      if (1.0 <= fVar4 + *(float *)(this + 0x138)) {
        *(undefined4 *)(this + 0x138) = 0;
        Plant::ApplyCondition(0x3f000000,0,*(undefined8 *)(this + 0x10),4);
        return;
      }
      *(float *)(this + 0x138) = fVar4 + *(float *)(this + 0x138);
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAquaVine::SetPopAnimDelegates(PlantAnimRig*) */

void __thiscall PlantAquaVine::SetPopAnimDelegates(PlantAquaVine *this,PlantAnimRig *param_1)

{
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1<float> aDStack_68 [48];
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (PlantAnimRig *)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              (*(ReceivedDataCallback **)(this + 0x10),Plant::OnAnimCommand);
    Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
    Delegate4<Plant,void(Plant::*)(std::string_const&,float,std::string_const&,std::string_const&)>
              (aDStack_38,aCStack_80);
    TimeChallengeEndLevelUI::SetContinueCallBack((TimeChallengeEndLevelUI *)param_1,aDStack_38);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onUseSpecialAnimCommand);
    Sexy::Delegate1<float>::Delegate1<PlantAquaVine,void(PlantAquaVine::*)(float)>
              (aDStack_68,aCStack_98);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,onUseActionAnimCommand);
    Sexy::Delegate1<float>::Delegate1<PlantAquaVine,void(PlantAquaVine::*)(float)>
              ((Delegate1<float> *)aDStack_38,aCStack_80);
    PlantAnimRig::SetPlantDelegates(param_1,aDStack_68,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAquaVine::createWaterBGEffect() */

void __thiscall PlantAquaVine::createWaterBGEffect(PlantAquaVine *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  undefined4 uVar2;
  float *pfVar3;
  Effect_PopAnim *pEVar4;
  ResourceInfo *pRVar5;
  PopAnim *pPVar6;
  long *plVar7;
  StandaloneEffect *pSVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x10) != 0) {
    this_00 = (RtMixedPtrBase *)(this + 0x160);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 == '\0') {
      pfVar3 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(this + 0x10));
      fVar10 = *pfVar3;
      fVar11 = pfVar3[1];
      if (((gLawnApp != 0) && (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0)) &&
         (pEVar4 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0)),
         pEVar4 != (Effect_PopAnim *)0x0)) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
        if (pRVar5 != (ResourceInfo *)0x0) {
          pEVar4 = (Effect_PopAnim *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          std::string::string(asStack_20,"POPANIM_EFFECTS_AQUAVINE_WATER_WALL");
          GetPAMByName(asStack_20);
          pPVar6 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
          Effect_PopAnim::CreatePopAnimRig(pEVar4,pPVar6,(RtClass *)0x0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          std::string::~string(asStack_20);
          nop();
          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          (**(code **)(*plVar7 + 0x80))(0x3f800000);
          pSVar8 = (StandaloneEffect *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
          EATextSquish::Vec3::Vec3
                    ((Vec3 *)aRStack_18,(float)(int)(fVar10 - 101.0),(float)(int)(fVar11 - 101.0),
                     0.0);
          StandaloneEffect::SetBoardSpaceOrigin(pSVar8,(SexyVector3 *)aRStack_18,-1);
          lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          uVar2 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
          uVar2 = Board::MakeRenderOrder(0x61c74,uVar2,0);
          FUN_03f4b328(lVar9 + 0x1c,uVar2);
          if (this[0x158] == (PlantAquaVine)0x0) {
            pSVar8 = (StandaloneEffect *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            StandaloneEffect::SetVisibility(pSVar8,false);
          }
          else {
            pSVar8 = (StandaloneEffect *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            StandaloneEffect::SetVisibility(pSVar8,true);
            pEVar4 = (Effect_PopAnim *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            std::string::string((string *)aRStack_18,"water_wall");
            PVZ_EOT();
            Effect_PopAnim::PlayLoopingAnimation(pEVar4,aRStack_18,0);
            std::string::~string((string *)aRStack_18);
            nop();
          }
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAquaVine::PlantAquaVine() */

void __thiscall PlantAquaVine::PlantAquaVine(PlantAquaVine *this)

{
  PlantVineFramework::PlantVineFramework((PlantVineFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06798a20;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x140));
  this[0x158] = (PlantAquaVine)0x0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x160));
  this[0x168] = (PlantAquaVine)0x0;
  this[0x169] = (PlantAquaVine)0x0;
  this[0x170] = (PlantAquaVine)0x0;
  this[0x171] = (PlantAquaVine)0x0;
  *(undefined4 *)(this + 0x178) = 0;
  return;
}


/* PlantAquaVine::StaticNew() */

PlantAquaVine * PlantAquaVine::StaticNew(void)

{
  PlantAquaVine *this;
  
  this = ::operator_new(0x180);
  PlantAquaVine(this);
  return this;
}


/* PlantAquaVine::registerForEvents() */

void __thiscall PlantAquaVine::registerForEvents(PlantAquaVine *this)

{
  undefined *puVar1;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
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
            ((ReceivedDataCallback *)this,onPlantMoving);
  local_b0 = local_90;
  uStack_a8 = uStack_88;
  local_a0 = local_80;
  MessageRouter::
  Subscribe<Plant*,Sexy::Point&,Sexy::CBMemberTranslatorX<PlantAquaVine,void(PlantAquaVine::*)(Plant*,Sexy::Point&)>>
            ((MessageRouter *)puVar1,Message::PlantMoving,&local_b0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPlantDestroyed);
  local_c0 = local_68;
  local_d0 = local_78;
  uStack_c8 = uStack_70;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantAquaVine,void(PlantAquaVine::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDestroyed,&local_d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x6f8);
  local_d0 = local_60;
  uStack_c8 = uStack_58;
  local_c0 = local_50;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<PlantAquaVine,void(PlantAquaVine::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantConvertedToProjectile,&local_d0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRailcartMoved);
  local_f0 = local_48;
  uStack_e8 = uStack_40;
  local_e0 = local_38;
  MessageRouter::
  Subscribe<GridItemRailcart*,Sexy::CBMemberTranslatorX<PlantAquaVine,void(PlantAquaVine::*)(GridItemRailcart*)>>
            ((MessageRouter *)puVar1,Message::RailcartMoved,&local_f0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,gatherPlantingRestrictions);
  local_110 = local_30;
  uStack_108 = uStack_28;
  local_100 = local_20;
  MessageRouter::
  Subscribe<Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*,Sexy::CBMemberTranslatorX<PlantAquaVine,void(PlantAquaVine::*)(Sexy::Point_const&,PlantType_const*,std::vector<PlantingReason,std::allocator<PlantingReason>>*)>>
            ((MessageRouter *)puVar1,Message::GatherPlantingRestrictions,&local_110);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTideTransitionCompleted);
  local_120 = local_8;
  local_130 = local_18;
  uStack_128 = uStack_10;
  MessageRouter::
  Subscribe<TideModule_const*,Sexy::CBMemberTranslatorX<PlantAquaVine,void(PlantAquaVine::*)(TideModule_const*)>>
            ((MessageRouter *)puVar1,Message::TideTransitionComplete,&local_130);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAquaVine::isAWaterPlant(Plant*) */

void __thiscall PlantAquaVine::isAWaterPlant(PlantAquaVine *this,Plant *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Plant *)0x0) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_03f4e5ec(*(undefined8 *)(this + 0x10));
    uVar1 = 0;
    if (lVar2 != 0) {
      Plant::GetType();
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      uVar1 = StringRestrictionSet::IsIncluded
                        ((StringRestrictionSet *)(lVar2 + 0x2f0),(string *)(lVar3 + 8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAquaVine::onKilled(bool) */

void PlantAquaVine::onKilled(bool param_1)

{
  char cVar1;
  PlantAquaVine *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  long lVar2;
  SexyVector3 *pSVar3;
  long *plVar4;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  this = (PlantAquaVine *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  if (this[0x169] != (PlantAquaVine)0x0) goto LAB_03f4e728;
  this[0x169] = (PlantAquaVine)0x1;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x160));
  if (cVar1 != '\0') {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160));
    (**(code **)(*plVar4 + 0x48))();
  }
  if ((*(long *)(this + 0x10) == 0) ||
     (this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)getHostPlant(this),
     this_00 ==
     (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
      *)0x0)) goto LAB_03f4e728;
  Plant::GetProps();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  if (cVar1 != '\0') {
    cVar1 = isAWaterPlant(this,(Plant *)this_00);
    if (cVar1 != '\0') {
      cVar1 = IsOnWater(this);
      if (cVar1 == '\0') {
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
        if (*(int *)(lVar2 + 0x50) == 1) {
          Plant::KillPlant((Plant *)this_00,1,0,1);
        }
        goto LAB_03f4e7a0;
      }
    }
    cVar1 = IsOnWater(this);
    if (cVar1 != '\0') {
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
      if (*(char *)(lVar2 + 0x24b) == '\0') {
        pSVar3 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(this_00);
        Board::DoEntityLandedEffects(*(Board **)(gLawnApp + 0x9f0),pSVar3,(BoardEntity *)this_00);
        Plant::KillPlant((Plant *)this_00,1,0,1);
      }
    }
  }
LAB_03f4e7a0:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
LAB_03f4e728:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAquaVine::onPlantMoving(Plant*, Sexy::Point&) */

void PlantAquaVine::onPlantMoving(Plant *param_1,Point *param_2)

{
  char cVar1;
  PlantAnimRig_AquaVine *this;
  long *plVar2;
  
  if ((*(Point **)(param_1 + 0x10) == param_2) && (*(Point **)(param_1 + 0x10) != (Point *)0x0)) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x160));
    if (cVar1 != '\0') {
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x160));
      (**(code **)(*plVar2 + 0x48))();
    }
    this = (PlantAnimRig_AquaVine *)FUN_03f4e8e4(*(undefined8 *)(param_1 + 0x10));
    if (((this != (PlantAnimRig_AquaVine *)0x0) &&
        (cVar1 = PlantAnimRig_AquaVine::IsAttacking(this), cVar1 != '\0')) &&
       (param_1[0x168] == (Plant)0x0)) {
      fireOnActionCommand((PlantAquaVine *)param_1,-1.0);
      (**(code **)(*(long *)this + 0x118))(this);
    }
  }
  return;
}


/* PlantAquaVine::setWatered(bool) */

void __thiscall PlantAquaVine::setWatered(PlantAquaVine *this,bool param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  
  (**(code **)(*(long *)this + 0x3f0))(this,param_1,this[0x158]);
  this[0x158] = (PlantAquaVine)param_1;
  lVar3 = FUN_03f4e8e4(*(undefined8 *)(this + 0x10));
  if (lVar3 != 0) {
    FUN_03f4b37c(lVar3 + 0x3b8,this[0x158]);
  }
  iVar2 = FUN_03f4b344(*(undefined1 *)(*(long *)(this + 0x10) + 0x299));
  if (((iVar2 == 0) && (this[0x158] != (PlantAquaVine)0x0)) &&
     (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x160)), cVar1 == '\0')) {
    createWaterBGEffect(this);
    return;
  }
  return;
}


/* PlantAquaVine::setState(int) */

void __thiscall PlantAquaVine::setState(PlantAquaVine *this,int param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_03f4e8e4(*(undefined8 *)(this + 0x10));
  if ((plVar1 != (long *)0x0) && (*(long *)(this + 0x10) != 0)) {
    *(int *)(*(long *)(this + 0x10) + 200) = param_1;
    if ((param_1 == 10) || (param_1 == 0xd)) {
      (**(code **)(*plVar1 + 0x118))();
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAquaVine::PlayAttackAnimation() */

void __thiscall PlantAquaVine::PlayAttackAnimation(PlantAquaVine *this)

{
  bool bVar1;
  PlantAnimRig_AquaVine *this_00;
  code *pcVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(long *)(this + 0x10) != 0) &&
     (this_00 = (PlantAnimRig_AquaVine *)FUN_03f4e8e4(), this_00 != (PlantAnimRig_AquaVine *)0x0)) {
    FUN_03f4b37c(this_00 + 0x3b8,this[0x158]);
    bVar1 = (bool)Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    PlantAnimRig_AquaVine::SetData(this_00,bVar1,(bool)this[0x171],(bool)this[0x170]);
    pcVar2 = *(code **)(*(long *)this_00 + 0x130);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    (*pcVar2)(this_00,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAquaVine::~PlantAquaVine() */

void __thiscall PlantAquaVine::~PlantAquaVine(PlantAquaVine *this)

{
  *(undefined ***)this = &PTR_GetClass_06798a20;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x160));
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x140));
  PlantVineFramework::~PlantVineFramework((PlantVineFramework *)this);
  return;
}


/* PlantAquaVine::~PlantAquaVine() */

void __thiscall PlantAquaVine::~PlantAquaVine(PlantAquaVine *this)

{
  ~PlantAquaVine(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAquaVine::updateWaterState(Plant*) */

void __thiscall PlantAquaVine::updateWaterState(PlantAquaVine *this,Plant *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  BoardTransforms *pBVar5;
  long lVar6;
  string *psVar7;
  undefined8 *puVar8;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  Plant *pPVar9;
  TPoint aTStack_38 [8];
  TPoint<int> aTStack_30 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (Plant *)0x0) &&
     (*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
        **)(this + 0x10) !=
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       *)0x0)) {
    pBVar5 = (BoardTransforms *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(this + 0x10));
    BoardTransforms::BoardSpaceToGrid(pBVar5,*(float *)pBVar5,*(float *)(pBVar5 + 4));
    lVar6 = Board::GetPlantGroupAt(*(Point **)(gLawnApp + 0x9f0));
    if (lVar6 != 0) {
      pBVar5 = (BoardTransforms *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              *)param_1);
      BoardTransforms::BoardSpaceToGrid(pBVar5,*(float *)pBVar5,*(float *)(pBVar5 + 4));
      if ((*(Plant **)(this + 0x10) == param_1) ||
         (cVar1 = Sexy::TPoint<int>::operator==(aTStack_30,aTStack_38), cVar1 != '\0')) {
        psVar7 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        bVar3 = false;
        std::string::string(asStack_10,"imitater");
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar7);
        std::string::~string(asStack_10);
        nop();
        puVar8 = (undefined8 *)PlantGroup::Plants();
        local_20 = FUN_03f4d90c(*puVar8);
        local_18 = FUN_03f4d95c(puVar8[1]);
        while (bVar2 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18),
              bVar2) {
          this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          if (*(long *)(this + 0x10) != lVar6) {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
            Plant::GetType();
            cVar1 = Sexy::RtWeakPtrBase::operator!=
                              ((RtWeakPtrBase *)asStack_10,(RtWeakPtrBase *)aRStack_28);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
            if (cVar1 != '\0') {
              lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
              iVar4 = FUN_03f4b344(*(undefined1 *)(lVar6 + 0x299));
              if (iVar4 != 0) goto LAB_03f4f980;
              bVar3 = true;
              pPVar9 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
              bVar2 = (bool)isAWaterPlant(this,pPVar9);
              setWatered(this,bVar2);
            }
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_20);
        }
        if (!bVar3) {
          bVar3 = (bool)IsOnWater(this);
          setWatered(this,bVar3);
        }
LAB_03f4f980:
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAquaVine::onPlantPlaced(Plant*) */

void __thiscall PlantAquaVine::onPlantPlaced(PlantAquaVine *this,Plant *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = IsOnWater(this);
  if (cVar1 != '\0') {
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x134) = uVar2;
  }
  if (*(long *)(this + 0x10) != 0) {
    updateWaterState(this,param_1);
    return;
  }
  return;
}


/* PlantAquaVine::updateWaterState() */

void __thiscall PlantAquaVine::updateWaterState(PlantAquaVine *this)

{
  bool bVar1;
  Plant *pPVar2;
  
  if (*(long *)(this + 0x10) == 0) {
    return;
  }
  pPVar2 = (Plant *)getHostPlant(this);
  if (pPVar2 != (Plant *)0x0) {
    updateWaterState(this,pPVar2);
    return;
  }
  bVar1 = (bool)IsOnWater(this);
  setWatered(this,bVar1);
  return;
}


/* PlantAquaVine::OnRelocationComplete() */

void __thiscall PlantAquaVine::OnRelocationComplete(PlantAquaVine *this)

{
  bool bVar1;
  Plant *pPVar2;
  
  if (*(long *)(this + 0x10) == 0) {
    return;
  }
  pPVar2 = (Plant *)getHostPlant(this);
  if (pPVar2 != (Plant *)0x0) {
    updateWaterState(this,pPVar2);
    return;
  }
  bVar1 = (bool)IsOnWater(this);
  setWatered(this,bVar1);
  return;
}


/* PlantAquaVine::onRailcartMoved(GridItemRailcart*) */

void PlantAquaVine::onRailcartMoved(GridItemRailcart *param_1)

{
  param_1[0x168] = (GridItemRailcart)0x0;
  updateWaterState((PlantAquaVine *)param_1);
  return;
}


/* PlantAquaVine::onPlantDied(Plant*) */

void PlantAquaVine::onPlantDied(Plant *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = IsOnWater((PlantAquaVine *)param_1);
  if (cVar1 != '\0') {
    uVar2 = PVZ_EOT();
    *(undefined4 *)(param_1 + 0x134) = uVar2;
  }
  if (param_1[0x169] != (Plant)0x0) {
    return;
  }
  updateWaterState((PlantAquaVine *)param_1);
  return;
}


/* PlantAquaVine::onTideTransitionCompleted(TideModule const*) */

void PlantAquaVine::onTideTransitionCompleted(TideModule *param_1)

{
  bool bVar1;
  Plant *pPVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  pPVar2 = (Plant *)getHostPlant((PlantAquaVine *)param_1);
  if (pPVar2 != (Plant *)0x0) {
    updateWaterState((PlantAquaVine *)param_1,pPVar2);
    return;
  }
  bVar1 = (bool)IsOnWater((PlantAquaVine *)param_1);
  setWatered((PlantAquaVine *)param_1,bVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAquaVine::UpdateActions() */

void __thiscall PlantAquaVine::UpdateActions(PlantAquaVine *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long lVar2;
  StandaloneEffect *pSVar3;
  Effect_PopAnim *pEVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x10) != 0) {
    this_00 = (RtMixedPtrBase *)(this + 0x160);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
    if (cVar1 != '\0') {
      updateWaterState(this);
      if (this[0x158] == (PlantAquaVine)0x0) {
        pSVar3 = (StandaloneEffect *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        StandaloneEffect::SetVisibility(pSVar3,false);
      }
      else {
        lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        cVar1 = FUN_03f4b324(*(undefined1 *)(lVar2 + 0x88));
        if (cVar1 == '\0') {
          cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),1);
          if (cVar1 == '\0') {
            pSVar3 = (StandaloneEffect *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            StandaloneEffect::SetVisibility(pSVar3,true);
            pEVar4 = (Effect_PopAnim *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            std::string::string(asStack_10,"water_wall");
            PVZ_EOT();
            Effect_PopAnim::PlayLoopingAnimation(pEVar4,asStack_10,0);
            std::string::~string(asStack_10);
            nop();
          }
        }
      }
    }
    if (*(int *)(*(long *)(this + 0x10) + 200) == 0xb) {
      lVar2 = FUN_03f4b38c(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148));
      if (lVar2 == 0) {
        setState(this,0xc);
      }
    }
    else if ((*(int *)(*(long *)(this + 0x10) + 200) == 0xe) &&
            (lVar2 = FUN_03f4b38c(*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148)),
            lVar2 == 0)) {
      setState(this,0xf);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAquaVine::gatherPlantingRestrictions(Sexy::Point const&, PlantType const*,
   std::vector<PlantingReason, std::allocator<PlantingReason> >*) */

void __thiscall
PlantAquaVine::gatherPlantingRestrictions
          (PlantAquaVine *this,Point *param_1,PlantType *param_2,vector *param_3)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x10) != 0) {
    BoardEntity::CalcGridPosition();
    bVar1 = Sexy::TPoint<int>::operator!=((TPoint<int> *)param_1,(TPoint *)local_10);
    if (((bVar1 < (param_2 != (PlantType *)0x0)) &&
        (lVar3 = FUN_03f4e5ec(*(undefined8 *)(this + 0x10)), lVar3 != 0)) &&
       (cVar2 = StringRestrictionSet::IsExcluded
                          ((StringRestrictionSet *)(lVar3 + 0x2c8),(string *)(param_2 + 8)),
       cVar2 != '\0')) {
      local_10[0] = 0x82;
      std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
                ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_3,
                 (PlantingReason *)local_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAquaVine::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantAquaVine::Fire(PlantAquaVine *this,RtWeakPtrBase *param_2,undefined8 param_3,undefined8 param_4
                   )

{
  PlantAquaVine PVar1;
  PlantAquaVine PVar2;
  PlantAquaVine PVar3;
  bool bVar4;
  undefined4 uVar5;
  RtObject *this_00;
  RtObject *this_01;
  AquaVineProps *pAVar6;
  long extraout_x0;
  AquaVineWateredProjectile *extraout_x0_00;
  AquaVinePFProjectile *extraout_x0_01;
  Plant *pPVar7;
  AquaVineGroundedProjectile *pAVar8;
  ClassRestrictionSet aCStack_58 [40];
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar7 = *(Plant **)(this + 0x10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,param_2);
  this_00 = (RtObject *)Plant::Fire(pPVar7,aRStack_30,param_3,param_4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  FUN_03f4b350(aRStack_30,*(undefined8 *)(this + 0x10));
  this_01 = (RtObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  pAVar6 = Sexy::RtObject::Cast<AquaVineProps_const>(this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
                    /* WARNING: Load size is inaccurate */
  pAVar8._0_4_ = *(AquaVineGroundedProjectile **)(pAVar6 + 0x2b8);
  ClassRestrictionSet::ClassRestrictionSet(aCStack_58,(ClassRestrictionSet *)(pAVar6 + 0x318));
  if (this_00 != (RtObject *)0x0) {
    PVar3 = (PlantAquaVine)Sexy::RtObject::IsA<AquaVineGroundedProjectile>(this_00);
    if ((bool)PVar3) {
      nop();
      if (extraout_x0 != 0) {
        ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)aRStack_30,aCStack_58);
        AquaVineGroundedProjectile::InitializeValues
                  (pAVar8._0_4_,extraout_x0,aRStack_30,this[0x170]);
        ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)aRStack_30);
      }
    }
    else {
      bVar4 = Sexy::RtObject::IsA<AquaVinePFProjectile>(this_00);
      if (bVar4) {
        nop();
        if (extraout_x0_01 != (AquaVinePFProjectile *)0x0) {
          ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)aRStack_30,aCStack_58);
          PVar1 = this[0x158];
          PVar2 = this[0x171];
          uVar5 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
          AquaVinePFProjectile::InitializeValues(extraout_x0_01,aRStack_30,PVar1,PVar2,uVar5);
          ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)aRStack_30);
          this[0x171] = PVar3;
        }
      }
      else {
        bVar4 = Sexy::RtObject::IsA<AquaVineWateredProjectile>(this_00);
        if ((bVar4) && (nop(), extraout_x0_00 != (AquaVineWateredProjectile *)0x0)) {
          ClassRestrictionSet::ClassRestrictionSet((ClassRestrictionSet *)aRStack_30,aCStack_58);
          AquaVineWateredProjectile::InitializeValues(extraout_x0_00,aRStack_30);
          ClassRestrictionSet::~ClassRestrictionSet((ClassRestrictionSet *)aRStack_30);
        }
      }
    }
  }
  ClassRestrictionSet::~ClassRestrictionSet(aCStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* PlantAquaVine::Initialize() */

void __thiscall PlantAquaVine::Initialize(PlantAquaVine *this)

{
  bool bVar1;
  char cVar2;
  Plant *pPVar3;
  
  PlantVineFramework::Initialize((PlantVineFramework *)this);
  pPVar3 = (Plant *)getHostPlant(this);
  if (pPVar3 == (Plant *)0x0) {
    bVar1 = (bool)IsOnWater(this);
    setWatered(this,bVar1);
  }
  else {
    bVar1 = (bool)isAWaterPlant(this,pPVar3);
    setWatered(this,bVar1);
  }
  cVar2 = IsOnWater(this);
  if (cVar2 == '\0') {
    setState(this,10);
    return;
  }
  setState(this,0xd);
  createWaterBGEffect(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAquaVine::FindTargetAndFire(PlantWeapon) */

void PlantAquaVine::FindTargetAndFire(PlantAquaVine *param_1)

{
  undefined4 uVar1;
  int iVar2;
  RtObject *this;
  AquaVineProps *pAVar3;
  float fVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  param_1[0x170] = (PlantAquaVine)0x0;
  local_8 = ___stack_chk_guard;
  uVar1 = getWeapon(param_1);
  *(undefined4 *)(param_1 + 0x174) = uVar1;
  fVar4 = (float)PlantFramework::Rand((PlantFramework *)param_1,1.0);
  FUN_03f4b350(aRStack_10,*(undefined8 *)(param_1 + 0x10));
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pAVar3 = Sexy::RtObject::Cast<AquaVineProps_const>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  iVar2 = FUN_03f4b374(*(undefined8 *)(param_1 + 0x10));
  if (iVar2 == 1) {
    iVar2 = *(int *)(param_1 + 0x178);
    *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(pAVar3 + 700);
  }
  else {
    if (iVar2 == 2) {
      *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(pAVar3 + 0x2c0);
    }
    else {
      *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(pAVar3 + 0x2c4);
    }
    iVar2 = *(int *)(param_1 + 0x178);
  }
  if (iVar2 == 5) {
    *(undefined4 *)(param_1 + 0x174) = 5;
    *(undefined4 *)(param_1 + 0x178) = 0;
    param_1[0x171] = (PlantAquaVine)0x1;
  }
  else {
    if (*(int *)(param_1 + 0x174) == 0) {
      fVar5 = *(float *)(param_1 + 0x16c);
    }
    else {
      if (*(int *)(param_1 + 0x174) != 2) goto LAB_03f50f34;
      fVar5 = *(float *)(param_1 + 0x16c);
    }
    if (fVar4 < fVar5) {
      *(undefined4 *)(param_1 + 0x174) = 4;
      param_1[0x170] = (PlantAquaVine)0x1;
    }
  }
LAB_03f50f34:
  PlantFramework::FindTargetAndFire(param_1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantAquaVine::ApplyPlantfood() */

void __thiscall PlantAquaVine::ApplyPlantfood(PlantAquaVine *this)

{
  undefined4 uVar1;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  Board::SetGridSquareLocked
            (*(Board **)(gLawnApp + 0x9f0),*(int *)(*(long *)(this + 0x10) + 0x114),
             *(int *)(*(long *)(this + 0x10) + 0x110),true);
  uVar1 = getWeapon(this);
  *(undefined4 *)(this + 0x174) = uVar1;
  if (this[0x158] == (PlantAquaVine)0x0) {
    setState(this,0xb);
    return;
  }
  setState(this,0xe);
  return;
}


/* PlantAquaVine::CancelPlantfood() */

void __thiscall PlantAquaVine::CancelPlantfood(PlantAquaVine *this)

{
  undefined4 uVar1;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  Board::SetGridSquareLocked
            (*(Board **)(gLawnApp + 0x9f0),*(int *)(*(long *)(this + 0x10) + 0x114),
             *(int *)(*(long *)(this + 0x10) + 0x110),false);
  uVar1 = getWeapon(this);
  *(undefined4 *)(this + 0x174) = uVar1;
  if (this[0x158] == (PlantAquaVine)0x0) {
    setState(this,10);
    return;
  }
  setState(this,0xd);
  return;
}

