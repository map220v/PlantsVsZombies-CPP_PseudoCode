// Class: PlantXShot


/* PlantXShot::CancelPlantfood() */

void __thiscall PlantXShot::CancelPlantfood(PlantXShot *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  this[0x38] = (PlantXShot)0x0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantXShot::StaticClassInit() */

void PlantXShot::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantXShot");
    (*pcVar2)(plVar1,asStack_10,FUN_040baf28,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantXShot::StaticGetClass() */

long * PlantXShot::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantXShot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantXShot::GetClass() const */

long * PlantXShot::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantXShot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantXShot::OnAnimCommand(std::string const&, std::string const&) */

void __thiscall PlantXShot::OnAnimCommand(PlantXShot *this,string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = std::operator==(param_1,"use_special");
  if ((bVar1) &&
     (cVar2 = (**(code **)(*(long *)this + 0x180))(this,*(code **)(*(long *)this + 0x180),param_2),
     cVar2 != '\0')) {
    this[0x38] = (PlantXShot)0x1;
    return;
  }
  PlantFramework::OnAnimCommand((string *)this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantXShot::calcValidTargetFromList(std::vector<BoardEntity*, std::allocator<BoardEntity*> >) */

void PlantXShot::calcValidTargetFromList
               (RtWeakPtr<Sexy::SoundResource> *param_1,long *param_2,
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  Zombie *this;
  undefined8 *puVar4;
  GridItem *pGVar5;
  float *pfVar6;
  long lVar7;
  code *pcVar8;
  RtObject *this_00;
  float fVar9;
  undefined8 local_28;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(code **)(*param_2 + 400) == PlantFramework::GetCollisionFlags) {
    uVar3 = PlantFramework::GetCollisionFlags();
  }
  else {
    uVar3 = (**(code **)(*param_2 + 400))(param_2,0);
  }
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_3);
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_3);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
    if (!bVar2) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)param_1);
