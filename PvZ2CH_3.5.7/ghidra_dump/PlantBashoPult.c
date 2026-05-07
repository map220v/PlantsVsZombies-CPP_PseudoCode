// Class: PlantBashoPult


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBashoPult::StaticClassInit() */

void PlantBashoPult::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantBashoPult");
    (*pcVar2)(plVar1,asStack_10,FUN_040cd68c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBashoPult::StaticGetClass() */

long * PlantBashoPult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantBashoPult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBashoPult::GetClass() const */

long * PlantBashoPult::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantBashoPult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBashoPult::SetReturnToSelf(BashoPultProjectile*) */

void __thiscall PlantBashoPult::SetReturnToSelf(PlantBashoPult *this,BashoPultProjectile *param_1)

{
  SexyVector3 *pSVar1;
  
  pSVar1 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  BashoPultProjectile::SetReturnPosition(param_1,pSVar1);
  return;
}


/* PlantBashoPult::PlantBashoPult() */

void __thiscall PlantBashoPult::PlantBashoPult(PlantBashoPult *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067d9f60;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x28));
  return;
}


/* PlantBashoPult::StaticNew() */

PlantBashoPult * PlantBashoPult::StaticNew(void)

{
  PlantBashoPult *this;
  
  this = ::operator_new(0x30);
  PlantBashoPult(this);
  return this;
}


/* PlantBashoPult::~PlantBashoPult() */

void __thiscall PlantBashoPult::~PlantBashoPult(PlantBashoPult *this)

{
  *(undefined ***)this = &PTR_GetClass_067d9f60;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantBashoPult::~PlantBashoPult() */

void __thiscall PlantBashoPult::~PlantBashoPult(PlantBashoPult *this)

{
  ~PlantBashoPult(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBashoPult::FireProjectile(int) */

void __thiscall PlantBashoPult::FireProjectile(PlantBashoPult *this,int param_1)

{
  long lVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  *(int *)(*(long *)(this + 0x10) + 0x150) = param_1;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  PlantFramework::Fire
            ((PlantFramework *)this,a_Stack_10,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
             *(undefined4 *)(*(long *)(this + 0x10) + 0x150));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == lVar1) {
    nop();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBashoPult::OnAnimCommand(std::string const&, std::string const&) */

void PlantBashoPult::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  BashoPultProjectile *pBVar2;
  
  bVar1 = std::operator==(param_2,"normal_fire");
  if (bVar1) {
    pBVar2 = (BashoPultProjectile *)FireProjectile((PlantBashoPult *)param_1,0);
    SetReturnToSelf((PlantBashoPult *)param_1,pBVar2);
    PlantFramework::OnAnimCommand(param_1,param_2);
    return;
  }
  bVar1 = std::operator==(param_2,"advanced_fire");
  if (bVar1) {
    pBVar2 = (BashoPultProjectile *)FireProjectile((PlantBashoPult *)param_1,3);
    SetReturnToSelf((PlantBashoPult *)param_1,pBVar2);
  }
  else {
    bVar1 = std::operator==(param_2,"plantfood_fire");
    if (bVar1) {
      FireProjectile((PlantBashoPult *)param_1,1);
      nop();
      PlantFramework::OnAnimCommand(param_1,param_2);
      return;
    }
    bVar1 = std::operator==(param_2,"avatar_fire");
    if (bVar1) {
      pBVar2 = (BashoPultProjectile *)FireProjectile((PlantBashoPult *)param_1,2);
      nop();
      BashoPultProjectile::SetRepulseZombie(pBVar2,true);
    }
  }
  PlantFramework::OnAnimCommand(param_1,param_2);
  return;
}


/* PlantBashoPult::UpdateActions() */

void __thiscall PlantBashoPult::UpdateActions(PlantBashoPult *this)

{
  char cVar1;
  int iVar2;
  Effect_AngerFlame *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  this_00 = (Effect_AngerFlame *)FUN_040cd1e4(*(undefined8 *)(this + 0x10));
  iVar2 = Effect_AngerFlame::GetFlameCol(this_00);
  if (iVar2 == 1) {
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
    if (cVar1 != '\0') {
      p_Var3 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x28));
      pfVar4 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var3);
      p_Var3 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 **)(this + 0x10);
      pfVar5 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(p_Var3);
      fVar7 = *pfVar4;
      fVar8 = *pfVar5;
      lVar6 = FUN_040cd26c(p_Var3);
      if (fVar7 - fVar8 < *(float *)(lVar6 + 0x1e0)) {
        PlantAnimRig_BashoPult::PlayCatchBallLooped((PlantAnimRig_BashoPult *)this_00);
        return;
      }
    }
  }
  else if (((iVar2 == 0xe) &&
           (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28)), cVar1 == '\0'))
          && (cVar1 = Plant::CanFindTargetInRow
                                (*(long *)(this + 0x10),
                                 *(undefined4 *)(*(long *)(this + 0x10) + 0x110)), cVar1 == '\0')) {
    (**(code **)(*(long *)this_00 + 0x118))(this_00);
  }
  return;
}


