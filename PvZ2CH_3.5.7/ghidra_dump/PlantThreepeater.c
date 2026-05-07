// Class: PlantThreepeater


/* PlantThreepeater::Initialize() */

void __thiscall PlantThreepeater::Initialize(PlantThreepeater *this)

{
  PlantFramework::Initialize((PlantFramework *)this);
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


/* PlantThreepeater::PlantThreepeater() */

void __thiscall PlantThreepeater::PlantThreepeater(PlantThreepeater *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067c7920;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}


/* PlantThreepeater::StaticNew() */

PlantThreepeater * PlantThreepeater::StaticNew(void)

{
  PlantThreepeater *this;
  
  this = ::operator_new(0x30);
  PlantThreepeater(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThreepeater::StaticClassInit() */

void PlantThreepeater::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantThreepeater");
    (*pcVar2)(plVar1,asStack_10,FUN_04072eac,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantThreepeater::StaticGetClass() */

long * PlantThreepeater::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantThreepeater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantThreepeater::GetClass() const */

long * PlantThreepeater::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantThreepeater",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantThreepeater::~PlantThreepeater() */

void __thiscall PlantThreepeater::~PlantThreepeater(PlantThreepeater *this)

{
  *(undefined ***)this = &PTR_GetClass_067c7920;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantThreepeater::~PlantThreepeater() */

void __thiscall PlantThreepeater::~PlantThreepeater(PlantThreepeater *this)

{
  ~PlantThreepeater(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThreepeater::Level5Fire(int) */

void __thiscall PlantThreepeater::Level5Fire(PlantThreepeater *this,int param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  Plant *pPVar4;
  undefined4 uVar5;
  float fVar6;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  pPVar4 = *(Plant **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04072cd4(pPVar4,param_1);
  if (cVar1 == '\0') {
    uVar5 = *(undefined4 *)(pPVar4 + 0x150);
    *(undefined4 *)(pPVar4 + 0x150) = 0;
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
  }
  else {
    fVar6 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    if (fVar6 <= 0.3) {
      pPVar4 = *(Plant **)(this + 0x10);
      uVar5 = *(undefined4 *)(pPVar4 + 0x150);
      *(undefined4 *)(pPVar4 + 0x150) = 0;
    }
    else {
      if (fVar6 <= 0.6) {
        pPVar4 = *(Plant **)(this + 0x10);
        uVar3 = 1;
        uVar5 = *(undefined4 *)(pPVar4 + 0x150);
      }
      else {
        pPVar4 = *(Plant **)(this + 0x10);
        uVar5 = *(undefined4 *)(pPVar4 + 0x150);
        uVar3 = 2;
        if (0.9 < fVar6) {
          uVar3 = 3;
        }
      }
      *(undefined4 *)(pPVar4 + 0x150) = uVar3;
    }
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
  }
  uVar2 = Plant::Fire(pPVar4,(RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10,param_1,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = uVar5;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThreepeater::UpdateActions() */

void __thiscall PlantThreepeater::UpdateActions(PlantThreepeater *this)

{
  float fVar1;
  char cVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  float fVar6;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)this + 0x180))();
  fVar1 = _FUN_04073618;
  if (cVar2 != '\0') {
    while (fVar6 = (float)PVZ_T(), *(float *)(this + 0x28) < fVar6) {
      lVar4 = *(long *)this;
      *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0;
      pcVar5 = *(code **)(lVar4 + 0xb0);
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
      this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)(*pcVar5)(this,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                                  &local_18,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_00);
      local_18 = *puVar3;
      local_10 = *(undefined4 *)(puVar3 + 1);
      (**(code **)(*(long *)this_00 + 0x78))
                (this_00,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18
                );
      *(float *)(this + 0x28) = *(float *)(this + 0x28) + fVar1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantThreepeater::ApplyPlantfood() */

void __thiscall PlantThreepeater::ApplyPlantfood(PlantThreepeater *this)

{
  float fVar1;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  *(undefined4 *)(this + 0x2c) = 0;
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x28) = fVar1 + 0.06;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantThreepeater::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantThreepeater::Fire(PlantThreepeater *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var7;
  StrawburstProjectile *this;
  undefined8 *puVar8;
  undefined8 uVar9;
  Projectile *this_00;
  StrawburstProjectile *this_01;
  StrawburstProjectile *this_02;
  long lVar10;
  LawnApp *pLVar11;
  SexyVector3 *pSVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  float local_28;
  float fStack_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = (**(code **)(*(long *)param_1 + 0x180))();
  if (cVar3 != '\0') {
    iVar5 = *(int *)(param_1 + 0x2c) + 5;
    if (0x9f < iVar5) {
      iVar5 = *(int *)(param_1 + 0x2c) + -0x9b;
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    if (0x50 < iVar5) {
      iVar5 = 0xa0 - iVar5;
    }
    fVar14 = (float)Sexy::SexyMath::DegToRad((float)iVar5);
    dVar16 = cos((double)fVar14);
    dVar17 = sin((double)fVar14);
    p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Level5Fire(param_1,param_3);
    nop();
    StrawburstProjectile::SetJamFlag(this,true);
    puVar8 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var7);
    local_18 = *puVar8;
    local_10 = *(undefined4 *)(puVar8 + 1);
    (**(code **)(*(long *)p_Var7 + 0x78))(p_Var7,&local_18);
    Projectile::SetVelocity
              ((Projectile *)p_Var7,(float)(dVar16 * 333.0),-(float)(dVar17 * 333.0),0.0);
    uVar9 = FUN_04072cbc(*(undefined8 *)(p_Var7 + 0xe0));
    uVar9 = operator|(uVar9,0x2000);
    FUN_04072cc0(p_Var7 + 0xe0,uVar9);
    this_00 = (Projectile *)Level5Fire(param_1,param_3);
    nop();
    StrawburstProjectile::SetJamFlag(this_01,true);
    (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_18);
    Projectile::SetVelocity(this_00,(float)(dVar16 * 333.0),(float)(dVar17 * 333.0),0.0);
    uVar9 = FUN_04072cbc(*(undefined8 *)(this_00 + 0xe0));
    uVar9 = operator|(uVar9,0x2000);
    FUN_04072cc0(this_00 + 0xe0,uVar9);
    p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Level5Fire(param_1,param_3);
    nop();
    StrawburstProjectile::SetJamFlag(this_02,true);
    uVar9 = FUN_04072cbc(*(undefined8 *)(p_Var7 + 0xe0));
    uVar9 = operator|(uVar9,0x2000);
    FUN_04072cc0(p_Var7 + 0xe0,uVar9);
    goto LAB_04073830;
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x110) + -1;
  iVar5 = *(int *)(*(long *)(param_1 + 0x10) + 0x110) + 1;
  cVar3 = NewPVPUtils::IsPlayingNewPVP();
  if (cVar3 == '\0') {
    fVar14 = 200.0;
  }
  else {
    fVar14 = 142.0;
  }
  cVar3 = '\0';
  iVar6 = FUN_04072ccc(*(undefined8 *)(param_1 + 0x10));
  if (1 < iVar6) {
    fVar15 = (float)PlantFramework::Rand((PlantFramework *)param_1,1.0);
    cVar3 = Plant::IsSkillCheat(*(Plant **)(param_1 + 0x10));
    if (cVar3 == '\0') {
      iVar6 = FUN_04072ccc(*(undefined8 *)(param_1 + 0x10));
      if (iVar6 < 3) {
        cVar3 = fVar15 < 0.25;
      }
      else {
        cVar3 = fVar15 < 0.5;
      }
    }
    else {
      cVar3 = Plant::IsSkillActivate(*(Plant **)(param_1 + 0x10));
    }
  }
  pLVar11 = gLawnApp;
  lVar13 = *(long *)(gLawnApp + 0x9f0);
  if (lVar13 == 0) {
LAB_04073a4c:
    if (iVar5 < *(int *)(lVar13 + 0xfc)) {
      bVar2 = false;
      p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Level5Fire(param_1,iVar5);
LAB_04073b00:
      puVar8 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(p_Var7);
      fStack_24 = (float)((ulong)*puVar8 >> 0x20);
      local_20 = *(undefined4 *)(puVar8 + 1);
      local_28 = (float)*puVar8;
      _local_28 = CONCAT44(fStack_24 + 25.0,local_28);
      (**(code **)(*(long *)p_Var7 + 0x78))(p_Var7,(SexyVector3 *)&local_28);
      puVar8 = (undefined8 *)Projectile::GetVelocity((Projectile *)p_Var7);
      local_10 = *(undefined4 *)(puVar8 + 1);
      local_18._0_4_ = (float)*puVar8;
      local_18 = CONCAT44(fVar14,(float)local_18);
      Projectile::SetVelocity((Projectile *)p_Var7,(SexyVector3 *)&local_18);
      if (cVar3 != '\0') {
        p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Level5Fire(param_1,iVar5);
        pSVar12 = (SexyVector3 *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(p_Var7);
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,pSVar12);
        _local_28 = CONCAT44(fStack_24 + 25.0,local_28 - 40.0);
        (**(code **)(*(long *)p_Var7 + 0x78))(p_Var7,(SexyVector3 *)&local_28);
        pSVar12 = (SexyVector3 *)Projectile::GetVelocity((Projectile *)p_Var7);
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar12);
        local_18 = CONCAT44(fVar14,(float)local_18);
        Projectile::SetVelocity((Projectile *)p_Var7,(SexyVector3 *)&local_18);
      }
      cVar4 = LawnApp::IsInModule(gLawnApp,1);
      if ((cVar4 != '\0') || (-1 < iVar1)) {
        p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Level5Fire(param_1,iVar1);
        if (bVar2) {
LAB_04073954:
          bVar2 = true;
          FUN_04072d04(p_Var7 + 0x184);
        }
LAB_04073960:
        puVar8 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(p_Var7);
        fStack_24 = (float)((ulong)*puVar8 >> 0x20);
        local_20 = *(undefined4 *)(puVar8 + 1);
        local_28 = (float)*puVar8;
        _local_28 = CONCAT44(fStack_24 - 25.0,local_28);
        (**(code **)(*(long *)p_Var7 + 0x78))(p_Var7,(SexyVector3 *)&local_28);
        puVar8 = (undefined8 *)Projectile::GetVelocity((Projectile *)p_Var7);
        local_10 = *(undefined4 *)(puVar8 + 1);
        local_18._0_4_ = (float)*puVar8;
        local_18 = CONCAT44(-fVar14,(float)local_18);
        Projectile::SetVelocity((Projectile *)p_Var7,(SexyVector3 *)&local_18);
        if (cVar3 != '\0') {
          p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Level5Fire(param_1,iVar1);
          pSVar12 = (SexyVector3 *)
                    std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(p_Var7);
          Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,pSVar12);
          _local_28 = CONCAT44(fStack_24 - 25.0,local_28 - 40.0);
          (**(code **)(*(long *)p_Var7 + 0x78))(p_Var7,(SexyVector3 *)&local_28);
          pSVar12 = (SexyVector3 *)Projectile::GetVelocity((Projectile *)p_Var7);
          Sexy::SexyVector3::operator=((SexyVector3 *)&local_18,pSVar12);
          local_18 = CONCAT44(-fVar14,(float)local_18);
          Projectile::SetVelocity((Projectile *)p_Var7,(SexyVector3 *)&local_18);
        }
      }
      p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Level5Fire(param_1,param_3);
      if (bVar2) goto LAB_04073aa4;
    }
    else {
LAB_04073a60:
      cVar4 = LawnApp::IsInModule(pLVar11,1);
      if ((cVar4 != '\0') || (-1 < iVar1)) {
        bVar2 = false;
        p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Level5Fire(param_1,iVar1);
        goto LAB_04073960;
      }
      p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Level5Fire(param_1,param_3);
    }
  }
  else {
    uVar9 = *(undefined8 *)(lVar13 + 0xad8);
    lVar10 = FUN_04072cf4(uVar9);
    if (lVar10 == 0) goto LAB_04073a4c;
    lVar13 = FUN_04073654(uVar9);
    if (lVar13 == 0) {
      pLVar11 = gLawnApp;
      if (iVar5 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
        p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  *)Level5Fire(param_1,iVar5);
        bVar2 = false;
        goto LAB_04073b00;
      }
      goto LAB_04073a60;
    }
    if (iVar5 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) {
      bVar2 = true;
      p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Level5Fire(param_1,iVar5);
      FUN_04072d04(p_Var7 + 0x184);
      goto LAB_04073b00;
    }
    cVar4 = LawnApp::IsInModule(gLawnApp,1);
    if ((cVar4 != '\0') || (-1 < iVar1)) {
      p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)Level5Fire(param_1,iVar1);
      goto LAB_04073954;
    }
    p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Level5Fire(param_1,param_3);
LAB_04073aa4:
    FUN_04072d04(p_Var7 + 0x184);
  }
  if (cVar3 != '\0') {
    p_Var7 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Level5Fire(param_1,param_3);
    puVar8 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(p_Var7);
    local_18._0_4_ = (float)*puVar8;
    local_10 = *(undefined4 *)(puVar8 + 1);
    local_18 = CONCAT44((int)((ulong)*puVar8 >> 0x20),(float)local_18 - 40.0);
    (**(code **)(*(long *)p_Var7 + 0x78))(p_Var7,&local_18);
  }
LAB_04073830:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(p_Var7);
}