LAB_040ba1a0:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    this_00 = (RtObject *)*puVar4;
    if (this_00 == (RtObject *)0x0) {
LAB_040ba17c:
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(param_1,(RtWeakPtrBase *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      goto LAB_040ba1a0;
    }
    this = Sexy::RtObject::Cast<Zombie>(this_00);
    if (this == (Zombie *)0x0) {
LAB_040ba154:
      pGVar5 = Sexy::RtObject::Cast<GridItem>(this_00);
      if ((pGVar5 == (GridItem *)0x0) ||
         (cVar1 = (**(code **)(*(long *)pGVar5 + 0x200))(), cVar1 != '\0')) goto LAB_040ba17c;
    }
    else {
      cVar1 = (**(code **)(*(long *)this + 0x328))();
      if (cVar1 == '\0') {
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
        fVar9 = *pfVar6;
        lVar7 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
        if (fVar9 <= *(float *)(lVar7 + 0x10)) {
          pcVar8 = *(code **)(*(long *)this + 0x3d0);
          Plant::GetType();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
          cVar1 = (*pcVar8)(this,aRStack_10,0);
          if (cVar1 == '\0') {
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          }
          else {
            cVar1 = (**(code **)(*(long *)this + 0xb8))(this,uVar3);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
            if (cVar1 != '\0') goto LAB_040ba154;
          }
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantXShot::ApplyPlantfood() */

void __thiscall PlantXShot::ApplyPlantfood(PlantXShot *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  lVar2 = FUN_040ba2ec(*(undefined8 *)(this + 0x10));
  iVar1 = *(int *)(lVar2 + 0x2b8);
  FUN_040b97c8(aRStack_10,*(undefined8 *)(this + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  *(float *)(this + 0x28) = (float)iVar1 / *(float *)(lVar2 + 0x38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x2c) = uVar4;
  lVar3 = FUN_040ba2ec(*(undefined8 *)(this + 0x10));
  lVar2 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(lVar3 + 0x2b8);
  if (local_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantXShot::fireProjectile(int, Sexy::RtWeakPtr<ProjectilePropertySheet>) */

void __thiscall PlantXShot::fireProjectile(PlantXShot *this,int param_1,RtWeakPtrBase *param_3)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  Projectile *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar4;
  undefined8 uVar5;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  Board *pBVar13;
  float fVar12;
  float local_38;
  float local_34;
  string asStack_30 [8];
  Vec3 aVStack_28 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  p_Var6 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var6);
  fVar11 = *pfVar2;
  FUN_040b97c8(aRStack_18,p_Var6);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  lVar3 = FUN_040b9808(*(undefined8 *)(lVar3 + 0x70),(long)param_1);
  pBVar13._0_4_ =
       (Board *)(fVar11 + *(float *)(lVar3 + 0x68) * *(float *)(*(long *)(this + 0x10) + 0xc4));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  p_Var6 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             **)(this + 0x10);
  lVar3 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var6);
  fVar11 = *(float *)(lVar3 + 4);
  FUN_040b97c8(aRStack_18,p_Var6);
  lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  lVar3 = FUN_040b9808(*(undefined8 *)(lVar3 + 0x70),(long)param_1);
  fVar11 = fVar11 + *(float *)(lVar3 + 0x6c) * *(float *)(*(long *)(this + 0x10) + 0xc4);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  p_Var6 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             **)(this + 0x10);
  lVar3 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(p_Var6);
  fVar12 = *(float *)(lVar3 + 8);
  lVar3 = FUN_040ba2ec(p_Var6);
  fVar12 = fVar12 + *(float *)(lVar3 + 0x2c0) * *(float *)(*(long *)(this + 0x10) + 0xc4);
  uVar5 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,param_3);
  this_00 = (Projectile *)
            Board::AddProjectile
                      (pBVar13._0_4_,fVar11,fVar12,uVar5,aRStack_18,*(undefined8 *)(this + 0x10),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  switch(param_1) {
  case 0:
    fVar7 = 45.0;
    break;
  case 1:
    fVar7 = 315.0;
    break;
  case 2:
    fVar7 = 225.0;
    break;
  case 3:
    fVar7 = 135.0;
    break;
  default:
    fVar7 = 0.0;
  }
  fVar7 = (float)Sexy::SexyMath::DegToRad(fVar7);
  FUN_040b97ac(this_00 + 0xc4);
  EATextSquish::Vec3::Vec3(aVStack_28,200.0,100.0,0.0);
  fVar8 = (float)FUN_040b97a8(*(undefined4 *)(this_00 + 0xc4));
  fVar9 = cosf(fVar8);
  fVar10 = (float)DVec3::getLength((DVec3 *)aVStack_28);
  fVar8 = sinf(fVar8);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar10 * fVar9,-(fVar8 * fVar10),0.0);
  Projectile::SetVelocity(this_00,(SexyVector3 *)aRStack_18);
  this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,(float)pBVar13._0_4_,fVar11 - fVar12);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,local_38,local_34,0.0);
  iVar1 = (**(code **)(*(long *)this_00 + 200))(this_00);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_01,(SexyVector3 *)aRStack_18,iVar1 + 1);
  std::string::string(asStack_30,"POPANIM_EFFECTS_ROTORUTABAGA_MUZZLE_BURST");
  GetPAMByName(asStack_30);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_30);
  nop();
  Effect_PopAnim::SetCentered(this_01,true);
  fVar11 = (float)Sexy::SexyMath::DegToRad(135.0);
  Effect_PopAnim::SetOrientation(this_01,fVar11 + fVar7);
  std::string::string((string *)aRStack_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_01,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantXShot::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantXShot::Fire(PlantFramework *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  undefined8 *puVar8;
  SexyVector3 *pSVar9;
  RtWeakPtr<PowerPropertySheet> *this;
  RtWeakPtr *this_00;
  ResourceInfo *pRVar10;
  undefined8 uVar11;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var12;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var13;
  float fVar14;
  float fVar15;
  float fVar16;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  float local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)param_1 + 0x180))();
  if (cVar2 != '\0') {
    p_Var12 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)0x0;
    goto LAB_040baa3c;
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x150);
  lVar5 = FUN_040ba2ec(*(long *)(param_1 + 0x10));
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  iVar3 = FUN_040b97ec(uVar11);
  pfVar6 = (float *)FUN_040b9800(*(undefined8 *)(lVar5 + 0x2c8),(long)(iVar3 + -1));
  fVar16 = *pfVar6;
  if (iVar3 < 2) {
LAB_040ba834:
    lVar5 = (long)iVar1;
  }
  else {
    fVar14 = (float)PlantFramework::Rand(param_1,1.0);
    fVar15 = (float)Plant::GetGeneSkillBoost(*(Plant **)(param_1 + 0x10));
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    lVar5 = 5;
    if (fVar15 + fVar16 <= fVar14) goto LAB_040ba834;
  }
  p_Var12 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)0x0;
  FUN_040b97c8((RtWeakPtr<Sexy::ResourceInfo> *)&local_18,uVar11);
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  lVar5 = FUN_040b9808(*(undefined8 *)(lVar7 + 0x70),lVar5);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)(lVar5 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_28);
  if (cVar2 != '\0') {
    uVar4 = operator|(1,4);
    p_Var13 = p_Var12;
    p_Var12 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)0x0;
    do {
      cVar2 = LawnApp::IsInModule(gLawnApp,uVar4);
      if (cVar2 == '\0') {
        this_00 = (RtWeakPtr *)FUN_040b9818(*(undefined8 *)(param_1 + 0x40),p_Var13);
        pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
        if (pRVar10 != (ResourceInfo *)0x0) goto LAB_040ba8d0;
      }
      else {
LAB_040ba8d0:
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_28);
        fireProjectile((PlantXShot *)param_1,(ulong)p_Var13 & 0xffffffff,
                       (RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)aRStack_28);
        p_Var12 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)fireProjectile((PlantXShot *)param_1,(ulong)p_Var13 & 0xffffffff,
                                    (RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        puVar8 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(p_Var12);
        iVar3 = (int)p_Var13;
        local_10 = *(undefined4 *)(puVar8 + 1);
        iVar1 = (iVar3 / 3) * 3;
        local_18 = (float)*puVar8;
        fStack_14 = (float)((ulong)*puVar8 >> 0x20);
        if (iVar3 == iVar1) {
          fStack_14 = fStack_14 - 18.0;
          if (p_Var13 < (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)0x2) goto LAB_040baac8;
LAB_040ba960:
          local_18 = local_18 - 18.0;
        }
        else {
          fStack_14 = fStack_14 + 18.0;
          if ((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)0x1 < p_Var13) goto LAB_040ba960;
LAB_040baac8:
          local_18 = local_18 + 18.0;
        }
        (**(code **)(*(long *)p_Var12 + 0x78))(p_Var12,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
        p_Var12 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)fireProjectile((PlantXShot *)param_1,(ulong)p_Var13 & 0xffffffff,aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
        pSVar9 = (SexyVector3 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(p_Var12);
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar9);
        if (iVar3 == iVar1) {
          fStack_14 = fStack_14 - 36.0;
          if (p_Var13 < (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)0x2) goto LAB_040baaa8;
LAB_040ba9d8:
          local_18 = local_18 - 36.0;
        }
        else {
          fStack_14 = fStack_14 + 36.0;
          if ((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)0x1 < p_Var13) goto LAB_040ba9d8;
LAB_040baaa8:
          local_18 = local_18 + 36.0;
        }
        (**(code **)(*(long *)p_Var12 + 0x78))(p_Var12,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        this = (RtWeakPtr<PowerPropertySheet> *)
               FUN_040b9818(*(undefined8 *)(param_1 + 0x40),p_Var13);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_20);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this,(RtWeakPtr *)aRStack_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20)
        ;
      }
      p_Var13 = p_Var13 + 1;
    } while (p_Var13 !=
             (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)&DAT_00000004);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