/* PlantBashoPult::TriggerAdvancedAttack() */

bool __thiscall PlantBashoPult::TriggerAdvancedAttack(PlantBashoPult *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = FUN_040cd438(*(undefined8 *)(this + 0x10));
  iVar1 = FUN_040cbf08(*(undefined8 *)(this + 0x10));
  if (-1 < iVar1) {
    uVar5 = *(undefined8 *)(lVar2 + 0x2b8);
    uVar3 = FUN_040cbf18(uVar5,*(undefined8 *)(lVar2 + 0x2c0));
    if ((ulong)(long)iVar1 < uVar3) {
      pfVar4 = (float *)FUN_040cbf24(uVar5,(long)(iVar1 + -1));
      fVar7 = *pfVar4;
      goto LAB_040cd4f4;
    }
  }
  fVar7 = 0.0;
LAB_040cd4f4:
  fVar6 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
  return fVar6 < fVar7;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBashoPult::FindTargetAndFire(PlantWeapon) */

void __thiscall PlantBashoPult::FindTargetAndFire(PlantBashoPult *this,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  long *plVar3;
  PlantAnimRig_BashoPult *pPVar4;
  code *pcVar5;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x28));
  if (cVar1 == '\0') {
    cVar1 = Plant::CanFindTarget(*(undefined8 *)(this + 0x10),param_2);
    if (cVar1 != '\0') {
      cVar2 = TriggerAdvancedAttack(this);
      if (cVar2 == '\0') {
        plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        pcVar5 = *(code **)(*plVar3 + 0x130);
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
        (*pcVar5)(plVar3,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
        cVar2 = cVar1;
      }
      else {
        pPVar4 = (PlantAnimRig_BashoPult *)FUN_040cd1e4();
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
        PlantAnimRig_BashoPult::PlayAdvancedAttack(pPVar4,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
      }
      goto LAB_040cd578;
    }
  }
  cVar2 = '\0';
LAB_040cd578:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* PlantBashoPult::OverrideProjectileCollision(Projectile*) */

undefined8 __thiscall
PlantBashoPult::OverrideProjectileCollision(PlantBashoPult *this,Projectile *param_1)

{
  char cVar1;
  int iVar2;
  ResourceInfo *this_00;
  undefined8 uVar3;
  long lVar4;
  Effect_AngerFlame *this_01;
  
  this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x28));
  if (this_00 == (ResourceInfo *)param_1) {
    lVar4 = Projectile::GetInstigator((Projectile *)this_00);
    if (*(long *)(this + 0x10) == lVar4) {
      (**(code **)(*(long *)this_00 + 0x48))(this_00);
      this_01 = (Effect_AngerFlame *)FUN_040cd1e4(*(undefined8 *)(this + 0x10));
      iVar2 = Effect_AngerFlame::GetFlameCol(this_01);
      if ((iVar2 == 0xe) &&
         (cVar1 = Plant::CanFindTargetInRow
                            (*(long *)(this + 0x10),*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
                             0), cVar1 == '\0')) {
        (**(code **)(*(long *)this_01 + 0x118))(this_01);
      }
      return 1;
    }
  }
  uVar3 = PlantFramework::OverrideProjectileCollision((PlantFramework *)this,param_1);
  return uVar3;
}