LAB_040baa3c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(p_Var12);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantXShot::UpdatePlantfood() */

void __thiscall PlantXShot::UpdatePlantfood(PlantXShot *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  float *pfVar4;
  long lVar5;
  PlantAction *pPVar6;
  int *piVar7;
  Projectile *this_00;
  undefined8 uVar8;
  undefined8 *puVar9;
  PopAnimRig *this_01;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  Vec3 aVStack_b0 [16];
  int local_a0 [4];
  undefined8 local_90;
  undefined4 local_88;
  PlantAction aPStack_80 [8];
  RtWeakPtrBase aRStack_78 [112];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x38] != (PlantXShot)0x0) {
    pfVar4 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      **)(this + 0x10));
    EATextSquish::Vec3::Vec3(aVStack_b0,*pfVar4,pfVar4[1],pfVar4[2]);
    cVar3 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
    uVar8 = 6;
    if (cVar3 == '\0') {
      uVar8 = 4;
    }
    Plant::GetProps();
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
    pPVar6 = (PlantAction *)FUN_040b9808(*(undefined8 *)(lVar5 + 0x70),uVar8);
    PlantAction::PlantAction(aPStack_80,pPVar6);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
    fVar12 = (float)PVZ_T();
    local_90 = CONCAT44(local_90._4_4_,*(int *)(this + 0x34) - *(int *)(this + 0x30));
    local_a0[0] = (int)((fVar12 - *(float *)(this + 0x2c)) * *(float *)(this + 0x28)) -
                  *(int *)(this + 0x30);
    piVar7 = eastl::min_alt<int>(local_a0,(int *)&local_90);
    iVar2 = *piVar7;
    if (0 < iVar2) {
      iVar11 = 0;
      do {
        iVar10 = 0;
        do {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_90,aRStack_78);
          iVar1 = iVar10 + 1;
          this_00 = (Projectile *)
                    fireProjectile(this,iVar10,(RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_90);
          uVar8 = FUN_040b97b4(*(undefined8 *)(this_00 + 0xe0));
          uVar8 = operator|(uVar8,0x2000);
          FUN_040b97b8(this_00 + 0xe0,uVar8);
          fVar12 = sinf((float)*(int *)(this + 0x30) * 10.0);
          fVar13 = (float)FUN_040b97a8(*(undefined4 *)(this_00 + 0xc4));
          lVar5 = FUN_040ba2ec(*(undefined8 *)(this + 0x10));
          fVar12 = (float)Sexy::SexyMath::DegToRad(fVar12 * *(float *)(lVar5 + 700));
          fVar12 = fVar12 + fVar13;
          FUN_040b97ac(fVar12,this_00 + 0xc4);
          EATextSquish::Vec3::Vec3((Vec3 *)local_a0,200.0,100.0,0.0);
          fVar13 = cosf(fVar12);
          fVar14 = (float)DVec3::getLength((DVec3 *)local_a0);
          fVar12 = sinf(fVar12);
          EATextSquish::Vec3::Vec3((Vec3 *)&local_90,fVar14 * fVar13,-(fVar12 * fVar14),0.0);
          Projectile::SetVelocity(this_00,(SexyVector3 *)&local_90);
          puVar9 = (undefined8 *)Projectile::GetVelocityScale(this_00);
          local_90 = *puVar9;
          local_88 = *(undefined4 *)(puVar9 + 1);
          fVar12 = (float)PlantFramework::Rand((PlantFramework *)this,0.7);
          EATextSquish::Vec3::operator*=((Vec3 *)&local_90,fVar12 + 1.0);
          Projectile::SetVelocityScale(this_00,(SexyVector3 *)&local_90);
          iVar10 = iVar1;
        } while (iVar1 != 4);
        iVar11 = iVar11 + 1;
        *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
      } while (iVar11 != iVar2);
    }
    this_01 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar3 = PopAnimRig::IsPlayingAnything(this_01);
    if (cVar3 == '\0') {
      (**(code **)(*(long *)this + 0x228))(this);
      PlantAction::~PlantAction(aPStack_80);
    }
    else {
      PlantAction::~PlantAction(aPStack_80);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantXShot::~PlantXShot() */

void __thiscall PlantXShot::~PlantXShot(PlantXShot *this)

{
  *(undefined ***)this = &PTR_GetClass_067d63a0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x40));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantXShot::~PlantXShot() */

void __thiscall PlantXShot::~PlantXShot(PlantXShot *this)

{
  ~PlantXShot(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantXShot::FindTargetAndFire(PlantWeapon) */

void PlantXShot::FindTargetAndFire(long *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  long lVar6;
  RtWeakPtr<PowerPropertySheet> *pRVar7;
  RtWeakPtr *pRVar8;
  ResourceInfo *pRVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  FastCurve aFStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  FastCurve aFStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*param_1 + 0x180))();
  if (cVar2 != '\0') goto LAB_040bb30c;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  pfVar5 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1[2]);
  fVar12 = pfVar5[1];
  fVar13 = *pfVar5;
  uVar3 = BoardTransforms::BoardSpaceToGridY(fVar12);
  FUN_040b97c8(aRStack_48,param_1[2]);
  uVar4 = operator|(2,4);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  lVar6 = FUN_040b9808(*(undefined8 *)(lVar6 + 0x70),0);
  fVar11 = *(float *)(lVar6 + 0x68);
  fVar10 = *(float *)(param_1[2] + 0xc4);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  lVar6 = FUN_040b9808(*(undefined8 *)(lVar6 + 0x70),0);
  Sexy::FastCurve::SetOutRange
            (aFStack_40,fVar13 + fVar11 * fVar10,
             fVar12 + *(float *)(lVar6 + 0x6c) * *(float *)(param_1[2] + 0xc4));
  Sexy::FastCurve::SetOutRange(aFStack_20,1.0,-1.0);
  EntityFinder::GetEntitiesTouchingRay
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,uVar4,
             aFStack_40,aFStack_20,0,uVar3);
  lVar6 = FUN_040b9820(local_38,local_30);
  bVar1 = false;
  if (lVar6 != 0) {
    pRVar7 = (RtWeakPtr<PowerPropertySheet> *)FUN_040b9818(param_1[8],0);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aFStack_20,(vector *)&local_38);
    calcValidTargetFromList(aFStack_40,param_1,aFStack_20);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar7,(RtWeakPtr *)aFStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aFStack_40);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aFStack_20);
    pRVar8 = (RtWeakPtr *)FUN_040b9818(param_1[8],0);
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar8);
    bVar1 = pRVar9 != (ResourceInfo *)0x0;
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  lVar6 = FUN_040b9808(*(undefined8 *)(lVar6 + 0x70),1);
  fVar11 = *(float *)(lVar6 + 0x68);
  fVar10 = *(float *)(param_1[2] + 0xc4);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  lVar6 = FUN_040b9808(*(undefined8 *)(lVar6 + 0x70),1);
  Sexy::FastCurve::SetOutRange
            (aFStack_40,fVar13 + fVar11 * fVar10,
             fVar12 + *(float *)(lVar6 + 0x6c) * *(float *)(param_1[2] + 0xc4));
  Sexy::FastCurve::SetOutRange(aFStack_20,1.0,1.0);
  EntityFinder::GetEntitiesTouchingRay
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,uVar4,
             aFStack_40,aFStack_20,uVar3,4);
  lVar6 = FUN_040b9820(local_38,local_30);
  if (lVar6 != 0) {
    pRVar7 = (RtWeakPtr<PowerPropertySheet> *)FUN_040b9818(param_1[8],1);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aFStack_20,(vector *)&local_38);
    calcValidTargetFromList(aFStack_40,param_1,aFStack_20);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar7,(RtWeakPtr *)aFStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aFStack_40);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aFStack_20);
    if (!bVar1) {
      pRVar8 = (RtWeakPtr *)FUN_040b9818(param_1[8],1);
      pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar8);
      bVar1 = pRVar9 != (ResourceInfo *)0x0;
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  lVar6 = FUN_040b9808(*(undefined8 *)(lVar6 + 0x70),2);
  fVar11 = *(float *)(lVar6 + 0x68);
  fVar10 = *(float *)(param_1[2] + 0xc4);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  lVar6 = FUN_040b9808(*(undefined8 *)(lVar6 + 0x70),2);
  Sexy::FastCurve::SetOutRange
            (aFStack_40,fVar13 + fVar11 * fVar10,
             fVar12 + *(float *)(lVar6 + 0x6c) * *(float *)(param_1[2] + 0xc4));
  Sexy::FastCurve::SetOutRange(aFStack_20,-1.0,1.0);
  EntityFinder::GetEntitiesTouchingRay
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,uVar4,
             aFStack_40,aFStack_20,uVar3,4);
  lVar6 = FUN_040b9820(local_38,local_30);
  if (lVar6 != 0) {
    pRVar7 = (RtWeakPtr<PowerPropertySheet> *)FUN_040b9818(param_1[8],2);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aFStack_20,(vector *)&local_38);
    calcValidTargetFromList(aFStack_40,param_1,aFStack_20);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar7,(RtWeakPtr *)aFStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aFStack_40);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aFStack_20);
    if (!bVar1) {
      pRVar8 = (RtWeakPtr *)FUN_040b9818(param_1[8],2);
      pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar8);
      bVar1 = pRVar9 != (ResourceInfo *)0x0;
    }
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  lVar6 = FUN_040b9808(*(undefined8 *)(lVar6 + 0x70),3);
  fVar11 = *(float *)(lVar6 + 0x68);
  fVar10 = *(float *)(param_1[2] + 0xc4);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  lVar6 = FUN_040b9808(*(undefined8 *)(lVar6 + 0x70),3);
  Sexy::FastCurve::SetOutRange
            (aFStack_40,fVar13 + fVar11 * fVar10,
             fVar12 + *(float *)(lVar6 + 0x6c) * *(float *)(param_1[2] + 0xc4));
  Sexy::FastCurve::SetOutRange(aFStack_20,-1.0,-1.0);
  EntityFinder::GetEntitiesTouchingRay
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,uVar4,
             aFStack_40,aFStack_20,0,uVar3);
  lVar6 = FUN_040b9820(local_38,local_30);
  if (lVar6 == 0) {
    if (bVar1) goto LAB_040bb6d8;
  }
  else {
    pRVar7 = (RtWeakPtr<PowerPropertySheet> *)FUN_040b9818(param_1[8],3);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aFStack_20,(vector *)&local_38);
    calcValidTargetFromList(aFStack_40,param_1,aFStack_20);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(pRVar7,(RtWeakPtr *)aFStack_40);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aFStack_40);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aFStack_20);
    if (!bVar1) {
      pRVar8 = (RtWeakPtr *)FUN_040b9818(param_1[8],3);
      pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar8);
      if (pRVar9 == (ResourceInfo *)0x0) goto LAB_040bb600;
    }
LAB_040bb6d8:
    cVar2 = '\x01';
    (**(code **)(*param_1 + 0x1a0))(param_1);
  }
LAB_040bb600:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
LAB_040bb30c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* PlantXShot::PlantXShot() */

void __thiscall PlantXShot::PlantXShot(PlantXShot *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067d63a0;
  *(undefined4 *)(this + 0x28) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x38] = (PlantXShot)0x0;
  *(undefined4 *)(this + 0x2c) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::resize
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x40),4);
  return;
}


/* PlantXShot::StaticNew() */

PlantXShot * PlantXShot::StaticNew(void)

{
  PlantXShot *this;
  
  this = ::operator_new(0x58);
  PlantXShot(this);
  return this;
}

